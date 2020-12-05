class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len=strs.size(), i;
        string ans="";
        if(len==0)
            return ans;
        
        for(int j=0; j<strs[0].size(); j++) {
            for(i=1; i<len; i++) {
                
                // cout<<"--line 10 word len & j"<<strs[i].size()<<" "<<j<<" ";
                if(strs[i].size()<=j) {
                    return ans;
                }
                
                
                // cout<<"--line 16 "<<strs[0][j]<<" "<<strs[i][j]<<endl;
                if(strs[0][j]!=strs[i][j]) {
                    return ans;
                }
            }
            if(i==len) {
                ans+=strs[0][j];
            }
        }
        
        return ans;
    }
};
