#include <iostream>
#include <stack>
#include "sortings.h"


int main() {
	
	const int n = 10;

	int a[n] = { 4,6,8,7,9,7,2,3,4,8 };
	int b[n] = { 6,7,2,8,4,6,9,36,12,89 };
	int c[n] = { 8,9,6412,87,21,3,5379,46,6515,15 };
	int d[n] = { 45,65,78,123,245,6598,7854,1236,122,36 };
	int e[n] = { 65,48,79,321,12,46,789,12,654,978 };

	//sorting array (a) with function bubble_sort():
	std::cout << "Sorting array (a) with function bubble_sort(): \n";
	bubble_sort(a, n);
	for (int i = 0; i < n; ++i) {
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;

	//sorting array (b) with function insertion_sort():
	std::cout << "\nSorting array (b) with function insertion_sort(): \n";
	insertion_sort(b, n);
	for (int i = 0; i < n; ++i) {
		std::cout << b[i] << " ";
	}
	std::cout << std::endl;


	//sorting array (c) with function selection_sort():
	std::cout << "\nSorting array (c) with function selection_sort(): \n";
	selection_sort(c, n);
	for (int i = 0; i < n; ++i) {
		std::cout << c[i] << " ";
	}
	std::cout << std::endl;


	//sorting array (d) with function merge_sort():
	std::cout << "\nSorting array (d) with function merge_sort(): \n";
	merge_sort(d, n);
	for (int i = 0; i < n; ++i) {
		std::cout << d[i] << " ";
	}
	std::cout << std::endl;


	//sorting array (e) with function quick_sort():
	std::cout << "\nSorting array (e) with function quick_sort(): \n";
	quick_sort(e, n);
	for (int i = 0; i < n; ++i) {
		std::cout << e[i] << " ";
	}
	std::cout << std::endl;


	return 0;
}