/*
 * Approach:
 * Iterate through each of the three categories.
 * Compare Alice's and Bob's scores:
 *   - Increment Alice's score if her value is higher.
 *   - Increment Bob's score if his value is higher.
 * Ignore if they are equal.
 * Return both scores in an array.
 */
int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {
    int* result = malloc(2 * sizeof(int));
    int a_score = 0, b_score = 0;
    
    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) {
            a_score++;
        } else if (a[i] < b[i]) {
            b_score++;
        }
    }
    result[0] = a_score;   // Alice's score
    result[1] = b_score;   // Bob's score
    *result_count = 2;
    
    return result;
}
