// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
           int f=1,l=n;
        while(f<=l) {
            int mid=f+(l-f)/2;
            if(isBadVersion(mid) && (mid-1<1 || !isBadVersion(mid-1)) ) {
                return mid;
            }
            if(isBadVersion(mid)) {
                l=mid-1;
            }
            else{ 
                f=mid+1;
            }
        }
        return 0;
    }
};