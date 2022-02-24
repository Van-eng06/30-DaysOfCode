class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int i=1;
        ans.push_back(nums[0]);
        int sum=nums[0];
        while(i<n)
        {
            sum=sum+nums[i];
            ans.push_back(sum);
            i++;
        }
        return ans;
    }
};
