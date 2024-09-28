#ifndef CUSTOMERCLASS_H
#define CUSTOMERCLASS_H
#include<iostream>
#include<string>
#include<map>
#include<utility>
using namespace std;
class Customer
{
protected:


    int total;

public:
    map<string,int> item_list;
    string name;
    string phone_no;
    string model;
    Customer();
    Customer(const Customer &c);
    Customer(string s1,string s2, string m1,int m2,int t,string m);
    void getName(string a);
    string putName();
    void getPhone_no(string a);
    string putPhone_no();
   void getItemlist(string s,int n);
    map<string,int> putItemlist();
    void getTotal(int t);
    int putTotal();

    void putModel(string m);
    string getModel();
    friend istream& operator>>(istream& in,Customer & b);
    friend ostream& operator<<(ostream& out,Customer &b);
};

#endif // CUSTOMERCLASS_H
