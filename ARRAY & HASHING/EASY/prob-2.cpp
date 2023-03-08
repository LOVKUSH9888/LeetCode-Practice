//242. Valid Anagram
/*Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.*/

//naive = sorting == Time Complexity: O (n (log n))
class Solution {
public:
    bool isAnagram(string s, string t) { 
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t; 
    }
};


//We can also use the Ordered & Un-ordered hashmap for solving this problem
///TC=O(N)

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;
        
		unordered_map <char, int> umap;
        for (char c:s) umap[c]++;
        for(char c:t) {
            umap[c]--;
            if (umap[c]<0) return false;
        }
        
        return true;
                    
    }
};


//Another way of Hashmap approach
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s==t) return true;
        if (s.size()!=t.size()) return false;
        unordered_map <char, int> umap;
        for (int i=0; i<s.size(); i++) {
            umap[s[i]]++;
            umap[t[i]]--;
        }
        for (auto it: umap) {
            if (it.second) return false;
        }
        return true;
    }
};