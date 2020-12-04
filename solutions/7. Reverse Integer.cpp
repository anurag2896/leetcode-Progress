class Solution {
public:
    int reverse(int x) {
        int factor=1, rem;
        long long res=0;
        
        while(x) {
            rem=x%10;
            x/=10;
            res=res*10 + rem;
        }
        
        return (res<INT_MIN || res>INT_MAX) ? 0 : res;
    }
};
