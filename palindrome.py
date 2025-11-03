def print_palindrome_pattern(n):
    for i in range(1, n + 1):
        # Print leading spaces
        for j in range(n - i):
            print(" ", end="")
        
        # Print increasing numbers
        for j in range(1, i + 1):
            print(j, end="")
        
        # Print decreasing numbers
        for j in range(i - 1, 0, -1):
            print(j, end="")
        
        # Move to the next line after each row
        print()
print_palindrome_pattern(5)