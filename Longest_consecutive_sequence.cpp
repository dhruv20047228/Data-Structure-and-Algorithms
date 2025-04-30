//128.Longest Consectuive Sequence

//Leetcode function(Brute Force)
int longestConsecutive(vector<int>& nums) {
    int res = 0;
    unordered_set<int> store(nums.begin(), nums.end());//unordered set in used here as data structure

    for (int num : nums) {
        int streak = 0, curr = num;
        while (store.find(curr) != store.end()) {
            streak++;
            curr++;
        }
        res = max(res, streak); //// res = (res > streak) ? res : streak;
        // res indicates maximum consecutive sequence and streak indicates current maximum consecutive sequence
    }
    return res;
}


// time limit exceeded

// Sorting
class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            if (nums.empty()) return 0;
            sort(nums.begin(), nums.end());
    
            int res = 0, curr = nums[0], streak = 0, i = 0;
            
            while (i < nums.size()) {
                if (curr != nums[i]) {
                    curr = nums[i];
                    streak = 0;
                }
                while (i < nums.size() && nums[i] == curr) {
                    i++;
                }
                streak++;
                curr++;
                res = max(res, streak);
            }
            return res;
        }
    };
    //Time complexity O(nlog n)
    // Space complexity O(n)