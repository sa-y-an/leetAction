class Solution {
public:

    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }


    bool validMountainArray(vector<int>& arr) {
        int inc = 0 , dec = 0 ;
        int i = 0 ;
        while( i+1 < arr.size() and arr[i+1] > arr[i]) {
            inc++;
            i++;
        }
        while( i+1 < arr.size() and arr[i+1] < arr[i]) {
            dec++;
            i++;
        }
        
        if( inc and dec and inc+dec+1 == arr.size() ) return true;
        return false;
    }
};