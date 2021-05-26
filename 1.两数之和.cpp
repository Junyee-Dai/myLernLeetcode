/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        int i, j;
        for(i = 0; i < nums.size(); i++)
        {
            for(j = i+1; j < nums.size(); j++)
            {
                if(nums.at(i) + nums.at(j) == target)
                {
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }
        return v;
    }
};
// @lc code=end

