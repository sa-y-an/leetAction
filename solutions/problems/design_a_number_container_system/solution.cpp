class NumberContainers {
    unordered_map <int,set <int> > numIdx;
    unordered_map <int, int> idx;
public:
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        
        if( idx.count(index) ){
            int num = idx[index];
            numIdx[num].erase(index);
            
            if( numIdx[num].size() == 0 )
                numIdx.erase(num);
            
        }
        
        idx[index] = number;
        numIdx[number].insert(index);
        
    }
    
    int find(int number) {
        
        if( numIdx.count(number) && numIdx[number].size() > 0 )
            return *numIdx[number].begin();
        
        return -1;
        
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */