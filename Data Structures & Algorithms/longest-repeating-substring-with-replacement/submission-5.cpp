class Solution {
public:
    int characterReplacement(string s, int k) {
        
        unordered_map<char, int> freq;
        int l = 0;
        int longest = 0;
        for(int r = 0; r < s.size(); r++){
            
            freq[s[r]]++;
            int max_freq = 0;

            for(auto& [character, count] : freq){
                max_freq = max(max_freq, count);
            }

            while((r - l + 1) - max_freq > k){
                freq[s[l]]--;
                l++;
                max_freq = 0;
                for(auto& [character, count] : freq){
                    max_freq = max(max_freq, count);
                }
            }
            longest = max((r - l + 1), longest);
        }
        return longest;
    }
};
