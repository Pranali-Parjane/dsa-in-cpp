/*
Problem: Remove Duplicates from Sorted Array
Platform: LeetCode (26)
Difficulty: Easy

Approach:
- Use two pointers.
- Keep one pointer at the position where the next unique element should be placed.
- Traverse the array and copy only unique elements.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();
        int k = 1;

        for (int i = 1; i < n; i++) {

            if (nums[i] != nums[i - 1]) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};
