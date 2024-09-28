

#include"addItem.h"
namespace X
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






 char n;
template<class T>
void input(ostream & fout,T temp)
{
    X::operator<<(fout,temp);
        cout<<"     WANT TO ADD MORE? FOR YES PRESS 'Y' AND FOR NO PRESS 'N':";
        cin>>n;

        if(n=='Y')
            addItem();
        else if(n=='N')
            menu();

}
void addItem()
{
    int choice;

    system("CLS");
    cout<<endl<<endl<<endl<<endl<<endl;
    cout<<right<<setw(40)<<"TO"<<" ADD"<<" ANDROID PHONES: ENTER 1"<<endl;
    cout<<right<<setw(42)<<"TO"<<" ADD"<<" IPHONES: ENTER 2"<<endl;
    cout<<right<<setw(40)<<"TO"<<" ADD"<<" WINDONES PHONES:ENTER 3"<<endl;
    cout<<right<<setw(50)<<"ENTER "<<"CHOICE:";
    cin>>choice;
    if(choice==1)
    {
         system("CLS");
        Android android;
        ifstream fin("android.txt");
        fin.close();
        ofstream fout("android.txt",fstream::app);
        cin>>android;
        //android_.push_back(android);
        input<Android>(fout,android);
    }

    else if(choice == 2)
    {
         system("CLS");
        iPhone iphone;
        ifstream fin("iphone.txt");
        fin.close();
        ofstream fout("iphone.txt",fstream::app);
        cin>>iphone;
        //iphone_.push_back(iphone);
       input<iPhone>(fout,iphone);
    }
    else if(choice==3)
    {  system("CLS");
        Windows windows;
        ifstream fin("windows.txt");
        fin.close();;
        ofstream fout("windows.txt",fstream::app);
        cin>>windows;
        //windows_.push_back(windows);
        input<Windows>(fout,windows);
    }
}
