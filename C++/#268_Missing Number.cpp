class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x=0;
        for(int i=0; i<nums.size(); i++)
            x ^= i^nums[i];
        return x^nums.size();
    }
};