class Solution {
public:
    bool isPerfectSquare(int num) {
        int first = 1, last = num;
        while (first <= last) {
            int mid = first + (last - first) / 2;
            if (mid == num / mid && num % mid == 0) {
                return true;
            } else if (mid > num / mid) {
                last = mid - 1;
            } else {
                first = mid + 1;
            }
        }
        return false;
    }
};