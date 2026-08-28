class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // unordered_map<string, vector<string>> groups;
        // for(const auto& s : strs){
        //     string key = s;
        //     sort(key.begin(), key.end());
        //     groups[key].push_back(s);
        // }

        // vector<vector<string>> result;

        // for(auto& entry : groups){
        //     result.push_back(entry.second);
        // }
        // return result;
        unordered_map<string, vector<string>> groups;

        for(int i = 0;i < strs.size(); i++){
            string key = strs[i];
            sort(key.begin(), key.end());//不用k = ...
            groups[key].push_back(strs[i]);
        }
        vector<vector<string>> results;

        for(auto& entry : groups){
            results.push_back(entry.second);//.second()X no ()
        }

        return results;

    }
};
