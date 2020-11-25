#include <iostream>
#include <stack>
#include "sort_stack.h"


int main() {
	
	std::stack<int> stck;

	//add elements
	stck.push(345);
	stck.push(23);
	stck.push(44);
	stck.push(53);
	stck.push(24);
	stck.push(55);
	stck.push(92);
	stck.push(69);
	stck.push(200);

	//Sorting elements with function f_sort():
	f_sort(stck);

	while (!stck.empty()) {
		std::cout << stck.top() << " ";
		stck.pop();
	}

	return 0;
}
