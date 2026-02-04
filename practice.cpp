// #include<bits/stdc++.h>
// using namespace std;
// class product{
//     public:
//     string name;
//     double price;
//     product(string name,double rate){
//         this->name=name;
//         this->price=rate;
//     }
// };
// class shopingcart{
//     public:
//     vector<product *>products;
//     void addproducts(product* p){
//         products.push_back(p);
//     }
//     const vector<product*>& retunprice(){
//         return products;
//     }
//     double calcultetotal(){
//         double total=0;
//         for(auto num:products){
//             total+=num->price;
//         }
//         return total;
//     }
// };
// class shopingcartprint{
//     public:
//     shopingcart* cart;
//     shopingcartprint(shopingcart* ca){
//         this->cart=ca;
//     }
//        void printcart(){
//         cout<<"shopping cart invoice"<<endl;
//         for(auto num: cart->retunprice()){
//             cout<<num->name<<" price is: "<<num->price<<endl;
//         }
//     }
// };
// class addcarttodb{
//     public:
//     shopingcart* cart;
//     addcarttodb(shopingcart* ca){
//         this->cart=ca;
//     }
//     void adddb(){
//         cout<<"add all items to database..."<<endl;
//     }
// };
// int main(){
//     shopingcart* cart=new shopingcart();
    
//     cart->addproducts(new product("shirt",999));
//     cart->addproducts(new product("glasses",599));
//     cart->addproducts(new product("slipper",199));

//     shopingcartprint* print=new shopingcartprint(cart);
//     print->printcart();
//     cout<<"total price: "<<print->cart->calcultetotal()<<endl;

//     addcarttodb* storedb=new addcarttodb(cart);
//     storedb->adddb();
    
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
class saini{
    public:
    void pera(){
        cout<<"This is saini class function"<<endl;
    }
};
class saini2{
    public:
    saini *ss;
    saini2(){
        ss=new saini();
    }
    void pera(){
        cout<<"This is saini2 class function"<<endl;
    }
};
int main(){
    saini2 s;
    s.pera();
    s.ss->pera();// means we can extract a diffrent class function inside another class using passing the refffrence
}