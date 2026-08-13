class Solution {
public:
    int findMin(vector<int> &nums) {
        int size = nums.size();
        int l = 0, r = size-1;
        int mid = size/2;
        int ans = 0;

        while(l <= r) {
            if (nums[(mid-1+size)%size] >= nums[mid]) {
                cout<<"calc: " << (mid-1+size)%size <<"\n";
                ans = nums[mid];
                break;
            }
            else if (nums[r] < nums[mid]) l = mid+1;
            else r = mid-1;

            mid = (l+r)/2;
        }

        return ans;
    }
};
