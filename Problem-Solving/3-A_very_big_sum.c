/*
 * Complete the 'aVeryBigSum' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts LONG_INTEGER_ARRAY ar as parameter.
 */

long aVeryBigSum(int ar_count, long* ar) {
    long sum = 0;  // Initialize sum as long to handle very large integers
    for (int i = 0; i < ar_count; i++) {
        sum += ar[i];  // Add each element to sum
    }
    
    return sum;  // Return the total sum
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");  // Open output file stream

    int ar_count = parse_int(ltrim(rtrim(readline())));  // Read number of elements

    char** ar_temp = split_string(rtrim(readline()));  // Read array elements as strings

    long* ar = malloc(ar_count * sizeof(long));  // Allocate memory for array of longs

    for (int i = 0; i < ar_count; i++) {
        long ar_item = parse_long(*(ar_temp + i));  // Convert string to long
        *(ar + i) = ar_item;  // Store value in array
    }

    long result = aVeryBigSum(ar_count, ar);  // Call function to calculate sum

    fprintf(fptr, "%ld\n", result);  // Print result to output file

    fclose(fptr);  // Close file

    return 0;
}
