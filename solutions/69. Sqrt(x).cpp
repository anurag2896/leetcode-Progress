class Solution {
public:
    int mySqrt(int x) {
        int left=1, right=x, mid;
        
        if(x<2)
            return x;
        
//         while(left<right) {    
//             mid = left + (right-left)/2;
//             if(mid==x/mid)
//                 return mid;
//             else if(mid>x/mid) {
//                 right=mid;
//             } else {
//                 left=mid+1;
//             }
//         }
        
//         return left-1;
        
        while(left<=right) {    
            mid = left + (right-left)/2;
            if(mid==x/mid)
                return mid;
            else if(mid>x/mid) {
                right=mid-1;
            } else {
                left=mid+1;
            }
        }
        
        return right;
    }
};
