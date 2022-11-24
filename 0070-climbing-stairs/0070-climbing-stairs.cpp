class Solution {
public:
    int climbStairs(int n) {
        
         if(n==0||n==1){
          return 1;
        }
        int a[n];
        a[0]=1;
        a[1]=1;
        for(int i=0;i<n-1;i++){
            int t=a[0];
            a[0]+=a[1];
            a[1]=t;
        }
        return a[0];
    }
};