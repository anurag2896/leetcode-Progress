class Solution {
public:
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //can also be done using minheap with a better TC O(nlogk), with maxheap it's O(nlog(n-k))
        vector<int> res;
        unordered_map<int, int> um;
        
        for(auto x:nums) {
            um[x]++;
        }
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int ,int>>> pq;
        for(auto x:um) {
            pq.push(make_pair(x.second, x.first));
            if(pq.size()>k)
                pq.pop();
        }
        
        while(!pq.empty()) {
            res.push_back(pq.top().second);
            pq.pop();
        }
        
        return res;
    }
};
