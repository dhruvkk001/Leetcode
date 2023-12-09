class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            string temp=sentences[i];
            int len=temp.size();
            int cnt=1;
            for(int j=0;j<len;j++){
                if(temp[j]==' ') cnt++;
                
            }
            ans.push_back(cnt);
        }
        sort(ans.begin(),ans.end());
        return ans[n-1];
    }
};