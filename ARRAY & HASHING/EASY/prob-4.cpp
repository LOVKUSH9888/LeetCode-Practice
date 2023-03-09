// 392. Is Subsequence
/*Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).*/

// This problem will be solve by using Two-Poninter Approach = O(N)

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {                     // A function that takes two strings as input and returns a boolean value
        int m = s.size(); // Size of string s
        int n = t.size(); // Size of string t
        int i = 0, j = 0; // Initializing two counters/Pointes to 0
        while (i < m && j < n)
        { // While i and j are less than the size of s and t respectively
            if (s[i] == t[j])
            {        // If the character at index i of s is the same as the character at index j of t
                i++; // Increment i by 1
            }
            j++; // Increment j by 1
        }
        return i == m ? 1 : 0; // If i equals the size of s, return true (1), otherwise return false (0)
    }
};

// Another way of writing Two-Pointer
class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int i = 0, j = 0;
        while (i < s.length() && j < t.length())
        {
            if (s[i] == t[j])
                i++;
            j++;
        }
        return i == s.length();
    }
};

/// This can be solved by recusion
class Solution
{
public:
    bool isSubSeq(string str1, string str2, int m, int n)
    {
        // Base Cases
        if (m == 0)
            return true;
        if (n == 0)
            return false;
        // If last characters of two strings are matching
        if (str1[m - 1] == str2[n - 1])
            return isSubSeq(str1, str2, m - 1, n - 1);
        // If last characters are not matching
        return isSubSeq(str1, str2, m, n - 1);
    }
    bool isSubsequence(string s, string t)
    {
        int m = s.size();
        int n = t.size();
        return isSubSeq(s, t, m, n);
    }
};

////  USING DYNAMIC PROGRAMMING
// if LCS of string A  nd B is equal to Size of String A then its True else false;

class Solution
{
public:
    int helper(string x, string y)
    {
        int m = x.size();
        int n = y.size();
        int dp[m + 1][n + 1];
        for (int i = 0; i <= m; i++)
        {
            dp[i][0] = 0;
        }
        for (int i = 0; i <= n; i++)
        {
            dp[0][i] = 0;
        }
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (x[i - 1] == y[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[m][n];
    }
    bool isSubsequence(string smaller, string larger)
    {

        int x = helper(smaller, larger);
        if (x == smaller.size())
        {
            return true;
        }
        return false;
    }
