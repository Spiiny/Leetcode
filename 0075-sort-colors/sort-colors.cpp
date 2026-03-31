class Solution {
public:
    void sortColors(vector<int>& nums) {
        int ref[3] = {0};
        for (int num : nums) ref[num]++;
        int in = 0;
        for (int i = 0; i < 3; i++) {
            while (ref[i]--) {
                nums[in++] = i;
            }
        }
    }
};
