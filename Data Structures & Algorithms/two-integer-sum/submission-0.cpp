class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        vector<int> result;
        int diff;
        for ( int i = 0; i < nums.size(); i++ ) {
            diff = target - nums[i];
            if ( hash.contains(diff) ) {
                result.push_back(hash[diff]);
                result.push_back(i);
                return result;
            }
            hash.insert({nums[i], i});
        }
        return result;
    }
};
