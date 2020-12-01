class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int expected_sum=0, sum=0, n;
        n=nums.size();
        expected_sum = n*(n+1)/2;
        for(auto x: nums) {
            sum+=x;
        }
        
        return expected_sum-sum;
    }
};
