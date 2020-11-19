#include "sortings.h"

void insertion_sort(int* arr, int size) {
	for (int i = 1; i < size - 1; ++i) {
		bool swapped = false;
		for (int j = i; j < size; ++j) {
			while (arr[j] < arr[j - 1]) {
				int t = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = t;
				--j;
				swapped = true;
			}
		}
		if (!swapped) { break; }
	}
}