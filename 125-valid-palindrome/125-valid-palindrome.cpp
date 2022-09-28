class Solution {
public:
    bool isPalindrome(string s) {
         string str;
        
        for(int i=0;i<s.size(); i++){
         if((s[i]>='a'&& s[i]<='z')||(s[i] >='A'&& s[i]<='Z')||(s[i]>='0'&& s[i]<='9')){
               
            str+=tolower(s[i]);  
         }
        }
        string str1=str;
        
        reverse(str1.begin(),str1.end());
        
        if(str==str1) {
            return true;
        }
        else {
            return false;
        }
          
    }
};