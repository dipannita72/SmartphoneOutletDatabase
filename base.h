
#ifndef BASECLASS_H
#define BASSCLASS_H
#include<iostream>
#include<string>
using namespace std;
class Mobile
{
public:

    int warranty;
    int RAM;
    int storage;
public:
    int price;
    string model;
public:
    Mobile();
    Mobile(int p,int w,int r,int s,string m);
    Mobile(const Mobile &product);
    void getPrice(int a);
    int putPrice();
    void getWarranty(int a);
    int putWarranty();
    void getRAM(int s);
    int putRAM();
    void getStorage(int s);
    int putStorage();
    void getModel(string s);
    string putModel();
    virtual void display()
    {
        cout<<"WARRANTY: ";
        cout<<warranty<<endl;
        cout<<"RAM: ";
        cout<<RAM<<endl;
        cout<<"STORAGE: ";
        cout<<storage<<endl;
        cout<<"PRICE:";
        cout<<price<<endl;
        cout<<"MODEL:";
        cout<<model<<endl;
    }
};
#endif
