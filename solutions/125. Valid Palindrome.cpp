class Solution {
public:
    bool isPalindrome(string s) {
        string ns;
        for(int i=0; i<s.size(); i++) {
            // if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) {
            if(isalnum(s[i])) {
                if(s[i]>='A' && s[i]<='Z') {
                    s[i] = ('a' + (s[i]-'A'));
                }
                ns+=s[i];
            }
        }
        
        int start=0, end=ns.size()-1;
        while(start<=end) {
            if(ns[start]!=ns[end])
                return false;
            start++;
            end--;
        }
        
        return true;
    }
};
