class Solution {
public:
    void sortColors(vector<int>& nums) {
        int len = nums.size();
        int front=0, mid=0, last=len-1;
        
        while(mid<=last) {
            if(nums[mid]==1) {
                mid++;
            } else if(nums[mid]==0) {
                swap(nums[mid], nums[front]);
                front++;
                mid++;
            } else {
                swap(nums[last], nums[mid]);
                last--;
            }
        }
    }
};
