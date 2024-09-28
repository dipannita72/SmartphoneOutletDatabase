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
    string name;
    string phone_no;
    map<string,int> item_list;
    int total;
public:
    Customer();
    Customer(const Customer &c);
    Customer(string s1,string s2, string m1,int m2,int t);
    void getName(string a);
    string putName();
    void getPhone_no(string a);
    string putPhone_no();
    void getItemlist(string s,int n);
    map<string,int> putItemlist();
    void getTotal(int t);
    int putTotal();

};

#endif // CUSTOMERCLASS_H

