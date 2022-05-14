class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string nums = to_string(num);
        int n = nums.size();
        
        int pos = 0;
        int j = k-1;
        
        string temp;
        int ans = 0;
        for( int i = 0 ; i <= n-k ; i++){
            temp = nums.substr(i,k);
            pos = stoi(temp);
            // cout<<pos<<" ";
            if( pos != 0 and num%pos == 0 )ans++;
        }
        // cout<<"\n";
        return ans;
    }
};