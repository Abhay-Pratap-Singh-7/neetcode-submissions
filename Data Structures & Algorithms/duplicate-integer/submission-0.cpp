class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hash;
        for ( int i : nums ) {
            if ( hash.contains(i) ) {
                return true;
            }
            hash.insert(i);
        }
        return false;
    }
};