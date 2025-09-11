#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(int arr[], int size, int key) {    
vector<int> indices;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            indices.push_back(i);
        }
    }
    return indices;
}
int main() {
    int arr[] = {};  //Empty
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 1;

    vector<int> result = findIndices(arr, size, key);

    cout << "Indices of " << key << ": ";
    if (result.empty()) {
    cout << "Key not found";
    }
    else {
        for (int idx : result) {
        cout << idx << " ";
        }}
    cout << "\n";
    return 0;
}