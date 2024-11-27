#include<bits/stdc++.h>
using namespace std;

long long maxScore(vector<int>& arr, int k) {
    // Max-heap to store elements in descending order
    priority_queue<int> maxHeap(arr.begin(), arr.end());

    long long score = 0;

    for (int i = 0; i < k; i++) {
        // Extract the largest element
        int maxVal = maxHeap.top();
        maxHeap.pop();

        // Add the largest value to the score
        score += maxVal;

        // Compute ceil(maxVal / 3)
        int nextVal = ceil(maxVal / 3.0);

        // Push the updated value back into the heap
        maxHeap.push(nextVal);
    }
    return score;
}

int main() {
    vector<int> arr = {10, 20, 7};
    int k = 4;
    cout << "Maximum Score: " << maxScore(arr, k) << endl;
    return 0;
}
