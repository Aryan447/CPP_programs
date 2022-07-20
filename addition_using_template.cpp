#include <iostream>
using namespace std;
template <class T>

T add(T a, T b){
  T result;
  result = a + b;
  cout<<result<<endl;
  return 0;
}

int main(){
	add(2, 3);
	add(2.2, 3.3);
}