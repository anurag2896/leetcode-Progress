class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len=digits.size();
        digits[len-1]++;
        int rem=0;
        for(int i=len-1; i>=0; i--) {
            digits[i]+=rem;
            rem=0;
            if(digits[i]>9) {
                rem=digits[i]%9;
                digits[i]%=10;
            }
            if(rem && i==0)
                digits.insert(digits.begin(), rem);
        }
        
        return digits;
    }
};
