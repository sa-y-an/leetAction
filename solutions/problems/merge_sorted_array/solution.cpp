class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector <int> ret;
        int l = 0 , r = 0;
        
        while( l < m and r < n){
            if( nums1[l] < nums2[r] ) ret.push_back(nums1[l]), l++;
            else ret.push_back(nums2[r]), r++;
        }
        
        while( l < m ) ret.push_back(nums1[l]), l++;
        while( r < n ) ret.push_back(nums2[r]), r++;
        
        nums1 = ret;
    }
};