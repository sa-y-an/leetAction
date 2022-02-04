class Solution {
public:
    
    static int findMaxLength(vector<int>& n) {
        const int z = n.size() * 2 + 2; // use a const integer to save a O(n) call whenver size is reqd
        static int m[200002]; // static array instead of unordered_map to save hasing fucntion calls
        // since it is a binary array minimum cnt possible with is -arr.size()
        // thus we take twice to save time
        fill(m, m + z, 1e9);
        const int o = n.size(); 
        m[0 + o] = -1; // to account for zeroes
        int a = 0, b = 0;
        int l = 0;
        for (int i = 0; i < n.size(); i++) {
            if (n[i])
                b += 1;
            else
                a += 1;
            if (m[a - b + o] == 1e9)
                m[a - b + o] = i;
            else
                l = max(l, i - m[a - b + o]);
        }
        return l;

    }
};