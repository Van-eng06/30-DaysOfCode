class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> ans;
        int sum=0;
        for(auto val: ops)
        {
            if(val=="C")
            {
                ans.pop();
            }
            else if(val=="D")
            {
                ans.push(ans.top()*2);
            }
            else if(val=="+")
            {
                int j=ans.top();
                ans.pop();
                int k=j+ans.top();
                ans.push(j);
                ans.push(k);
            }
            else
                ans.push(stoi(val));
        }
        while(!ans.empty())
        {
            sum=sum+ans.top();
            ans.pop();
        }
        return sum;
    }
};
