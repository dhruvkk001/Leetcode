class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i,prod;
        vector<int> v;
        int n=nums.size();
        for( i=0;i<n;i++){
            prod=nums[i]*nums[i];
            v.push_back(prod);
        }
        sort(v.begin(),v.end());
        return v;
    }
};