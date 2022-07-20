#include <iostream>
using namespace std;

class base_class {
	public:
	void show(){
		cout << "Hello from base_class \n";
	}
};

class B : public virtual base_class {
};

class C : public virtual base_class {
};

class D : public B, public C {
};

int main()
{
	D object;
	object.show();
}
