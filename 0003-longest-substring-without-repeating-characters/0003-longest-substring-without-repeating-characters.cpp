class Solution {
public:
    int lengthOfLongestSubstring(string s) { 
        if(s.size()<=1) return s.size();
        unordered_map<char,int>m;
        int l=0,larg=0;
      
        for(int r=0;r<s.size();r++)
        {   
                int cur=s[r];
                
               
                //cout<< preseencur<<endl;
                if(m.find(s[r])!=m.end()&&m[cur]>=l){
                    l=m[cur]+1;
                }
                //cout<<l<<endl;
                m[cur]=r;
               
                larg=max(larg,r-l+1);
                //cout<<larg<<endl;

        }
        return larg;
    }
};