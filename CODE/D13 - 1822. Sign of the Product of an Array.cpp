class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n=nums.size();
        long int prod=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0){
                prod=prod*(-1); 
            }
            else if(nums[i]>0){
                prod=prod*(1); 
            }
            else
                prod=prod*0;
            
           
        }
        return signFunc(prod);
    }
    int signFunc(int prod){
        if(prod>0) return 1;
        else if(prod==0) return 0;
        else
            return -1;
        
    }
};
