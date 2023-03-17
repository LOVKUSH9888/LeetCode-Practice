// 219. Contains Duplicate II

// 1st approach by using Map:-
class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            // mp.count() will tell whatever ith index that I want, have I seen it before?
            if (mp.count(nums[i]))
            {
                // if I have already seen this number, then check for condition abs(i - j) <= k
                if (abs(i - mp[nums[i]]) <= k)
                    return true;
            }
            // if I have not seen this number before, insert the number with its position in the map
            // and if the number is already present in the map, then update the position of that number
            mp[nums[i]] = i;
        }
        // after the complete traversal, if we don't find a pair to satisfy the condition, return false
        return false;
    }
};

// Another by - set
class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        unordered_set<int> s;

        if (k <= 0)
            return false;
        if (k >= nums.size())
            k = nums.size() - 1;

        for (int i = 0; i < nums.size(); i++)
        {
            if (i > k)
                s.erase(nums[i - k - 1]);
            if (s.find(nums[i]) != s.end())
                return true;
            s.insert(nums[i]);
        }

        return false;
    }
};

// Sliding wind:=
class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        unordered_set<int> s;

        if (k <= 0)
            return false;
        if (k >= nums.size())
            k = nums.size() - 1;

        for (int i = 0; i < nums.size(); i++)
        {
            if (i > k)
                s.erase(nums[i - k - 1]);
            if (s.find(nums[i]) != s.end())
                return true;
            s.insert(nums[i]);
        }

        return false;
    }
};