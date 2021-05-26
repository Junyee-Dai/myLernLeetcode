/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        long res = 0;
        while(x != 0)
        {
            int dig = x % 10;
            x /= 10;
            res = res * 10 + dig;
        }
        return (res > INT_MAX || res < INT_MIN) ? 0 : res;
    }
};
// @lc code=end

