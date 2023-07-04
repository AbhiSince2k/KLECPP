#include<iostream>
using namespace std;

int main()
{
    int num1,num2,result;
    cout<<"Enter num1 & num2"<<endl;
    cin>>num1>>num2;

    try{
        if (num2==0)
        {
            throw "Division by zero";
        }
        result=num1/num2;
        cout<<"Result:"<<result<<endl;
        
    }
    catch(const char*x)
    {
        cout<<"Error:"<<x<<endl;
    }
    //cout<<"After catch block"<<endl;
    return 0;
}