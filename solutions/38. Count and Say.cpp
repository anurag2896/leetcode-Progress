class Solution {
public:
   
    
    string countAndSay(int n) {
        string s="1";
        if(n==1)
            return s;
        n--;
        while(n--) {
            int count=1;
            string res="";
            for(int i=0; i<s.size(); i++) {
                if(s[i]==s[i+1] && i+1<s.size()) {
                    count++;
                } else {
                    res+=to_string(count);
                    res+=s[i];
                    count=1;
                }
            }
            s=res;
        }
        return s;
    }
};
