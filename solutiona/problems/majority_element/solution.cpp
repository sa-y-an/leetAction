class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map <int,int> elements;

        for ( int num : nums ){
            elements[num]++;
        }

        int majority = nums.size()/2;
        cout<<majority<<" ";
        for( auto it : elements) {
            cout<<it.first<<" "<<it.second<<"\n";
            if( it.second > majority) return it.first;
        }

        return 1;
        
    }
};