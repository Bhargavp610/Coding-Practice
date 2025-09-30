# Approach: Iterated from 0 to n-1 using a for loop and printed each square with exponentiation (**)

if __name__ == '__main__':
    n = int(input())
    
    for i in range(0, n):
        print(i ** 2)
