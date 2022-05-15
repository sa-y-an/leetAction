class Solution {
public:
    int largestCombination(vector<int>& candidates) {      
        vector <int> arr(32,0);
        int n = candidates.size();      
        for (int i = 0; i < n; i++) {
            int b = 31;
            while (candidates[i] > 0) {
                if (candidates[i] & 1 == 1) arr[b]++;
                candidates[i] = candidates[i] >> 1;
                b--;
            }
        }
        return *max_element(arr.begin(), arr.end());
    }
};