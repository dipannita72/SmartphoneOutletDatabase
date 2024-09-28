#include"update.h"

namespace U
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
          return out;
      }
    }

void update()
{

    cout<<endl<<endl<<endl;
    cout<<"                                        FOR UPDATING ANDROID PHONES PRESS 1"<<endl;
    cout<<"                                            FOR UPDTING IPHONES PRESS 2"<<endl;
    cout<<"                                        FOR UPDATING WINDOWS PHONES PRESS 3"<<endl;
    cout<<"                                                ENTER YOUR CHOICE:  ";
    int i;
    cin>>i;
    if(i==1)
    {
        vector<Android>a;
        Android x,y;
        ifstream fin("android.txt");
        while(fin)
        {
            U::operator>>(fin,x);
            a.push_back(x);
        }
        int n;
        string s;
        cout<<"                                    WHICH ITEM'S PRICE YOU WANT TO UPDATE? ";
        cin>>s;
        cout<<endl<<"                              WHAT WILL BE THE UPDATED PRICE? ";
        cin>>n;
        for(int j=0; j<a.size(); j++)
        {
            if(a[j].model == s)
            {
                a[j].price=n;
                y=a[j];
            }
        }
        fin.close();
        ofstream fout("android.txt");
        for(int j=0; j<a.size()-1; j++)
        {
            U::operator<<(fout,a[j]);
        }
        cout<<endl<<endl<<endl<<"                        *******UPDATE IS DONE SUCCESSFULLY*****"<<endl;
        cout<<"                                    UPDATED ITEM PROPERTY:"<<endl;
        y.display();

        cout<<endl<<"                              WANT TO RETURN TO MENU??(YES/NO): ";
        //string s;
        cin>>s;
        if(s=="YES") menu();

    }
    else if(i==2)
    {
      vector<iPhone>a;
        iPhone x,y;
        ifstream fin("iphone.txt");
        while(fin)
        {
            U::operator>>(fin,x);
            a.push_back(x);
        }
        int n;
        string s;
        cout<<"                                    WHICH ITEM'S PRICE YOU WANT TO UPDATE? ";
        cin>>s;
        cout<<endl<<"                              WHAT WILL BE THE UPDATED PRICE? ";
        cin>>n;
        for(int j=0; j<a.size(); j++)
        {
            if(a[j].model == s)
            {
                cout<<a[j].model;
                a[j].price=n;
                y=a[j];
            }
        }
        fin.close();
        ofstream fout("iphone.txt");
        for(int j=0; j<a.size()-1; j++)
        {
            U::operator<<(fout,a[j]);
        }
        cout<<endl<<endl<<"                             *******UPDATE IS DONE SUCCESSFULLY*****"<<endl;
        cout<<"                                        UPDATED ITEMS PROPERTY:"<<endl<<endl;
        y.display();

        cout<<endl<<"                                         WANT TO RETURN TO MENU??(YES/NO): ";
        //string s;
        cin>>s;
        if(s=="YES") menu();

    }
    else if(i==3)
       {
      vector<Windows>a;
        Windows x,y;
        ifstream fin("windows.txt");
        while(fin)
        {
            U::operator>>(fin,x);
            a.push_back(x);
        }
        int n;
        string s;
        cout<<"                                          WHICH ITEM'S PRICE YOU WANT TO UPDATE? ";
        cin>>s;
        cout<<endl<<"                                    WHAT WILL BE THE UPDATED PRICE? ";
        cin>>n;
        for(int j=0; j<a.size(); j++)
        {
            if(a[j].model == s)
            {

                a[j].price=n;
                y=a[j];
            }
        }
        fin.close();
        ofstream fout("windows.txt");
        for(int j=0; j<a.size()-1; j++)
        {
            U::operator<<(fout,a[j]);
        }
        cout<<endl<<endl<<"                                     *******UPDATE IS DONE SUCCESSFULLY*****"<<endl;
        cout<<"                                        UPDATED ITEMS PROPERTY:"<<endl<<endl;
        y.display();


        cout<<"                                     WANT TO RETURN TO MENU??(YES/NO): ";
        //string s;
        cin>>s;
        if(s=="YES") menu();

    }
}
