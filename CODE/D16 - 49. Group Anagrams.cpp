class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        int n = strs.size();
        unordered_map<string, vector<string>> m;
        
        string temp;
        for(int i=0; i<n; i++)
        {
            temp = strs[i];
            sort(strs[i].begin(), strs[i].end());
            m[strs[i]].push_back(temp);
        }
        
        vector<vector<string>> ans;
        for(auto it=m.begin(); it!=m.end(); it++)
        {
            ans.push_back(it->second);
        }
        
        return ans;
    }
};
