//C++ Program to use delimiter(any special character which does not allow to take input after special character)
#include<iostream>
using namespace std;
int main(){
  string name;
  cout<<"Enter your name : ";
  getline(cin,name,'@');
  cout<<"Your name is : "<<name;
}
