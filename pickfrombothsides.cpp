#include <vector>
#include <algorithm>
using namespace std;

int maxSumAfterBOperations(vector<int>& A, int B) {
    int n = A.size();
    int maxSum = 0;

    // Calculate prefix and suffix sums
    vector<int> prefixSum(n + 1, 0);
    vector<int> suffixSum(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefixSum[i] = prefixSum[i - 1] + A[i - 1];
        suffixSum[i] = suffixSum[i - 1] + A[n - i];
    }

    // Iterate through possible number of elements to remove from the left
    for (int i = 0; i <= min(B, n); i++) {
        // Calculate sum of removed elements from left and right
        int sum = prefixSum[i] + suffixSum[min(B - i, n)];
        maxSum = max(maxSum, sum);
    }

    return maxSum;
}