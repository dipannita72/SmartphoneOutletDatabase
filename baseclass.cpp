#include"base.h"
using namespace std;
Mobile :: Mobile()
{
    price=0;
    warranty=0;
    RAM=0;
    storage=0;
    model="none";
}
Mobile:: Mobile(const Mobile &product)
{

    price=product.price;
    warranty=product.warranty;
    RAM=product.RAM;
    storage=product.storage;
    model=product.model;
}
Mobile:: Mobile(int p,int w,int r,int s,string m)
{

    price=p;
    warranty=w;
    RAM=r;
    storage=s;
    model=m;
}
void Mobile :: getPrice(int a)
{
    price=a;
}
int Mobile :: putPrice()
{
    return price;
}
void Mobile :: getWarranty(int a)
{
    warranty=a;
}
int Mobile :: putWarranty()
{
    return warranty;
}
void Mobile :: getRAM(int s)
{
    RAM=s;
}
int Mobile :: putRAM()
{
    return RAM;
}
void Mobile :: getStorage(int s)
{
    storage=s;
}
int Mobile :: putStorage()
{
    return storage;
}
void Mobile :: getModel(string s)
{
    model=s;
}
string Mobile :: putModel()
{
    return model;
}

