
#include"derivedclass.h"
#include "main.h"
using namespace std;



Smartphone:: Smartphone()
{
    Mobile();
    screen_display="0";
    resolution="0";
}
Smartphone:: Smartphone(const Smartphone &a)
{
    price=a.price;
    warranty=a.warranty;
    RAM=a.RAM;
    storage=a.storage;
    model=a.model;
    screen_display=a.screen_display;
    resolution=a.resolution;
}
Smartphone::  Smartphone(int p,int w,int r,int s,string m,string s1, string s2)
{
    screen_display=s1;
    resolution=s2;
}
void  Smartphone:: getScreenDisplay(string s)
{
    screen_display=s;
}
string Smartphone::  putScreenDisplay()
{
    return screen_display;
}
void  Smartphone:: getResolution(string s)
{
    resolution=s;
}
string  Smartphone:: putResolution()
{
    return resolution;
}
istream& operator>>(istream& in,Smartphone & b)
{
    cout<<"ENTER PRICE:";
    in>>b.price;
    cout<<endl<<"ENTER WARRANTY TIME:";
    in>>b.warranty;
    cout<<endl<<"ENTER RAM SIZE:";
    in>>b.RAM;
    cout<<endl<<"ENTER INTERNAL STORAGE:";
    in>>b.storage;
    cout<<endl<<"ENTER MODEL:";
    in>>b.model;
    cout<<endl<<"ENTER RESOLUTION:";
    in>>b.resolution;
    cout<<endl<<"ENTER SCREEN DISPLAY SIZE:";
    in>>b.screen_display;
    return in;

}
ostream& operator<<(ostream& out,Smartphone &b)
{
    cout<<endl<<"PRICE:" ;
    out<<b.price;
    cout<<endl<<"WARRANTY:" ;
    out<<b.warranty;
    cout<<endl<<"RAM SIZE:" ;
    out<<b.RAM;
    cout<<endl<<"INTERNAL STORAGE" ;
    out<<b.storage;
    cout<<endl<<"MODEL:" ;
    out<<b.model;
    cout<<endl<<"SCREEN DISPLAY:" ;
    out<<b.screen_display;
    cout<<endl<<"RESOLUTION:" ;
    out<<b.resolution;
    return out;
}






Android:: Android()
{
    Smartphone();
    company="none";
    version="0";
}
Android::    Android(const Android &a)
{
     price=a.price;
    warranty=a.warranty;
    RAM=a.RAM;
    storage=a.storage;
    model=a.model;
    screen_display=a.screen_display;
    resolution=a.resolution;
    company=a.company;
    version=a.version;
}
Android::  Android(int p,int w,int r,int s,string m,string s1, string s2,string s3,string s4)
{
    Smartphone(p,w,r,s,m,s1,s2);
    company=s3;
    version=s4;
}
void Android:: getCompany(string s)
{
    company=s;
}
string Android:: putCompany()
{
    return company;
}
void Android:: getVersion(string s)
{
    version=s;
}
string Android:: putVersion()
{
    return version;
}
istream& operator>>(istream& in,Android & b)
{
    cout<<endl<<endl<<endl<<"                                *******ADDING ANDROID PHONE*******"<<endl<<endl<<endl;
           cout<<"      ENTER PRICE:" ;
    in>>b.price;
     cout<<endl<<"      ENTER COMPANY NAME:" ;
    in>>b.company;
    cout<<endl<<"       ENTER VERSION:" ;
    in>>b.version;
    cout<<endl<<"       ENTER MODEL:" ;
    in>>b.model;
    cout<<endl<<"       ENTER WARRANTY TIME:" ;
    in>>b.warranty;
    cout<<endl<<"       ENTER RAM SIZE:" ;
    in>>b.RAM;
    cout<<endl<<"       ENTER INTERNAL STORAGE:" ;
    in>>b.storage;

    cout<<endl<<"       ENTER RESOLUTION:" ;
    in>>b.resolution;
    cout<<endl<<"       ENTER SCREEN DISPLAY SIZE:" ;
    in>>b.screen_display;

    return in;
}
ostream& operator<<(ostream& out,Android &b)
{
    cout<<"PRICE:" ;
    out<<b.price;
     cout<<endl<<"COMPANY NAME:" ;
    out<<b.company;
    cout<<endl<<"VERSION:" ;
    out<<b.version;
    cout<<endl<<"MODEL:" ;
    out<<b.model;
    cout<<endl<<"WARRANTY:" ;
    out<<b.warranty;
    cout<<endl<<"RAM SIZE:" ;
    out<<b.RAM;
    cout<<endl<<"INTERNAL STORAGE" ;
    out<<b.storage;

    cout<<endl<<"SCREEN DISPLAY:" ;
    out<<b.screen_display;
    cout<<endl<<"RESOLUTION:" ;
    out<<b.resolution;

    return out;
}




iPhone:: iPhone()
{
    Smartphone();
    ios="0";
}
iPhone::  iPhone(const iPhone &a)
{
     price=a.price;
    warranty=a.warranty;
    RAM=a.RAM;
    storage=a.storage;
    model=a.model;
    screen_display=a.screen_display;
    resolution=a.resolution;
    ios=a.ios;
}
iPhone::  iPhone(int p,int w,int r,int s,string m,string s1, string s2,string s3)
{
    Smartphone(p,w,r,s,m,s1,s2);
    ios=s3;
}
void   iPhone:: getIos(string s)
{
    ios=s;
}
string   iPhone:: putIos()
{
    return ios;
}
istream& operator>>(istream& in,iPhone & b)
{
    cout<<"\n\n\n                  *********ADDING IPHONES********"<<endl;
          cout<<"       ENTER PRICE:";
    in>>b.price;
    cout<<endl<<"       IOS NO:";
    in>>b.ios;
    cout<<endl<<"       ENTER WARRANTY TIME:";
    in>>b.warranty;
    cout<<endl<<"       ENTER RAM SIZE:";
    in>>b.RAM;
    cout<<endl<<"       ENTER INTERNAL STORAGE:";
    in>>b.storage;
    cout<<endl<<"       ENTER MODEL:";
    in>>b.model;
    cout<<endl<<"       ENTER RESOLUTION:";
    in>>b.resolution;
    cout<<endl<<"       ENTER SCREEN DISPLAY SIZE:";
    in>>b.screen_display;
    return in;
}
ostream& operator<<(ostream& out,iPhone &b)
{
    cout<<"PRICE:";
    out<<b.price;
    cout<<endl<<"IOS NO:";
    out<<b.ios;
    cout<<endl<<"WARRANTY:";
    out<<b.warranty;
    cout<<endl<<"RAM SIZE:";
    out<<b.RAM;
    cout<<endl<<"INTERNAL STORAGE";
    out<<b.storage;
    cout<<endl<<"MODEL:";
    out<<b.model;
    cout<<endl<<"SCREEN DISPLAY:";
    out<<b.screen_display;
    cout<<endl<<"RESOLUTION:";
    out<<b.resolution;
    return out;
}





Windows :: Windows()
{
    Smartphone();
    version="0";
}
Windows :: Windows(const Windows &a)
{
     price=a.price;
    warranty=a.warranty;
    RAM=a.RAM;
    storage=a.storage;
    model=a.model;
    screen_display=a.screen_display;
    resolution=a.resolution;
    version=a.version;
}
Windows :: Windows(int p,int w,int r,int s,string m,string s1, string s2,string s3)
{
    Smartphone(p,w,r,s,m,s1,s2);
    version=s3;
}
void   Windows :: getVersion(string s)
{
    version =s;
}
string   Windows :: putVersion()
{
    return version ;
}
istream& operator>>(istream& in,Windows & b)
{
    cout<<" \n\n\n            ******ADDING WINDOWS PHONES*****"<<endl;
    cout<<"     ENTER PRICE:" ;
    in>>b.price;
    cout<<endl<<"       ENTER VERSION:" ;
    in>>b.version;
    cout<<endl<<"       ENTER WARRANTY TIME:" ;
    in>>b.warranty;
    cout<<endl<<"       ENTER RAM SIZE:" ;
    in>>b.RAM;
    cout<<endl<<"       ENTER INTERNAL STORAGE:" ;
    in>>b.storage;
    cout<<endl<<"       ENTER MODEL:" ;
    in>>b.model;
    cout<<endl<<"       ENTER RESOLUTION:" ;
    in>>b.resolution;
    cout<<endl<<"       ENTER SCREEN DISPLAY SIZE:" ;
    in>>b.screen_display;

    return in;
}
ostream& operator<<(ostream& out,Windows &b)
{
    cout<<"PRICE:" ;
    out<<b.price;
    cout<<endl<<"VERSION:" ;
    out<<b.version;
    cout<<endl<<"WARRANTY:" ;
    out<<b.warranty;
    cout<<endl<<"RAM SIZE:" ;
    out<<b.RAM;
    cout<<endl<<"INTERNAL STORAGE" ;
    out<<b.storage;
    cout<<endl<<"MODEL:" ;
    out<<b.model;
    cout<<endl<<"SCREEN DISPLAY:" ;
    out<<b.screen_display;
    cout<<endl<<"RESOLUTION:" ;
    out<<b.resolution;

    return out;
}
