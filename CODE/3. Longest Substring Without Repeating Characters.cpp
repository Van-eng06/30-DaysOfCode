#hash-table
#sliding window

class Solution {
public:
    int lengthOfLongestSubstring(string s) { 
        unordered_map<char,int> umap;  // to store elements as key value pairs - here key will be the element and value will be the number of repetition ot that particular element
        int ans = 0;   
        int i = 0, j = 0;
        int n = s.length();
        while(i<n && j<n){
            umap[s[j]]++; // to count the repetition of the element 
            if(umap[s[j]] == 1){ 
                j++;
                ans = max(ans, j-i);
            }
            else{
                umap[s[i]] = 0; // using sliding window technique
                i++;
            }
            
        }
        return ans;
    }
};
