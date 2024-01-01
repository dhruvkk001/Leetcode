class Solution {
public:
   int findContentChildren(vector<int>& g, vector<int>& s) {
    // Sort the vectors in ascending order.
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    // Initialize two pointers, i for the child array 'g', and j for the cookie array 's'.
    int i = 0, j = 0, count = 0;

    // Iterate through the arrays while there are still children and cookies left.
    while (i < g.size() && j < s.size()) {
        // If the current child's greed is less than or equal to the current cookie's size,
        // assign the cookie to the child, increment both pointers, and increase the count.
        if (g[i] <= s[j]) {
            count++;
            i++;
            j++;
        } else {
            // If the current child's greed is greater than the current cookie's size,
            // move to the next available cookie.
            j++;
        }
    }

    // Return the count of content children.
    return count;
}

};