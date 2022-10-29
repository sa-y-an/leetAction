func twoEditWords(queries []string, dictionary []string) []string {
    
    n := len(queries[0])
    ans := []string{}
    for _,query := range(queries) {
        for _,word := range(dictionary){
            match := 0
            for i := 0 ; i < n ; i++{
                if( word[i]-query[i] == 0 ) {
                    match++
                }
            }
            if match >= n-2 {
                ans = append(ans,query)
                break
            }
        }
    }
    return ans
    
}