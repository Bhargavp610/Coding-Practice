/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */
void miniMaxSum(int arr_count, int* arr) {
    long min = LONG_MAX , max = LONG_MIN; // Initialize min to max possible and max to min possible
    
    // Loop through each index and calculate sum of all elements except the current one
    for (int i = 0; i< arr_count; i++){
        long sum = 0;
        for( int j = 0; j < arr_count; j ++){
            if (i != j) {  // exclude the current index
                sum += arr[j];
            }
        }
        
        // Update minimum sum
        if (min > sum ){ 
            min = sum ;
        }
        // Update maximum sum
        if (max < sum ){ 
            max = sum ;
        }
    } 
    
    // Print results in the required format
    printf("%ld %ld", min , max);
}
