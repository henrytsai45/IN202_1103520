#include <iostream>
#include <vector>
using namespace std;


void printNGE(vector<int>& arr) {
    int n = arr.size();
    int stack[n];
    int top = -1;
    vector<int> nge(n, -1);

    for (int i = 0; i < n; i++) {
        while (top != -1 && arr[i] > arr[stack[top]]) {
            nge[stack[top]] = arr[i];
            top--;
        }
        top++;
        stack[top] = i;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " -> " << nge[i] << endl;
    }
}

int main() {
    vector<int> arr = {4, 5, 2, 25};

    printNGE(arr);

    return 0;
}

