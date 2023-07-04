#include<iostream>
using namespace std;

void getQuotient(){
    int num1,num2,result;
    cout<<"Enter num1 and num2"<<endl;
    cin>>num1>>num2;

    if (num2==0)
    {
        throw 10;
    }
    result=num1/num2;

    cout<<"Result="<<result<<endl;
    
}
int main()
{
    try{
        getQuotient();
    }
    catch(int x){
        cout<<"Error:You can't devide by zero"<<endl;
    }
    return 0;
}