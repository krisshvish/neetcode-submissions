class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int, int> seen;
        int comp;

        for (int i = 0; i < nums.size(); i++) {
            comp = target - nums[i];

            if (seen.contains(comp)) {
                return {seen[comp], i};
            }

            seen[nums[i]] = i;
        }
    }
};
