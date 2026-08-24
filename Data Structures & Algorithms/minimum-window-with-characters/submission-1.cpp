class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> window, need;
        for(char c : t){
            ++need[c];
        }

        int l = 0;
        int formed = 0;
        int required = need.size();
        int best_length = INT_MAX;
        int best_start = 0;
        for(int r = 0; r < s.size(); r++){

            ++window[s[r]];

            if(need.count(s[r]) && window[s[r]] == need[s[r]]){
                ++formed;
            }
          
            while(formed == required){
                int current_length = r - l + 1;
                if(current_length < best_length){
                    best_length = current_length;
                    best_start = l;
                }
                --window[s[l]];
                if(need.count(s[l]) && window[s[l]] < need[s[l]]){
                    --formed;
                }
                ++l;
            }
        }
        if(best_length == INT_MAX){
            return "";
        }

        return s.substr(best_start, best_length);
    }
};
