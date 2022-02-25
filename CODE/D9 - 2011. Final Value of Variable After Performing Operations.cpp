class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        string str;
        int n=operations.size();
        int X=0,j=0;
        for(int i=0;i<n;i++)
        {
            str=operations[i];
            if(str[j]=='-'){ --X;}
            else if(str[j]=='+') {++X;}
            else if(str[j]=='X'){
                j++;
                if(str[j]=='-'){X--;}
                else
                    X++;
            }
        }
        return X;
        
    }
};
