/*
Problem: Fruit Into Baskets
Platform: LeetCode (904)
Difficulty: Medium

Approach:
- Use a sliding window with a hash map.
- Store the frequency of each fruit type in the current window.
- If more than two fruit types are present, shrink the window from the left.
- Track the maximum window size.

Time Complexity: O(n)
Space Complexity: O(2) ≈ O(1)
*/

class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        unordered_map<int, int> freq;
        int left = 0;
        int maxFruits = 0;

        for (int right = 0; right < fruits.size(); right++) {

            freq[fruits[right]]++;

            while (freq.size() > 2) {

                freq[fruits[left]]--;

                if (freq[fruits[left]] == 0) {
                    freq.erase(fruits[left]);
                }

                left++;
            }

            maxFruits = max(maxFruits, right - left + 1);
        }

        return maxFruits;
    }
};
