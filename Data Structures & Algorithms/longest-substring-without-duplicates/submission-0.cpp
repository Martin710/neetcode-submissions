class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> mem;
        int l = 0;
        int longest = 0;
        for(int r = 0; r < s.size(); r++){
            while(mem.count(s[r])){
                mem.erase(s[l]);
                ++l;
            }

            mem.insert(s[r]);

            int window = r - l + 1;
            longest = max(longest, window);

        }

        return longest;
    }
};
