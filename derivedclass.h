#ifndef DERIVEDCLASS_H
#define DERIVEDCLASS_H

#include "base.h"
#include "main.h"
using namespace std;


class Smartphone : public Mobile
{
protected:
    string screen_display;
    string resolution;
public:
    Smartphone();
    Smartphone(const Smartphone &a);
    Smartphone(int p,int w,int r,int s,string m,string s1, string s2);
    void getScreenDisplay(string s);
    string putScreenDisplay();
    void getResolution(string s);
    string putResolution();
    friend istream& operator>>(istream& in,Smartphone & b);
    friend ostream& operator<<(ostream& cout,Smartphone &b);


};
class Android:public Smartphone
{
public:
    string company;
    string version;
public:
    Android();
    Android(const Android &a);
    Android(int p,int w,int r,int s,string m,string s1, string s2,string s3,string s4);
    void getCompany(string s);
    string putCompany();
    void getVersion(string s);
    string putVersion();
    friend istream& operator>>(istream& in,Android & b);
    friend ostream& operator<<(ostream& cout,Android &b);
    void display()
    {
        cout<<"PRICE:" ;
        cout<<price;
        cout<<endl<<"COMPANY NAME:" ;
        cout<<company;
        cout<<endl<<"VERSION:" ;
        cout<<version;
        cout<<endl<<"MODEL:" ;
        cout<<model;
        cout<<endl<<"WARRANTY:" ;
        cout<<warranty;
        cout<<endl<<"RAM SIZE:" ;
        cout<<RAM;
        cout<<endl<<"INTERNAL STORAGE" ;
        cout<<storage;

        cout<<endl<<"SCREEN DISPLAY:" ;
        cout<<screen_display;
        cout<<endl<<"RESOLUTION:" ;
        cout<<resolution;
    }

};
class iPhone:public Smartphone
{
public:
    string ios;
public:
    iPhone();
    iPhone(const iPhone &a);
    iPhone(int p,int w,int r,int s,string m,string s1, string s2,string s3);
    void getIos(string s);
    string putIos();
    friend istream& operator>>(istream& in,iPhone & b);
    friend ostream& operator<<(ostream& cout,iPhone &b);
    void display()
    {
        cout<<"PRICE:";
        cout<<price;
        cout<<endl<<"IOS NO:";
        cout<<ios;
        cout<<endl<<"WARRANTY:";
        cout<<warranty;
        cout<<endl<<"RAM SIZE:";
        cout<<RAM;
        cout<<endl<<"INTERNAL STORAGE";
        cout<<storage;
        cout<<endl<<"MODEL:";
        cout<<model;
        cout<<endl<<"SCREEN DISPLAY:";
        cout<<screen_display;
        cout<<endl<<"RESOLUTION:";
        cout<<resolution;
    }
};
class Windows:public Smartphone
{
public:
    string version;
public:
    Windows();
    Windows(const Windows &a);
    Windows(int p,int w,int r,int s,string m,string s1, string s2,string s3);
    void getVersion(string s);
    string putVersion();
    friend istream& operator>>(istream& in,Windows & b);
    friend ostream& operator<<(ostream& cout,Windows &b);
    void display()
    {
        cout<<"PRICE:" ;
        cout<<price;
        cout<<endl<<"VERSION:" ;
        cout<<version;
        cout<<endl<<"WARRANTY:" ;
        cout<<warranty;
        cout<<endl<<"RAM SIZE:" ;
        cout<<RAM;
        cout<<endl<<"INTERNAL STORAGE" ;
        cout<<storage;
        cout<<endl<<"MODEL:" ;
        cout<<model;
        cout<<endl<<"SCREEN DISPLAY:" ;
        cout<<screen_display;
        cout<<endl<<"RESOLUTION:" ;
        cout<<resolution;

    }
};
#endif // DERIVEDCLASS_H
