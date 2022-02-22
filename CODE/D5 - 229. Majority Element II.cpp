class Solution {
public:
    vector<int> majorityElement(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        vector<int>ans;
         int current=1;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1])
            {
               current++;
            }
         else  if(nums[i]!=nums[i-1])
            {
                if(current>n/3)
                    ans.push_back(nums[i-1]);
             current=1;
            }
        }
        if(current>n/3)
            ans.push_back(nums[n-1]);
      return ans;
    }
};
