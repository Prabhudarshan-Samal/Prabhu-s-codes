#include<fstream>
#include<iostream>
#include<process.h>
#include<stdio.h>
using namespace std;
int price=0,vt=0,yr=0;
long int vno;
char name[100];
char email[200];
long long phone;
class newpolicy
{
	public:
    int ch,l;
	void details()
	{
	 ofstream fout ;
	fout.open("vehicleinsurance.txt");	
	cout<<"Enter your first name name"<<endl;
	cin>>name;
	cout<<"Enter your email id"<<endl;
	cin>>email;
	cout<<"Enter your phone number"<<endl;
	cin>>phone;
	cout<<"Enter your vehicle number\n";
	cin>>vno;
	fout<<" Name:"<<name;
	fout<<"\n Email id :"<<email;
	fout<<"\n Phone number:"<<phone;
	fout<<"\n Vehilcle number:"<<vno;
	fout.close();
	}
void choice()
{
	ofstream fout ;
	fout.open("vehicleinsurance.txt",ios::app);
cout<<"\n Choose the type of insurance\n"<<endl;
cout<<"1.Personal\n2.Business\n3.Exit"<<endl;
cout<<"Enter your choice"<<endl;
cin>>l;
switch(l)
{
case 1:fout<<"\n Insurance type : personal vehicle\n";
personal();
break;
case 2:fout<<" \nInsurance type: business vehlicle\n";
business();
break;
case 3:exit(0);
default:cout<<"Invalid choice\n"<<endl; 
}
fout.close();
}
void personal()
{
ofstream fout ;
	fout.open("vehicleinsurance.txt",ios::app);	
cout<<"Choose the type of vehicle"<<endl;
cout<<"1.Two-wheeler\n2.Four wheeler\n3.Exit"<<endl;
cin>>ch;
switch(ch)
{
case 1:fout<<" Vehicle type : two wheeler\n";
vt=1;
fout<<vt;
twowheeler();
break;
case 2:fout<<" Vehicle type: four wheeler\n";
vt=2;
fout<<vt;
fourwheeler();
break;
case 3:exit(0); 
default:cout<<"Invalid choice\n"<<endl;
}
fout.close();
}
void business()
{
	ofstream fout ;
	fout.open("vehicleinsurance.txt",ios::app);
cout<<"Choose amongst the following"<<endl;
cout<<"1.Three-wheeler\n2. Six wheeler \n3. Above six wheels"<<endl;
cin>>ch;
switch(ch)
{
case 1:fout<<" Vehicle type : three wheeler\n";
vt=3;
fout<<vt;
threewheeler();
break;
case 2:fout<<" Vehicle type : six wheeler";
vt=4;
fout<<vt;
sixwheeler();
    break;
case 3:fout<<"\n Vehicle type : more than six wheels\n";
vt=5;
fout<<vt;
above();
break;
case 4:exit(0); 
default:cout<<"Invalid choice"<<endl; 
}
fout.close();
}
void twowheeler()
{
	ofstream fout ;
	fout.open("vehicleinsurance.txt",ios::app);
cout<<"Which yearly package do you want to take"<<endl;
cout<<"1: 1yrs or 2yrs"<<endl;
cout<<"2: 3yrs or 4yrs"<<endl;
cout<<"3: 5yrs or 6rs"<<endl;
cout<<"4: 7yrs or 8yrs"<<endl;
cin>>yr;
switch(yr)
{
case 1:cout<<"Choose the price to pay in this period"<<endl;
   cout<<"1: Rs1500"<<endl;
   cout<<"2: Rs1100"<<endl;
   cin>>price;
   fout<<"\n Insurance made for 1 yr or 2 yrs"<<"\nprice="<<price<<endl;
   break;
case 2:cout<<"Choose the price to pay in this period"<<endl;
   cout<<"1: Rs2000"<<endl;
   cout<<"2: Rs1600"<<endl;
   cin>>price;
   fout<<"\n Insurance made for 3 yr or 4 yrs"<<"\nprice="<<price<<endl;
   break;
case 3:cout<<"Choose the price to pay in this period"<<endl;
   cout<<"1: Rs2500"<<endl;
   cout<<"2: Rs2100"<<endl;
   cin>>price;
   fout<<"\n Insurance made for 5 yr or 6 yrs"<<"\nprice="<<price<<endl;
   break;
case 4:cout<<"Choose the price to pay in this period"<<endl;
   cout<<"1: Rs3000"<<endl;
   cout<<"2: Rs2600"<<endl;
   cin>>price;
   fout<<"\n Insurance made for 7 yr or 8 yrs"<<"\nprice="<<price<<endl;
   break;
default:cout<<"\n Invalid choice\n";
}
fout.close();
}
void fourwheeler()
{
ofstream fout ;
	fout.open("vehicleinsurance.txt",ios::app);
cout<<"Which yearly package do you want to take"<<endl;
cout<<"1: 3yrs or 4yrs"<<endl;
cout<<"2: 5yrs or 6rs"<<endl;
cout<<"3: 7yrs or 8yrs"<<endl;
cout<<"4: 9yrs or 10yrs"<<endl;
cin>>yr;
switch(yr)
{
case 1:cout<<"Choose the price to pay in this period"<<endl;
   cout<<"1: Rs2500"<<endl;
   cout<<"2: Rs2100"<<endl;
   cin>>price;
   fout<<"\n Insurance made for 3yr or 4 yrs"<<"\nprice="<<price<<endl;
   break;
case 2:cout<<"Choose the price to pay in this period"<<endl;
   cout<<"1: Rs3000"<<endl;
   cout<<"2: Rs2600"<<endl;
   cin>>price;
   fout<<"\n Insurance made for 5 yr or 6yrs"<<"\nprice="<<price<<endl;
   break;
case 3:cout<<"Choose the price to pay in this period"<<endl;
   cout<<"1: Rs3500"<<endl;
   cout<<"2: Rs3100"<<endl;
   cin>>price;
   fout<<"\n Insurance made for 7 yr or 8 yrs"<<"\nprice="<<price<<endl;
   break;
case 4:cout<<"Choose the price to pay in this period"<<endl;
   cout<<"1: Rs4000"<<endl;
   cout<<"2: Rs3600"<<endl;
   cin>>price;
   fout<<"\n Insurance made for 9 yr or 10 yrs"<<"\nprice="<<price<<endl;
   break;
default:cout<<"Invalid choice";
}
fout.close();
} 
void threewheeler()
{
	ofstream fout ;
	fout.open("vehicleinsurance.txt",ios::app);
cout<<"Which yearly package do you want to take"<<endl;
cout<<"1: 2yrs or 3yrs"<<endl;
cout<<"2: 4yrs or 5rs"<<endl;
cout<<"3: 6yrs or 7yrs"<<endl;
cout<<"4: 8yrs or 9yrs"<<endl;
cin>>yr;
switch(yr)
{
case 1:cout<<"Choose the price to pay in this period"<<endl;
   cout<<"1: Rs1700"<<endl;
   cout<<"2: Rs1300"<<endl;
   cin>>price;
   fout<<"\n Insurance made for 2 yr or 3 yrs"<<"\nprice="<<price<<endl;
   break;
case 2:cout<<"Choose the price to pay in this period"<<endl;
   cout<<"1: Rs2200"<<endl;
   cout<<"2: Rs1800"<<endl;
   cin>>price;
   fout<<"\n insurance made for 4yr or 5 yrs"<<"\nprice="<<price<<endl;
   break;
case 3:cout<<"Choose the price to pay in this period"<<endl;
   cout<<"1: Rs2700"<<endl;
   cout<<"2: Rs2300"<<endl;
   cin>>price;
   fout<<"\n Insurance made for 6 yr or 7 yrs"<<"\nprice="<<price<<endl;
   break;
case 4:cout<<"Choose the price to pay in this period"<<endl;
   cout<<"1: Rs3200"<<endl;
   cout<<"2: Rs2800"<<endl;
   cin>>price;
   fout<<"\n Insurance made for 8 yr or 9 yrs"<<"\nprice="<<price<<endl;
   break;
default:cout<<"Invalid choice";
}
fout.close();
}
void sixwheeler()
{
	ofstream fout ;
	fout.open("vehicleinsurance.txt",ios::app);
cout<<"Which yearly package do you want to take"<<endl;
cout<<"1: 3yrs or 4yrs"<<endl;
cout<<"2: 5yrs or 6rs"<<endl;
cout<<"3: 7yrs or 8yrs"<<endl;
cout<<"4: 9yrs or 10yrs"<<endl;
cin>>yr;
switch(yr)
{
case 1:cout<<"Choose the price to pay in this period"<<endl;
   cout<<"1: Rs1800"<<endl;
   cout<<"2: Rs1400"<<endl;
   cin>>price;
   fout<<"\n Insurance made for 3 yr or 4 yrs"<<"\nprice="<<price<<endl;
   break;
case 2:cout<<"Choose the price to pay in this period"<<endl;
   cout<<"1: Rs2300"<<endl;
   cout<<"2: Rs1900"<<endl;
   cin>>price;
   fout<<"\n Insurance made for 5yr or 6 yrs"<<"\nprice="<<price<<endl;
   break;
case 3:cout<<"Choose the price to pay in this period"<<endl;
   cout<<"1: Rs2800"<<endl;
   cout<<"2: Rs2400"<<endl;
   cin>>price;
   fout<<"\n Insurance made for 7 yr or 8 yrs"<<"\nprice="<<price<<endl;
   break;
case 4:cout<<"Choose the price to pay in this period"<<endl;
   cout<<"1: Rs3300"<<endl;
   cout<<"2: Rs2900"<<endl;
   cin>>price;
   fout<<"\n Insurance made for 9 yr or 10 yrs"<<"\nprice="<<price<<endl;
   break;
default:cout<<"Invalid choice";
}
fout.close();
}
void above()
{
	ofstream fout ;
	fout.open("vehicleinsurance.txt",ios::app);
cout<<"Which yearly package do you want to take"<<endl;
cout<<"1: 3yrs or 4yrs"<<endl;
cout<<"2: 5yrs or 6rs"<<endl;
cout<<"3: 7yrs or 8yrs"<<endl;
cout<<"4: 9yrs or 10yrs"<<endl;
cout<<"5: 11yrs or 12yrs"<<endl;
cin>>yr;
switch(yr)
{
case 1:cout<<"Choose the price to pay in this period"<<endl;
   cout<<"1: Rs2900"<<endl;
   cout<<"2: Rs2500"<<endl;
   cin>>price;
   fout<<"\n Insurance made for 3 yr or 4 yrs"<<"\nprice="<<price<<endl;
   break;
case 2:cout<<"Choose the price to pay in this period"<<endl;
   cout<<"1: Rs3400"<<endl;
   cout<<"2: Rs3000"<<endl;
   cin>>price;
   fout<<"\n Insurance made for 5 yr or 6 yrs"<<"\nprice="<<price<<endl;
   break;
case 3:cout<<"Choose the price to pay in this period"<<endl;
   cout<<"1: Rs3900"<<endl;
   cout<<"2: Rs3500"<<endl;
   cin>>price;
   fout<<"\n Insurance made for 7 yr or 8 yrs"<<"\n price="<<price<<endl;
   break;
case 4:cout<<"Choose the price to pay in this period"<<endl;
   cout<<"1: Rs4400"<<endl;
   cout<<"2: Rs4000"<<endl;
   cin>>price;
   fout<<"\n Insurance made for 9 yr or 10 yrs"<<"\nprice="<<price<<endl;
   break;
case 5:cout<<"Choose the price to pay in this period"<<endl;
   cout<<"1: Rs4900"<<endl;
   cout<<"2: Rs4500"<<endl;
   cin>>price;
   fout<<"\n Insurance made for 11 yr or 12 yrs"<<"\nprice="<<price<<endl;
   break;
default:cout<<"Invalid choice\n";
}
fout.close();
}
void display()
{
	if(price=!0)
cout<<" Your new policy has been successfully created\n Details about the insurance will be sent to "<<email<<" and to"<<phone<<endl;
}
};
 class claimpolicy
 { 
 public:
 long int vhno;
 int q,ce,tms,v,tt;
 char ch;
 void claim1()
 {
 cout<<"\nEnter your four digit vehile number to claim ur policy\n";
 cin>>vhno;
 ifstream fin;
 fin.open("vehicleinsurance.txt");
 if(vhno==vno)
 {
 	cout<<"The details of the policy of the given the vehicle number\n";
 	while(!fin.eof())
	{
		fin.get(ch);
		cout<<ch;
	}
 }
 else
 {
 	cout<<"Enter a valid vehicle number\n";
    exit(0);
 }
 cout<<"Choose the type of damage\n"<<endl;
 cout<<"1.Accident\n"<<endl;
 cout<<"2.Natural disaster\n"<<endl;
 cin>>q;
 if(q==1)
{
switch(vt)
{
case 1:cout<<"Give the details of insurance duration"<<endl;
   cout<<"1:Rs1500/1yr or 2yr"<<endl;
   cout<<"2:Rs2000/3yr or 4yr"<<endl;
   cout<<"3:Rs2500/5yr or 6yr"<<endl;
   cout<<"4:Rs3000/7yr or 8yr"<<endl;
   cin>>ce;
   cout<<"How many times you had paid from this plan"<<endl;
   cin>>tms;
   cout<<endl;
   if(ce==1)
   {
v=0.4*1500*tms;
    tt=(v+1500*tms);
    cout<<"RS"<<tt;
cout<<" will be deposited to your account\n";
   }
   else if(ce==2)
   {
 v=0.4*2000*tms;
 tt=(v+2000*tms);
 cout<<"RS"<<tt;
 cout<<" Will be deposited to your account\n";
   }
   else if(ce==3)
   {
v=0.4*2500*tms;
tt=(v+2500*tms);
cout<<"RS"<<tt;
cout<<" Will be deposited to your account\n";
   }
   else if(ce==4)
   {
v=0.4*3000*tms;
tt=(v+3000*tms);
cout<<"RS"<<tt;
cout<<" Will be deposited to your account\n";
   } 
   break;
case 2:cout<<"Give the details of insurance duration"<<endl;
   cout<<"1:Rs2500/3yr or 4yr"<<endl;
   cout<<"2:Rs3000/5yr or 6yr"<<endl;
   cout<<"3:Rs3500/7yr or 8yr"<<endl;
   cout<<"4:Rs4000/9yr or 10yr"<<endl;
   cin>>ce;
   cout<<endl;
   cout<<"How many times you had paid from this plan"<<endl;
   cin>>tms;
   if(ce==1)
   {
v=1*2500*tms;
    tt=(v+2500*tms);
    cout<<"RS"<<tt;
cout<<" Will be deposited to your account\n";
   }
   else if(ce==2)
   {
 v=1*3000*tms;
 tt=(v+3000*tms);
 cout<<"RS"<<tt;
 cout<<" will be deposited to your account \n";
   }
   else if(ce==3)
   {
v=1*3500*tms;
tt=(v+3500*tms);
cout<<"RS"<<tt;
cout<<" will be deposited to your account\n";
   }
   else if(ce==4)
   {
v=1*4000*tms;
tt=(v+4000*tms);
cout<<"RS"<<tt;
cout<<" will be deposited to your account\n";
   }
   break;
case 3:cout<<"Give the details of insurance duration"<<endl;
   cout<<"1:Rs1700/2yr or 3yr"<<endl;
   cout<<"2:Rs2200/4yr or 5yr"<<endl;
   cout<<"3:Rs2700/6yr or 7yr"<<endl;
   cout<<"4:Rs3200/8yr or 9yr"<<endl;
   cin>>ce;
   cout<<endl;
   cout<<"How many times you had paid from this plan"<<endl;
   cin>>tms;
   if(ce==1)
   {
v=0.8*1700*tms;
    tt=(v+1700*tms);
    cout<<"RS"<<tt;
cout<<" will be deposited to your account\n";
   }
   else if(ce==2)
   {
 v=0.8*2200*tms;
 tt=(v+2200*tms);
 cout<<"RS"<<tt;
 cout<<" will be deposited to your account\n";
   }
   else if(ce==3)
   {
v=0.8*2700*tms;
tt=(v+2700*tms);
cout<<"RS"<<tt;
cout<<" will be deposited to your account\n";
   }
   else if(ce==4)
   {
v=0.8*3200*tms;
tt=(v+3200*tms);
cout<<"RS"<<tt;
cout<<" will be deposited to your account\n";
   }
   break;
case 4:cout<<"Give the details of insurance duration"<<endl;
   cout<<"1:Rs1800/3yr or 4yr"<<endl;
   cout<<"2:Rs2300/5yr or 6yr"<<endl;
   cout<<"3:Rs2800/7yr or 8yr"<<endl;
   cout<<"4:Rs3300/9yr or 10yr"<<endl;
   cin>>ce;
   cout<<endl;
   cout<<" How many times you had paid from this plan"<<endl;
   cin>>tms;
   if(ce==1)
   {
v=1.4*1800*tms;
    tt=(v+1800*tms);
    cout<<"RS"<<tt;
cout<<" will be deposited to your account\n";
   }
   else if(ce==2)
   {
 v=1.4*2300*tms;
 tt=(v+2300*tms);
 cout<<"RS"<<tt;
 cout<<" will be deposited to your account\n";
   }
   else if(ce==3)
   {
v=1.4*2800*tms;
tt=(v+2800*tms);
cout<<"RS"<<tt;
cout<<" Will be deposited to your account\n";
   }
   else if(ce==4)
   {
v=1.4*3300*tms;
tt=(v+3300*tms);
cout<<"RS"<<tt;
cout<<" will be deposited to your account\n";
   } 
   break;
case 5:cout<<"Give the details of insurance duration"<<endl;
   cout<<"1:Rs2900/3yr or 4yr"<<endl;
   cout<<"2:Rs3400/5yr or 6yr"<<endl;
   cout<<"3:Rs3900/7yr or 8yr"<<endl;
   cout<<"4:Rs4400/9yr or 10yr"<<endl;
   cin>>ce;
   cout<<endl;
   cout<<"How many times you had paid from this plan"<<endl;
   cin>>tms;
   if(ce==1)
   {
    v=2*2900*tms;
    tt=(v+2900*tms);
    cout<<"RS"<<tt;
cout<<" will be deposited to your account\n";
   }
   else if(ce==2)
   {
 v=2*3400*tms;
 tt=(v+3400*tms);
 cout<<"RS"<<tt;
 cout<<" will be deposited to your account\n";
   }
   else if(ce==3)
   {
v=2*3900*tms;
tt=(v+3900*tms);
cout<<"RS"<<tt;
cout<<" will be deposited to your account\n";
   }
   else if(ce==4)
   {
v=2*4400*tms;
tt=(v+4400*tms);
cout<<"RS"<<tt;
cout<<" will be deposited to your account\n";
   }
   break;
}
}
else if(q==2)
{
switch(vt)
{
case 1:cout<<"Give the details of insurance duration"<<endl;
   cout<<"1:Rs1500/1yr or 2yr"<<endl;
   cout<<"2:Rs2000/3yr or 4yr"<<endl;
   cout<<"3:Rs2500/5yr or 6yr"<<endl;
   cout<<"4:Rs3000/7yr or 8yr"<<endl;
   cin>>ce;
   cout<<endl;
   cout<<"How many times you had paid from this plan"<<endl;
   cin>>tms;
   if(ce==1)
   {
v=0.6*1500*tms;
    tt=(v+1500*tms);
    cout<<"RS"<<tt;
cout<<" Will be deposited to your account\n";
    break;
   }
   else if(ce==2)
   {
 v=0.6*2000*tms;
 tt=(v+2000*tms);
cout<<"RS"<<tt;
cout<<" will be deposited to your account\n";
 break;
   }
   else if(ce==3)
   {
v=0.6*2500*tms;
tt=(v+2500*tms);
cout<<"RS"<<tt;
cout<<" will be deposited to your account\n";
break;
   }
   else if(ce==4)
   {
v=0.6*3000*tms;
tt=(v+3000*tms);
cout<<"RS"<<tt;
cout<<" will be deposited to your account\n";
break;
   } 
case 2:cout<<"Give the details of insurance duration"<<endl;
   cout<<"1:Rs2500/3yr or 4yr"<<endl;
   cout<<"2:Rs3000/5yr or 6yr"<<endl;
   cout<<"3:Rs3500/7yr or 8yr"<<endl;
   cout<<"4:Rs4000/9yr or 10yr"<<endl;
   cin>>ce;
   cout<<endl;
   cout<<"How many times you had paid from this plan"<<endl;
   cin>>tms;
   if(ce==1)
   {
v=1.2*2500*tms;
    tt=(v+2500*tms);
    cout<<"RS"<<tt;
cout<<" will be deposited to your account\n";
    break;
   }
   else if(ce==2)
   {
 v=1.2*3000*tms;
 tt=(v+3000*tms);
 cout<<"RS"<<tt;
cout<<" will be deposited to your account\n";
 break;
   }
   else if(ce==3)
   {
v=1.2*3500*tms;
tt=(v+3500*tms);
cout<<"RS"<<tt;
cout<<" will be deposited to your account\n";
break;
   }
   else if(ce==4)
   {
v=1.2*4000*tms;
tt=(v+4000*tms);
cout<<"RS"<<tt;
cout<<" will be deposited to your account\n";
break;
   }
case 3:cout<<"give the details of insurance duration"<<endl;
   cout<<"1:Rs1700/2yr or 3yr"<<endl;
   cout<<"2:Rs2200/4yr or 5yr"<<endl;
       cout<<"3:Rs2700/6yr or 7yr"<<endl;
   cout<<"4:Rs3200/8yr or 9yr"<<endl;
   cin>>ce;
   cout<<endl;
   cout<<"How many times you had paid from this plan"<<endl;
   cin>>tms;
   if(ce==1)
   {
v=1*1700*tms;
    tt=(v+1700*tms);
    cout<<"RS"<<tt;
cout<<" will be deposited to your account\n";
    break;
   }
   else if(ce==2)
   {
 v=1*2200*tms;
 tt=(v+2200*tms);
 cout<<"RS"<<tt;
cout<<" will be deposited to your account\n";
 break;
   }
   else if(ce==3)
   {
v=1*2700*tms;
tt=(v+2700*tms);
cout<<"RS"<<tt;
cout<<" will be deposited to your account\n";
break;
   }
   else if(ce==4)
   {
v=1*3200*tms;
tt=(v+3200*tms);
cout<<"RS"<<tt;
cout<<" will be deposited to your account\n";
break;
   }
case 4:cout<<"Give the details of insurance duration"<<endl;
   cout<<"1:Rs1800/3yr or 4yr"<<endl;
   cout<<"2:Rs2300/5yr or 6yr"<<endl;
       cout<<"3:Rs2800/7yr or 8yr"<<endl;
   cout<<"4:Rs3300/9yr or 10yr"<<endl;
   cin>>ce;
   cout<<endl;
   cout<<"How many times you had paid from this plan"<<endl;
   cin>>tms;
   if(ce==1)
   {
    v=1.6*1800*tms;
    tt=(v+1800*tms);
    cout<<"RS"<<tt;
    cout<<" will be deposited to your account\n";
    break;
   }
   else if(ce==2)
   {
 v=1.6*2300*tms;
 tt=(v+2300*tms);
 cout<<"RS"<<tt;
cout<<" will be deposited to your account\n";
 break;
   }
   else if(ce==3)
   {
v=1.6*2800*tms;
tt=(v+2800*tms);
cout<<"RS"<<tt;
cout<<" will be deposited to your account\n";
break;
   }
   else if(ce==4)
   {
v=1.6*3300*tms;
tt=(v+3300*tms);
cout<<"RS"<<tt;
cout<<" will be deposited to your account\n";
break;
   } 
case 5:cout<<"Give the details of insurance duration"<<endl;
   cout<<"1:Rs2900/3yr or 4yr"<<endl;
   cout<<"2:Rs3400/5yr or 6yr"<<endl;
       cout<<"3:Rs3900/7yr or 8yr"<<endl;
   cout<<"4:Rs4400/9yr or 10yr"<<endl;
   cin>>ce;
   cout<<endl;
   cout<<"How many times you had paid from this plan"<<endl;
   cin>>tms;
   if(ce==1)
   {
v=2.2*2900*tms;
    tt=(v+2900*tms);
    cout<<"RS"<<tt;
cout<<" will be deposited to your account\n";
    break;
   }
   else if(ce==2)
   {
 v=2.2*3400*tms;
 tt=(v+3400*tms);
 cout<<"RS"<<tt;
cout<<" will be deposited to your account\n";
 break;
   }
   else if(ce==3)
   {
v=2.2*3900*tms;
tt=(v+3900*tms);
cout<<"RS"<<tt;
cout<<" will be deposited to your account\n";
break;
   }
   else if(ce==4)
   {
v=2.2*4400*tms;
tt=(v+4400*tms);
cout<<"RS"<<tt;
cout<<" will be deposited to your account\n";
break;
   }
}
}
}
};
class renewal:public newpolicy
{
	public:
	long int vhno;
	char ch;
	void renew1()
	{
	cout<<"Enter your four digit vehicle number to renew your policy\n";
	cin>>vhno;
	ifstream fin;
    fin.open("vehicleinsurance.txt");
    if(vhno==vno)
    {
 	cout<<"The details of the policy of the given the vehicle number\n";
 	while(!fin.eof())
	{
		fin.get(ch);
		cout<<ch;
	}
   }
   else
   {
 	cout<<"Enter a valid vehicle number\n";
    exit(0);
   } 
   switch(vt)
   {
   	case 1:twowheeler();
   	break;
   	case 2:threewheeler();
   	break;
   	case 3:fourwheeler();
   	break;
   	case 4:sixwheeler();
   	break;
   	case 5:above();
   	default:cout<<"Invalid choice\n";
   }
}
};
main()
{
	cout<<"******************************************************Welcome to Bharat Vehicle Insurance Services****************************************************************************\n";
	int p,n;
	newpolicy ob1;
	claimpolicy ob2;
	renewal ob3;
	do
	{
	cout<<"Enter 1 to make a new vehicle insurance policy\n";
	cout<<"Enter 2 to claim your vehicle insurance policy\n";
	cout<<"Enter 3 to renew your vehicle insurance policy\n";
	cin>>p;
	if(p==1)
	{
		ob1.details();
		ob1.choice();
		ob1.display();
	}
	if(p==2)
	{
		ob2.claim1();
	}
	if(p==3)
	{
		ob3.renew1();
		ob3.display();
	}
	cout<<"Press any key to continue or else press 0 to exit\n";
	cin>>n;
    }while(n!=0);
		cout<<"Thank You for choosing our services. Do revisit us again for more services";
}
 

