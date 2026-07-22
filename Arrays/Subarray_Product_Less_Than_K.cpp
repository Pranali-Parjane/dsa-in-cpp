/*
Problem: Subarray Product Less Than K
Platform: LeetCode (713)
Difficulty: Medium

Approach:
- Use a sliding window.
- Expand the window by multiplying the current element.
- While the product is greater than or equal to k, shrink the window
  from the left.
- Count all valid subarrays ending at the current index.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        if (k <= 1)
            return 0;

        int left = 0;
        int product = 1;
        int count = 0;

        for (int right = 0; right < nums.size(); right++) {

            product *= nums[right];

            while (product >= k) {
                product /= nums[left];
                left++;
            }

            count += (right - left + 1);
        }

        return count;
    }
};
