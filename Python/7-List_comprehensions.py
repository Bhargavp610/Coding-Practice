if __name__ == '__main__':
    # Read input values for grid dimensions and the constraint
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    
    # Generate all possible (i, j, k) combinations
    # Only include those where the sum is not equal to n
    result = [[i, j, k]
              for i in range(x + 1)
              for j in range(y + 1)
              for k in range(z + 1)
              if i + j + k != n]
    
    # Print the resulting list in lexicographic order
    print(result)
