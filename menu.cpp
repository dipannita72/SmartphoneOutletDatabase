#include"menu.h"

void menu()
{
    system("CLS");
    cout<<endl<<endl<<endl<<endl;
    cout<<"                                      WELCOME TO MOBILE STORE"<<endl<<endl<<endl;
    cout<<"                           ********************************************"<<endl;
    cout<<"                           ********************************************"<<endl;
    cout<<"                           **              1.ADD ITEMS               **"<<endl;
    cout<<"                           **             2.SEARCH ITEMS             **"<<endl;
    cout<<"                           **              3.BUY ITEMS               **"<<endl;
    cout<<"                           **            4.VIEW ITEM LIST            **"<<endl;
    cout<<"                           **             5.UPDATE PRICE             **"<<endl;
    cout<<"                           **          6.VIEW CUSTOMER LIST          **"<<endl;
    cout<<"                           **             7.DELETE ITEM              **"<<endl;
    cout<<"                           **                8.EXIT                  **"<<endl;
    cout<<"                           ********************************************"<<endl;
    cout<<"                           ********************************************"<<endl;

    cout<<"ENTER CHOICE:  ";
    int n;
    cin>>n;
    if(n==1)
    {
        system("CLS");
        cout<<"                           ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"                           ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"                           ~~~                                     ~~~"<<endl;
        cout<<"                           ~~~          ADD ITEM SECTOR            ~~~"<<endl;
        cout<<"                           ~~~                                     ~~~"<<endl;
        cout<<"                           ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"                           ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            addItem();

    }

    else if(n==2)
    {
        system("CLS");
        cout<<endl<<endl;
        cout<<"                           :::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
        cout<<"                           :::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
        cout<<"                           ::::                                           ::::"<<endl;
        cout<<"                           ::::                 SEARCH ITEMS              ::::"<<endl;
        cout<<"                           ::::                                           ::::"<<endl;
        cout<<"                           :::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
        cout<<"                           :::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
         searchitem();
    }
    else if(n==3)
    {
        system("CLS");

        cout<<"                           :::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
        cout<<"                           :::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
        cout<<"                           ::::                                           ::::"<<endl;
        cout<<"                           ::::              PURCHASING ITEMS             ::::"<<endl;
        cout<<"                           ::::                                           ::::"<<endl;
        cout<<"                           :::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
        cout<<"                           :::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
        purchase();

    }
    else if(n==4)
    {
        system("CLS");
        listItem();
    }
    else if(n==8)
       {
          return ;
       }
    else if(n==5)
    {
        system("CLS");
        cout<<"                            !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
        cout<<"                            !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
        cout<<"                            !!!!                                                 !!!!"<<endl;
        cout<<"                            !!!!                  UPDATING SECTOR                !!!!"<<endl;
        cout<<"                            !!!!                                                 !!!!"<<endl;
        cout<<"                            !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
        cout<<"                            !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
        update();
    }

   else if (n==6)
   {
       system("CLS");
       customerlist();
   }
   else if(n==7)
   {
       system("CLS");
       cout<<"\n\n\n\n\n";
        cout<<"                            !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
        cout<<"                            !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
        cout<<"                            !!!!                                                 !!!!"<<endl;
        cout<<"                            !!!!                  DELETING SECTOR                !!!!"<<endl;
        cout<<"                            !!!!                                                 !!!!"<<endl;
        cout<<"                            !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
        cout<<"                            !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
       deleteItem();
   }

}
