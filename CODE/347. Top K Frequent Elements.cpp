class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    //create a vector to store final asnwer and a map to store frequency
    vector<int> v;
    unordered_map<int, int> m;
    //store the nums in map to count the frequency of numbers
    for(auto num: nums){
        m[num]++;
    }
    //create priority_queue and store the value so that numbers can be arranged according to their frequency
    priority_queue<pair<int,int>> q;
    for(auto val: m){
        q.push({val.second, val.first});
    }
    //push the top k values from queue to the vector
    while(k--){
        v.push_back(q.top().second);
        q.pop();
    }
    // return final vector
    return v;
    }
};
