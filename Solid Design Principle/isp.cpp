//-------------interface segragation principle-------------------------------//

//--------------------this the issue-------------------------------//
// #include<bits/stdc++.h>
// using namespace std;
// class machine{
//     public:
//     virtual void scan()=0;
//     virtual void print()=0;
//     virtual void fax()=0;
//     virtual ~machine(){};
// };
// class onlyprint:public machine{
//     public:
//     void scan()override{
//         cout<<"only print will want"<<endl;
//     }
//     void print()override{
//         throw runtime_error("doesn't work print ");
//     }
//     void fax()override{
//         throw runtime_error("doesn't work fax ");
//     }
// };
// class onlyscan:public machine{
//     public:
// };
// int main(){
//     onlyprint* p=new onlyprint();
//     p->scan();
//     p->print();
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
class printmachine{
    public:
    virtual void print()=0;
    ~printmachine(){};
};
class scanmachine{
    public:
    virtual void scan()=0;
    ~scanmachine(){};
};
class faxmachine{
    public:
    virtual void fax(){};
    ~faxmachine(){};
};

class printm: printmachine{
    public:
    void print() override{
        cout<<"you can print "<<endl;
    }
};
class scanm: scanmachine{
    public:
    void scan() override{
        cout<<"you can print "<<endl;
    }
};
class faxtm: faxmachine{
    public:
    void fax() override{
        cout<<"you can print "<<endl;
    }
};
int main(){
    printm *p=new printm();
    p->print();
    
    delete p;

}