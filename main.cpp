class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int i;
        unsigned long long total = 0;        
        int bits[31] = {0};
        for(int const& n : nums){
            for(i = 0;i < 31;i++){
                if(n & (1 << i)) bits[i]++;
            }
        }
        for(i = 0;i < 31;i++){
            total += bits[i] * (nums.size() - bits[i]);
        }
        return total;
    }
};
