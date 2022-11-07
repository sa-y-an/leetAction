class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        // O(3N) solution
        
        int minDiff = INT_MAX, closestIdx = -1;
        
        // find closest index
        for( int i = 0 ; i < arr.size() ; i++){
            if( abs(arr[i]-x) < minDiff) {
                minDiff = abs(arr[i]-x);
                closestIdx = i;
            }
        }
        
        const int n = arr.size();
        
        // figure out the start and end indices
        int right = closestIdx+1 , left = closestIdx-1;
        k -= 1;
        while( k > 0){
            if( right >= n ) left -= (k) , k = 0;
            else if( left < 0 ) right += (k) , k = 0;
            else if( abs(arr[right]-x) < abs(arr[left]-x) ) right++;
            else left--;
            
            k--;
        }
        
        // return ans
        vector <int> ans;
        
        for( int i = left+1 ; i < right ; i++)
            ans.push_back(arr[i]);
        
        
        return ans;
    }
};