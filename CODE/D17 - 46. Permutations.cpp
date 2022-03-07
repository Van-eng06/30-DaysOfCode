class Solution {
public:
    void permutation(vector<int>& nums,vector<vector<int>>& ans,int index)
    {
        //base case
        if(index>=nums.size())
        {
            ans.push_back(nums);
            return;
        }
        
        
        for(int i=index;i<nums.size();i++)
        {
            swap(nums[index],nums[i]);
            //recursive call
            permutation(nums,ans,index+1);
            //backtrack
            swap(nums[index],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index=0;
        permutation(nums,ans,index);
        return ans;
    }
};
