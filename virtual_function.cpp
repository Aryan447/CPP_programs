#include<iostream>
using namespace std;

class base{
	public:
	virtual void display(){
		cout<<"hello from base class\n";
	}
};
class derived : public base{
	public:
	void display(){
		cout<<"hello from derived class\n";
	}
};

int main(){
	base* b;
	derived d;
	b = &d;
	b->display();
	return 0;
}