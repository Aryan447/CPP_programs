#include <iostream>
using namespace std;

class myClass{
    private:
    int a, b;

    public:
    void set(int x, int y){
        a = x;
        b = y;
    }
    void add(){
        cout<< a + b <<endl;
}
};

int main(){
    myClass obj1, obj2;
    obj1.set(2,4);
    obj2.set(4,6);
    obj1.add();
    obj2.add();
    return 0;
}