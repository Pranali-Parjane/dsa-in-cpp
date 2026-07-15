/*
Problem: Max Consecutive Ones III
Platform: LeetCode (1004)
Difficulty: Medium

Approach:
- Use a sliding window.
- Count the number of zeros in the current window.
- If the number of zeros exceeds k, shrink the window from the left.
- The maximum valid window length is the answer.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int left = 0;
        int zeroCount = 0;

        for (int right = 0; right < nums.size(); right++) {

            if (nums[right] == 0)
                zeroCount++;

            if (zeroCount > k) {

                if (nums[left] == 0)
                    zeroCount--;

                left++;
            }
        }

        return nums.size() - left;
    }
};
