func uniqueOccurrences(arr []int) bool {
    umap := map[int]int{}
    for _,v := range(arr) {
       umap[v]++
    }

    mpp := map[int]bool{}
    for _,v := range(umap){
        if mpp[v] {
            return false
        }
        mpp[v] = true
    }

    return true
}