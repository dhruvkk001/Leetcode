class Solution {
public:
    int binaryGap(int n) {
        int ans = 0,x = 0;
        while(n){
           if(n%2==1){
            ans = max(ans,x-1);
            x = 1;
       }
       x > 0? x++: x = 0;
        n = n >> 1;
    }
     return ans;
    }
};