#include"buy.h"
namespace Z
{
    ostream& operator<<(ostream& out, Customer c)
    {
        out<<c.name<<endl;
        out<<c.phone_no<<endl;
        out<<c.model<<endl;
        return out;
    }
}
void buyphone(int n)
{
    string ans;
    Customer customer;
    cout<<endl<<endl<<"              SELLING IT??(YES/NO)"<<endl;
    cin>>ans;
    if(ans=="YES")
    {

        cout<<n<<endl;
        ifstream fin("customer.txt");
        fin.close();
        cin>>customer;
        ofstream fout("customer.txt",fstream::app);
        Z::operator<<(fout,customer);
         cout<<"THANKS FOR PURCHASING "<<customer.model<<endl;
         string s=customer.model;
         //deleteItem(s,n);
    }
    else if(ans=="NO")
    {
        menu();
    }
}
