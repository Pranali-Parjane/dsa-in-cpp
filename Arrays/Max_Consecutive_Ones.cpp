/*
Problem: Max Consecutive Ones
Platform: LeetCode (485)
Difficulty: Easy

Approach:
- Traverse the array once.
- Count consecutive 1s.
- Reset the count whenever a 0 is encountered.
- Keep track of the maximum count.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int currentCount = 0;
        int maxCount = 0;

        for (int num : nums) {

            if (num == 1) {
                currentCount++;
            }
            else {
                maxCount = max(maxCount, currentCount);
                currentCount = 0;
            }
        }

        return max(maxCount, currentCount);
    }
};
