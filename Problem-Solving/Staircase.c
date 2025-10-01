/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void staircase(int n) {
    int line = 0;  // Track which line of the staircase we're printing
    
    while (line < n) { 
        // Print spaces: decrease as line increases
        for(int i = 0; i < n - line - 1; i++){
            printf(" ");
        }
        // Print '#' symbols: increase as line increases
        for (int i = line; i >= 0; i--){
          printf("#");  
        }
        printf("\n");  // Move to next line
        line+=1; 
    }
}

int main()
{
    int n = parse_int(ltrim(rtrim(readline())));  // Read staircase size

    staircase(n);  // Print staircase

    return 0;
}
