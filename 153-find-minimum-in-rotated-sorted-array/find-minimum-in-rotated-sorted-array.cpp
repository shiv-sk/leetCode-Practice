class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0 , right = nums.size()-1 , ans = INT_MAX;
        while(left <= right){
            int mid = left + (right - left)/2;
            if(nums[left] <= nums[mid]){
                ans = min(ans , nums[left]);
                left = mid + 1;
            }
            else{
                ans = min(ans , nums[mid]);
                right = mid - 1;
            }
        }
        return ans;
    } 
};