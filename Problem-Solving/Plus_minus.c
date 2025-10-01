/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void plusMinus(int arr_count, int* arr) {
    float pos = 0, neg = 0, zero = 0;  // Counters for positives, negatives, and zeros
    
    for (int i = 0; i < arr_count; i++) {
        if (arr[i] > 0) {
            pos++;  // Increment positive count
        }
        else if (arr[i] < 0) {
            neg++;  // Increment negative count
        }
        else{
            zero++; // Increment zero count
        }
    }
    
    float total = (float)arr_count;  // Total number of elements as float for division
    
    // Print ratios with 6 decimal places
    printf("%.6f\n", pos/total);
    printf("%.6f\n", neg/total);
    printf("%.6f\n", zero/total);
}

int main()
{
    int n = parse_int(ltrim(rtrim(readline())));  // Read number of elements

    char** arr_temp = split_string(rtrim(readline()));  // Read array elements

    int* arr = malloc(n * sizeof(int));  // Allocate memory for array

    for (int i = 0; i < n; i++) {
        int arr_item = parse_int(*(arr_temp + i));  // Convert to int
        *(arr + i) = arr_item;  // Store element
    }

    plusMinus(n, arr);  // Call function

    return 0;
}
