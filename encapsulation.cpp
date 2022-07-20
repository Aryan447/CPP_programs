#include <iostream>
using namespace std;

class Rectangle {
  public:
    int length;
    int breadth;
    Rectangle(int length, int breadth) : length(length), breadth(breadth) {}
    int Area() {
      return length * breadth;
    }
};

int main() {
    int length, breadth;
    cout<<"Enter length: ";
    cin>>length;
    cout<<"Enter breadth: ";
    cin>>breadth;
    Rectangle rect(length, breadth);
    cout << "Area = " << rect.Area()<<endl;
    return 0;
}