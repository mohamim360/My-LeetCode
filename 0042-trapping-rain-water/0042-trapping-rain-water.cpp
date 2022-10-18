class Solution {
public:
    int trap(vector<int>& height) {
     
        
        int sum=0,l=0,r=height.size()-1,maxl=0,maxr=0;
        while(l<r) {
            maxl=max(height[l],maxl);
            maxr=max(height[r],maxr);
            if(height[l]>=height[r]) {
                sum+=min(maxl,maxr)-height[r];
                r--;
            }
            else {
                sum+=min(maxl,maxr)-height[l];
                l++;
            }
        }
     return sum;
       
    }  
    
};