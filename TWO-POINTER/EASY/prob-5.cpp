// 283. Move Zeroes

// Brute force :- Using stl
// tIME COMPLEXITY = O(N)
// Space Complexity = O(1)

/// 2nd Optimal way of solving
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int left = 0; // Initialize a variable to keep track of the position of the next non-zero element

        for (int i = 0; i < nums.size(); i++)
        { // Iterate over all the elements in the array
            if (nums[i] != 0)
            {                           // If the current element is not equal to zero
                nums[left++] = nums[i]; // Set the value of the element at the left index to the current non-zero element and increment the left index
            }
        }

        for (left; left < nums.size(); left++)
        {                   // Iterate over the remaining indices in the array (all of which should contain zeroes at this point)
            nums[left] = 0; // Set the value of the element at the left index to zero
        }
    }
};

/// 3rd way -
/*Approach:- (Use two pointer and swap approach)

Take to integer i and j set both as '0'.
Take a loop iterate until i and j is less than length of given string.
if nums[j] is equal to 0,then swap(nums[i],nums[j]) and increment i & j by1.
else just increment j++.
~Time Complexity: O(N).
~Space Complexity: O(1).*/

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int i = 0, j = 0; // initialize two pointers to keep track of non-zero and zero elements
        while (i < nums.size() && j < nums.size())
        { // loop through the vector until we reach the end
            if (nums[j] != 0)
            {                           // if the current element is non-zero
                swap(nums[i], nums[j]); // swap it with the next non-zero element
                i++;                    // increment the non-zero pointer
                j++;                    // increment the overall pointer
            }
            else
                j++; // if the current element is zero, simply move to the next element
        }
    }
};