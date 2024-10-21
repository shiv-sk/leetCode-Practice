class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int i = 1 , n = nums.size()-1;
        vector<int>ans;
        if(nums[0] != nums[1]){
            ans.push_back(nums[0]);
        }
        if(nums[n] != nums[n-1]){
            ans.push_back(nums[n]);
        }
        while(i < n){
            if(nums[i] != nums[i+1] && nums[i] != nums[i-1]){
                ans.push_back(nums[i]);
            }
            i++;
        }
        return ans;
    }
};