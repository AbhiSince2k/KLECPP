#include<iostream>
using namespace std;

template<typename T,typename T1>
class A{
    public:
    T x;
    T1 y;
    A(T a,T1 b)
    {
        x=a;
        y=b;
    }
    void pritData()
    {
        // prints the values of x and y
        cout<<"x:"<<x<<"y:"<<y<<endl;
    }
};

int main()
{
    float n=10.01F;
    int m=20;
    // creates an object of type A<int,int> and initializes it with the values 10.01F and 10.01F
    A<int,int>obj(n,n);
    obj.pritData();
    // creates an object of type A<float,float> and initializes it with the values 20 and 20
    A<float,float> obj1(m,m);
    obj1.pritData();
    // creates an object of type A<string,string> and initializes it with the values "KLE" and "TECH"
    A<string,string>obj3("KLE","TECH");
    obj3.pritData();
    return 0;
}
