func largestPerimeter(nums []int) int {
    
    n := len(nums);
    sort.Slice(nums, func(i, j int) bool {
        return nums[i] > nums[j]
    })

    i := 0
    for i < n-2 {
        if nums[i] < nums[i+1] + nums[i+2] {
            return nums[i] + nums[i+1] + nums[i+2]
        }
        i++
    }

    return 0;
}