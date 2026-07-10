/*
Problem: Container With Most Water
Platform: LeetCode
Difficulty: Medium

Approach:
- Use two pointers starting from both ends of the array.
- Calculate the area formed by the two lines.
- Move the pointer pointing to the smaller height to maximize the area.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int maxArea(vector<int>& height) {

        int left = 0;
        int right = height.size() - 1;
        int maxWater = 0;

        while (left < right) {

            int width = right - left;
            int currHeight = min(height[left], height[right]);
            int area = width * currHeight;

            maxWater = max(maxWater, area);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxWater;
    }
};
