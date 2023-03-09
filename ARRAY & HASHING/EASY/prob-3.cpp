// 1299. Replace Elements with Greatest Element on Right Side
// Time - Complexity = O(N)

class Solution
{
public:
    vector<int> replaceElements(vector<int> &arr)
    {
        // Get the size of the input array
        int n = arr.size();

        // Initialize variables for storing temporary values and the maximum value seen so far
        int temp, mx = -1;

        // Iterate through the array in reverse order
        for (int i = n - 1; i >= 0; i--)
        {

            // Store the current value in 'temp'
            temp = arr[i];

            // Replace the current element with the previously seen maximum value
            arr[i] = mx;

            // Update the maximum value if the current value of 'temp' is greater
            mx = max(mx, temp);  //It is an assignment operation that will update the value of MX based on comparison b/w mx & temp
        }

        // Return the modified array
        return arr;
    }
};