class Solution {
public:
    bool isValid(string s) {
             stack<char>sta;
       char ch;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] =='('||s[i]=='{'||s[i]=='['){
                sta.push(s[i]);
            }
            else{  ch=sta.top();
                 if(sta.empty()){
                    return false;
                }
              
            if((ch=='(' &&s[i]==')')|| (ch=='[' && s[i]==']') || (ch=='{'&& s[i] =='}')){
                    sta.pop();
            }
                else{
                    return false;
                }
            }
            
        }
        return sta.empty();
        }
    
};