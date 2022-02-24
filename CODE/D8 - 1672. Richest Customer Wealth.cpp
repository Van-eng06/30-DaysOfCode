class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int i=0,j=0,sum=0;
        int n=accounts.size();
        for(i=0;i<n;i++)
        {
            sum=max(accumulate(accounts[i].begin(),accounts[i].end(),0),sum);
        } // we are taking 0 here to initialize accumulate function
        // it will calculate sum of one row at once
        // hence we'll get maximum of all the rows
        return sum;
    }
};
