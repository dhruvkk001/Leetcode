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
// Sure, let's break down the simplified maxFrequencyElements method step by step:

// Vector Initialization:
// We initialize a vector frequency of size 101, where frequency[i] will store the count of the element i in the input vector a.
// cpp
// Copy code
// vector<int> frequency(101, 0);
// Calculating Maximum Frequency:
// We iterate over each element in the input vector a.
// For each element num, we increment the count of num in the frequency vector and update maxFreq if necessary.
// cpp
// Copy code
// int maxFreq = 0;
// for (int num : a) {
//     maxFreq = max(maxFreq, ++frequency[num]);
// }
// Counting Elements with Maximum Frequency:
// We iterate over the frequency vector to count how many elements have the maximum frequency maxFreq.
// If the frequency of an element equals maxFreq, we add its frequency to the ans variable.
// cpp
// Copy code
// int ans = 0;
// for (int freq : frequency) {
//     if (freq == maxFreq) {
//         ans += freq;
//     }
// }
// Return Result:
// We return the total count of elements having the maximum frequency.
// cpp
// Copy code
// return ans;
// This simplified version combines the two loops for finding maxFreq and counting elements with maximum frequency into a single loop for efficiency and readability.