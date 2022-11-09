type StockSpanner struct {
    stack   [][]int
}


func Constructor() StockSpanner {
    return StockSpanner{[][]int{{math.MaxInt32, 0}}}
}


func (this *StockSpanner) Next(price int) int {
    span := 1
    for len(this.stack) > 0 && this.stack[len(this.stack) - 1][0] <= price {
        span = span + this.stack[len(this.stack) - 1][1]
        this.stack = this.stack[:len(this.stack) - 1]
    }
    
    this.stack = append(this.stack, []int{price, span})
    return span
}


/**
 * Your StockSpanner object will be instantiated and called as such:
 * obj := Constructor();
 * param_1 := obj.Next(price);
 */