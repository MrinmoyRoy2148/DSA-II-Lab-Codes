#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int find_max(int arr[], int n) {
    int max = arr[0];  // Initialize the max to the first element
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];  // Update max if a larger value is found
        }
    }
    return max;  // Return the maximum value found
}

int main() {
    int arr[] = {2, 10, 6, 7, 4, 5, 66, 76, 45, 34, 23};
    int n = sizeof(arr) / sizeof(arr[0]);  // Get the size of the array
    int max_item = find_max(arr, n);  // Find the maximum element in the array

    int count[max_item + 1] = {0};  // Initialize the count array (size = max_item + 1)

    // Count the frequency of each element in the array
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Update the count array with the prefix sum
    for (int i = 1; i <= max_item; i++) {
        count[i] += count[i - 1];
    }

    int output[n];  // Array to store the sorted output

    // Place the elements in the correct position in the output array
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];  // Place the element
        count[arr[i]]--;  // Decrease the count for the element
    }

    cout << "Sorted Array is:" << endl;
    for (int i = 0; i < n; i++) {
        cout << output[i] << " ";  // Print the sorted array
    }

    return 0;
}

