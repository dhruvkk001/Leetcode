class Solution {
public:
    int triangularSum(vector<int>& a) {
        int n = a.size();
        
        while(n>1)
        {
            vector<int> v;
            for(int i=0;i<n-1;i++)
            {
                int t = (a[i]+a[i+1])%10;
                v.push_back(t);
            }
            
            n = v.size();
            a = v;
            
        }
        return a[0];
    }
};