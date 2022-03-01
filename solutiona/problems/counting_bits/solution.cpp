class Solution {
public:
    vector<int> countBits(int n) {
      vector <int> ans;
        for( int num = 0 ; num <= n ; num++){
          int bitCount = 0;
          for( int bit = 31 ; bit >= 0 ; bit--){
            if( ((num>>bit)&1) ) bitCount++;
          }
          ans.push_back(bitCount);
        }
      return ans;
    }
};