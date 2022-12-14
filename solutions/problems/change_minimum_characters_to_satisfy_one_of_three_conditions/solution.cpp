class Solution {
public:

  int minCharacters(string a, string b) {
      
    array<int, 26> ca = {}, cb = {};
    for (char c : a) ca[c - 'a']++;
    for (char c : b) cb[c - 'a']++;
    int M = a.size(), N = b.size(), op1 = M, op2 = N, ans = INT_MAX;
    for (int i = 0; i < 26; ++i) {
        op1 += cb[i] - ca[i];
        op2 += ca[i] - cb[i];
        if (i < 25) ans = min({ ans, op1, op2 });
        ans = min(ans, M + N - ca[i] - cb[i]);
    }
    return ans;
    }
};