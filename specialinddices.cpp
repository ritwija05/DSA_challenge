#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int> &arr) {
 int n=arr.size();
     if (n == 1) {
        return 1;
    }
    if (n == 2)
        return 0;

    int sumEven = 0, sumOdd = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            sumEven += arr[i];
        else
            sumOdd += arr[i];
    }

    int currOdd = 0, currEven = arr[0], res = 0;
    int newEvenSum = 0, newOddSum = 0;

    for (int i = 1; i < n - 1; i++) {
        if (i % 2) {
            currOdd += arr[i];
            newEvenSum = currEven + sumOdd - currOdd;
            newOddSum = currOdd + sumEven - currEven - arr[i];
        } else {
            currEven += arr[i];
            newOddSum = currOdd + sumEven - currEven;
            newEvenSum = currEven + sumOdd - currOdd - arr[i];
        }

        if (newEvenSum == newOddSum) {
            res++;
        }
    }

    if (sumOdd == sumEven - arr[0]) {
        res++;
    }

    if (n % 2 == 1) {
        if (sumOdd == sumEven - arr[n - 1]) {
            res++;
        }
    } else {
        if (sumEven == sumOdd - arr[n - 1]) {
            res++;
        }
    }

    return res;
}
