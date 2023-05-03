#include<iostream>
using namespace std;

class A{
    public:
    int a;
    A():a(0)
    {
        
    }
    A(int x):a(x)
    {
        
    }
    A(const A &obj)
    {
        cout<<"Copy Constructor"<<endl;
        this->a=obj.a;
    }
};
int main()
{
    A obj1;
    A obj2(10);
    A obj3=obj2;
    A obj4(obj3);
    cout<<obj3.a<<endl;
    return 0;
}
