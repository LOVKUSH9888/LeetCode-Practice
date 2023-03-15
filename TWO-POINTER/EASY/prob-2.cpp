// 680. Valid Palindrome II
class Solution {
private:
    // This function checks if the given string is a palindrome
    bool validPalindromeUtil(string s, int i, int j) {
        while(i < j)
            // Compare the characters at indices i and j
            if(s[i] == s[j]) {
                // If they are equal, move i and j inward
                i += 1;  //This could be I++
                j -= 1; // J--
            } else
                // If they are not equal, return false
                return false;
        // If the string is a palindrome, return true
        return true;
    }
public:
    // This function checks if the given string can be converted into a palindrome
    bool validPalindrome(string s) {
        // Initialize two pointers i and j to the beginning and end of the string
        int i = 0, j = s.length() - 1;
        
        while(i < j)
            // Compare the characters at indices i and j
            if(s[i] == s[j]) {
                // If they are equal, move i and j inward
                i += 1;
                j -= 1;
            } else
                // If they are not equal, try deleting either the character at i or j to make the string a palindrome
                return validPalindromeUtil(s, i + 1, j) || validPalindromeUtil(s, i, j - 1); //using Logical Operator OR
        // If the string can be converted into a palindrome, return true
        return true;
    }
};
