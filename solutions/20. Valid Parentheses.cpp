class Solution {
public:
    bool check(char a, char b) {
        if((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'))
            return true;
        else 
            return false;
    }
    
    bool isValid(string s) {
        stack <char> st;
        for(auto x:s) {
            if(x=='(' || x=='{' || x=='[') {
                st.push(x);
            }
            if(x==')' || x=='}' || x==']') {
                if(st.empty())
                    return false;
                if(check(st.top(), x))
                    st.pop();
                else
                    return false;
            }
        }
        
        if(!st.empty())
            return false;
        else
            return true;
    }
};
