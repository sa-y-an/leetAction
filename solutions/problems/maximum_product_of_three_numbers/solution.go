func max(a int, b int ) int {
    if  a > b {
        return a
    }else{
        return b
    }
}

func maximumProduct(nums []int) int {
    
    sort.Ints(nums)
    n := len(nums)
    return max(nums[0]*nums[1]*nums[n-1], 
                   nums[n-1]*nums[n-2]*nums[n-3]);
}