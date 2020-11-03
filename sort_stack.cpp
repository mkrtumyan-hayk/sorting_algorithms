#include <iostream>
#include <stack>

template<typename T>
void f_sort(std::stack<T> &a) {
	std::stack<T> temp;
	std::stack<T> b;

	if (!a.empty()) {
		b.push(a.top());
		a.pop();
	}

	while (!a.empty()) {
		if (a.top() <= b.top()) {
			b.push(a.top());
			a.pop();
		}
		else {
			while (!b.empty() && a.top() > b.top() ) {
				temp.push(b.top());
				b.pop();
			}
			b.push(a.top());
			a.pop();
			while (!temp.empty()) {
				b.push(temp.top());
				temp.pop();
			}
		}	
	}
	while (!b.empty()) {
		a.push(b.top());
		b.pop();
	}
}