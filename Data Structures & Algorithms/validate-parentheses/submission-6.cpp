class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;
        
        for(char c : s){
            if(c == '(' || c == '{' || c =='['){
                brackets.push(c);
            }
            else{
                if(brackets.empty()){
                    return false;
                }

                bool mismatch =
                    (c == ')' && brackets.top() != '(') || 
                    (c == '}' && brackets.top() != '{') || 
                    (c == ']' && brackets.top() != '[');
                    
                if(mismatch){
                    return false;
                }

                brackets.pop();

            }
        }
        
        return brackets.empty();
    }
};
