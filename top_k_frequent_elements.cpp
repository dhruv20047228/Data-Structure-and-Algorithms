class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            //Hash Map creation where there will be keys and value
            unordered_map<int, int> count;
            for(int cnt: nums) { // in nums vector, cnt will check every single element
                count[cnt]++;
            }
    
            vector<pair<int, int>> array;
            for(const auto& pr : count){// auto checks data type by itself.
                array.push_back({pr.second, pr.first}); // first is keys, second is values
            }
            sort(array.rbegin(), array.rend());
    
            vector<int> result;
            for(int i = 0; i < k; i++){
                result.push_back(array[i].second); // pushes the values as result
            }
            return result;
        }
    };