#include<iostream>
using namespace std;
int main()
{
    float num1,num2,sum,avg;
    cout<<"Enter any two number:"<<endl; //prompt
    cin>>num1>>num2;

    sum=num1+num2;
    avg=sum/2;

    cout<<"Sum ="<<sum<<endl;
    cout<<"Average ="<<avg<<endl;

    return 0;

}