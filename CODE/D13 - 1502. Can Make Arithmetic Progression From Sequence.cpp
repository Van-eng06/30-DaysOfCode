class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int diff=abs(arr[1]-arr[0]);
        for(int i=2;i<arr.size();i++)
        {
            if(diff==abs(arr[i]-arr[i-1]))
                continue;
            else
                return false;
        }
        return true;
    }
};
