// 88. Merge Sorted Array
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
