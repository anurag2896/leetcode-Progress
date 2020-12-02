class Solution {
public:
    
    int trailingZeroes (int x) {
        int res=0;
        while(x>0) {
            res+=(x/5);
            x/=5;
        }
        return res;
    }
};
