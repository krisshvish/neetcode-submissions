class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        vector<int> maxi(3);

        for (auto t : triplets) {
            if (t[0] <= target[0] && t[1] <= target[1] && t[2] <= target[2]) {
                if (maxi[0] < t[0]) maxi[0] = t[0];
                if (maxi[1] < t[1]) maxi[1] = t[1];
                if (maxi[2] < t[2]) maxi[2] = t[2];
            }
        }

        for (int i = 0; i < 3; i++) {
            if (target[i] != maxi[i]) return false;
        }

        return true;
    }
};
