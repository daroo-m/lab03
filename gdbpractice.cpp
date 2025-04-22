#include <iostream>
using namespace std;

int findMin(int arr[], int size) {
  int min = 0;

  for(int i = 0; i < size; ++i) {
    if(arr[i] < min) {
      min = arr[i];
    }
  }

  return min;
}


int main() {
  int myArray1[4] = {9494, 5849, 76949, 3838};
  int myArray2[5] = {5, 4, 3, 2, 1};
  int myArray3[20] = {4, 7, 5, 8, 4, 3, 9, 6, 4, 3, 5, 6, 8, 7, 5};

  cout << "Min element of first array is: " << findMin(myArray1, 4) << endl;
  cout << "Min element of second array is: " << findMin(myArray2, 5) << endl;
  cout << "Min element of third array is: " << findMin(myArray3, 20) << endl;
}
