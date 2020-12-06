class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0], fast=nums[0], ptr=nums[0];
        while(true) {
            slow=nums[slow];
            fast=nums[nums[fast]];
            if(slow==fast)
                break;
        }
        
        while(ptr!=slow) {
            ptr=nums[ptr];
            slow=nums[slow];
        }
        
        return slow;
        
    }
};
