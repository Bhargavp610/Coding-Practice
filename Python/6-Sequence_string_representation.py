# Approach: Loop from 1 to n, convert each number to string, and concatenate into one result
if __name__ == '__main__':
    n = int(input())
    result = ""
    
    for i in range(1, n+1):
        result += str(i)
    print(result)
