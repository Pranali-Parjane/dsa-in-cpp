/*
Problem: Move Zeroes
Platform: LeetCode
Difficulty: Easy

Approach:
- Traverse the array once.
- Maintain a pointer 'j' for the position of the next non-zero element.
- Whenever a non-zero element is found, swap it with nums[j].

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
