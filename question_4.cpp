#include <iostream>
#include <vector>
using namespace std;

void interleaveVector(vector<int>& v) {
    int n = v.size();
    int half = n / 2;
    vector<int> firstHalf(v.begin(), v.begin() + half);

    for (int i = 0; i < half; i++) {
        v[2 * i] = firstHalf[i];
        v[2 * i + 1] = v[half + i];
    }
}

void printVector(const vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v = {1, 2, 3, 4};

    cout << "Original vector: ";
    printVector(v);

    interleaveVector(v);

    cout << "Interleaved vector: ";
    printVector(v);

    return 0;
}
