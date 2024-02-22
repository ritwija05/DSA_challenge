#include <vector>
#include <algorithm>
using namespace std;
vector<int> solve(vector<int> &A) {
    int fat=1;
    for(int i=0;i<A.size();i++)
    {
          fat=fat*A[i];
    }
    for(int i=0;i<A.size();i++)
    {
          A[i]=fat/A[i];
    }
    return A;
}