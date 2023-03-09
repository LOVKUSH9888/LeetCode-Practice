// 58. Length of Last Word
/// Just start the pointer from the last simply

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int A = 0; // Initializing a variable A to 0
        for (int i = s.size() - 1; i >= 0; --i)
        {                    // Starting from the end of the string s and iterating backwards
            if (s[i] != ' ') // neglecting spaces at the end
                ++A;         // If the current character is not a space, increment A by 1
            else if (A)
                return A; // If the current character is a space and A is non-zero (i.e. we've already counted the last word), return A
        }
        return A; // Return A (which is the length of the last word)
    }
};

// Another way
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int ans = 0;
        for (int i = s.size() - 1; i >= 0; --i)
        {
            if (s[i] == ' ' && ans > 0)
                return ans;
            if (s[i] != ' ')
                ans++;
        }
        return ans;
    }
};

// Neet-Code solution by using tail & len
class Solution
{
public:
    int lengthOfLastWord(string s)
    {                                       // A function that takes a string as input and returns an integer value
        int len = 0, tail = s.length() - 1; // Initializing two variables - len is the length of the last word and tail is the index of the last character in the string
        while (tail >= 0 && s[tail] == ' ')
            tail--; // Trimming any trailing spaces from the string by moving tail to the left until it reaches the end of the string or a non-space character
        while (tail >= 0 && s[tail] != ' ')
        {          // Counting the length of the last word by moving tail to the left until it reaches the beginning of the string or a space character
            len++; // Incrementing len by 1 for each non-space character
            tail--;
        }
        return len; // Returning the length of the last word
    }
};

// By using simple iterator:-
int lengthOfLastWord(string s)
{
    int len = 0;                                       // Initializing len to 0
    for (auto it = s.crbegin(); it != s.crend(); ++it) // c= constant & r = reverserce it = iterator
    {                                                  // Iterating through the string s in reverse using a reverse iterator
        if (*it != ' ')
        {          // If the current character is not a space
            ++len; // Increment len by 1
        }
        else if (len > 0)
        {          // If the current character is a space and len is greater than 0 (i.e. we've already counted the last word)
            break; // Exit the loop
        }
    }
    return len; // Return the length of the last word
}
