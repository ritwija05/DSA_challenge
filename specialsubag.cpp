#include <vector>
#include <algorithm>
#include<string>
#include<iostream>
using namespace std;
int solve(string A) {
    int count = 0;
    int ans = 0;
    for (int i = A.size() - 1; i >= 0; i--) {
        if (A[i] == 'G') 
        {
            count++;
        } else if (A[i] == 'A') {
            ans += count;
        }
    }
    return count;
}