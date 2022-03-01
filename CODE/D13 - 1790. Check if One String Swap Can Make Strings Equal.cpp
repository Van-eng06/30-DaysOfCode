class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1.size()!=s2.size()) return false;
        unordered_map<char,int>mp;
        for(auto x:s1){
            mp[x]++;
        }
        int cnt=0;
        for(int i=0;i<s2.size();i++){
            if(s2[i]!=s1[i]) cnt++;
            mp[s2[i]]--;
        }
        for(auto x:mp){
            if(x.second!=0) return false;
        }
        return cnt<=2;
    }
};
