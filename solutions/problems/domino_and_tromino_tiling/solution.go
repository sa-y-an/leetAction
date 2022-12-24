func numTilings(n int) int {
    if n == 0 {
        return 0
    }
    if n == 1 {
        return 1
    }
    if n == 2 {
        return 2
    }
    m := make([]int, n+1)
    m[0] = 1
    m[1] = 1
    m[2] = 2
    for i := 3; i < n+1; i++ {
        m[i] = (2 * m[i-1] + m[i-3]) % 1_000_000_007
    } 
    return m[n]
}
