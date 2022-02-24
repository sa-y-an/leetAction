static int x=[](){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

const int N = 1e5+10;
const int n = 5e4+1;

class Solution {
public:  
    int arr[N];
    
    vector<int> sortArray(vector<int>& nums) {
        for( int num : nums){
            arr[num+n] += 1;  
        } 
        int k = 0;
        for( int i = 0 ; i < N ; i++ ){
            if( arr[i] > 0){
                while( arr[i]--) nums[k] = i-n , k++;
            }
        }
        
        return nums;
    }
};