class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& a) {
        int len=a.size(), temp;
        for(auto i=0; i<len; i++) {
            temp = a[i]>0 ? a[i] : -a[i];
            if(a[temp-1]>0) {
                a[temp-1]*=-1;
            }
        }
        vector<int> res;
        for(auto i=0; i<len; i++) {
            if(a[i]>0)
                res.push_back(i+1);
        }
        
        return res;
    }
};
