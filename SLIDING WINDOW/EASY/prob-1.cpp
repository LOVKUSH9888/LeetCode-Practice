// 121. Best Time to Buy and Sell Stock
/*
    Given array prices, return max profit w/ 1 buy & 1 sell
    Ex. prices = [7,1,5,3,6,4] -> 5 (buy at $1, sell at $6)

    For each, get diff b/w that & min value before, store max

    Time: O(n)
    Space: O(1)
*/

// This function calculates the maximum profit that can be obtained by buying and selling a stock,
// given a vector of prices representing the stock's value over time.
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        //Initializing the three value - two pointer left and right
        int maxProfit = 0, left = 0, right = 0;
        while (right < prices.size())
        {
            if (prices[right] > prices[left]) // If the current price is greater than the previous one, update the maximum profit.

                // Here the max function is came from the STL

                maxProfit = max(maxProfit, prices[right] - prices[left]);
            else // If the current price is less than or equal to the previous one, update the left index.
                left = right;
            right++; // Move the right index to the next position.
        }
        return maxProfit; // Return the maximum profit.
    }
};

// Another way by using yhe sliding windows
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        // Get the length of the input vector
        int length = prices.size();
        // Initialize the variable to store the maximum profit to 0
        int profit = 0;
        // If the input vector is empty, return 0
        if (length == 0)
        {
            return profit;
        }
        // Initialize the minimum price to the first element of the input vector
        int minPrice = prices[0];
        // Loop through the input vector starting from the second element
        for (int i = 1; i < length; i++)
        {
            // Update the maximum profit if the profit obtained from selling at the current price and buying at the minimum price so far is greater
            profit = max(profit, prices[i] - minPrice);
            // Update the minimum price seen so far
            minPrice = min(minPrice, prices[i]);
        }
        // Return the maximum profit
        return profit;
    }
};
