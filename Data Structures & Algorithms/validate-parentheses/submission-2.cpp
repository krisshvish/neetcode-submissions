class Solution {
public:
    bool isValid(string s) {
        vector<char> stacker;
        map<char, char> brack = {{'}', '{'}, {')', '('}, {']', '['}};
        for (char c : s) {
            if (c == '{' || c == '[' || c == '(') {
                stacker.push_back(c);
            } else {
                if (!stacker.size()) return false;
                if (stacker.back() == brack[c]) {
                    stacker.pop_back();
                } else {
                    return false;
                }
            }
        }

        return stacker.size() == 0;
    }
};
