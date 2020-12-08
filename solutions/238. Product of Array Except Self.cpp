class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len=nums.size();
        vector<int> res(len);
        res = leftproduct(nums, len, res);
        int rightprod=1;
        for(int i=len-1; i>=0; i--) {
            res[i]=res[i]*rightprod;
            rightprod*=nums[i];
        }
        
        return res;
    }
    
    vector<int> leftproduct(vector<int> &nums, int len, vector<int> res) {
        res[0]=1;
        for(int i=1; i<len; i++) {
            res[i]=nums[i-1]*res[i-1];
        }
        return res;
    }
};
