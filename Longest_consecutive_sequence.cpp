

//Leetcode function
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
