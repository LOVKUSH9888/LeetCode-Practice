// 88. Merge Sorted Array


/***************************************** Approach 1 *****************************************/
//sorting brute force approach - O(mlogn)

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0; i<n; i++){ // Iterate over nums2
            nums1[m+i] = nums2[i]; // Append each element of nums2 to the end of nums1
        }
        sort(nums1.begin(), nums1.end()); // Sort the merged array in ascending order
    }
};

/*
How to append element in array
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    int new_element = 6;
    int new_arr[n+1];

    for (int i = 0; i < n; i++) {
        new_arr[i] = arr[i];
    }

    new_arr[n] = new_element;
    n++;

    for (int i = 0; i < n; i++) {
        cout << new_arr[i] << " ";
    }

    return 0;
}
*/


//1st approach
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = 0; // Initialize index i for nums1 array
        int j = 0; // Initialize index j for nums2 array
        if (n == 0)
            return; // If nums2 is empty, there's nothing to merge, so return.
        if (m == 0)
        {
            for (int i = 0; i < n; i++)
            {
                nums1[i] = nums2[i]; // If nums1 is empty, copy all elements of nums2 into nums1.
            }
            return;
        }
        while (i < m)
        {
            if (nums1[i] > nums2[j])
            {
                swap(nums1[i], nums2[j]);         // If an element in nums1 is greater than an element in nums2, swap them.
                sort(nums2.begin(), nums2.end()); // After the swap, sort nums2 in ascending order.
            }
            i++; // Increment i to continue comparing nums1 and nums2.
        }
        j = 0; // Reset j to 0.
        while (i < m + n)
        {
            nums1[i] = nums2[j]; // Copy the remaining elements of nums2 into nums1.
            j++;
            i++;
        }
    }
};


//2nd way 
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1; // Initialize index i to the last element in nums1
        int j =n-1; // Initialize index j to the last element in nums2
        int tar = n+m-1; // Initialize index tar to the last element in the merged array
        
        while (j >=0){ // Iterate until all elements in nums2 have been merged into nums1
            if (i>=0 && nums1[i] > nums2[j]){ // If nums1 still has elements to compare and the current element in nums1 is greater than the current element in nums2,
                nums1[tar] = nums1[i]; // Set the current element in nums1 to be the next element in the merged array
                tar -=1; // Decrement tar to move to the next index in the merged array
                i -=1; // Decrement i to move to the next element in nums1 to compare
            }
            else{ // If nums1 is out of elements to compare or the current element in nums2 is greater than the current element in nums1
                nums1[tar] = nums2[j]; // Set the current element in nums1 to be the next element in nums2
                tar -=1; // Decrement tar to move to the next index in the merged array
                j -=1; // Decrement j to move to the next element in nums2 to compare
            }
        }
    };

//3rd way
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1, j=n-1, k=m+n-1; // Initialize indices i, j, and k to the last element in nums1, the last element in nums2, and the last index in the merged array, respectively
        while(i>=0 && j>=0) // Iterate until all elements in both nums1 and nums2 have been merged into nums1
        {
            if(nums1[i]>nums2[j]) // If the current element in nums1 is greater than the current element in nums2
            {
                nums1[k]=nums1[i]; // Set the current element in nums1 to be the next element in the merged array
                k--; // Decrement k to move to the next index in the merged array
                i--; // Decrement i to move to the next element in nums1 to compare
            }
            else // If the current element in nums2 is greater than or equal to the current element in nums1
            {
                nums1[k]=nums2[j]; // Set the current element in nums1 to be the next element in nums2
                k--; // Decrement k to move to the next index in the merged array
                j--; // Decrement j to move to the next element in nums2 to compare
            }
        }
        while(j>=0) // If there are still elements left in nums2 after the first loop, add them to the merged array
        {
            nums1[k]=nums2[j]; // Set the current element in nums1 to be the next element in nums2
            k--; // Decrement k to move to the next index in the merged array
            j--; // Decrement j to move to the next element in nums2
        }
    }


