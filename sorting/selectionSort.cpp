#include <iostream>
#include <vector>
using namespace std;

vector<int> selectionSort(vector<int>& nums) { 
    int n = nums.size();

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        // find the index of the minimum element in the remaining array
        for (int j = i + 1; j < n; j++) {
            if (nums[j] < nums[minIndex]) {
                minIndex = j;
            }
        }

        // swap the found minimum element with the first element
        if (minIndex != i) {
            swap(nums[i], nums[minIndex]);
        }
    }

    return nums;
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};

    cout << "Original array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    selectionSort(arr);

    cout << "Sorted array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}