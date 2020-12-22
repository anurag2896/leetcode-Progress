class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        
        unordered_map<string, vector<string>> m;
        
        int i=0;
        for(auto s:strs) {
            sort(s.begin(), s.end());
            m[s].push_back(strs[i]);
            i++;
        }
        
        for(auto elem:m) {
            res.push_back(elem.second);
        }
        
        return res;
    }
};
