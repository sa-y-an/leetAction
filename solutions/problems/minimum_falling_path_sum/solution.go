func minFallingPathSum(A [][]int) int {
    res := math.MaxInt32
    N := len(A)
    dp := make([][]int, N)
    for i := range dp {
        dp[i] = make([]int, N)
    }
    for i := 0; i < N; i++ {
        dp[0][i] = A[0][i]
    }
    for i := 1; i < N; i++ {
        for j := 0; j < N; j++ {
            if j == 0 {
                dp[i][j] = A[i][j] + min(dp[i-1][j], dp[i-1][j+1])
            } else if j == N - 1 {
                dp[i][j] = A[i][j] + min(dp[i-1][j], dp[i-1][j-1])
            } else {
                dp[i][j] = A[i][j] + min(min(dp[i-1][j], dp[i-1][j-1]), dp[i-1][j+1])
            }
        }
    }
    for i := 0; i < N; i++ {
        res = min(res, dp[N-1][i])
    }
    return res
}

func min(a, b int) int {
    if a < b {
        return a
    }
    return b
}