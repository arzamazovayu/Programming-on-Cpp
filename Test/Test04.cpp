#include <iostream>

class Stack {
public:
	static const int size = 10;
	int arr[size];
	int curSize;

	Stack() : curSize(0) {}

	void reset() {
		for (int i = 0; i < size; ++i) {
			arr[i] = 0;
		}
		curSize = 0;
	}

	bool push(int k) {
		if (curSize == size) {
			return false;
		}
		else {
			arr[curSize] = k;
			curSize += 1;
			return true;
		}
	}

	int pop() {
		if (curSize == 0) {
			std::cout << "The array is empty!\n";
			return 0;
		}
		else {
			int t = arr[curSize-1];
			curSize -= 1;
			return t;
		}
	}

	void print() {
		std::cout << "( ";
		for (int i = 0; i < curSize; ++i) {
			std::cout << arr[i] << " ";
		}
		std::cout << ")\n";
	}

};

int main()
{
	Stack stack;
	stack.reset();
	stack.print();
	stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.print();
	stack.pop();
	stack.print();
	stack.pop();
	stack.pop();
	stack.print();
	return 0;
}
