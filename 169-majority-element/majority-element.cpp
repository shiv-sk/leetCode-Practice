class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int number = 0;
        int cnt = 0;
        for(int i : nums){
            if(cnt == 0){
                number = i;
            }
            cnt += (i == number)? 1 : -1;
        }
        return number;
    }
};