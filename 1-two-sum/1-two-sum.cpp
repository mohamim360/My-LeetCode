class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>n;
        map<int,int>m;
        
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            auto it=m.find(target-nums[i]);
            if(it==m.end()){
                m[nums[i]] = i;
            }
            else
            {
                n.push_back(i);
                n.push_back(it->second);
                return n;
            }
        }
        return n;
    }
};