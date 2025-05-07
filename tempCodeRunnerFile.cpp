#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool areConsecutive(vector<int>& numbers, int index = 0) {
    // Base case: if we've reached the end of the vector
    if (index >= numbers.size() - 1) {
        return true;
    }
    
    // Check if current number and next number are consecutive
    if (numbers[index + 1] != numbers[index] + 1) {
        return false;
    }
    
    // Recursive case: check the next pair
    return areConsecutive(numbers, index + 1);
}

void printVector(vector<int>& v) {
    cout << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i];
        if (i != v.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]";
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> numbers(n);
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    
    // First, sort the numbers to check consecutiveness
    sort(numbers.begin(), numbers.end());
    
    bool consecutive = areConsecutive(numbers);
    
    cout << "Sorted numbers: ";
    printVector(numbers);
    cout << endl;
    
    if (consecutive) {
        cout << "These numbers are consecutive." << endl;
    } else {
        cout << "These numbers are not consecutive." << endl;
    }
    
    return 0;
}