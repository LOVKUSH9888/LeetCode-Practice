//283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0; // Initialize a variable to keep track of the position of the next non-zero element

        for(int i = 0; i < nums.size(); i++){ // Iterate over all the elements in the array
            if(nums[i] != 0){ // If the current element is not equal to zero
                nums[left++] = nums[i]; // Set the value of the element at the left index to the current non-zero element and increment the left index
            }
        }

        for(left; left < nums.size(); left ++){ // Iterate over the remaining indices in the array (all of which should contain zeroes at this point)
            nums[left] = 0; // Set the value of the element at the left index to zero
        }
    }
};
