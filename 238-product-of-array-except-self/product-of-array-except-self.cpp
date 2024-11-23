class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prefixProduct = 1;
        vector<int>vec(nums.size() , 1);
        for(int i = 0; i<nums.size(); i++){
            vec[i] = prefixProduct;
            prefixProduct *= nums[i];
        }

        int suffixProduct = 1;
        for(int i = nums.size()-1; i>=0; i--){
            vec[i] *= suffixProduct;
            suffixProduct *= nums[i];
        }
        return vec;
    }
};