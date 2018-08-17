#include <iostream>
using namespace std;
#include <process.h>
///////////////////////////////////////////////////////////////
class Stack {
protected:
	enum { MAX = 3 };
	int st[MAX];
	int top;
public:
	Stack() {
		top = -1;
	}
	void push(int var) {
		st[++top] = var;
	}
	int pop() {
		return st[top--];
	}
};
///////////////////////////////////////////////////////////////
class Stack2 : public Stack {
public:
	Stack2() : Stack() {}
	void push(int var) {
		if (top >= MAX - 1) {
			cout << endl << "Error: stack overhead"; exit(1);
		}
		Stack::push(var);
	}
	int pop() {
		if (top < 0) {
			cout << endl << "Error: stack is null "; exit(1);
		}
		return Stack::pop();
	}
};
///////////////////////////////////////////////////////////////

int main() {
	Stack2 s;

	s.push(11);
	s.push(213);
	s.push(123);

	cout << endl << s.pop();
	cout << endl << s.pop();
	cout << endl << s.pop();
	//cout << endl << s.pop() << endl;
	system("PAUSE");
	return 0;
}