func dominantIndex(nums []int) int {
    
    max := 0
    pos := -1
    for i,v := range (nums ){
        if v > max {
            max = v
            pos = i
        }
    }
    
    for idx,num := range(nums){
        if idx == pos {
            continue
        }else if num*2 > max {
            return -1
        }
    }
    
    return pos
}