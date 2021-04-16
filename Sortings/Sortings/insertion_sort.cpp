#include "sortings.h"

void insertion_sort(int* arr, int size) {
	for (int j = 1; j < size; ++j) {
		while (arr[j] < arr[j - 1]) {
			int t = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = t;							 
			--j;										
		}											 
	}												
}
