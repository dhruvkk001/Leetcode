class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n =arr.size();
        int q=n/4;
        int freq[100001]={0};
        for(int x:arr){
            freq[x]++;
            if(freq[x]>q) return x;
        }
            return -1;

    }
};