class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start=0, end=nums.size()-1, count=0;
        for(auto el:nums) {
            if(el==0)
                count++;
        }
        for(auto i=0; i<nums.size(); i++) {
            if(nums[i]!=0) {
                nums[start]=nums[i];
                start++;
            }
        }
        
        while(count--) {
            nums[end]=0;
            end--;
        }
    }
};
