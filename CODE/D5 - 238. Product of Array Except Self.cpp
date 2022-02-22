class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n=nums.size();
        vector <int> v,pref,postf;
        pref.push_back(1);
        postf.push_back(1);
        for(int i=0;i<n-1;i++)
        {
            pref.push_back(pref[i]*nums[i]);
            postf.push_back(postf[i]*nums[n-1-i]);
        }
        reverse(postf.begin(),postf.end());
        for(int i=0;i<n;i++)
        {
            v.push_back(pref[i]*postf[i]);
        }
    

        return v;
    }
};
