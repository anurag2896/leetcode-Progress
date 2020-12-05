class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32> b(n);
        int left=0, right=31, temp;
        while(left<right) {
            temp=b[left];
            b[left]=b[right];
            b[right]=temp;
            left++;
            right--;
        }
        
        return b.to_ulong();
    }
};
