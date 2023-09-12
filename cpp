class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
          vector<int> result;
    
    // Find the sum of elements in the array
    long long sum = 0;
    for (int num : arr) {
        sum += num;
    }
    
    // Find the sum of squares of elements in the array
    long long sumOfSquares = 0;
    for (int num : arr) {
        sumOfSquares += (long long)num * num;
    }
    
    // Calculate the expected sum and sum of squares for numbers 1 to n
    long long expectedSum = (long long)n * (n + 1) / 2;
    long long expectedSumOfSquares = (long long)n * (n + 1) * (2 * n + 1) / 6;
    
    // Find the difference between the actual and expected sums
    long long sumDiff = sum - expectedSum;
    long long sumOfSquaresDiff = sumOfSquares - expectedSumOfSquares;
    
    // The difference in sums is the duplicate number, and the difference in sum of squares is the missing number
    int duplicate = (sumDiff + sumOfSquaresDiff / sumDiff) / 2;
    int missing = duplicate - sumDiff;
    
    result.push_back(duplicate);
    result.push_back(missing);
    
    return result;
}
    
};
