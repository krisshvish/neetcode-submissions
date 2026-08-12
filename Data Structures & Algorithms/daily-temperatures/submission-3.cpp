class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size());
        vector<std::pair<int,int>> stacker;

        for (int i = 0; i < temperatures.size(); i++) {
            while (stacker.size() && temperatures[i] > stacker.back().first) {
                res[stacker.back().second] = i - stacker.back().second;
                stacker.pop_back();
            }
            stacker.push_back({temperatures[i], i});
        }

        return res;
    }
};
