#include"customerclass.h"

 Customer:: Customer()
 {
    name="0";
    phone_no="0";
    item_list.insert(pair<string,int>("0",0));
    total=0;
    model="0";
 }
    Customer::  Customer(const Customer &c)
    {
        name=c.name;
    phone_no=c.phone_no;
    item_list=c.item_list;
    total=c.total;
    model=c.model;
    }
    Customer::  Customer(string s1,string s2, string m1,int m2,int t,string m)
    {
        name=s1;
        phone_no=s2;
        item_list.insert(pair<string,int>(m1,m2));
        total=t;
        model=m;
    }
    void Customer::  getName(string a)
    {
        name=a;
    }
    string Customer::  putName()
    {
        return name;
    }
    void  Customer:: getPhone_no(string a)
    {
        phone_no=a;
    }
    string Customer::  putPhone_no()
    {
        return phone_no;
    }
    void Customer::  getItemlist(string s,int n)
    {
        item_list.insert(pair<string,int>(s,n));
    }
    map<string,int>  Customer:: putItemlist()
    {
        return item_list;
    }
    void Customer:: getTotal(int t)
    {
        total=t;
    }
    int  Customer::putTotal()
    {
        return total;
    }

void Customer:: putModel(string m)
{
    model=m;
}
    string Customer:: getModel()
    {
        return model;
    }

istream& operator>>(istream& in,Customer & b)
{
    cout<<endl<<"ENTER YOUR NAME: ";
    in>>b.name;
    cout<<endl<<"ENTER YOUR PHONE NO: ";
    in>>b.phone_no;
    cout<<endl<<"ENTER THE MODEL AGAIN: ";
    in>>b.model;
    return in;
}
ostream& operator<<(ostream& out,Customer &b)
{
    cout<<endl<<"NAME: ";
    out<<b.name;
    cout<<endl<<"PHONE NO: ";
    out<<b.phone_no;
    cout<<endl<<"MODEL THAT IS PURCHASED: ";
    out<<b.model;
    return out;
}







