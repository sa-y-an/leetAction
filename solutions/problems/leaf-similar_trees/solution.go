/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func leafSimilar(root1 *TreeNode, root2 *TreeNode) bool {
    if root1 == root2 {
        return true
    }
    
    if root1 == nil || root2 == nil {
        return false
    }
    
    ch1, ch2 := getLeaves(root1), getLeaves(root2)
    
    for {
        val1, ok1 := <- ch1
        val2, ok2 := <- ch2
        
        if !ok1 && !ok2 {
            return true
        }
        
        if ok1 != ok2 || val1 != val2 {
            return false
        }
    }
    
    return true
}

func getLeaves(root *TreeNode) chan int {
    ch := make(chan int)
    
    go func() {
        stack := []*TreeNode{}
        
        for {
            for root != nil {
                stack = append(stack, root)
                root = root.Left
            }
            
            n := len(stack)
            
            if n == 0 {
                break
            }
            
            node := stack[n - 1]
            stack = stack[:n - 1]
            
            if node.Left == node.Right {
                ch <- node.Val
            }
            
            root = node.Right
        }
        
        close(ch)
    }()
    
    return ch
}