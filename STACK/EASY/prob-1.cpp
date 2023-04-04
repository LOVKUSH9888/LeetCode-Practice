//20. Valid Parentheses
///Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', 
///determine if the input string is valid.
// This code defines a class Solution with a function named "isValid" that checks if a given string of parentheses is valid or not.
class Solution {
public:
    bool isValid(string s) {
        // Create a stack to keep track of the opening parentheses.
        stack<char> open;
        
        // Create an unordered map to store the pairs of matching parentheses.
        unordered_map<char, char> parens = {
            {')', '('},
            {']', '['},
            {'}', '{'},
        };
        
        // Iterate through the input string.
        for (const auto& c : s) {
            // If the current character is a closing bracket.
            if (parens.find(c) != parens.end()) {
                // If the stack is empty when encountering a closing bracket, the string is not valid.
                if (open.empty()) {
                    return false;
                }

                // If the top of the stack does not match the current closing bracket, the string is not valid.
                if (open.top() != parens[c]) {
                    return false;
                }

                // If the top of the stack matches the current closing bracket, pop the top of the stack.
                open.pop();
            } else {
                // If the current character is an opening bracket, push it onto the stack.
                open.push(c);
            }
        }
        
        // If the stack is empty after iterating through the input string, the string is valid.
        return open.empty();
    }
};


///auto range loop in c++ code
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    for (auto num : nums) {
        cout << num << " ";
    }
    return 0;
}

///Better One 
class Solution {
public:
    bool isValid(string s) {
        string st;
        map<char,char>mp;
        mp['('] = ')';
        mp['{'] = '}';
        mp['['] = ']';
        st.push_back(s[0]);
        for (int i = 1; i < s.size(); i++) {
            if(mp[st.back()] == s[i])
                st.pop_back();
            else
                st.push_back(s[i]);
        }
        return st.size() ? 0 : 1;
    }
};