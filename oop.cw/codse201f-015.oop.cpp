#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;

class customer
{
protected:
    char cname[50];
    char id_num[20];
public:
    void input();

};

class vehicle
{
protected:
        int v_no;
        int c_no;
        int year;
        char mode[50];
public:
      void setdata();
      void getdata(int);
      virtual void display()
    {
      cout<<"VEHICLE NUMBER IS            :"<<v_no<<endl;
      cout<<"CHASSIS NUMBER IS            :"<<c_no<<endl;
      cout<<"MANUFACTURE YEAR OF VEHICLE  :"<<year<<endl;
      cout<<"PAYMENT MODE IS              :"<<mode<<endl;
    }
    ~vehicle()
    {
        cout<<"end of the excution"<<endl;
    }

};

class car:public vehicle
{
private:
    int carno;
    float amount;
public:
    void calculate();

};

class van:public vehicle
{
    private:
    int vanno;
    float amount;
public:
    void findamount();

};

 void customer:: input()
    {
        cout<<"........................................... WELCOME TO THE SUPER VEHICLE SALE.........................................."<<endl;
        cout<<"......................................................................................................................."<<endl;
        cout<<".........HI CUSTOMER..!...PLZ ENTER YOUR DETAILS......................................................................."<<endl;
        cout<<"ENTER YOUR NAME      : "<<endl;
        cin>>cname;
        cout<<"ENTER YOUR ID NUMBER : "<<endl;
        cin>>id_num;
    }

void vehicle::setdata()
    {
        cout<<"ENTER VEHICLE NUMBER:"<<endl;
        cin>>v_no;
        cout<<"ENTER CHASSIS NUMBER:"<<endl;
        cin>>c_no;
        cout<<"ENTER MANUFACTURE YEAR :"<<endl;
        cin>>year;
        cout<<"ENTER PAYMENT MODE     :"<<endl;
        cin>>mode;
        fstream a;
        a.open("D:/vehicle.txt",ios::app);
        a<<setw(5)<<v_no<<setw(5)<<c_no<<setw(5)<<year<<setw(5)<<mode<<endl;

    }

void vehicle::getdata(int ve_no)
{
    fstream b;
    b.open("D:/vehicle.txt",ios::in);
    while (b)
    {
        b>>v_no>>c_no>>year;
        if(v_no==ve_no)
        {
            cout<<"CHASSIN NUMBER IS :"<<c_no<<endl;
            cout<<"MANUFACTURE YEAR IS : "<<year<<endl;
            break;
        }
    }
}

void car::calculate()

     {
     cout<< "\n1.BMW\n2.AUDI\n3.BENZE\n ";
     cout<< "ENTER THE TYPE OF CAR YOU WOULD LIKE TO PURCHASE:"<<endl;
     cin>>carno;
     if(carno==1)
        {
        amount=1000000-((10*1000000)/100);
        cout<<".............................BILL DESCRIPTION............................."<<endl;
        cout<<".........................................................................."<<endl;
        cout<<"Customer name is                                                   :"<<cname<<endl;
        cout<<"Id number is                                                       :"<<id_num<<endl;
        cout<<"vehicle number is                                                  :"<<v_no<<endl;
        cout<<"chassis number is                                                  :"<<c_no<<endl;
        cout<<"Manufacture year is                                                :"<<year<<endl;
        cout<<" Vehicle amount is                                                 :"<<amount<<endl;
        cout<<"Payment mode is                                                    :"<<mode<<endl;
        }

    else if(carno==2)
        {
        amount=200000-((10*200000)/100);
        cout<<".............................BILL DESCRIPTION............................."<<endl;
        cout<<".........................................................................."<<endl;
        cout<<"Customer name is                                                   :"<<cname<<endl;
        cout<<"Id number is                                                       :"<<id_num<<endl;
        cout<<"vehicle number is                                                  :"<<v_no<<endl;
        cout<<"chassis number is                                                  :"<<c_no<<endl;
        cout<<"Manufacture year is                                                :"<<year<<endl;
        cout<<" Vehicle amount is                                                 :"<<amount<<endl;
        cout<<"Payment mode is                                                    :"<<mode<<endl;
        }

    else if(carno==3)
       {
        amount=300000-((10*300000)/100);
        cout<<".............................BILL DESCRIPTION............................."<<endl;
        cout<<".........................................................................."<<endl;
        cout<<"Customer name is                                                   :"<<cname<<endl;
        cout<<"Id number is                                                       :"<<id_num<<endl;
        cout<<"vehicle number is                                                  :"<<v_no<<endl;
        cout<<"chassis number is                                                  :"<<c_no<<endl;
        cout<<"Manufacture year is                                                :"<<year<<endl;
        cout<<" Vehicle amount is                                                 :"<<amount<<endl;
        cout<<"Payment mode is                                                    :"<<mode<<endl;
       }
    }

void van::findamount()
 {
    cout<< "\n1.CARAVEN\n2.DOLPHIN\n3.CELL\n ";
    cout<< "ENTER THE TYPE OF VAN YOU WOULD LIKE TO PURCHASE:"<<endl;
    cin>>vanno;
    if(vanno==1)
      {
        amount=400000-((20*400000)/100);
        cout<<".............................BILL DESCRIPTION............................."<<endl;
        cout<<".........................................................................."<<endl;
        cout<<"Customer name is                                                   :"<<cname<<endl;
        cout<<"Id number is                                                       :"<<id_num<<endl;
        cout<<"Vehicle number is                                                  :"<<v_no<<endl;
        cout<<"Chassis number is                                                  :"<<c_no<<endl;
        cout<<"Manufacture year is                                                :"<<year<<endl;
        cout<<" Vehicle amount is                                                 :"<<amount<<endl;
        cout<<"Payment mode is                                                    :"<<mode<<endl;

      }
    else if(vanno==2)
      {
        amount=500000-((20*500000)/100);
        cout<<".............................BILL DESCRIPTION............................."<<endl;
        cout<<".........................................................................."<<endl;
        cout<<"Customer name is                                                   :"<<cname<<endl;
        cout<<"Id number is                                                       :"<<id_num<<endl;
        cout<<"vehicle number is                                                  :"<<v_no<<endl;
        cout<<"chassis number is                                                  :"<<c_no<<endl;
        cout<<"Manufacture year is                                                :"<<year<<endl;
        cout<<"Vehicle amount is                                                 :"<<amount<<endl;
        cout<<"Payment mode is                                                    :"<<mode<<endl;
      }

    else if(vanno==3)
      {
        amount=600000-((20*600000)/100);
        cout<<".............................BILL DESCRIPTION............................."<<endl;
        cout<<".........................................................................."<<endl;
        cout<<"Customer name is                                                   :"<<cname<<endl;
        cout<<"Id number is                                                       :"<<id_num<<endl;
        cout<<"vehicle number is                                                  :"<<v_no<<endl;
        cout<<"chassis number is                                                  :"<<c_no<<endl;
        cout<<"Manufacture year is                                                :"<<year<<endl;
        cout<<" Vehicle amount is                                                 :"<<amount<<endl;
        cout<<"Payment mode is                                                    :"<<mode<<endl;
      }


  }

  int main()
   {
     int i;
     customer C;
     car A;
     van B;
     cout<<"HAVA A GOOD DAY"<<endl;
       do
          {
             cout<<"\n1.car\n2.van\nENTER YOUR CHOICE OR IF YOU WANT TO EXIT PRESS '-9'\n ";
             cin>>i;
             switch(i)
                     {
                      case 1:

                              C.input();
                              A.setdata();
                             //int vehicle_no;
                             //cout<<"insert v_no to find chassi num and year"<<endl;
                             //cin>>vehicle_no;
                            // A.getdata(vehicle_no);
                             A.calculate();
                       break;

                       case 2:

                             C.input();
                             B.setdata();
                             //int vehicle_no_u;
                             //cout<<"insert v_no to find chassi num and year"<<endl;
                             //cin>>vehicle_no_u;
                            // B.getdata(vehicle_no_u);
                             B.findamount();

                       break;

                     default:
                             cout<<"Thank come again"<<endl;

                     }
                 }
                   while(i!=-9);

                   return 0;
    }
