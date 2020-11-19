#include "sortings.h"

void merge(int*, int, int, int);
void merge_s1(int* arr, int b, int size);

void merge_sort(int* arr, int size) {
	merge_s1(arr, 0, size - 1);
}

void merge_s1(int* arr, int b , int size) {
	
	int m;
	if (b < size) {
		m = (b + size) / 2;
		merge_s1(arr, b, m);
		merge_s1(arr, m + 1, size);
			
		merge(arr, b, m, size);
	}
}
void merge(int* arr, int l, int m, int r) {
	int n1 = m - l + 1;
	int n2 = r - m;

	int* a = new int[n1];
	int* b = new int[n2];
	int i, j;
	for (i = 0; i < n1; ++i) {
		a[i] = arr[l+i];
	}
	for (j = 0; j < n2; ++j) {	
		b[j] = arr[m+j+1];
	}
	i = j = 0;
	int k;	

	for (k = l; i < n1 && j < n2; ++k)
	{
		if (a[i] < b[j])
		{
			arr[k] = a[i];
			++i;
		}
		else
		{
			arr[k] = b[j];
			++j;
		}
	}
	while (i < n1) {
		arr[k] = a[i];
		++i;
		++k;		
	}
	while (j < n2) {
		arr[k] = b[j];
		++j;
		++k;
	}
	
	delete a, b;
}