func removeDuplicates(nums []int) int {
    hole := 0
    r := 0

    for r < len(nums) {
        start := nums[r]
        nums[hole] = start
        hole++
        r++
        for r < len(nums) && nums[r] == start {
            r++
        }   
    }
    
    return hole
}