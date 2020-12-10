class Solution {
public:
    
    void helper(vector<int> &nums, int l, int r) {
        while(l<r) {
           swap(nums[l], nums[r]);
            l++;
            r--; 
        }
    }
    
    void print(vector<int> &nums) {
        cout<<"printinng;";
        for(auto x:nums) {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
//     void helper(vector<int> &nums, int l, int r) {
//         int last=nums[nums.size()-1];
        
//     }
    
    void rotate(vector<int>& nums, int k) {
        int l=0, r, len=nums.size(), mid;
        k= k%len;
        r=len-1;
        mid=len-k;
        
        cout<<k<<" "<<mid<<" "<<len-1<<endl;
        
        helper(nums, mid, len-1);
        print(nums);
        helper(nums, 0, mid-1);
        print(nums);
        helper(nums, 0, len-1);
        print(nums);
    }
};
