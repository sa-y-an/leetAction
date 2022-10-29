func countSegments(s string) int {
    
    ans := 0
    for i := 0 ; i < len(s) ; i++ {
        run := false
        for i < len(s) && s[i] != ' '{
            i++
            run = true
        }
        if run {
            ans++
        }
    }
    
    return ans
}