/*
 * Complete the 'birthdayCakeCandles' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY candles as parameter.
 */
int birthdayCakeCandles(int candles_count, int* candles) {
    int high = 0, count = 0; // high stores tallest candle, count stores how many times it appears
    
    for (int i = 0; i < candles_count; i ++){
        if ( candles[i] > high ){   // Found a new tallest candle
            high = candles[i];
            count = 1;              // Reset count for new tallest
        }
        else if ( candles[i] == high){ // Another candle with same tallest height
            count++;
        }
        
        /* 
         * Alternative approach (commented out):
         * First find max height, then loop again to count occurrences.
         * But that would be O(n^2), so the above single loop O(n) is better.
         */
    }
    
    return count; // Return how many tallest candles exist
}
