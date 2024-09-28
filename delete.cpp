#include"delete.h"

namespace D
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
ostream& operator<< (ostream& out,Android & a)
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
ostream& operator<< (ostream &out, iPhone & i)
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
}
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

ostream & operator << (ostream &out, Windows & w)
{
    out<<w.putPrice()<<endl;
    out<<w.putVersion()<<endl;
    out<<w.putWarranty()<<endl;
    out<<w.putRAM()<<endl;
    out<<w.putStorage()<<endl;
    out<<w.putModel()<<endl;
    out<<w.putResolution()<<endl;
    out<<w.putScreenDisplay()<<endl;

}

}
//template<class T>
void deleteItem()
{
    int n;
    string mdl;
    cout<<endl<<endl<<endl<<"     TO DELETE ANDROID ITEM PRESS 1 :"<<endl;
    cout<<"     TO DELETE IPHONES PRESS 2:"<<endl;
    cout<<"     TO DELETE WINDOWS PHONES PRESS 3:"<<endl;
    cout<<"     ENTER CHOICE: ";
    cin>>n;
    cin.ignore();
    cout<<"     ENTER MODEL:";
    cin>>mdl;

    if(n==1)
    {
        vector<Android>v;
        Android a;
        ifstream fin("android.txt");
        while(fin)
        {
            D::operator>>(fin,a);
            v.push_back(a);
        }

        fin.close();
        ofstream fout("android.txt");
        for(int i=0; i<v.size()-1; i++)
        {
            if(v[i].model==mdl) {continue;}
            else
                D::operator<<(fout,v[i]);
        }
    }

    else if(n==2)
    {
        vector<iPhone>v;
        iPhone a;
        ifstream fin("iphone.txt");
        while(fin)
        {
            D::operator>>(fin,a);
            v.push_back(a);
        }
        fin.close();
        ofstream fout("iphone.txt");
        for(int i=0; i<v.size()-1; i++)
        {
            if(v[i].model==mdl) continue;
            else
                D::operator<<(fout,v[i]);
        }
    }
    else if(n==3)
    {
        Windows a;
        vector<Windows>v;
        ifstream fin("windows.txt");
        while(fin)
        {
            D::operator>>(fin,a);
            v.push_back(a);
        }

        fin.close();
        ofstream fout("windows.txt");
        for(int i=0; i<v.size()-1; i++)
        {
            if(v[i].model==mdl) continue;
            else
                D::operator<<(fout,v[i]);
        }
    }
    cout<<"     COMPLETED DELETING "<<mdl<<endl;
    cout<<"     WANT TO RETURN TO MENU??(YES/NO): "<<endl;
    string s;
    cin>>s;
    if(s=="YES") menu();
}
