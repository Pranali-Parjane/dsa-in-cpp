/*
Problem: 3Sum Closest
Platform: LeetCode (16)
Difficulty: Medium

Approach:
- Sort the array.
- Fix one element and use two pointers to find the other two elements.
- Keep updating the closest sum whenever a better candidate is found.
- If the exact target is found, return it immediately.

Time Complexity: O(n²)
Space Complexity: O(1)
*/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        int n = nums.size();
        int closest = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < n - 2; i++) {

            int left = i + 1;
            int right = n - 1;

            while (left < right) {

                int sum = nums[i] + nums[left] + nums[right];

                if (abs(target - sum) < abs(target - closest)) {
                    closest = sum;
                }

                if (sum < target) {
                    left++;
                }
                else if (sum > target) {
                    right--;
                }
                else {
                    return sum;
                }
            }
        }

        return closest;
    }
};
