#include "sortings.h"
#include <iostream>

int partition(int*, int, int );
void quick_s1(int*, int, int);

void quick_sort(int* arr, int size) {
	quick_s1(arr, 0, size - 1);
}

void quick_s1(int* arr,int low, int high) {
	if (low < high) {
		int pivot_location = partition(arr, low, high);
		quick_s1(arr, low, pivot_location - 1);
		quick_s1(arr, pivot_location + 1, high);
	}

}

int partition(int* arr, int low, int high) {
	
	int pivot = high;
	int left_wall = low;

	for (int i = low; i < high; ++i) {
		if (arr[i] < arr[pivot]) {
			int t = arr[left_wall];
			arr[left_wall] = arr[i];
			arr[i] = t;
			++left_wall;		
		}
	}
	int t = arr[pivot];
	arr[pivot] = arr[left_wall];
	arr[left_wall] = t;

	
	


	return left_wall;
}