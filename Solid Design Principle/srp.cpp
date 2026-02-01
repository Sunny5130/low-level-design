#include<bits/stdc++.h>
using namespace std;
//-------------------------blueprint fo the product-----------------------------------//
class product{
    public:
    string name;
    double price;
    product(string name, double pri){
        this->name=name;
        this->price=pri;

    }
};
class shoppingcart{
    private:
    vector<product*>products;
    public:
    void addproducts(product* p){
        products.push_back(p);
    }
    const vector<product*>& getproducts(){
        return products;
    }
    double calclutaltotal(){
        double total=0;
        for(auto p: products){
            total+=p->price;
        }
        return total;
    }
};
class shopingcartprinter{
    private:
    shoppingcart* cart;
    public:
    shopingcartprinter(shoppingcart* cart){
        this->cart=cart;
    }
    void printinvoice(){
        cout<<"Shoping cart invoice:\n";
        for(auto p:cart->getproducts()){
            cout<<p->name<<" - price: RS."<<p->price<<endl;
        }
        cout<<"Total price: "<<cart->calclutaltotal()<<endl;
    }
};
class shoppingclassstorage{
    private:
    shoppingcart* cart;
    public:
    shoppingclassstorage(shoppingcart* cart){
        this->cart=cart;
    }
    void savetodatabase(){
        cout<<"Saving shopping cart to database.."<<endl;
    }
};
int main(){
    shoppingcart* cart=new shoppingcart();
    cart->addproducts(new product("shoes",999));
    cart->addproducts(new product("T-shirt",3150));

    shopingcartprinter * printer=new shopingcartprinter(cart);
    printer->printinvoice();

    shoppingclassstorage* storage=new shoppingclassstorage(cart);
    storage->savetodatabase();
    return 0;
};