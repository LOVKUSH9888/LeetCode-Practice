// 1. Two Sum

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // Bruteforce approach here :- O(N^2)
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {-1, -1};
    }
};


//ANother way of solving :-( Brute force
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        for(int start = 0; start < n-1; start++)
        {
            for(int end = start+1; end < n; end++)
            {
                if(nums[start] + nums[end] == target)
                    return {start, end};
            }
        }
        return {};
    }


// Optimize Solution by using HashMap:- O(N) & memory complexity = O(N)
// We are mapping each index value - value  = index

#include <unordered_map> // Include the unordered_map library

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {                               // Define a function that takes a vector of integers and an integer target as inputs and returns a vector of integers
        unordered_map<int, int> mp; // Create an unordered_map called mp to store the input numbers and their indices

        for (int i = 0; i < nums.size(); i++)
        {                                              // Iterate through the vector nums
            if (mp.find(target - nums[i]) == mp.end()) // If the difference between the target and the current number is not in the map
                mp[nums[i]] = i;                       // Add the current number and its index to the map
            else                                       // If the difference is in the map
                return {mp[target - nums[i]], i};      // Return a vector containing the indices of the two numbers that add up to the target
        }

        return {-1, -1}; // If there is no solution, return {-1, -1}
    }
};


//Another way of map method :-) Neet-code
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) { // Define a function that takes a vector of integers and an integer target as inputs and returns a vector of integers
        unordered_map<int, int> m; // Define an unordered map to store the indices of the input vector elements as keys and their values as values
        for(int i = 0; i < nums.size(); i++) // Loop through the input vector nums
        {
            if(m.find(target-nums[i]) != m.end()) // Check if the difference between the target and the current element is present in the map
            return {m[target-nums[i]], i}; // If present, return the indices of the two elements whose sum is equal to the target
            m[nums[i]] = i; // Otherwise, store the current element and its index in the map
        }
    }
};

