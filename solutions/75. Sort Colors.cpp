class Solution {
public:
    void sortColors(vector<int>& nums) {
        int len = nums.size();
        int front=0, mid=0, back=len-1;
        
        while(mid<=back) {
            if(nums[mid]==2) {
                swap(nums[mid], nums[back]);
                back--;
            } else if(nums[mid]==0) {
                swap(nums[front], nums[mid]);
                front++;
                mid++;
            } else {
                mid++;
            }
        }
    }
};
