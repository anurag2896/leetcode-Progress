class Solution {
public:
    int getSum(int a, int b) {
        int carry;
        
        // return b==0 ? a : getSum(a^b , (a&b)<<1);
        while(b!=0) {
            carry=a&b;
            a=a^b;
            
            b=(unsigned int)carry<<1;
        }
        
        //turns out << of signed -ve numbers isn't well defined in c++ (can't place trailing zeroes in that case); so we typecast it into a unsigned integer
        
        return a;
    }
};
