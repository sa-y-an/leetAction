class Solution {
public:
    
    
    int arr[50];
    
    Solution() {
        memset(arr,-1,sizeof(arr));
        arr[1] = 1;
        arr[2] = 2;
    } 
    
    int climbStairs(int n) {
        if(arr[n] != -1 ) return arr[n];
        return arr[n] = climbStairs(n-1) + climbStairs(n-2);
    }
};