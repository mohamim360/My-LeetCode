class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        vector<char>vs;
        vector<char>vt;
        
        for(int i=0;i<s.size();i++){
            
            if(s[i]=='#' && !vs.empty()){
                vs.pop_back();
            }
            else if(s[i]!='#'){
                vs.push_back(s[i]);
            }
        }
       
        
        for(int i=0;i<t.size();i++){
            if(t[i]=='#' && !vt.empty()){
                vt.pop_back();
            }
            else if(t[i]!='#'){
               vt.push_back(t[i]);
            }
        }
        
        
        if(vs==vt){
            return true;
        }
        else{
            return false;
        }
            
        
    }
};