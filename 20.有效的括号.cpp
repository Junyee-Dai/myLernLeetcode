/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 *
 * https://leetcode-cn.com/problems/valid-parentheses/description/
 *
 * algorithms
 * Easy (44.15%)
 * Likes:    2440
 * Dislikes: 0
 * Total Accepted:    653.9K
 * Total Submissions: 1.5M
 * Testcase Example:  '"()"'
 *
 * 给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。
 * 
 * 有效字符串需满足：
 * 
 * 
 * 左括号必须用相同类型的右括号闭合。
 * 左括号必须以正确的顺序闭合。
 * 
 * 
 * 
 * 
 * 示例 1：
 * 
 * 
 * 输入：s = "()"
 * 输出：true
 * 
 * 
 * 示例 2：
 * 
 * 
 * 输入：s = "()[]{}"
 * 输出：true
 * 
 * 
 * 示例 3：
 * 
 * 
 * 输入：s = "(]"
 * 输出：false
 * 
 * 
 * 示例 4：
 * 
 * 
 * 输入：s = "([)]"
 * 输出：false
 * 
 * 
 * 示例 5：
 * 
 * 
 * 输入：s = "{[]}"
 * 输出：true
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * 1 
 * s 仅由括号 '()[]{}' 组成
 * 
 * 
 */

// @lc code=start

#include <iostream>
#include <string>
#include <stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> parent;
        for(char& c : s)
        {
            switch (c)
            {
            case '(':
            case '{':
            case '[':
                parent.push(c);
                break;
            case ')':
                if(parent.empty() || parent.top() != '(')
                    return false;
                else
                    parent.pop();
                break;
            case '}':
                if(parent.empty() || parent.top() != '{')
                    return false;
                else
                    parent.pop();
                break;
            case ']':
                if(parent.empty() || parent.top() != '[')
                    return false;
                else
                    parent.pop();
                break;
            default://pass
            ;
            }
        }
        return parent.empty();
    }
};
// @lc code=end

