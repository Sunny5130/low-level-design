#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void method1(){
        cout<<"I am class A method"<<endl;
    }
};
class B{
    public:
    A* a;   // B class mai A class ka reference de diya hai menas humane A call ka pointer create kiya hai
    B(){
        a=new A();    //jab B class ka object create hoga toh constructor call hoga toh  then A ki memory cretae hogi
    }
    ~B(){
        cout<<"object deleted";
    }
    void method2(){
        cout<<"I am class B method"<<endl;
    }
};
int main(){
    B* b=new B();
    b->method2();
    b->a->method1();

    delete b;
    return 0;
}