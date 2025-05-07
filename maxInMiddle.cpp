#include <iostream>
using namespace std;


bool isMaxInMiddle(int arr[], int size);


int main() {

	int size = 5;
	int arr[5] = {1, 10, 9, 3, 4};

	if(isMaxInMiddle(arr, size)) {
		cout << "The maximum element is in the middle!\n";
	}
	else {
		cout << "The maximum element is NOT in the middle.\n";
	}
}


bool isMaxInMiddle(int arr[], int size) {

	if(size == 0){
		return false;
	}

	int curr_max = arr[0];
	int index_of_max = 0;

	for(int a = 0; a < size; ++a) {
	
		if(arr[a] > curr_max) {	
			curr_max = arr[a];
			index_of_max = a;
		}
	}

	return (index_of_max == size / 2);
}