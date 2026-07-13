/*
Problem: Valid Palindrome
Platform: LeetCode (125)
Difficulty: Easy

Approach:
- Use two pointers starting from both ends of the string.
- Skip all non-alphanumeric characters.
- Compare characters after converting them to lowercase.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    bool isAlphaNum(char ch) {
        return (ch >= '0' && ch <= '9') ||
               (tolower(ch) >= 'a' && tolower(ch) <= 'z');
    }

    bool isPalindrome(string s) {

        int left = 0;
        int right = s.length() - 1;

        while (left < right) {

            if (!isAlphaNum(s[left])) {
                left++;
                continue;
            }

            if (!isAlphaNum(s[right])) {
                right--;
                continue;
            }

            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};
