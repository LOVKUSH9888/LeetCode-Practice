// 125. Valid Palindrome

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int i = 0;            // Initialize a pointer i to the beginning of the string
        int j = s.size() - 1; // Initialize a pointer j to the end of the string

        while (i < j)
        { // Iterate through the string until i and j cross each other
            while (!isalnum(s[i]) && i < j)
            { // Skip non-alphanumeric characters from left to right
                i++;
            }
            while (!isalnum(s[j]) && i < j)
            { // Skip non-alphanumeric characters from right to left
                j--;
            }
            if (tolower(s[i]) != tolower(s[j]))
            { // Compare the characters at i and j and return false if they are not the same
                return false;
            }
            i++; // Move the pointers towards the center
            j--;
        }

        return true; // If the function hasn't returned false until now, then the string is a palindrome
    }
};
