# Helper function to append an element at the end
def append(lst, num):
    lst.append(num)

# Helper function to remove the first occurrence of an element
def remove(lst, num):
    lst.remove(num)
    
# Helper function to insert an element at a specific index
def insert(lst, ind, val):
    lst.insert(ind, val)

if __name__ == '__main__':
    N = int(input())  # Number of commands
    List = []         # Initialize empty list
    
    for i in range(N):
        Action = input().strip()   # Read the command
        tokens = Action.split()    # Split into command + arguments
        command = tokens[0]
        
        # Perform operations based on the command
        if command == 'append':
            append(List, int(tokens[1]))
        elif command == 'insert':
            insert(List, int(tokens[1]), int(tokens[2]))
        elif command == 'remove':
            remove(List, int(tokens[1]))
        elif command == 'print':
            print(List)
        elif command == 'sort':
            List.sort()
        elif command == 'pop':
            List.pop()
        elif command == 'reverse':
            List.reverse()
