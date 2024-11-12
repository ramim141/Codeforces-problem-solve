def solve():
    t = int(input())
    
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))

        total_sum = sum(a)
        if total_sum % n != 0:
            print(-1)  # Impossible to balance
            continue

        target = total_sum // n
        operations = [0] * n
        
        for i in range(n):
            operations[i] = target - a[i]

        # To balance the array, we keep track of how many operations we need to perform
        result = []
        for i in range(n):
            if operations[i] > 0:
                # We need to make `operations[i]` increases
                result.append((i, operations[i]))  # Store index and number of operations
            else:
                result.append((i, 0))  # No operation needed

        # Print the results for this test case
        print(" ".join(str(op) for idx, op in result))

def main():
    solve()

if __name__ == "__main__":
    main()
