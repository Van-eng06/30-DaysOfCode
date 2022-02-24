class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        //vector<int> ans;
        int n=nums.size();
        int i=0,j=0;
        while(i<n)
        {
            nums.push_back(nums[i]);
            //if(i==n-1){
               // i=0;
            //}
            i++;
        }
        //return ans;
        return nums;
        
    }
};
