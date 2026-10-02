#include "converter.hpp"
#include<iostream>
#include<string>

using namespace std;

int main(){
    double x, y;
    cout<<"Enter the value of x and y"<<endl;
    cin>>x>>y;
    Converter obj(x,y);
   cout <<"Result: "<< obj.NumConvert()<<endl;
}