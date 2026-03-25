class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        int n = nums.size();
        for(int i:nums){
            freq[i]++;
            if(freq[i]>n/2){
                return i;
            }
        }
        return -1;

    }
};