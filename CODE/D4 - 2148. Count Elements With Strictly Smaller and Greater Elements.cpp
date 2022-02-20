class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=nums[0];
        int b=nums[nums.size()-1];
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>a && nums[i]<b)
                count++;
            else
                continue;
        }
        return count;
        
    }
};
