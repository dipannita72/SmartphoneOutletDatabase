#include"searchItem.h"
vector<Android>android_;
vector<iPhone>iphone_;
vector<Windows>windows_;
namespace Y
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
    in>>s;
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
    return out;
}
}








template<class T>
vector<T> in(istream &fin,T temp)
{
    vector<T>t;
    while(fin)
    {
        Y::operator>>(fin,temp);
        t.push_back(temp);
    }
    return t;
}
void searchitem()
{
    char choice;
    cout<<"\n\n\n             LOOKING FOR ANDROID OR IPHONES OR WINDOWS PHONE??"<<endl;
    cout<<"             FOR ANDROID PRESS 1"<<endl;
    cout<<"             FOR IPHONES PRESS 2"<<endl;
    cout<<"             FOR WINDOWS PHONES PRESS 3"<<endl;
    cout<<"             ENTER CHOICE : ";
    cin>>choice;
    if(choice =='1')
    {
        //cout<<"llll";
        string modl;
        int f=0;
        Android *android=new Android();
        ifstream fin("android.txt");
        android_=in<Android>(fin,*android);
        cout<<"         PLEASE ENTER THE MODEL:";
        cin>>modl;
        for(int i=0; i<android_.size(); i++)
        {
            if(modl==android_[i].model)
            {
                cout<<"                ****AVAILABLE****"<<endl;
                f=1;
                cout<<endl<<endl<<"         ITS PROPERTIES:"<<endl;
                android_[i].display();
                buyphone(1);
            }
        }
        if(f==0)
        {
            cout<<"         *****NOT AVAILABLE TRY AGAIN****\n";
            //system("CLS");
            cout<<"          WANT TO RETURN TO MENU??(YES/NO): "<<endl;
            string s;
            cin>>s;
            if(s=="YES") menu();

    }
    delete android;
}
else if(choice=='2')
{
    string modl;
    int f=0;
    iPhone *iphone=new iPhone();
    ifstream fin("iphone.txt");
    iphone_=in<iPhone>(fin,*iphone);
    cout<<"              PLEASE ENTER THE MODEL:";
    cin>>modl;
    for(int i=0; i<iphone_.size(); i++)
    {
        if(modl==iphone_[i].model)
        {
            cout<<"        ******AVAILABLE******"<<endl;
            f=1;
            cout<<endl<<endl<<"               ITS PROPERTIES:"<<endl;
            iphone_[i].display();
            buyphone(2);
        }
    }
    if(f==0)
    {
        cout<<"              NOT AVAILABLE. TRY AGAIN\n";
        cout<<"              WANT TO RETURN TO MENU??(YES/NO): "<<endl;
    string s;
    cin>>s;
    if(s=="YES") menu();
    }
    delete iphone;

}
else if(choice=='3')
{
    string modl;
    int f=0;
    Windows *windows=new Windows;
    ifstream fin("windows.txt");
    windows_=in<Windows>(fin,*windows);
    cout<<"                PLEASE ENTER THE MODEL:";
    cin>>modl;
    for(int i=0; i<windows_.size(); i++)
    {
        if(modl==windows_[i].model)
        {
            cout<<"                AVAILABLE"<<endl;
            f=1;
            cout<<endl<<endl<<"                    ITS PROPERTIES:"<<endl;
            windows_[i].display();
            buyphone(3);
        }
    }
    if(f==0)
    {
        cout<<"                NOT AVAILABLE. TRY AGAIN\n";
        cout<<"                WANT TO RETURN TO MENU??(YES/NO): "<<endl;
    string s;
    cin>>s;
    if(s=="YES") menu();
    }
    delete windows;

}
}
