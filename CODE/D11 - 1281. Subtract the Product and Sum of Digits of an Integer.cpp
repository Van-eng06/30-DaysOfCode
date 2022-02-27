class Solution {
public:
    int subtractProductAndSum(int n) {
        int r=0,sum=0,mul=1;
        while(n>0){
           r=n%10;
           mul=mul*r;
           sum=sum+r;
           n=n/10;
        }
        return (mul-sum);
        
    }
};
