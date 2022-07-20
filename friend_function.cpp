#include<iostream>
using namespace std;

class TV{
    private:
    TV(){
        cout<<"Watch TV"<<endl;
    }
    friend class TV2;
};
class TV2{
    public:
    TV2(){
        TV();
    }

};
int main(){
    TV2 obj1;
    return 0;
}