// 344. Reverse String
class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int left = 0, right = s.size() - 1; // Initializing two pointers
        while (left < right)                // Loop until the pointers meet in the middle
        {
            swap(s[left++], s[right--]); // Swap the characters pointed to by the left and right pointers, then move the pointers towards the middle
        }
    }
};

// Another way
class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int left = 0, right = s.size() - 1;

        while (left < right)
        {
            swap(s[left], s[right]);

            left++;
            right--;
        }
    }
};
