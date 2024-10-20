class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0 , j = i+1 , n = nums.size();
        while(j<n && nums[i] != 0){
            i++;
            j++;
        }
        for(; j<n; j++){
            if(nums[i] == 0 && nums[j] != 0){
                swap(nums[i] , nums[j]);
                i++;
            }
        }
    }
};