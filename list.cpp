#include"list.h"

namespace Q
{
int p;
int s;
string s1;
istream& operator>>(istream& in, Android & a)
{
    in>>p;
    a.getPrice(p);
    in>>s1;
    a.getCompany(s1);
    in>>s1;
    a.getVersion(s1);
    in>>s1;
    a.getModel(s1);
    in>>s;
    a.getWarranty(s);
    in>>s;
    a.getRAM(s);
    in>>s;
    a.getStorage(s);
    in>>s1;
    a.getResolution(s1);
    in>>s1;
    a.getScreenDisplay(s1);
    return in;
}
/*ostream& operator<< (ostream& out,Android & a)
{
    out<<a.putPrice()<<endl;
    out<<a.putCompany()<<endl;
    out<<a.putVersion()<<endl;
    out<<a.putModel()<<endl;
    out<<a.putWarranty()<<endl;
    out<<a.putRAM()<<endl;
    out<<a.putStorage()<<endl;
    out<<a.putResolution()<<endl;
    out<<a.putScreenDisplay()<<endl;
    return out;
}
*/
istream& operator >>(istream &in, iPhone & i)
{
    in>>p;
    i.getPrice(p);
    in>>s1;
    i.getIos(s1);
    in>>s;
    i.getWarranty(s);
    in>>s;
    i.getRAM(s);
    in>>s;
    i.getStorage(s);
    in>>s1;
    i.getModel(s1);
    in>>s1;
    i.getResolution(s1);
    in>>s1;
    i.getScreenDisplay(s1);
    return in;

}
/*ostream& operator<< (ostream &out, iPhone & i)
{
    out<<i.putPrice()<<endl;
    out<<i.putIos()<<endl;
    out<<i.putWarranty()<<endl;
    out<<i.putRAM()<<endl;
    out<<i.putStorage()<<endl;
    out<<i.putModel()<<endl;
    out<<i.putResolution()<<endl;
    out<<i.putScreenDisplay()<<endl;
    return out;
}*/
istream& operator >> (istream &in, Windows & w)
{
    in>>p;
    w.getPrice(p);
    in>>s1;
    w.getVersion(s1);
    in>>s;
    w.getWarranty(s);
    in>>s;
    w.getRAM(s);
    in>>s;
    w.getStorage(s);
    in>>s1;
    w.getModel(s1);
    in>>s1;
    w.getResolution(s1);
    in>>s1;
    w.getScreenDisplay(s1);
    return in;
}

/*ostream & operator << (ostream &out, Windows & w)
{
    out<<w.putPrice()<<endl;
    out<<w.putVersion()<<endl;
    out<<w.putWarranty()<<endl;
    out<<w.putRAM()<<endl;
    out<<w.putStorage()<<endl;
    out<<w.putModel()<<endl;
    out<<w.putResolution()<<endl;
    out<<w.putScreenDisplay()<<endl;
}*/
}


class functor
{
public:
    bool operator()(Android a1, Android a2)
    {
        return (a1.price<a2.price);
    }
};
class functor1
{
public:
    bool operator()(iPhone a1, iPhone a2)
    {
        return (a1.price<a2.price);
    }
};
class functor2
{
public:
    bool operator()(Windows a1, Windows a2)
    {
        return (a1.price<a2.price);
    }
};

void listItem()
{

    cout<<"                         ................................................."<<endl;
    cout<<"                         ................................................."<<endl;
    cout<<"                         ....                                         ...."<<endl;
    cout<<"                         ....          VIEWING ITEM LIST              ...."<<endl;
    cout<<"                         ....                                         ...."<<endl;
    cout<<"                         ................................................."<<endl;
    cout<<"                         ................................................."<<endl;

    int n;
    cout<<"                           ###TO SEE ANDROID MOBILE STOCK  PRESS 1###"<<endl;
    cout<<"                               ###TO SEE IPHONES STOCK PRESS 2###"<<endl;
    cout<<"                           ###TO SEE WINDOWS MOBILE STOCK PRESS 3###"<<endl;
    cout<<"                                    ENTER CHOICE:  ";
    cin>>n;
    cout<<endl<<endl<<endl;
    if(n==1)
    { cout<<endl<<endl<<endl;
        Android a;
        vector<Android>android;
        ifstream fin("android.txt");
        while(fin)
        {
            Q::operator>>(fin,a);
            android.push_back(a);
        }

        //auto f =[](Android a1, Android a2){return a1.price<a2.price;};

        sort(android.begin(),android.end()-1,functor());

        cout<<"PRICE\t\tCOMPANY\t\tVERSION\t\tMODEL\t\tWARRANTY\tRAM\t\tSTRORAGE"<<endl;
        for(int i=0; i<android.size()-1; i++)
        {
            cout<<android[i].price<<"\t\t"<<android[i].company<<"\t\t"<<android[i].version<<"\t\t"<<android[i].model<<"\t\t"<<android[i].warranty<<"YEARS\t\t"<<android[i].RAM<<"GB\t\t"<<android[i].storage<<"GB"<<endl;
        }

    }
    else if(n==2)
    {
        iPhone a;
        vector<iPhone>ip;
        ifstream fin("iphone.txt");
        while(fin)
        {
            Q::operator>>(fin,a);
            ip.push_back(a);
            //cout<<a;
        }

        //auto f =[](Android a1, Android a2){return a1.price<a2.price;};

        sort(ip.begin(),ip.end()-1,functor1());

        cout<<"PRICE\t\tIOS NO\t\tWARRANTY\tRAM\t\tSTRORAGE\tMODEL"<<endl;
        for(int i=0; i<ip.size()-1; i++)
        {
            cout<<ip[i].putPrice()<<"\t\t"<<ip[i].ios<<"\t\t"<<ip[i].warranty<<"YEARS\t\t"<<ip[i].RAM<<"GB\t\t"<<ip[i].storage<<"GB\t\t"<<ip[i].model<<endl;
        }

    }

    else if(n==3)
    {
        Windows a;
        vector<Windows>ip;
        ifstream fin("windows.txt");
        while(fin)
        {
            Q::operator>>(fin,a);
            ip.push_back(a);
        }

        //auto f =[](Android a1, Android a2){return a1.price<a2.price;};

        sort(ip.begin(),ip.end()-1,functor2());

        cout<<"PRICE\t\tVERSION\t\tWARRANTY\tRAM\t\tSTRORAGE\tMODEL"<<endl;
        for(int i=0; i<ip.size()-1; i++)
        {
            cout<<ip[i].price<<"\t\t"<<ip[i].version<<"\t\t"<<ip[i].warranty<<"YEARS\t\t"<<ip[i].RAM<<"GB\t\t"<<ip[i].storage<<"GB\t\t"<<ip[i].model<<endl;
        }

    }

    cout<<"WANT TO RETURN TO MENU??(YES/NO)"<<endl;
    string A;
    cin>>A;
    if(A=="YES") menu();




}
