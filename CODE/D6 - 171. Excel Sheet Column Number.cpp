class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.size();
        int ans=0,d;
        string c=columnTitle;
        for(int i=0;i<n;i++)
        {
            d=((c[i]-'A')+1);
            ans=(ans*26)+d;
        }
        
        return ans;
        
    }
};
