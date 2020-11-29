class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int start=0, end=0, len;
        vector<vector <int>> ans;
        for(auto i=0; i<numRows; i++) {
            vector <int> v;
            if(i==0) {
                v.push_back(1);
            } else {
                vector <int> upper = ans[i-1];
                len = upper.size();
                for(auto j=0; j<=len; j++) {
                    if(j==0 || j==len) {
                        v.push_back(1);
                        // cout<<" * ";
                    } else {
                        v.push_back(upper[j] + upper[j-1]);
                    }
                }
                // cout<<len<<endl;
            }
            ans.push_back(v);
        }
        return ans;
    }
};
