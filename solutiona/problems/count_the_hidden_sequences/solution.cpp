class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        
       long int count = 0, maxNum = 0, minNum = 0;
        
       for(int i: differences){
          count += i;
          maxNum = max(maxNum, count);
          minNum = min(minNum, count);
       }
        
        long int z = 0 ;

      return max(z, (upper-lower) - (maxNum-minNum)+1);   
        
    }
};