class Solution {
public:
    double myPow(double x, int n) {
        
        double ans;
        
        if(n==1)
            return x;
        else if(n==-1)
            return 1/x;
        else if(n==0)
            return 1;
​
        double temp=myPow(x, n/2);
​
        
        if(n%2==0) {
            ans= temp * temp;
        }
        else {
            ans= n>0 ? x * temp * temp : 1/x * temp * temp;
        }
        
        return ans;
    }
};
