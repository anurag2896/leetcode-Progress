class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0, rem;
        while(n>0) {
            rem = n%2;
            if(rem==1) {
                count++;
            }
            n/=2;
        }
        
        return count;
    }
};
