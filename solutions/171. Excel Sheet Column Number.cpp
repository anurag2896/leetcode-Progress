class Solution {
public:
    int titleToNumber(string s) {
        int res=0, n=s.length(), place=1;
        for(int i=n-1; i>=0; i--) {
            res += ((s[i]-'A')+1)*place;
            // cout<<s[i]<<" "<<(s[i]-'A')+1<<" * "<<place<<endl;
            if(i!=0)
                place*=26;
        }
        return res;
    }
};
