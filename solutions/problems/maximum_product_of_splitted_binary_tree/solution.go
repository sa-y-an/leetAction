func maxProduct(root *TreeNode) int {
	m := map[*TreeNode]int{}
	sum := recursion(root, m)
	mx := 0
	for k, v := range m {
		if k == root {
			continue
		}

		mx = max(mx, (sum-v)*v)
	}
	return mx % (1000000007)
}
func recursion(node *TreeNode, m map[*TreeNode]int) int {
	if node == nil {
		return 0
	}

	left, right := recursion(node.Left, m), recursion(node.Right, m)
	v := left + right + node.Val
	m[node] = v
	return v
}
func max(x, y int) int {
	if x > y {
		return x
	}
	return y
}