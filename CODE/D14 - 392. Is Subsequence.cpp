class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n1=s.length();
        int n2=t.length();
        int i=0,j=0,count=0;
        while(i<n1 && j<n2){
            if(t[j]==s[i]){
                j++;
                i++;
                count++;
            }
            else
                j++;
        }
        if(count==n1) return true;
        else
            return false;
        
    }
};
