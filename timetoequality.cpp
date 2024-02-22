#include <vector>
#include <algorithm>
using namespace std;
int solve(vector<int> &A) {
    int maxElement = *max_element(A.begin(), A.end());
    int totalTime = 0;

    for (int num : A) {
        totalTime += maxElement - num;
    }

    return totalTime;
}