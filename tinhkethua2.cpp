#include<iostream>
#include<string>
using namespace std;
class Father {
public:
	Father() {
		cout << this << endl;
	}
};
class Child : private Father {
public:
	Child() {
		cout << this << endl;
	}
};
int main() {
	Child Child1;
	Father Father1;

}