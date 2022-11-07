class Solution {
public:
    

    void makeArr( string & str , vector <int> & version){
        
        int i = 0;
        const int n = str.size();
        while( i < n){
            string number;
            while( i < n and str[i] != '.') {
                if( not number.empty() or str[i] != '0')
                    number.push_back(str[i]);
                i++;
            }
            // cout<<number<<" ";
            int num = 0;
            if( number.size()) num = stoi(number);
            // int num = 0;
            version.push_back(num);
            i++;
        }
        
            
        // cout<<"\n";
        
        
    }
    
    int comp(vector <int> &v1 , vector <int> &v2){
        
        int l = 0 , r = 0 , lmax = v1.size() , rmax = v2.size();
        
        while( l < lmax and r < rmax){
            if( v1[l] > v2[r] ) return 1;
            if( v1[l] < v2[r] ) return -1;
            else l++, r++;
            
        }
        
        if( l < lmax ) if( accumulate(v1.begin()+l, v1.end(),0) > 0 ) return 1;
        if( r < rmax ) if( accumulate(v2.begin()+r , v2.end(), 0 ) > 0 ) return -1;
        
        return 0;
    }
    
    
    int compareVersion(string version1, string version2) {
        vector <int> arr1, arr2;
        makeArr(version1, arr1);
        makeArr(version2, arr2);
        
        return comp(arr1,arr2);
    }
};