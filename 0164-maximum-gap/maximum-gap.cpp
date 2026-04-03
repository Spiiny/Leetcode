class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<=1) return 0;
        sort(nums.begin(),nums.end());
        int maxx =0;
        for(int i=1;i<nums.size();i++){
            maxx = max(maxx,nums[i]-nums[i-1]);
        }
        return maxx;
    }
};
