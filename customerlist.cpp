#include"customerlist.h"
void  customerlist()
{

    cout<<"                              ```````````````````````````````````````````````````````"<<endl;
    cout<<"                              ```````````````````````````````````````````````````````"<<endl;
    cout<<"                              `````                                             `````"<<endl;
    cout<<"                              `````                  CUSTOMER LIST              `````"<<endl;
    cout<<"                              `````                                             `````"<<endl;
    cout<<"                              ```````````````````````````````````````````````````````"<<endl;
    cout<<"                              ```````````````````````````````````````````````````````"<<endl;
    ifstream fin("customer.txt");
    string line;
    while(getline(fin,line))
    {

        string dummy;
        int val;
        stringstream sin(line);
        sin>>dummy;
        sin>>dummy;
        cout<<"NAME: "<<dummy<<endl;
        sin>>dummy;
        cout<<"PHONE NO.: "<<dummy<<endl;
        while(1)
        {
            sin>>dummy;
            if(dummy=="END") break;
            else
            {
                cout<<"MODEL: "<<dummy<<endl;
                sin>>val;
                cout<<"QUANTITY: "<<val<<endl;

            }
        }
        cout<<endl<<endl;
    }
    fin.close();
    cout<<"WANT TO RETURN TO MENU??(YES/NO): "<<endl;
    string s;
    cin>>s;
    if(s=="YES") menu();



}
