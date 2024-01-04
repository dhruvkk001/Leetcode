class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int> mp;
        for(auto it: nums){
            mp[it]++;
        }
        for(auto [k,f]:mp){
            if(f==1) return -1;
            ans= ans+f/3+(f%3+1)/2;

        }
        return ans;
    }
};