//--------------------------------------open close principle-------------------------------//

#include<bits/stdc++.h>
using namespace std;
class discount{
    public:
    virtual double apply(double price)=0;
    virtual ~discount(){
        cout<<"discount object deleted"<<endl;
    }
};
class studdiscount: public discount{
    public:
    double apply(double price) override{
        return price* 0.7;
    }
    ~studdiscount(){
        cout<<"Studentcount object deleted"<<endl;
    }
};
class sendicount: public discount{
    public:
    double apply(double price) override{
        return price * 0.8;
    }
    ~sendicount(){
        cout<<"sendicount object deleted"<<endl;
    }
};
class calculatediscount{
    public:
    double calculate(discount* d,double price){
        return d->apply(price);
    }
    ~calculatediscount(){
        cout<<"calculateddicount object deleted"<<endl;
    }
};
int main(){
    calculatediscount* cal;
    studdiscount* stu=new studdiscount();
    sendicount* sen=new sendicount();
    cout<<"Student discount: "<<cal->calculate(stu,1000)<<endl;
    cout<<"senior discount: "<<cal->calculate(sen,1000)<<endl;
    cout<<"Student discount: "<<cal->calculate(stu,2000)<<endl;
    // delete cal;
    delete stu;
    delete sen;
}