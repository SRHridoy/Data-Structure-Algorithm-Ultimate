// C++ program to find the second largest element in the array
#include <iostream>
using namespace std;
 
 
int secondLargest(int arr[], int n) {
    int largest = 0, secondLargest = -1;
 
    // finding the largest element in the array
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[largest])
            largest = i;
    }
 
    // finding the largest element in the array excluding
    // the largest element calculated above
    for (int i = 0; i < n; i++) {
        if (arr[i] != arr[largest]) {
            // first change the value of second largest
            // as soon as the next element is found
            if (secondLargest == -1)
                secondLargest = i;
            else if (arr[i] > arr[secondLargest])
                secondLargest = i;
        }
    }
    return secondLargest;
}
 
 
int main() {
    int arr[] = { 12, 35, 1, 10, 34, 1 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int second_Largest = secondLargest(arr, n);
    if (second_Largest == -1)
        cout << "Second largest didn't exit\n";
    else
        cout << "Second largest : " << arr[second_Largest];
}