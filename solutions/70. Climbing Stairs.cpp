class Solution {
public:
    int climbStairs(int n) {
        if(n<=0)
            return 0;
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        
        int two_before=1, one_before=2, all_before;
        for(int i=3; i<=n; i++) {
            all_before = two_before + one_before;
            two_before = one_before;
            one_before = all_before;
        }
        
        return all_before;
    }
};
