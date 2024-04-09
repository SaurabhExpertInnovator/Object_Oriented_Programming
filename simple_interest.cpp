//C++ Program to calculate simple interest
#include<iostream>
using namespace std;
int main(){
int p,t;
float r;
cout<<"Enter Principle amount : ";
cin>>p;
cout<<"Enter rate : ";
cin>>r;
cout<<"Enter time period : ";
cin>>t;

float simple_interest =(p*r*t)/100;
cout<< "The interest amount is : "<<simple_interest;
float total = p+simple_interest;
cout<<"\nThe total amount of principle is : "<< total;
return 0;
}
