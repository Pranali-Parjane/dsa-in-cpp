/*
Problem: Maximum Average Subarray I
Platform: LeetCode (643)
Difficulty: Easy

Approach:
- Use a fixed-size sliding window of size k.
- Calculate the initial window sum.
- Slide the window by adding the new element and removing the old one.
- Keep track of the maximum sum.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int n = nums.size();

        long long sum = 0;

        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        long long maxSum = sum;

        for (int i = k; i < n; i++) {

            sum += nums[i];
            sum -= nums[i - k];

            maxSum = max(maxSum, sum);
        }

        return (double)maxSum / k;
    }
};
