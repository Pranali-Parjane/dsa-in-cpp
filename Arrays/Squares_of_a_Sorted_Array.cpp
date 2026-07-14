/*
Problem: Squares of a Sorted Array
Platform: LeetCode (977)
Difficulty: Easy

Approach:
- Use two pointers from both ends of the array.
- Compare the absolute values.
- Place the larger square at the end of the result array.

Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(n);

        int left = 0;
        int right = n - 1;
        int index = n - 1;

        while (left <= right) {

            if (abs(nums[left]) >= abs(nums[right])) {
                ans[index] = nums[left] * nums[left];
                left++;
            }
            else {
                ans[index] = nums[right] * nums[right];
                right--;
            }

            index--;
        }

        return ans;
    }
};
