#include <iostream>
#include <vector>
using namespace std;

void printFirstNegativeInteger(vector<int>& arr, int k) {
    int n = arr.size();
    vector<int> result;
    vector<int> negatives;

    for (int i = 0; i < k; i++) {
        if (arr[i] < 0) {
            negatives.push_back(i);
        }
    }

    for (int i = k; i <= n; i++) {
        if (!negatives.empty()) {
            result.push_back(arr[negatives.front()]);
        } else {
            result.push_back(0);
        }

        if (!negatives.empty() && negatives.front() <= i - k) {
            negatives.erase(negatives.begin());
        }

        if (i < n && arr[i] < 0) {
            negatives.push_back(i);
        }
    }

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {-8, 2, 3, -6, 10};
    int k = 2;

    printFirstNegativeInteger(arr, k);

    return 0;
}

