class Solution {
public:
    int maxFrequencyElements(vector<int>& a) {
        vector<int> frequency(101, 0);
        int maxFreq = 0;
        for (int num : a) {
            maxFreq = max(maxFreq, ++frequency[num]);
        }
        int ans = 0;
        for (int freq : frequency) {
            if (freq == maxFreq) {
                ans += freq;
            }
        }
        return ans;
    }
};