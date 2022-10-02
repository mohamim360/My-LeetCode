class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char>v(256);
        int l=0,j=0;
        for(int i=0;i<s.size();i++)
        {
            v[s[i]]++;        
            
            while(v[s[i]]>1) { 
              v[s[j]]--;
                j++;
            }
            
            l=max(l,i-j+1);
          
        }
        return l;
    }
};