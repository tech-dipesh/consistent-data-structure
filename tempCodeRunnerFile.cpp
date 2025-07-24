#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Initialize the array
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

    // Using a loop to simulate slicing arr[1:5:2] (start at index 1, end before 5, step by 2)
    for (int i = 1; i < 5; i += 2) {
        cout << arr[i] << " ";  // Output: 2 4
    }
    cout <<endl;
    
    return 0;
}