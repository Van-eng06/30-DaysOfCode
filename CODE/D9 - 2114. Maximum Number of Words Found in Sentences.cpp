class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
       int res=0;
        for(auto x:sentences)
        {
            int c=1;
            for(auto i:x)
                if(i==' ')
                    c++;

            res=max(c,res);   
        }
        return res;     
    }
};
