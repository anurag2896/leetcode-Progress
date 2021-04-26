class Solution {
public:
    string reverseVowels(string s) {
        unordered_set <char> vowels={'a','e','i','o','u','A','E','I','O','U'};
        int start=0, end=s.size()-1;
        while(start<end) {
            while(vowels.find(s[start])==vowels.end() && start<end) {
                start++;
            }
            while(vowels.find(s[end])==vowels.end() && start<end) {
                end--;
            }
            if(start<end)
                swap(s[start++],s[end--]);
        }
        return s;
    }
};
