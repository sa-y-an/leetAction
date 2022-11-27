func numberOfArithmeticSlices(nums []int) int {
    res := 0
    dp := make([]map[int]int, len(nums)) 
    for i, x := range nums {
        dp[i] = make(map[int]int)
        for j, y := range nums[:i] {
            d := x - y
            res += dp[j][d]
            dp[i][d] += dp[j][d] + 1
        }
    }
    return res
}