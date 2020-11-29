class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int snowballsize=0, temp;
        for(auto i=0; i<a.size(); i++) {
            if(a[i]==0) {
                snowballsize++;
            } 
            else if(snowballsize) {
                temp = a[i];
                a[i]=0;
                a[i-snowballsize] = temp;
            }
        }
        
    }
};
