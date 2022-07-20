#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    string st;
    string st2;

    cout<<"Enter something you want to store in file ";
    getline(cin , st);  // getline saving string with white space
    ofstream out("file_handling.txt");
    out<<st;
    out.close();
    ifstream in("file_handling.txt");
    getline(in, st2);
    in>>st2;
    cout<<"File saved as file_handling.txt"<<endl;
    cout<<st2<<endl;
    return 0;
}