class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int s=candies.size();
        int m=*max_element(candies.begin(),candies.end());
        vector<bool> ans;
        for(int i=0;i<s;i++)
        {
            if(candies[i]+extraCandies>=m)
                ans.push_back(true);
            else
                ans.push_back(false);
                
        }
        return ans;
        
        
    }
};
