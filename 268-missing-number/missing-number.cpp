class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int arrysum = (n*(n+1))/2;
        return arrysum - accumulate(nums.begin() , nums.end() , 0);
    }
};