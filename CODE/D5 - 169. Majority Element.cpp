class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int c=1,count=0;
        int n=nums.size();
        if(n==1) return nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1]){
                c++;
                count=max(count,c);
                if(count>(n/2))
                {
                    return nums[i];
                }
            }
            else
                c=1;     
        }
        return 0;
    }
};
