class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> group_ind;
        vector<vector<string>> groups;
        int k = 0;
        for(int i=0; i<strs.size(); i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            if(group_ind.find(temp) != group_ind.end()) groups[group_ind[temp]].push_back(strs[i]);
            else{
                group_ind[temp] = k;
                groups.push_back({strs[i]});
                k++; 
            }
        }
        return groups;
    }
};