class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        unsigned long long total = 0;
        int i,j;
        for(i = 0;i < nums.size();i++){
            for(j = i + 1;j < nums.size();j++){
                total += __builtin_popcount(nums[i] ^ nums[j]);
            }
        }
        return total;
    }
};
