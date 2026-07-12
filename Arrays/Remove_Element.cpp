/*
Problem: Remove Element
Platform: LeetCode (27)
Difficulty: Easy

Approach:
- Traverse the array once.
- Copy every element that is not equal to the given value.
- Return the new length of the array.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int n = nums.size();
        int k = 0;

        for (int i = 0; i < n; i++) {

            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};
