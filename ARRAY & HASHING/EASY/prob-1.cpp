//217. Contains Duplicate
/*Given an integer array nums, return true if any value appears at 
least twice in the array, and return false if every element is distinct.*/

//1.Naive Approach - O(N^2)

//2. Sorting :- O(nlogn)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // Sorting in ascending order
        sort(nums.begin(), nums.end());

        // Checking if there is any consecutive elements or not
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                return true;
            }
        }
        return false;
    }
};

//Revision 
sort(nums.begin(), nums.end());
for(int i = 0; i < nums.size(); i++) {
    if(nums[i] == nums[i - 1]) {
        return true;
    }
}
return false;


//3.Using HashMap - O(N)
///HASHING = Hashing is a technique used to map large data sets of any size to a fixed size data set
///we can use hashing to store and access large amounts of data in constant time

/*3 Types of Hashing : -
1.Built In
2. Custom
3.Hash Table*/


//3.Using HashMap - O(N)

// This class contains a function to check if there are any duplicates in the given vector of integers.
class Solution {
public:
    // This function takes a vector of integers as input and returns a boolean indicating if there are any duplicates.
    bool containsDuplicate(vector<int>& nums) {
        // Create an unordered map to store the frequency of each element in the input vector.
        unordered_map<int,int> mp;

        // Traverse through the input vector and increment the frequency of each element in the map.
        for(int x:nums) mp[x]++;

        // Traverse through the input vector again and check if the frequency of each element is greater than or equal to 2.
        // If yes, return true indicating that there is a duplicate element in the vector.
        for(int x:nums){
            if(mp[x]>=2) return true;
        }

        // If no duplicates are found, return false.
        return false;
    }
};


