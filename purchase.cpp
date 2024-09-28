#include"purchase.h"
vector<Android>va;
vector<iPhone>vi;
vector<Windows>vw;
int cnt=0,k=0;
vector<string>v;
namespace P
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

}
namespace PP
{
istream& operator>>(istream& in,Customer & b)
{
    string s,q;
    int n,t=0;
    k=0;
    cout<<endl<<"ENTER YOUR NAME: ";
    in>>b.name;
    cout<<endl<<"ENTER YOUR PHONE NO: ";
    in>>b.phone_no;
    cout<<endl<<"ENTER YOUR ITEM: ";
    cin>>s;
    cout<<endl<<"QUANTITY: ";
    cin>>n;
    for(int i=0; i<va.size(); i++)
    {
        if(s==va[i].model)
        {
            t+=va[i].price*n;
            cnt++;
            k++;
        }
    }
    for(int i=0; i<vi.size(); i++)
    {
        if(s==vi[i].model)
        {
            t+=vi[i].price*n;
            cnt++;
            k++;
        }
    }
    for(int i=0; i<vw.size(); i++)
    {
        if(s==vw[i].model)
        {
            t+=vw[i].price*n;
            cnt++;
            k++;
        }
    }
    if(cnt==0)
    {
        cout<<"NOT AVAILABLE"<<endl;
        cout<<"WANT TO RETURN TO MENU??(YES/NO): "<<endl;
        string A;
        cin>>A;
        if(A=="YES") menu();
    }

    b.item_list.insert(pair<string,int>(s,n));
    v.push_back(s);
    while(1)
    {
        cnt=0;
        cout<<"DO YOU WANT TO BUY MORE:(YES/NO)";
        cin>>q;
        if(q=="YES")
        {
            cout<<endl<<"ENTER YOUR ITEM: ";
            cin>>s;
            cout<<endl<<"QUANTITY: ";
            cin>>n;
            for(int i=0; i<va.size(); i++)
            {
                if(s==va[i].model)
                {
                    t+=va[i].price*n;
                    cnt++;
                    k++;
                }
            }
            for(int i=0; i<vi.size(); i++)
            {
                if(s==vi[i].model)
                {
                    t+=vi[i].price*n;
                    cnt++;
                    k++;
                }
            }
            for(int i=0; i<vw.size(); i++)
            {
                if(s==vw[i].model)
                {
                    t+=vw[i].price*n;
                    cnt++;
                    k++;
                }
            }
            if(cnt==0)
            {
                cout<<"NOT AVAILABLE"<<endl;
                menu();
            }

            b.item_list.insert(pair<string,int>(s,n));
            v.push_back(s);
        }
        else if(q=="NO")
        {
            cout<<"TOTAL EXPENDITURE: ";
            cout<<t<<endl;
            cout<<"WANT TO RETURN TO MENU??(YES/NO): "<<endl;
        string A;
        cin>>A;
        if(A=="YES"){ menu();}
        break;
        }
        if(q=="NO") break;
    }

}
ostream& operator<<(ostream& out,Customer &b)
{

    out<<b.name<<" ";
    out<<b.phone_no<<" ";
    for(int j=0; j<v.size(); j++)
    {
        out<<v[j]<<" "<<b.item_list[v[j]]<<" ";
    }
    out<<"END"<<endl;
return out;
}
}

void purchase()
{
    v.clear();
    fstream fin("android.txt");
    while(fin)
    {
        Android a;
        P::operator>>(fin,a);
        va.push_back(a);
    }
    fin.close();
    fstream fin1("iphone.txt");
    while(fin1)
    {
        iPhone a;
        P::operator>>(fin1,a);
        vi.push_back(a);
    }
    fin1.close();
    fstream fin2("windows.txt");
    while(fin2)
    {
        Windows a;
        P::operator>>(fin2,a);
        vw.push_back(a);
    }
    fin2.close();
    Customer c;
    PP::operator>>(cin,c);
   // ifstream fz("purchase.txt");
    //fz.close();
    ofstream fout("customer.txt",fstream::app);
    fout << "X ";
    PP::operator<<(fout,c);



}
