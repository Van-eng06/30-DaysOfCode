class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n=arr.size();
        double sum=0;
        int a=(0.05)*n;
        sort(arr.begin(),arr.end());
       arr.erase(arr.begin(), arr.begin()+a);
       arr.erase((arr.end()-a), arr.end());  
       for(int i=0;i<arr.size();i++)
       {
           sum=sum+arr[i];
       }
        
        double mean=sum/arr.size();
        return mean;
        
    }
};
