/*
 * Approach:
 * Loop through the array and keep a running total of all elements.
 * Return the final sum as the result.
 */
int simpleArraySum(int ar_count, int* ar) {
    int count = 0;
    for(int i = 0; i < ar_count; i++) {
        count += ar[i];   // add each element to the sum
    }
    return count;
}
