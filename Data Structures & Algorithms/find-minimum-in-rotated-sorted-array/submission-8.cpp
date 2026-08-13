class Solution {
public:
    int findMin(vector<int> &nums) {
        int size = nums.size();
        int l = 0, r = size-1, mid = 0;
        int ans = 0;

        while(l < r) {
            mid = (l+r)/2;
            if (nums[mid] > nums[r]) l = mid + 1;
            else r = mid;
        }

        return nums[l];
    }
};
