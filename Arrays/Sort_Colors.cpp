/*
Problem: Sort Colors
Platform: LeetCode
Difficulty: Medium

Approach:
- Dutch National Flag Algorithm.
- Maintain three pointers:
  low -> next position for 0
  mid -> current element
  high -> next position for 2

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {

        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while (mid <= high) {

            if (nums[mid] == 0) {
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
