#include <iostream>
using namespace std;

void comb(int n, int r, int *arr, int sz) {
    for (int i = n; i >= r; i --) {
        // choose the first element
        arr[r - 1] = i;
        if (r > 1) { // if still needs to choose
            // recursive into smaller problem
            comb(i - 1, r - 1, arr, sz);
        } else {
            // print out one solution
            for (int i = 0; i < sz; i ++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    const int N = 5;
    const int M = 3;
    int *arr = new int[M];
    comb(N, M, arr, M);
    delete []arr;
    return 0;
}
