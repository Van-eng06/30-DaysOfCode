class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> v;
        string s1;
        if(s.empty())
            return true;
        for(int i=0;i<s.size();i++){
            if((s[i]<=90 && s[i]>=65) || (s[i]<=122 && s[i]>=97) || (s[i]<=57 && s[i]>=48))
                v.push_back(tolower(s[i]));
        }
        for(int i=0;i<v.size();i++)
        {
            s1.push_back(v[i]);
        }
        string s2=s1;
        reverse(s1.begin(),s1.end());
        if(s1==s2) return true;
        
        return false;
    }
};
