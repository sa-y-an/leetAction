class RandomizedSet {
    unordered_map <int,int> mpp;
    vector <int> arr;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if( !mpp.count(val) ){
            mpp[val] = arr.size();
            arr.push_back(val);
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if( !mpp.count(val) ) return false;
        int idx = mpp[val];
        mpp[arr.back()] = idx;
        swap(arr[idx], arr[arr.size()-1]);
        arr.pop_back();
        mpp.erase(val);
        return true;
    }
    
    int getRandom() {
        int sz = arr.size();
        int idx = rand()%sz;
        return arr[idx];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */