class Solution {
public:
    bool isIsomorphic(string s, string t) {
         unordered_map <char, int> sMap;
        unordered_map <char, int> tMap;
        for(int i = 0; i < s.size(); i++){
            if(sMap[s[i]] != tMap[t[i]]) return false;
            else{
                sMap[s[i]] = i+1;
                tMap[t[i]] = i+1;
            }
        }
        return true;
    }
};