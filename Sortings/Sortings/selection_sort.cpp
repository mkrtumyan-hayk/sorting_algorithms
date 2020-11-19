#include "sortings.h"

void selection_sort(int* arr, int size) {
	for (int i = 0; i < size - 1; ++i) {
		int min = arr[i];
		int end;
		for (int j = i + 1; j < size; ++j) {
			if (min > arr[j]) {
				min = arr[j];
				end = j;
			}
		}
		if (min != arr[i]) {
			int t = arr[i];
			arr[i] = arr[end];
			arr[end] = t;
		}
	}
}