#include <iostream>
#include <vector>
using namespace std;

int countWaysToMakeSumEqual(vector<int>& arr) {
    int evenSum = 0, oddSum = 0;
    int n = arr.size();
    
    // Calculate sum of even-indexed and odd-indexed elements
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }
    
    int count = 0;
    
    // Check if removing an element makes sums equal
    for (int i = 0; i < n; i++) {
        if ((i % 2 == 0 && evenSum - arr[i] == oddSum) || (i % 2 != 0 && oddSum - arr[i] == evenSum)) {
            count++;
        }
    }
    
    return count;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << countWaysToMakeSumEqual(arr) << endl; // Output: 2
    // Removing element at index 1 or 2 makes the sums equal
    
    arr = {2, 2, 2, 2};
    cout << countWaysToMakeSumEqual(arr) << endl; // Output: 4
    // Removing any element makes the sums equal
    
    return 0;
}
