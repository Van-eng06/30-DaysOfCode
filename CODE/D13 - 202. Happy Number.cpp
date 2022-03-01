class Solution {
public:
    int helper(int n){
        int rem=0,sum=0;
        if(n==1)return 1;
        else if(n==4)return 4;
        else if(n==0)return 0;
        else
        {
            while(n>0)
            {
                rem=n%10;
                sum=sum+(rem*rem);
                n=n/10;
            }
            
        }
        return helper(sum);
    }
    bool isHappy(int n) {
        int x=helper(n);
        bool flag;
        if(x==1)return flag=true;
        
        else
            flag=false;
        return flag;
    }
};
