class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        if(nums.size()<k) return -1;
        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto i : nums){
            pq.push(i);
            if(pq.size()>k) pq.pop();
        }
        return pq.top();
    }
};