import "strconv"

func evalRPN(tokens []string) int {
	stack := []int{}
	for _, token := range tokens {
		if token != "+" && token != "-" && token != "*" && token != "/" {
			num, _ := strconv.Atoi(token)
			stack = append(stack, num)
			continue
		}

		b := stack[len(stack)-1]
		a := stack[len(stack)-2]
		stack = stack[:len(stack)-2]
		var c int
		if token == "+" {
			c = a + b
		} else if token == "-" {
			c = a - b
		} else if token == "*" {
			c = a * b
		} else {
			c = a / b
		}
		stack = append(stack, c)
	}

	return stack[0]
}