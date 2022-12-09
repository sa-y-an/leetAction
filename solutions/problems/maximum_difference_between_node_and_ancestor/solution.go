/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func maxAncestorDiff(root *TreeNode) int {
	return maxAncRek(root, root.Val, root.Val)
}

func maxAncRek(root *TreeNode, lowestAnc, highestAnc int) int {
	if root.Val < lowestAnc {
		lowestAnc = root.Val
	}
	if root.Val > highestAnc {
		highestAnc = root.Val
	}

	if root.Left == nil && root.Right == nil {
		return highestAnc - lowestAnc
	}

	leftDiff, rightDiff := 0, 0
	if root.Left != nil {
		leftDiff = maxAncRek(root.Left, lowestAnc, highestAnc)
	}
	if root.Right != nil {
		rightDiff = maxAncRek(root.Right, lowestAnc, highestAnc)
	}
	
	if leftDiff > rightDiff {
		return leftDiff
	}
	return rightDiff
}