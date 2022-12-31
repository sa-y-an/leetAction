type MaxHeap []int
func (h MaxHeap) Len() int           { return len(h) }
func (h MaxHeap) Less(i, j int) bool { return h[i] > h[j] }
func (h MaxHeap) Swap(i, j int)      { h[i], h[j] = h[j], h[i] }
func (h *MaxHeap) Push(x interface{}) {
    *h = append(*h, x.(int))
}
    
func (h *MaxHeap) Pop() interface{} {
    old := *h
    x := old[0]
    *h = old[1:]
    return x
}

func minStoneSum(piles []int, k int) int {
    resp := 0
    data := MaxHeap(piles)
    heap.Init(&data)

    for k > 0 {
        data[0] -= (data[0]/2)
        heap.Fix(&data,0)
        k--
    }

    for _,v := range data {
        resp+=v
    }
    
    return resp
}