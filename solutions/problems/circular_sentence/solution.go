func isCircularSentence(s string) bool {
    
    n := len(s)
    if s[0] != s[n-1] {
        return false;
    }
    
    arr := strings.Split(s," ")
    m := len(arr)
    for i := 0 ; i < m-1 ; i++ {
        if arr[i][len(arr[i])-1] != arr[i+1][0] {
            return false
        }
    }
    
    return true
}