/*
Problem: Trapping Rain Water
Platform: LeetCode
Difficulty: Hard

Approach:
- Two Pointer Approach.
- Keep track of leftMax and rightMax.
- Move the pointer with the smaller maximum height.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int trap(vector<int>& height) {

        int left = 0;
        int right = height.size() - 1;

        int leftMax = 0;
        int rightMax = 0;

        int water = 0;

        while (left < right) {

            leftMax = max(leftMax, height[left]);
            rightMax = max(rightMax, height[right]);

            if (leftMax < rightMax) {
                water += leftMax - height[left];
                left++;
            }
            else {
                water += rightMax - height[right];
                right--;
            }
        }

        return water;
    }
};
