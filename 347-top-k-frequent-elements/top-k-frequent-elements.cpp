class Solution {
public:
    static bool comp(pair<int , int>&a , pair<int , int>&b){
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<pair<int, int>> vec;
        vector<int>ans;
        for (int n : nums) {
            mp[n]++;
        }
        for(auto it : mp){
            vec.push_back(it);
        }
        sort(vec.begin() , vec.end() , comp);
        for(auto ite : vec){
            if(k){
                ans.push_back(ite.first);
                k--;
            }
        }
        return ans;
    }
};