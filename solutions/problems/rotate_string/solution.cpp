class Solution {
public:
    bool rotateString(string s, string goal) {
        return (goal+goal).find(s) != string :: npos and s.size() == goal.size();
    }
};