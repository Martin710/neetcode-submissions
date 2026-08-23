class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for(string& word : strs){
            encoded += to_string(word.size());
            encoded += '#';
            encoded += word;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        
        vector<string> result;
        int i = 0;
        while(i < s.size()){
            int delimiter = i;

            while(s[delimiter] != '#'){
                ++delimiter;
            }

            int length = stoi(s.substr(i, delimiter - i));
            int start = delimiter + 1;

            result.push_back(s.substr(start, length));

            i = start + length;
        }
        return result;
    }
};
