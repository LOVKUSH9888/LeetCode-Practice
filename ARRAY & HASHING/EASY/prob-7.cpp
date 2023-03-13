// 14. Longest Common Prefix

// Method -1

//  Define a class called Solution
class Solution
{
public:
    // Define a function called longestCommonPrefix that takes in a vector of strings called strs
    string longestCommonPrefix(vector<string> &strs)
    {
        // If the vector is empty, return an empty string
        if (strs.empty())
            return "";
        // Sort the vector of strings in alphabetical order
        sort(strs.begin(), strs.end());
        // Set the first string in the sorted vector as string a and the last string as string b
        string a = strs[0], b = strs.back();
        // Define an integer i and set it to 0
        int i = 0;
        // Loop through the characters in strings a and b until you reach the end of either string or until you find a character that is not the same in both strings
        for (; i < min(a.size(), b.size()); i++)
            if (a[i] != b[i])
                break;
        // Return a substring of string a from index 0 to index i
        return a.substr(0, i);
    }
};

// Method : -2
//  Define a class called Solution
class Solution
{
public:
    // Define a function called longestCommonPrefix that takes in a vector of strings called strs
    string longestCommonPrefix(vector<string> &strs)
    {
        // Define an integer n and set it to the size of the vector strs
        int n = strs.size();
        // Define a string called ans
        string ans;
        // Sort the vector of strings in alphabetical order
        sort(strs.begin(), strs.end());
        // Set the first string in the sorted vector as string a
        string a = strs[0];
        // Set the last string in the sorted vector as string b
        string b = strs[n - 1];
        // Loop through the characters in string a
        for (int i = 0; i < a.size(); i++)
        {
            // If the character at index i in string a is the same as the character at index i in string b, add the character to the ans string
            if (a[i] == b[i])
            {
                ans += a[i];
                // If the characters are not the same, break out of the loop
            }
            else
                break;
        }
        // Return the ans string
        return ans;
    }
};