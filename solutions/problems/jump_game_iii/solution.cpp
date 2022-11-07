class Solution {
public:
    bool canReach(vector<int>& a, int s) {
        return s>=0&&s<a.size()&&a[s]>=0&&(!(a[s]=-a[s])||canReach(a,s+a[s])||canReach(a,s-a[s]));
    }
};