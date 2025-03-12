#include <iostream>
using namespace std;

// Merge function as per pseudocode
void merge(int A[], int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1 + 1], R[n2 + 1];

    // Copy elements to temporary arrays
    for (int i = 0; i < n1; i++)
        L[i] = A[p + i];
    for (int j = 0; j < n2; j++)
        R[j] = A[q + 1 + j];

    L[n1] = INT_MAX;  // Sentinel value
    R[n2] = INT_MAX;  // Sentinel value

    int i = 0, j = 0;

    // Merge the two arrays
    for (int k = p; k <= r; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
    }
}

// Merge Sort function
void mergeSort(int A[], int p, int r) {
    if (p < r) {
        int q = p + (r - p) / 2;
        mergeSort(A, p, q);
        mergeSort(A, q + 1, r);
        merge(A, p, q, r);
    }
}

// Function to print the array
void printArray(int A[], int size) {
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
    cout << endl;
}

// Main function with given test cases
int main() {
    int A1[] = {100, 12, 15, 28, 38, 42};
    int n1 = sizeof(A1) / sizeof(A1[0]);

    int A2[] = {0, -100, 120, 21, 43, -20};
    int n2 = sizeof(A2) / sizeof(A2[0]);

    cout << "Test Case 1 - Before Sorting: ";
    printArray(A1, n1);
    mergeSort(A1, 0, n1 - 1);
    cout << "Test Case 1 - After Sorting: ";
    printArray(A1, n1);

    cout << "\nTest Case 2 - Before Sorting: ";
    printArray(A2, n2);
    mergeSort(A2, 0, n2 - 1);
    cout << "Test Case 2 - After Sorting: ";
    printArray(A2, n2);

    return 0;
}
