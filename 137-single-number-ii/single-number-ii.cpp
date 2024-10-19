class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int k = 0 , i = 2;
        for(; i<nums.size(); i++){
            if(nums[i] == nums[k]){
                k = i + 1;
                i = i + 2;
            }
            else{
                return nums[k];
            }
        }
        return nums[k];
    }
};