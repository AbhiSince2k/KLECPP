#include <iostream>
using namespace std;

class A{
public:
int a;
A()
{
    this->a=0;
}
A(int a){
    this->a=a;
}
void printData()
{
    cout<<a<<endl;
}
// Remove the comment and comment the next function
void printData() const{
    cout<<this->a<<endl;
}
// void modifyData(int x)const{
//     this->a+=x;
// }
};
int main(){
    const A obj(10);
    // obj.modifyData(5);
    // obj.printData();
    return 0;
}
