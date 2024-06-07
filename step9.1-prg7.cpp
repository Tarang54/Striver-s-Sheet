#include <stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;
        int size = s.length();
        for(int i = 0; i<size; i++){
            char ch = s[i];
            if(ch == '(' || ch == '{' || ch == '['){
                s1.push(ch);
            }else if(!s1.empty() && ((ch == ')' && s1.top() == '(') || (ch == '}' && s1.top() == '{') || (ch == ']' && s1.top() == '['))){
                s1.pop();
            }else{
                return false;
            }
        }
        if(s1.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};
