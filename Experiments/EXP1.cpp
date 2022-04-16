#include <iostream>
using namespace std;

class Swap {
    public:
    int temp, a, b;
	Swap(int a, int b){
		this->a = a;
		this->b = b;
    }
};

void swap(Swap& s1){
    cout << "\nBefore Swapping: " << s1.a << " " << s1.b;
	s1.temp = s1.a;
	s1.a = s1.b;
	s1.b = s1.temp;
	cout << "\nAfter Swapping: " << s1.a << " " << s1.b<<endl;
}
int main()
{
	Swap s(4, 6);
	swap(s);
	return 0;
}
