class MinStack {
public:
    /** initialize your data structure here. */
    int min=INT_MAX;
    vector<int> a;
    vector<int> minv;
    
    MinStack() { 
    }
    
    void push(int x) {
        // cout<<"here pushINA"<<" ";
        a.push_back(x);
        if(x<=min) {
            minv.push_back(x);
            min=x;
            // cout<<"here pushminV"<<" ";
        }
    }
    
    void pop() {
        if(a.back()==minv.back()) {
            // cout<<"here popMINV"<<" ";
            minv.pop_back();
        }
        a.pop_back();
        
        min=minv.empty() ? INT_MAX : minv.back();
        // cout<<"here popA"<<" ";
    }
    
    int top() {
        // cout<<"here TOP"<<" ";
        return a.back();
    }
    
    int getMin() {
        // cout<<"here GETMin"<<" ";