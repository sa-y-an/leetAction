#pragma GCC optimize("Ofast")
#pragma GCC target("tune=native")


class Solution {
public:

    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    
bool canArrange(vector<int>& arr, int k) {
        
        vector < vector <int> > modulos(k);
        
        for( int num : arr ){
            int temp = num%k;
            if(temp < 0 ) temp = k + temp; 
            if( temp >= 0 ) modulos[temp].push_back(num);
        }
        
        
        
        if( modulos[0].size()%2 != 0 ) return false;
        
        for( int num : arr ){
            int x = num%k;
            if(x < 0 ) x = k+x ;
            int comp = k - x;
            
            if( comp == k ) continue;
            
            if( comp > 0 and modulos[comp].size() == 0 ) return false;
            
            if(comp > 0 ) modulos[comp].pop_back();  
        }


     
    return true;
}


        
        
};