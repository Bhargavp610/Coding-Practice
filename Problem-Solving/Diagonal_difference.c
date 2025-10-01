/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int sum_left = 0, sum_right = 0;  // Initialize sums for both diagonals
    
    for (int i = 0; i < arr_rows; i++) {
        sum_left += arr[i][i];  // Left-to-right diagonal
        sum_right += arr[i][arr_columns -1 - i];  // Right-to-left diagonal
    }
    
    int diff = abs (sum_left - sum_right);  // Absolute difference
    
    return diff;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");  // Open output file stream

    int n = parse_int(ltrim(rtrim(readline())));  // Read size of square matrix

    int** arr = malloc(n * sizeof(int*));  // Allocate memory for 2D array

    for (int i = 0; i < n; i++) {
        *(arr + i) = malloc(n * (sizeof(int)));  // Allocate memory for each row

        char** arr_item_temp = split_string(rtrim(readline()));  // Read row elements

        for (int j = 0; j < n; j++) {
            int arr_item = parse_int(*(arr_item_temp + j));  // Convert string to int
            *(*(arr + i) + j) = arr_item;  // Store value in matrix
        }
    }

    int result = diagonalDifference(n, n, arr);  // Compute diagonal difference

    fprintf(fptr, "%d\n", result);  // Print result to output file

    fclose(fptr);  // Close file

    return 0;
}
