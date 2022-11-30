func pivotInteger(n int) int {

    total := (n*(n+1))/2
    left := 0
    right := total
    for curr := 1; left < right ; curr++ {
        left += curr;
        if left == right {
            return curr;
        }
        right -= curr;
    }
    return -1
}

