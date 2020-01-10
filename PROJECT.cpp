#include<windows.h>
#include<iostream>
#include<string.h>
#include<fstream>
#include<conio.h>
using namespace std;

char a,b,c,d,e;	
string check,n_pass,c_pass;
int i=0,ch,P_no[10],Paytm,Card;
char reg_no[10],Password[80],C_Password[80];
string temp,temp1,temp2,name,user,pass,Username;

class Data
{
 public:
 void Cafe();
 void Login();
 void Start();
 void Master();
 void Member();
 void Payment();
 void Enquiry();
 void Discount();
 void Register();
 void Computer();
 void main_menu();
 void Membership();	
};
Data obj;

void Data::Start()
{
 int k;	
 system("cls");
 system("color f");	
 char Caption[]="Cafe Management System";
 cout<<"\n\n\n\n\n\t\t\t\t\t-: ";
 for(k=0;k<strlen(Caption);k++)
 {
  cout<<Caption[k];
  Sleep(50);	
 }	
 cout<<" :-";
 Sleep(300);
 cout<<"\n\n\n\t\t\t\t1) Login...";
 Sleep(100);
 cout<<"\n\n\t\t\t\t2) Register...";
 Sleep(100);
 cout<<"\n\n\t\t\t\t3) Exit...\n\n\n";
 Sleep(300);
 cout<<"\t\t\t\tEnter your choice =  ";
 fflush(stdin);
 cin>>ch;
 switch(ch)
 {
  case 1:
  {
   obj.Login();
  }
  break;
  case 2:
  {	
   obj.Register();	
  }
  break;
  case 3:
  {
   system("cls");	
   system("color f");
   cout<<"\n\n\n\n\n\n\n\n\n\n";
   cout<<"\t\t\t\t\t  ... THANX FOR COMING ...";
   cout<<"\n\n\n\n\n\n\n\n";
   Sleep(1500);
   exit(0);
  }
  break;
  default:
  {
   Sleep(100);	
   for(int i=2;i<7;i++)
   {
    if(i%2==0)
	{
	 Beep(523,300);	
	}	
   }	
   Sleep(200);	
   cout<<"\n\n\n\t\t\t\t\t  ...Wrong Choice ...\n";
   Sleep(1500);
   obj.Start();
  }
 }
 cout<<"\n\n\n";
}

void Data::Login()
{
 int k,p;	
 system("cls");
 system("color e");
 Sleep(300);
 cout<<"\n\n\t\t\t\t----------------------------------------";
 char l[]="LOGIN";
 cout<<"\n\t\t\t\t\t         ";
 for(p=0;p<strlen(l);p++)
 {
  cout<<l[p];
  Sleep(50);	
 }		
 Sleep(300);
 cout<<"\n\t\t\t\t----------------------------------------";
 Sleep(300);
 char Caption[]="Cyber Cafe System";
 cout<<"\n\n\t\t\t\t\t-: ";
 for(k=0;k<strlen(Caption);k++)
 {
  cout<<Caption[k];
  Sleep(50);	
 }	
 cout<<" :-";
 Sleep(300);	
 cout<<"\n\n\n\t\t\t\t        Username  :  ";
 fflush(stdin);
 cin>>Username;
 Sleep(100);	
 cout<<"\n\t\t\t\t        Password  :  ";
 fflush(stdin);
 for(i=0;;)
 {
  a=getch();
  if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
  {	
   Password[i]=a;
   ++i;
   cout<<"*";	
  }
  if(a=='\b'&&i>=1)
  {
   cout<<"\b \b";
   --i;	
  }
  if(a=='\r')
  {
   Password[i]='\0';
   break;	
  }
 }
 ifstream read(Username.c_str());
 getline(read,user);
 getline(read,pass);
 if(user==Username && pass==Password)
 {
  Sleep(200);	
  cout<<"\n\n\n\t\t\t\t         Login Successfull !!!\n";
  read.close();
  Sleep(1500);
  obj.main_menu();
 }
 else
 {
  Sleep(100);	
  for(int i=2;i<7;i++)
  {
   if(i%2==0)
   {
    Beep(523,300);	
   }	
  }	
  Sleep(200);	
  cout<<"\n\n\n\t\t\t\t        ... Invalid Details ...";
  Sleep(1200);
  cout<<"\n\n\n\n\t\t\t\t You are Currently not a Member yet ...";
  Sleep(100);
  cout<<"\n\n\n\t\t\t\t        1) want to try again...";
  Sleep(100);
  cout<<"\n\n\t\t\t\t        2) Want to register first...";
  Sleep(100);
  cout<<"\n\n\t\t\t\t        3) Forgot Password...";
  Sleep(300);	
  cout<<"\n\n\n\t\t\t\t      Enter your Choice = ";
  fflush(stdin);
  cin>>ch;
  if(ch==1)
  {
   obj.Login();	
  }
  else if(ch==2)
  {
   obj.Register();	
  }
  else if(ch==3)
  {
   Reset:	
   int k,p;	
   system("cls");
   system("color f");
   Sleep(300);
   cout<<"\n\n\t\t\t\t----------------------------------------";
   char rop[]="RESET YOUR PASSWORD";
   cout<<"\n\t\t\t\t          ";
   for(p=0;p<strlen(rop);p++)
   {
    cout<<rop[p];
    Sleep(50);	
   }		
   Sleep(300);
   cout<<"\n\t\t\t\t----------------------------------------";
   Sleep(300);
   char Caption[]="Cyber Cafe System";
   cout<<"\n\n\t\t\t\t\t-: ";
   for(k=0;k<strlen(Caption);k++)
   {
    cout<<Caption[k];
    Sleep(50);	
   }	
   cout<<" :-";
   Sleep(300);
   cout<<"\n\n\n\t\t\t\t        Username   :  ";
   fflush(stdin);
   cin>>Username;
   ifstream read(Username.c_str());
   getline(read,check);
   if(!read)
   {
   	Sleep(100);	
    for(int i=2;i<7;i++)
    {
     if(i%2==0)
	 {
	  Beep(523,300);	
	 }	
    }
    Sleep(200);	
   	cout<<"\n\n\n\n\t\t\t\t     ... Username doesn't exist ...\n";
   	Sleep(1500);
   	goto Reset;
   }
   else
   {
   	Sleep(100);
    cout<<"\n\t\t\t\t     New Password  :  ";
	fflush(stdin);
	cin>>n_pass;
	Sleep(100);
	cout<<"\n\t\t\t\t  Confirm Password :  ";
	fflush(stdin);
	cin>>c_pass;
	if(n_pass==c_pass)
	{	
	 Sleep(200);
	 cout<<"\n\n\n\t\t\t\t    Password changed Successfully...";
	 remove(check.c_str());
	 ofstream file(Username.c_str());
     file<<Username<<endl<<n_pass;
     file.close();
     read.close();
     Sleep(1500);
	 obj.Login();	
	}	
	else
	{
	 Sleep(100);	
     for(int i=2;i<7;i++)
     {
      if(i%2==0)
	  {
	   Beep(523,300);	
	  }	
     }	
	 Sleep(200);	
	 cout<<"\n\n\n\t\t\t\t      ... Password Un-matched ...";
	 Sleep(1500);
	 goto Reset;	
	}
   }		
  }
  else
  {
   Sleep(100);	
   for(int i=2;i<7;i++)
   {
    if(i%2==0)
	{
	 Beep(523,300);	
	}	
   }
   Sleep(200);	 
   cout<<"\n\n\n\t\t\t\t\t  ...Wrong Choice ...\n";
   Sleep(1500);
   obj.Start();	
  }
 }
}

void Data::Register()
{
 int k,p;	
 system("cls");	
 system("color e");
 Sleep(300);
 cout<<"\n\n\t\t\t\t----------------------------------------";
 char r[]="REGISTER";
 cout<<"\n\t\t\t\t\t        ";
 for(p=0;p<strlen(r);p++)
 {
  cout<<r[p];
  Sleep(50);	
 }	
 Sleep(300);
 cout<<"\n\t\t\t\t----------------------------------------";
 Sleep(300);
 char Caption[]="Cyber Cafe System";
 cout<<"\n\n\t\t\t\t\t-: ";
 for(k=0;k<strlen(Caption);k++)
 {
  cout<<Caption[k];
  Sleep(50);	
 }	
 cout<<" :-";
 Sleep(300);
 cout<<"\n\n\n\t\t\t\t       Username    :  ";
 fflush(stdin);
 cin>>Username;
 Sleep(100);
 cout<<"\n\t\t\t\t       Password    :  ";
 fflush(stdin);
 for(i=0;;)
 {
  b=getch();
  if((b>='a'&&b<='z')||(b>='A'&&b<='Z')||(b>='0'&&b<='9'))
  {
   Password[i]=b;
   ++i;
   cout<<b;
  }
  if(b=='\b'&&i>=1)
  {
   cout<<"\b \b";
   --i;	
  }
  if(b=='\r')
  {
   Password[i]='\0';
   break;	
  }
 }
 if(i<8)
 {
  Sleep(100);	
  for(int i=2;i<7;i++)
  {
   if(i%2==0)
   {
    Beep(523,300);	
   }	
  }	
  Sleep(200);	
  cout<<"\n\n\n\t\t\t\t.. Minimum 8 digits/Characters needed ..";
  Sleep(1500);
  obj.Register();
 }
 Sleep(100);
 cout<<"\n\n\t\t\t\t  Confirm Password :  ";
 fflush(stdin);
 cin>>C_Password;
 if(strcmp(C_Password,Password)==0)
 {
  Sleep(100);	
  cout<<"\n\t\t\t\t       Phone No.   :  ";
  fflush(stdin);
  for(i=0;;)
  {
   c=getch();
   if(c>='0'&&c<='9')
   {
    P_no[i]=c;
    ++i;
    cout<<c;
   }
   if(c=='\b'&&i>=1)
   {
    cout<<"\b \b";
    --i;	
   }
   if(c=='\r')
   {
    P_no[i]='\0';
    break;	
   }
  }
  if(i!=10)
  {
   Sleep(100);	
   for(int i=2;i<7;i++)
   {
    if(i%2==0)
	{
	 Beep(523,300);	
	}	
   }	
   Sleep(200);	
   cout<<"\n\n\n\t\t\t\t       .. Phone no. must be Valid ..";
   Sleep(1500);
   obj.Register();	
  }
  Sleep(200);
  cout<<"\n\n\n\t\t\t\t        Register Successfull !!!\n";
  ofstream file(Username.c_str());
  file<<Username<<endl<<Password;
  file.close();
  Sleep(1500);
  obj.Login();
 }
 else
 {
  Sleep(100);	
  for(int i=2;i<7;i++)
  {
   if(i%2==0)
   {
	Beep(523,300);	
   }	
  }	
  Sleep(200);	
  cout<<"\n\n\n\t\t\t\t     ... Password are not same ...";
  Sleep(1500);
  obj.Register();
 }
}

void Data::main_menu()
{
 int k,p;	
 system("cls");
 system("color c");	
 Sleep(300);
 cout<<"\n\n\t\t\t\t----------------------------------------";
 char m_m[]="MAIN MENU";
 cout<<"\n\t\t\t\t\t       ";
 for(p=0;p<strlen(m_m);p++)
 {
  cout<<m_m[p];
  Sleep(50);	
 }	
 Sleep(300);
 cout<<"\n\t\t\t\t----------------------------------------";
 Sleep(300);
 char Caption[]="Cyber Cafe System";
 cout<<"\n\n\t\t\t\t\t-: ";
 for(k=0;k<strlen(Caption);k++)
 {
  cout<<Caption[k];
  Sleep(50);	
 }	
 cout<<" :-";
 Sleep(300);
 cout<<"\n\n\n\t\t\t\t1) Master Entry...";
 Sleep(100);
 cout<<"\n\n\t\t\t\t2) Cafe Management...";
 Sleep(100);
 cout<<"\n\n\t\t\t\t3) Exit...\n\n\n";
 Sleep(300);
 cout<<"\t\t\t\tEnter your choice =  ";
 fflush(stdin);
 cin>>ch;
 switch(ch)
 {
  case 1:
  {
   obj.Master();
  }
  break;
  case 2:
  {
   obj.Cafe();
  }
  break;
  case 3:
  {
   system("cls");	
   system("color f");
   cout<<"\n\n\n\n\n\n\n\n\n\n";
   cout<<"\t\t\t\t\t  ... THANX FOR COMING ...";
   cout<<"\n\n\n\n\n\n\n\n";
   Sleep(1500);
   exit(0);	
  }
  break;
  default:
  {
   Sleep(100);	
   for(int i=2;i<7;i++)
   {
    if(i%2==0)
	{
	 Beep(523,300);	
	}	
   }	
   Sleep(200);	
   cout<<"\n\n\n\t\t\t\t\t  ...Wrong Choice ...\n";
   Sleep(1500);
   main_menu();	
  }	
 }
}

void Data::Master()
{	 
 int k,p;
 system("cls");	
 Sleep(100);
 cout<<"\n\n\t\t\t\t  If you want to go back, Press 0 ....";
 Sleep(300);
 system("color b");
 cout<<"\n\n\t\t\t\t----------------------------------------";
 char m_e[]="MASTER ENTRY";
 cout<<"\n\t\t\t\t\t      ";
 for(p=0;p<strlen(m_e);p++)
 {
  cout<<m_e[p];
  Sleep(50);	
 }	
 Sleep(300);
 cout<<"\n\t\t\t\t----------------------------------------";
 Sleep(300);
 char Caption[]="Cyber Cafe System";
 cout<<"\n\n\t\t\t\t\t-: ";
 for(k=0;k<strlen(Caption);k++)
 {
  cout<<Caption[k];
  Sleep(50);	
 }	
 cout<<" :-";
 Sleep(300);
 cout<<"\n\n\n\t\t\t\t1) Member Entry...";
 Sleep(100);
 cout<<"\n\n\t\t\t\t2) Computer Entry...";
 Sleep(100);
 cout<<"\n\n\t\t\t\t3) Exit...\n\n\n";
 Sleep(300);
 cout<<"\t\t\t\tEnter your choice =  ";
 fflush(stdin);
 cin>>ch;	
 switch(ch)
 {
  case 0:
  {
   obj.main_menu();	
  }
  break;	
  case 1:
  {
   obj.Member();
  }
  break;
  case 2:
  {
   obj.Computer();
  }
  break;
  case 3:
  {
   system("cls");	
   system("color f");
   cout<<"\n\n\n\n\n\n\n\n\n\n";
   cout<<"\t\t\t\t\t  ... THANX FOR COMING ...";
   cout<<"\n\n\n\n\n\n\n\n";
   Sleep(1500);
   exit(0);
  }
  break;
  default:
  {
   Sleep(100);	
   for(int i=2;i<7;i++)
   {
    if(i%2==0)
	{
	 Beep(523,300);	
	}	
   }	
   Sleep(200);	
   cout<<"\n\n\n\t\t\t\t\t  ...Wrong Choice ...\n";
   Sleep(1200);
   obj.Master();	
  }	
 }
}

void Data::Member()
{
 int k,p;	
 fstream M;	
 system("cls");
 Sleep(100);
 cout<<"\n\n\t\t\t\t  If you want to go back, Press 0 ....";	
 Sleep(300);
 system("color a");
 cout<<"\n\n\t\t\t\t----------------------------------------";
 char M_e[]="MEMBER ENTRY";
 cout<<"\n\t\t\t\t\t      ";
 for(p=0;p<strlen(M_e);p++)
 {
  cout<<M_e[p];
  Sleep(50);	
 }	
 Sleep(300);
 cout<<"\n\t\t\t\t----------------------------------------";
 Sleep(300);
 char Caption[]="Cyber Cafe System";
 cout<<"\n\n\t\t\t\t\t-: ";
 for(k=0;k<strlen(Caption);k++)
 {
  cout<<Caption[k];
  Sleep(50);	
 }	
 cout<<" :-";
 Sleep(300);
 cout<<"\n\n\n\t\t\t\t1) Add Record...";
 Sleep(100);
 cout<<"\n\n\t\t\t\t2) Show Record...";
 Sleep(100);
 cout<<"\n\n\t\t\t\t3) Delete Record...";
 Sleep(100);
 cout<<"\n\n\t\t\t\t4) Search Record...";
 Sleep(100);
 cout<<"\n\n\t\t\t\t5) Exit...\n\n\n";
 Sleep(300);
 cout<<"\t\t\t\tEnter your choice =  ";
 fflush(stdin);
 cin>>ch;	
 switch(ch)
 {
  case 0:
  {
   obj.Master();	
  }
  break;	
  case 1:
  {
   int k,p;	
   system("cls");
   system("color f");
   Sleep(300);	
   cout<<"\n\n\t\t\t\t----------------------------------------";
   char a_r[]="ADD RECORD";
   cout<<"\n\t\t\t\t\t       ";
   for(p=0;p<strlen(a_r);p++)
   {
    cout<<a_r[p];
    Sleep(50);	
   }	
   Sleep(300);
   cout<<"\n\t\t\t\t----------------------------------------";
   Sleep(300);
   char Caption[]="Cyber Cafe System";
   cout<<"\n\n\t\t\t\t\t-: ";
   for(k=0;k<strlen(Caption);k++)
   {
    cout<<Caption[k];
    Sleep(50);	
   }	
   cout<<" :-";
   Sleep(300);	
   cout<<"\n\n\n\t\t\t\t    Member Name    =  ";
   fflush(stdin);
   cin>>name;
   Sleep(100);
   cout<<"\n\t\t\t\t  Reg_No.(8 digit) =  ";
   fflush(stdin);
   cin>>reg_no;
   Sleep(200);
   cout<<"\n\n\n\t\t\t\t      Record Added Successfully ..!!";
   M.open("Member.txt",ios::app);
   M<<endl<<name;
   M.close();
   Sleep(2500);
   obj.Member();	
  }	
  break; 
  case 2:
  {
   int k,p,i=1;	
   system("cls");
   system("color f");
   Sleep(300);	
   cout<<"\n\n\t\t\t\t----------------------------------------";
   char s_r[]="SHOW RECORD";
   cout<<"\n\t\t\t\t\t      ";
   for(p=0;p<strlen(s_r);p++)
   {
    cout<<s_r[p];
    Sleep(50);	
   }	
   Sleep(300);
   cout<<"\n\t\t\t\t----------------------------------------";
   Sleep(300);
   char Caption[]="Cyber Cafe System";
   cout<<"\n\n\t\t\t\t\t-: ";
   for(k=0;k<strlen(Caption);k++)
   {
    cout<<Caption[k];
    Sleep(50);	
   }	
   cout<<" :-";
   Sleep(300);
   cout<<"\n\n\n\n\t\t\t\tTotal Members are :-\n\n\n";
   M.open("Member.txt",ios::in);
   while(!M.eof())
   {
   	fflush(stdin);
    M>>temp;
    Sleep(100);
	cout<<"\t\t\t\t  "<<i<<") "<<temp<<"\n\n";
	i++;
   }
   M.close();
   getch();
   obj.Member();	
  }	
  break;
  case 3:
  {
   int k,p;	
   fstream temp;
   string temp_name,var;	
   system("cls");
   system("color f");	
   Sleep(300);
   cout<<"\n\n\t\t\t\t----------------------------------------";
   char d_r[]="DELETE RECORD";
   cout<<"\n\t\t\t\t\t     ";
   for(p=0;p<strlen(d_r);p++)
   {
    cout<<d_r[p];
    Sleep(50);	
   }	
   Sleep(300);
   cout<<"\n\t\t\t\t----------------------------------------";
   Sleep(300);
   char Caption[]="Cyber Cafe System";
   cout<<"\n\n\t\t\t\t\t-: ";
   for(k=0;k<strlen(Caption);k++)
   {
    cout<<Caption[k];
    Sleep(50);	
   }	
   cout<<" :-";
   Sleep(300);
   cout<<"\n\n\n\n\t\t\t\tTotal Members are :-\n\n\n";
   M.open("Member.txt",ios::in);
   int i=1;
   while(!M.eof())
   {
   	fflush(stdin);
    M>>temp1;
    Sleep(100);
	cout<<"\t\t\t\t  "<<i<<") "<<temp1<<"\n\n";
	i++;
   }
   M.close();
   M.open("Member.txt",ios::in);
   temp.open("temp.txt",ios::app);
   Sleep(300);
   cout<<"\n\n\t\t\t\tEnter Member you want to delete = ";
   fflush(stdin);
   cin>>temp_name;
   int c=0;
   while(getline(M,var))
   {
   	if(var!=temp_name)
   	{
   	 temp<<endl<<var;		
	}
	else
	{
	 c++;	
	}
   }
   if(c==0)
   {
   	Sleep(100);	
    for(int i=2;i<7;i++)
    {
     if(i%2==0)
	 {
	  Beep(523,300);	
	 }	
    }
   	Sleep(200);
   	cout<<"\n\n\t\t\t\t--> "<<temp_name<<" is not present in List.";
   	M.close();
   	temp.close();
   	remove("Member.txt");
   	rename("temp.txt","Member.txt");
   	Sleep(2500);
   	obj.Member();
   }
   else
   {
   	Sleep(200);
   	cout<<"\n\n\t\t\t\t--> "<<temp_name<<" is deleted from the List.";
   	M.close();
   	temp.close();
   	remove("Member.txt");
   	rename("temp.txt","Member.txt");
   	Sleep(800);
   	cout<<"\n\n\n\n\t\t\t\tRemaining Members are :-\n\n\n";
    M.open("Member.txt",ios::in);
    int i=1;
    while(!M.eof())
    {
   	 fflush(stdin);
     M>>temp2;
     Sleep(100);
	 cout<<"\t\t\t\t  "<<i<<") "<<temp2<<"\n\n";
	 i++;
    }
    M.close();
    getch();
   	obj.Member();
   }
  }	
  break;
  case 4:
  {
   int k,p;	
   string temp,variable;	
   system("cls");	
   system("color f");
   Sleep(300);
   cout<<"\n\n\t\t\t\t----------------------------------------";
   char sh_r[]="SEARCH RECORD";
   cout<<"\n\t\t\t\t\t     ";
   for(p=0;p<strlen(sh_r);p++)
   {
    cout<<sh_r[p];
    Sleep(50);	
   }	
   Sleep(300);
   cout<<"\n\t\t\t\t----------------------------------------"; 
   Sleep(300);
   char Caption[]="Cyber Cafe System";
   cout<<"\n\n\t\t\t\t\t-: ";
   for(k=0;k<strlen(Caption);k++)
   {
    cout<<Caption[k];
    Sleep(50);	
   }	
   cout<<" :-";
   Sleep(300);
   cout<<"\n\n\n\n\t\t\t\tEnter Member you want to Search = ";
   fflush(stdin);
   cin>>variable;
   M.open("Member.txt",ios::in);
   int c=0;
   while(getline(M,temp))
   {
   	if(temp==variable)
   	{
   	 c++;		
	}
   }
   if(c==0)
   {
    Sleep(100);	
    for(int i=2;i<7;i++)
    {
     if(i%2==0)
	 {
	  Beep(523,300);	
	 }	
    }	
   	Sleep(200);
   	cout<<"\n\n\n\t\t\t\t--> "<<variable<<" is not found in the List.";
   	M.close();
   	Sleep(2500);
   	obj.Member();
   }
   else
   {
   	Sleep(200);   	
	cout<<"\n\n\n\t\t\t\t--> "<<variable<<" is found in the List.";
   	M.close();
   	Sleep(2500);
   	obj.Member();
   }		
  }	
  break;
  case 5:
  {
   system("cls");
   system("color f");	
   cout<<"\n\n\n\n\n\n\n\n\n\n"; 
   cout<<"\t\t\t\t\t  ... THANX FOR COMING ...";
   cout<<"\n\n\n\n\n\n\n\n";
   Sleep(1500);
   exit(0);	
  }	
  break;
  default:
  {
   Sleep(100);	
   for(int i=2;i<7;i++)
   {
    if(i%2==0)
	{
	 Beep(523,300);	
	}	
   }	
   Sleep(200);	
   cout<<"\n\n\n\t\t\t\t\t  ...Wrong Choice ...\n";
   Sleep(1500);
   obj.Member();	
  }	
 }
}

void Data::Computer()
{	
 int k,p;
 fstream C;
 system("cls");
 Sleep(100);
 cout<<"\n\n\t\t\t\t  If you want to go back, Press 0 ....";	
 Sleep(300);
 system("color a");   	
 cout<<"\n\n\t\t\t\t----------------------------------------"; 
 char c_e[]="COMPUTER ENTRY";
 cout<<"\n\t\t\t\t\t     ";
 for(p=0;p<strlen(c_e);p++)
 {
  cout<<c_e[p];
  Sleep(50);	
 }	
 Sleep(300);
 cout<<"\n\t\t\t\t----------------------------------------";
 Sleep(300);
 char Caption[]="Cyber Cafe System";
 cout<<"\n\n\t\t\t\t\t-: ";
 for(k=0;k<strlen(Caption);k++)
 {
  cout<<Caption[k];
  Sleep(50);	
 }	
 cout<<" :-";
 Sleep(300);
 cout<<"\n\n\n\t\t\t\t1) Add Record...";
 Sleep(100);
 cout<<"\n\n\t\t\t\t2) Show Record...";
 Sleep(100);
 cout<<"\n\n\t\t\t\t3) Delete Record...";
 Sleep(100);
 cout<<"\n\n\t\t\t\t4) Search Record...";
 Sleep(100);
 cout<<"\n\n\t\t\t\t5) Exit...\n\n\n";
 Sleep(300);
 cout<<"\t\t\t\tEnter your choice =  ";
 fflush(stdin);
 cin>>ch;	
 system("color f");
 switch(ch)
 {
  case 0:
  {
   obj.Master();	
  }
  break;	
  case 1:
  {
   int k,p;	
   system("cls");	
   system("color f");
   Sleep(300);
   cout<<"\n\n\t\t\t\t----------------------------------------";
   char A_r[]="ADD RECORD";
   cout<<"\n\t\t\t\t\t       ";
   for(p=0;p<strlen(A_r);p++)
   {
    cout<<A_r[p];
    Sleep(50);	
   }	
   Sleep(300);
   cout<<"\n\t\t\t\t----------------------------------------";
   Sleep(300);
   char Caption[]="Cyber Cafe System";
   cout<<"\n\n\t\t\t\t\t-: ";
   for(k=0;k<strlen(Caption);k++)
   {
    cout<<Caption[k];
    Sleep(50);	
   }	
   cout<<" :-";
   Sleep(300);
   cout<<"\n\n\n\t\t\t\t     Company Name  =  ";
   fflush(stdin);
   cin>>name;
   Sleep(100);
   cout<<"\n\t\t\t\t      Product ID   =  ";
   fflush(stdin);
   cin>>reg_no;
   Sleep(200);
   cout<<"\n\n\n\t\t\t\t      Record Added Successfully ..!!";
   C.open("Computer.txt",ios::app);
   C<<endl<<name;
   C.close();
   Sleep(2500);
   obj.Computer();			
  }	
  break;
  case 2:
  {
   int k,p,i=1;	
   system("cls");
   system("color f");	
   Sleep(300);
   cout<<"\n\n\t\t\t\t----------------------------------------";
   char S_r[]="SHOW RECORD";
   cout<<"\n\t\t\t\t\t      ";
   for(p=0;p<strlen(S_r);p++)
   {
    cout<<S_r[p];
    Sleep(50);	
   }	
   Sleep(300);
   cout<<"\n\t\t\t\t----------------------------------------";
   Sleep(300);
   char Caption[]="Cyber Cafe System";
   cout<<"\n\n\t\t\t\t\t-: ";
   for(k=0;k<strlen(Caption);k++)
   {
    cout<<Caption[k];
    Sleep(50);	
   }	
   cout<<" :-";
   Sleep(300);
   cout<<"\n\n\n\n\t\t\t\tTotal Products are :-\n\n\n";
   C.open("Computer.txt",ios::in);
   while(!C.eof())
   {
   	fflush(stdin);
    C>>temp;
    Sleep(100);
	cout<<"\t\t\t\t  "<<i<<") "<<temp<<"\n\n";
	i++;
   }
   C.close();
   getch();
   obj.Computer();	
  }	
  break;
  case 3:
  {
   int k,p;	
   fstream temp;
   string temp_name,var;	
   system("cls");	
   system("color f");
   Sleep(300);
   cout<<"\n\n\t\t\t\t----------------------------------------";
   char D_r[]="DELETE RECORD";
   cout<<"\n\t\t\t\t\t     ";
   for(p=0;p<strlen(D_r);p++)
   {
    cout<<D_r[p];
    Sleep(50);	
   }	
   Sleep(300);
   cout<<"\n\t\t\t\t----------------------------------------";
   Sleep(300);
   char Caption[]="Cyber Cafe System";
   cout<<"\n\n\t\t\t\t\t-: ";
   for(k=0;k<strlen(Caption);k++)
   {
    cout<<Caption[k];
    Sleep(50);	
   }	
   cout<<" :-";
   Sleep(300);
   cout<<"\n\n\n\n\t\t\t\tTotal Products are :-\n\n\n";
   C.open("Computer.txt",ios::in);
   int i=1;
   while(!C.eof())
   {
   	fflush(stdin);
    C>>temp1;
    Sleep(100);
	cout<<"\t\t\t\t  "<<i<<") "<<temp1<<"\n\n";
	i++;
   }
   C.close();
   C.open("Computer.txt",ios::in);
   temp.open("temp.txt",ios::app);
   Sleep(300);
   cout<<"\n\n\t\t\t\tEnter Product you want to delete = ";
   fflush(stdin);
   cin>>temp_name;
   int c=0;
   while(getline(C,var))
   {
   	if(var!=temp_name)
   	{
   	 temp<<endl<<var;		
	}
	else
	{
	 c++;	
	}
   }
   if(c==0)
   {
    Sleep(100);	
    for(int i=2;i<7;i++)
    {
     if(i%2==0)
	 {
	  Beep(523,300);	
	 }	
    }	
   	Sleep(200);
   	cout<<"\n\n\t\t\t\t--> "<<temp_name<<" is not present in List.";
   	C.close();
   	temp.close();
   	remove("Computer.txt");
   	rename("temp.txt","Computer.txt");
   	Sleep(2500);
   	obj.Computer();
   }
   else
   {
   	Sleep(200);
   	cout<<"\n\n\t\t\t\t--> "<<temp_name<<" is deleted from the List.";
   	C.close();
   	temp.close();
   	remove("Computer.txt");
   	rename("temp.txt","Computer.txt");
   	Sleep(800);
   	cout<<"\n\n\n\n\t\t\t\tRemaining Products are :-\n\n\n";
    C.open("Computer.txt",ios::in);
    int i=1;
    while(!C.eof())
    {
     fflush(stdin);
     C>>temp2;
     Sleep(100);
	 cout<<"\t\t\t\t  "<<i<<") "<<temp2<<"\n\n";
	 i++;
    }
    C.close();
    getch();
   	obj.Computer();
   }	
  }	 
  break;
  case 4:
  {	
   int k,p;
   string temp,variable;	
   system("cls");	
   system("color f");
   Sleep(300);
   cout<<"\n\n\t\t\t\t----------------------------------------";
   char Sh_r[]="SEARCH RECORD";
   cout<<"\n\t\t\t\t\t     ";
   for(p=0;p<strlen(Sh_r);p++)
   {
    cout<<Sh_r[p];
    Sleep(50);	
   }	
   Sleep(300);
   cout<<"\n\t\t\t\t----------------------------------------";
   Sleep(300);
   char Caption[]="Cyber Cafe System";
   cout<<"\n\n\t\t\t\t\t-: ";
   for(k=0;k<strlen(Caption);k++)
   {
    cout<<Caption[k];
    Sleep(50);	
   }	
   cout<<" :-";
   Sleep(300);
   cout<<"\n\n\n\n\t\t\t\tEnter Product you want to Search = ";
   fflush(stdin);
   cin>>variable;
   C.open("Computer.txt",ios::in);
   int c=0;
   while(getline(C,temp))
   {
   	if(temp==variable)
   	{
   	 c++;		
	}
   }
   if(c==0)
   {
   	Sleep(100);	
    for(int i=2;i<7;i++)
    {
     if(i%2==0)
	 {
	  Beep(523,300);	
	 }	
    }
   	Sleep(200);
   	cout<<"\n\n\n\t\t\t\t--> "<<variable<<" is not found in the List.";
   	C.close();
   	Sleep(2500);
   	obj.Computer();
   }
   else
   {
   	Sleep(200);
   	cout<<"\n\n\n\t\t\t\t--> "<<variable<<" is found in the List.";
   	C.close();
   	Sleep(2500);
   	obj.Computer();
   }	
  }	
  break;
  case 5:
  {
   system("cls");	
   system("color f");
   cout<<"\n\n\n\n\n\n\n\n\n\n";
   cout<<"\t\t\t\t\t  ... THANX FOR COMING ...";
   cout<<"\n\n\n\n\n\n\n\n";
   Sleep(1500);
   exit(0);	
  }	
  break;
  default:
  {
   Sleep(100);	
   for(int i=2;i<7;i++)
   {
    if(i%2==0)
	{
	 Beep(523,300);	
	}	
   }	
   Sleep(200);	
   cout<<"\n\n\n\t\t\t\t\t  ...Wrong Choice ...\n";
   Sleep(1500);
   obj.Computer();	
  }	
 }
}

void Data::Cafe()
{
 int k,p;	
 system("cls");
 Sleep(100);
 cout<<"\n\n\t\t\t\t  If you want to go back, Press 0 ....";
 Sleep(300);
 system("color b");
 cout<<"\n\n\t\t\t\t----------------------------------------";
 char c_m[]="CAFE MANAGEMENT";
 cout<<"\n\t\t\t\t\t    ";
 for(p=0;p<strlen(c_m);p++)
 {
  cout<<c_m[p];
  Sleep(50);	
 }	
 Sleep(300);
 cout<<"\n\t\t\t\t----------------------------------------";
 Sleep(300);
 char Caption[]="Cyber Cafe System";
 cout<<"\n\n\t\t\t\t\t-: ";
 for(k=0;k<strlen(Caption);k++)
 {
  cout<<Caption[k];
  Sleep(50);	
 }
 cout<<" :-";
 Sleep(300);
 cout<<"\n\n\n\t\t\t\t1) Rate Enquiry...";
 Sleep(100);
 cout<<"\n\n\t\t\t\t2) Membership...";
 Sleep(100);
 cout<<"\n\n\t\t\t\t3) Payment...";
 Sleep(100);
 cout<<"\n\n\t\t\t\t4) Exit...\n\n\n";
 Sleep(300);
 cout<<"\t\t\t\tEnter your choice =  ";
 fflush(stdin);
 cin>>ch;
 switch(ch)
 {
  case 0:
  {
   obj.main_menu();
  }
  break;	
  case 1:
  {
   obj.Enquiry();	    	
  }
  break;
  case 2:
  {
   int s=0;
   string abc;	
   ifstream P("Prime.txt");
   while(!P.eof())
   {
   	fflush(stdin);
   	getline(P,abc);
   	if(abc==Username)
   	{
   	 s++;	
	}
   }
   if(s>0)
   {
   	cout<<"\n\n\t\t\t    !! You already Registered as a Prime Member !!";
   	getch();
   	obj.Cafe();
   }
   else
   {
   	obj.Membership();
   }	    	
  }
  break;
  case 3:
  {
   obj.Payment();	
  }
  break;	
  case 4:
  {
   system("cls");	
   system("color f");
   cout<<"\n\n\n\n\n\n\n\n\n\n";
   cout<<"\t\t\t\t\t  ... THANX FOR COMING ...";
   cout<<"\n\n\n\n\n\n\n\n";
   Sleep(1500);
   exit(0);
  }
  break;
  default:
  {
   Sleep(100);	
   for(int i=2;i<7;i++)
   {
    if(i%2==0)
	{
	 Beep(523,300);	
	}	
   }	
   Sleep(200);	
   cout<<"\n\n\n\t\t\t\t\t  ...Wrong Choice ...\n";
   Sleep(1500);
   obj.Cafe();	
  }	
 }
}

void Data::Enquiry()
{
 int k,p;	
 system("cls");
 Sleep(100);
 cout<<"\n\n\t\t\t\t  If you want to go back, Press 0 ....";
 system("color a");
 Sleep(300);
 cout<<"\n\n\t\t\t\t----------------------------------------";
 char r_e[]="RATE ENQUIRY";
 cout<<"\n\t\t\t\t              ";
 for(p=0;p<strlen(r_e);p++)
 {
  cout<<r_e[p];
  Sleep(50);	
 }	
 Sleep(300);
 cout<<"\n\t\t\t\t----------------------------------------";
 Sleep(300);
 char Caption[]="Cyber Cafe System";
 cout<<"\n\n\t\t\t\t\t-: ";
 for(k=0;k<strlen(Caption);k++)
 {
  cout<<Caption[k];
  Sleep(50);	
 }
 cout<<" :-";
 Sleep(300);
 cout<<"\n\n\n\n\t\t\t\tWe have many Rates Schemes in our Cafe :- ";
 Sleep(100);
 cout<<"\n\n\n\t\t\t\t1) 1 hour ...    ( No Discount )";
 Sleep(100);
 cout<<"\n\n\t\t\t\t2) 3 hour ...    ( 5% Discount )";
 Sleep(100);
 cout<<"\n\n\t\t\t\t3) 5 hour ...    ( 10% Discount )";
 Sleep(100);
 cout<<"\n\n\n\t\t\t\t  && Many More Schemes .....";
 Sleep(100);	
 cout<<"\n\n\n\n\t\t\tYou can also became a Prime Member in our Cafe to get Max. Benefit.";
 Sleep(100);
 cout<<"\n\n\t\t\t\t1) Want to become Prime Member...";
 Sleep(100);
 cout<<"\n\n\t\t\t\t2) Want to Buy Normal Packages...";
 Sleep(100);
 cout<<"\n\n\t\t\t\t3) Want to Exit...";
 Sleep(300);
 cout<<"\n\n\n\t\t\t\tEnter your Choice = ";
 fflush(stdin);
 cin>>ch;
 switch(ch)
 {
  case 0:
  {
   obj.Cafe();	
  }
  break;	
  case 1:
  {
   int s=0;
   string abc;	
   ifstream P("Prime.txt");
   while(P.eof()!=0)
   {
   	fflush(stdin);
   	getline(P,abc);
   	if(abc==Username)
   	{
   	 s++;	
	}
   }	
   if(s>0)
   {
   	cout<<"\n\n\t\t\t    !! You already Registered as a Prime Member !!";
   	getch();
   	obj.Cafe();
   }
   else
   {
   	obj.Membership();
   }	
  }
  break;
  case 2:
  {
   obj.Payment();
  }
  break;
  case 3:
  {
   system("cls");	
   system("color f");
   cout<<"\n\n\n\n\n\n\n\n\n\n";
   cout<<"\t\t\t\t\t  ... THANX FOR COMING ...";
   cout<<"\n\n\n\n\n\n\n\n";
   Sleep(1500);
   exit(0);		
  }
  break;
  default:
  {
   Sleep(100);	
   for(int i=2;i<7;i++)
   {
    if(i%2==0)
	{
	 Beep(523,300);	
	}	
   }	
   Sleep(200);	
   cout<<"\n\n\n\t\t\t\t\t  ...Wrong Choice ...\n";
   Sleep(1500);
   obj.Enquiry();		
  }
 }
}

void Data::Membership()
{	
 int k,p;	
 system("cls");
 Sleep(100);
 cout<<"\n\n\t\t\t\t  If you want to go back, Press 0 ....";  
 system("color a");
 Sleep(300);
 cout<<"\n\n\t\t\t\t----------------------------------------";
 char m_p[]="MEMBERSHIP";
 cout<<"\n  \t\t\t\t               ";
 for(p=0;p<strlen(m_p);p++)
 {
  cout<<m_p[p];
  Sleep(50);	
 }	
 Sleep(300);
 cout<<"\n\t\t\t\t----------------------------------------";
 Sleep(300);
 char Caption[]="Cyber Cafe System";
 cout<<"\n\n\t\t\t\t\t-: ";
 for(k=0;k<strlen(Caption);k++)
 {
  cout<<Caption[k];
  Sleep(50);	
 }
 cout<<" :-";
 Sleep(300);
 cout<<"\n\n\n\n\t\t\t\tWe have 3 options to opt Membership via...";
 Sleep(100);
 cout<<"\n\n\n\t\t\t\t1) Cash...";
 Sleep(100);
 cout<<"\n\n\t\t\t\t2) Paytm... ( 10% Discount )";
 Sleep(100);
 cout<<"\n\n\t\t\t\t3) Credit/Debit... ( 20% Discount )";
 Sleep(100);
 cout<<"\n\n\t\t\t\t4) Exit...";
 Sleep(100);
 cout<<"\n\n\n\t\t\t\t=> Basic Charges for Membership = Rs_ 1000";
 Sleep(300);
 cout<<"\n\n\n\t\t\t\tEnter your Choice = ";
 fflush(stdin);
 cin>>ch;	
 switch(ch)
 {
  case 0:
  {
   obj.Cafe();	
  }
  break;
  case 1:
  {
   Sleep(100);	
   cout<<"\n\n\t\t\t\tTotal Amount to be Paid = Rs_ 1000"; 	
   Sleep(400);
   cout<<"\n\n\n\t\t\t\tPress 1 to Checkout or 0 to Back...";
   Sleep(100);
   cout<<"\n\n\n\t\t\t\tEnter your Choice = ";
   fflush(stdin);
   cin>>ch;
   switch(ch)
   {
   	case 1:
	{
	 system("cls"); 	
	 for(int x=5;x>0;x--)
	 {
	  cout<<"\n\n\n\t\t\t\tYour Request is Processing... (Wait "<<x<<" sec)";
	  Sleep(800);	
	  system("cls");
	 }		
	 Sleep(300);
     char R[]="Congrats!! ";
	 char Y[]="You Successfully became a Prime Member.";
     cout<<"\n\n\n\t\t\t\t";
     for(int k=0;k<strlen(R);k++)
     {
      cout<<R[k];
      Sleep(50);	
     }
     Sleep(400);
     for(int m=0;m<strlen(Y);m++)
     {
      cout<<Y[m];
      Sleep(50);	
     }
     ofstream A("Prime.txt",ios::app);
     A<<Username<<endl;
     A.close();
	 getch();
	 obj.Cafe();
	}
	break;
	case 0:
	{
	 obj.Membership();	
	}
	break;
	default:
	{
	 Sleep(100);	
     for(int i=2;i<7;i++)
     {
      if(i%2==0)
	  {
	   Beep(523,300);	
	  }	
     }	
     Sleep(200);	
     cout<<"\n\n\n\t\t\t\t\t  ...Wrong Choice ...\n";
     Sleep(1500);
     obj.Membership();	
	} 
   }
  }
  break;
  case 2:
  {	
   Sleep(100);
   cout<<"\n\n\t\t\t\tTotal Amount to be Paid = (1000-100) = Rs_ 900";
   Sleep(200);
   cout<<"\n\n\n\t\t\t\tEnter Paytm No. = ";
   fflush(stdin);
   cin>>Paytm;
   Sleep(400);
   cout<<"\n\n\n\t\t\t\tPress 1 to Checkout or 0 to Back...";
   Sleep(100);
   cout<<"\n\n\n\t\t\t\tEnter your Choice = ";
   fflush(stdin);
   cin>>ch;
   switch(ch)
   {
   	case 1:
	{
	 system("cls"); 	
	 for(int x=5;x>0;x--)
	 {
	  cout<<"\n\n\n\t\t\t\tYour Request is Processing... (Wait "<<x<<" sec)";
	  Sleep(800);	
	  system("cls");
	 }		
	 Sleep(300);
     char R[]="Congrats!! ";
	 char Y[]="You Successfully became a Prime Member.";
     cout<<"\n\n\n\t\t\t\t";
     for(int k=0;k<strlen(R);k++)
     {
      cout<<R[k];
      Sleep(50);	
     }
     Sleep(400);
     for(int m=0;m<strlen(Y);m++)
     {
      cout<<Y[m];
      Sleep(50);	
     }
     ofstream A("Prime.txt",ios::app);
     A<<Username<<endl;
     A.close();
	 getch();
	 obj.Cafe();
	}
	break;
	case 0:
	{
	 obj.Membership();	
	}
	break;
	default:
	{
	 Sleep(100);	
     for(int i=2;i<7;i++)
     {
      if(i%2==0)
	  {
	   Beep(523,300);	
	  }	
     }	
     Sleep(200);	
     cout<<"\n\n\n\t\t\t\t\t  ...Wrong Choice ...\n";
     Sleep(1500);
     obj.Membership();	
	} 
   }	 
  }
  break;
  case 3:
  {
   Sleep(100);
   cout<<"\n\n\t\t\t\tTotal Amount to be Paid = (1000-200) = Rs_ 800";
   Sleep(200);
   cout<<"\n\n\n\t\t\t\tEnter Card No. = ";
   fflush(stdin);
   cin>>Card;
   Sleep(400);
   cout<<"\n\n\n\t\t\t\tPress 1 to Checkout or 0 to Back...";
   Sleep(100);
   cout<<"\n\n\n\t\t\t\tEnter your Choice = ";
   fflush(stdin);
   cin>>ch;
   switch(ch)
   {
   	case 1:
	{
	 system("cls"); 	
	 for(int x=5;x>0;x--)
	 {
	  cout<<"\n\n\n\t\t\t\tYour Request is Processing... (Wait "<<x<<" sec)";
	  Sleep(800);	
	  system("cls");
	 }		
	 Sleep(300);
     char R[]="Congrats!! ";
	 char Y[]="You Successfully became a Prime Member.";
     cout<<"\n\n\n\t\t\t\t";
     for(int k=0;k<strlen(R);k++)
     {
      cout<<R[k];
      Sleep(50);	
     }
     Sleep(400);
     for(int m=0;m<strlen(Y);m++)
     {
      cout<<Y[m];
      Sleep(50);	
     }
     ofstream A("Prime.txt",ios::app);
     A<<Username<<endl;
     A.close();
	 getch();
	 obj.Cafe();
	}
	break;
	case 0:
	{
	 obj.Membership();	
	}
	break;
	default:
	{
	 Sleep(100);	
     for(int i=2;i<7;i++)
     {
      if(i%2==0)
	  {
	   Beep(523,300);	
	  }	
     }	
     Sleep(200);	
     cout<<"\n\n\n\t\t\t\t\t  ...Wrong Choice ...\n";
     Sleep(1500);
     obj.Membership();	
	} 
   }	
  }
  break;
  case 4:
  {
   system("cls");	
   system("color f");
   cout<<"\n\n\n\n\n\n\n\n\n\n";
   cout<<"\t\t\t\t\t  ... THANX FOR COMING ...";
   cout<<"\n\n\n\n\n\n\n\n";
   Sleep(1500);
   exit(0);	
  }
  break;
  default:
  {
   Sleep(100);	
   for(int i=2;i<7;i++)
   {
    if(i%2==0)
	{
	 Beep(523,300);	
	}	
   }	
   Sleep(200);	
   cout<<"\n\n\n\t\t\t\t\t  ...Wrong Choice ...\n";
   Sleep(1500);
   obj.Membership();		
  }	
 }
}

void Data::Payment()
{
 char ch0;	
 int k,p;
 string t;	
 system("cls");
 Sleep(100);
 cout<<"\n\n\t\t\t\t  If you want to go back, Press 0 ....";  
 system("color a");
 Sleep(300);
 cout<<"\n\n\t\t\t\t----------------------------------------";
 char p_m[]="PAYMENT MODE";
 cout<<"\n\t\t\t\t              ";
 for(p=0;p<strlen(p_m);p++)
 {
  cout<<p_m[p];
  Sleep(50);	
 }	
 Sleep(300);
 cout<<"\n\t\t\t\t----------------------------------------";
 Sleep(300);
 char Caption[]="Cyber Cafe System";
 cout<<"\n\n\t\t\t\t\t-: ";
 for(k=0;k<strlen(Caption);k++)
 {
  cout<<Caption[k];
  Sleep(50);	
 }
 cout<<" :-";
 Sleep(300);
 cout<<"\n\n\n\n\t\t\t\t1) 1 hour ...    ( No Discount )";
 Sleep(100);
 cout<<"\n\n\t\t\t\t2) 3 hour ...    ( 5% Discount )";
 Sleep(100);
 cout<<"\n\n\t\t\t\t3) 5 hour ...    ( 10% Discount )";
 Sleep(100);
 cout<<"\n\n\n\t\t\t\t=> Only Cash Payment is Available...";
 Sleep(300);
 cout<<"\n\n\n\t\t\t\tEnter your Choice = ";
 fflush(stdin);
 cin>>ch;
 if(ch==0)
 {
  obj.Cafe();
 }
 else if(ch==1)
 {
  Sleep(200);	
  cout<<"\n\n\t\t\t\tAre you a Prime Member (Y/N) ???";
  Sleep(300);
  cout<<"\n\n\n\t\t\t\tEnter your Choice = ";
  fflush(stdin);
  cin>>ch0;
  switch(ch0)
  {
   case 'Y':
   {
   	goto QW;
   }	
   case 'y':
   {
   	QW:
   	Sleep(100);
   	cout<<"\n\n\n\t\t\t\tThanks!! for your Response...";
   	Sleep(300);
   	cout<<"\n\n\n\t\t\t\tPlease.. Let me Confirm...";
   	Sleep(1500);
   	system("cls");
   	for(int x=5;x>0;x--)
    {
     cout<<"\n\n\n\n\t\t\t\tYour Request is Processing... (Wait "<<x<<" sec)";
     Sleep(1200);	
     system("cls");
    }
    Sleep(800);
   	ifstream rd("Prime.txt");
   	while(getline(rd,t))
   	{
	 if(t==Username)
	 {	
	  cout<<"\n\n\n\t\t\t\tTotal Amount to be Paid : Rs_15 ( Discount-50% )";
	  Sleep(100);
	  cout<<"\n\n\n\t\t\t\tPress 1 to Checkout or 0 to Back...";
	  Sleep(300);
	  cout<<"\n\n\n\t\t\t\tEnter your Choice = ";
	  fflush(stdin);
	  cin>>ch;
	  switch(ch)
	  {
	   case 1:
	   {
	   	system("cls"); 	
        for(int x=5;x>0;x--)
        {
         cout<<"\n\n\n\t\t\t\tYour Request is Processing... (Wait "<<x<<" sec)";
         Sleep(800);	
         system("cls");
        }		
        Sleep(300);
        char R[]="Congrats!! ";
        char Y[]="You Activate your Package Successfully.";
        cout<<"\n\n\n\t\t\t\t";
        for(int k=0;k<strlen(R);k++)
        {
         cout<<R[k];
         Sleep(50);	
        }
        Sleep(400);
        for(int m=0;m<strlen(Y);m++)
        {
         cout<<Y[m];
         Sleep(50);	
        }
        getch();
        obj.Cafe();
	   }
	   break;
	   case 0:
	   {
	   	obj.Payment();
	   }
	   break;
	   default:
	   {
	   	Sleep(100);	
        for(int i=2;i<7;i++)
        {
         if(i%2==0)
         {
          Beep(523,300);	
         }	
        }	
        Sleep(200);	
        cout<<"\n\n\n\t\t\t\t\t  ...Wrong Choice ...\n";
        Sleep(1500);
        obj.Payment(); 
	   }	
	  }	
	 }		
	 else
	 {
	  cout<<"\n\n\n\t\t\t\tSorry!! You are not a Prime Member Yet...";
	  Sleep(100);
	  cout<<"\n\n\n\t\t\t\t1) Want to Become Prime Member...";
	  Sleep(100);
	  cout<<"\n\n\t\t\t\t2) Want to Continue...";
	  Sleep(100);
	  cout<<"\n\n\t\t\t\t3) Want to Exit...";
	  Sleep(300);
	  cout<<"\n\n\n\t\t\t\tEnter your Choice = ";
	  fflush(stdin);
	  cin>>ch;
	  switch(ch)
	  {
	   case 1:
	   {
	    obj.Membership();	
	   }	
	   break;
	   case 2:
	   {
	    goto QWERTY;		
	   }
	   break;
	   case 3:
	   {
	   	system("cls");	
        system("color f");
        cout<<"\n\n\n\n\n\n\n\n\n\n";
        cout<<"\t\t\t\t\t  ... THANX FOR COMING ...";
        cout<<"\n\n\n\n\n\n\n\n";
        Sleep(1500);
        exit(0);	
	   }
	   break;
	   default:
	   {
	   	Sleep(100);	
        for(int i=2;i<7;i++)
        {
         if(i%2==0)
         {
          Beep(523,300);	
         }	
        }	
        Sleep(200);	
        cout<<"\n\n\n\t\t\t\t\t  ...Wrong Choice ...\n";
        Sleep(1500);
        obj.Payment();
	   } 	
	  }	
	 }
	}
   }
   break;
   case 'N':
   {
    goto QE;	
   }
   case 'n':
   {
   	QE:
   	system("cls");
   	Sleep(100);
   	cout<<"\n\n\n\t\t\t\tThanks!! for your Response...";
   	Sleep(300);
   	QWERTY:
   	cout<<"\n\n\n\t\t\t\tTotal Amount to be Paid : Rs_30";
   	Sleep(100);
   	cout<<"\n\n\n\t\t\t\tPress 1 to Checkout and 0 to back...";
   	Sleep(300);
   	cout<<"\n\n\n\t\t\t\tEnter your Choice = ";
	fflush(stdin);
   	cin>>ch;
   	if(ch==1)
   	{
   	 system("cls"); 
	 Sleep(100);		
     for(int x=5;x>0;x--)
     {
      cout<<"\n\n\n\t\t\t\tYour Request is Processing... (Wait "<<x<<" sec)";
      Sleep(800);	
      system("cls");
     }		
     Sleep(300);
     char R[]="Congrats!! ";
     char Y[]="You Activate your Package Successfully.";
     cout<<"\n\n\n\t\t\t\t";
     for(int k=0;k<strlen(R);k++)
     {
      cout<<R[k];
      Sleep(50);	
     }
     Sleep(400);
     for(int m=0;m<strlen(Y);m++)
     {
      cout<<Y[m];
      Sleep(50);	
     }
     getch();
     obj.Cafe();	
	}
	else if(ch==0)
	{
	 obj.Payment();	
	}
	else
	{
	 Sleep(100);	
     for(int i=2;i<7;i++)
     {
      if(i%2==0)
      {
       Beep(523,300);	
      }	
     }	
     Sleep(200);	
     cout<<"\n\n\n\t\t\t\t\t  ...Wrong Choice ...\n";
     Sleep(1500);
     obj.Payment();	
	}
   }
   break;
   default:
   {
    Sleep(100);	
    for(int i=2;i<7;i++)
    {
     if(i%2==0)
     {
      Beep(523,300);	
     }	
    }	
    Sleep(200);	
    cout<<"\n\n\n\t\t\t\t\t  ...Wrong Choice ...\n";
    Sleep(1500);
    obj.Payment();	
   }	
  }
 }
 else if(ch==2)
 {
  Sleep(200);	
  cout<<"\n\n\t\t\t\tAre you a Prime Member (Y/N) ???";
  Sleep(300);
  cout<<"\n\n\n\t\t\t\tEnter your Choice = ";
  fflush(stdin);
  cin>>ch0;
  switch(ch0)
  {
   case 'Y':
   {
   	goto AS;
   }
   case 'y':
   {
   	AS:
   	Sleep(100);
   	cout<<"\n\n\n\t\t\t\tThanks!! for your Response...";
   	Sleep(300);
   	cout<<"\n\n\n\t\t\t\tPlease.. Let me Confirm...";
   	Sleep(1500);
   	system("cls");
   	for(int x=5;x>0;x--)
    {
     cout<<"\n\n\n\n\t\t\t\tYour Request is Processing... (Wait "<<x<<" sec)";
     Sleep(1200);	
     system("cls");
    }
    Sleep(800);
   	ifstream rd("Prime.txt");
   	while(getline(rd,t))
   	{
	 if(t==Username)
	 {	
	  cout<<"\n\n\n\t\t\t\tTotal Amount to be Paid : Rs_35 ( Discount-50% )";
	  Sleep(100);
	  cout<<"\n\n\n\t\t\t\tPress 1 to Checkout or 0 to Back...";
	  Sleep(300);
	  cout<<"\n\n\n\t\t\t\tEnter your Choice = ";
	  fflush(stdin);
	  cin>>ch;
	  switch(ch)
	  {
	   case 1:
	   {
	   	system("cls"); 	
        for(int x=5;x>0;x--)
        {
         cout<<"\n\n\n\t\t\t\tYour Request is Processing... (Wait "<<x<<" sec)";
         Sleep(800);	
         system("cls");
        }		
        Sleep(300);
        char R[]="Congrats!! ";
        char Y[]="You Activate your Package Successfully.";
        cout<<"\n\n\n\t\t\t\t";
        for(int k=0;k<strlen(R);k++)
        {
         cout<<R[k];
         Sleep(50);	
        }
        Sleep(400);
        for(int m=0;m<strlen(Y);m++)
        {
         cout<<Y[m];
         Sleep(50);	
        }
        getch();
        obj.Cafe();
	   }
	   break;
	   case 0:
	   {
	   	obj.Payment();
	   }
	   break;
	   default:
	   {
	   	Sleep(100);	
        for(int i=2;i<7;i++)
        {
         if(i%2==0)
         {
          Beep(523,300);	
         }	
        }	
        Sleep(200);	
        cout<<"\n\n\n\t\t\t\t\t  ...Wrong Choice ...\n";
        Sleep(1500);
        obj.Payment(); 
	   }	
	  }	
	 }		
	 else
	 {
	  cout<<"\n\n\n\t\t\t\tSorry!! You are not a Prime Member Yet...";
	  Sleep(100);
	  cout<<"\n\n\n\t\t\t\t1) Want to Become Prime Member...";
	  Sleep(100);
	  cout<<"\n\n\t\t\t\t2) Want to Continue...";
	  Sleep(100);
	  cout<<"\n\n\t\t\t\t3) Want to Exit...";
	  Sleep(300);
	  cout<<"\n\n\n\t\t\t\tEnter your Choice = ";
	  fflush(stdin);
	  cin>>ch;
	  switch(ch)
	  {
	   case 1:
	   {
	    obj.Membership();	
	   }	
	   break;
	   case 2:
	   {
	    goto QWERT;		
	   }
	   break;
	   case 3:
	   {
	   	system("cls");	
        system("color f");
        cout<<"\n\n\n\n\n\n\n\n\n\n";
        cout<<"\t\t\t\t\t  ... THANX FOR COMING ...";
        cout<<"\n\n\n\n\n\n\n\n";
        Sleep(1500);
        exit(0);	
	   }
	   break;
	   default:
	   {
	   	Sleep(100);	
        for(int i=2;i<7;i++)
        {
         if(i%2==0)
         {
          Beep(523,300);	
         }	
        }	
        Sleep(200);	
        cout<<"\n\n\n\t\t\t\t\t  ...Wrong Choice ...\n";
        Sleep(1500);
        obj.Payment();
	   } 	
	  }	
	 }
	}
   }
   break;
   case 'N':
   {
   	goto AD;
   }
   case 'n':
   {
   	AD:
   	system("cls");
   	Sleep(100);
   	cout<<"\n\n\n\t\t\t\tThanks!! for your Response...";
   	Sleep(300);
   	QWERT:
   	cout<<"\n\n\n\t\t\t\tTotal Amount to be Paid : Rs_70";
   	Sleep(100);
   	cout<<"\n\n\n\t\t\t\tPress 1 to Checkout and 0 to back...";
   	Sleep(300);
   	cout<<"\n\n\n\t\t\t\tEnter your Choice = ";
	fflush(stdin);
   	cin>>ch;
   	if(ch==1)
   	{
   	 system("cls"); 
	 Sleep(100);		
     for(int x=5;x>0;x--)
     {
      cout<<"\n\n\n\t\t\t\tYour Request is Processing... (Wait "<<x<<" sec)";
      Sleep(800);	
      system("cls");
     }		
     Sleep(300);
     char R[]="Congrats!! ";
     char Y[]="You Activate your Package Successfully.";
     cout<<"\n\n\n\t\t\t\t";
     for(int k=0;k<strlen(R);k++)
     {
      cout<<R[k];
      Sleep(50);	
     }
     Sleep(400);
     for(int m=0;m<strlen(Y);m++)
     {
      cout<<Y[m];
      Sleep(50);	
     }
     getch();
     obj.Cafe();	
	}
	else if(ch==0)
	{
	 obj.Payment();	
	}
	else
	{
	 Sleep(100);	
     for(int i=2;i<7;i++)
     {
      if(i%2==0)
      {
       Beep(523,300);	
      }	
     }	
     Sleep(200);	
     cout<<"\n\n\n\t\t\t\t\t  ...Wrong Choice ...\n";
     Sleep(1500);
     obj.Payment();	
	}
   }
   break;
   default:
   {
    Sleep(100);	
    for(int i=2;i<7;i++)
    {
     if(i%2==0)
     {
      Beep(523,300);	
     }	
    }	
    Sleep(200);	
    cout<<"\n\n\n\t\t\t\t\t  ...Wrong Choice ...\n";
    Sleep(1500);
    obj.Payment();	
   }	
  }	
 }
 else if(ch==3)
 {
  Sleep(200);	
  cout<<"\n\n\t\t\t\tAre you a Prime Member (Y/N) ???";
  Sleep(300);
  cout<<"\n\n\n\t\t\t\tEnter your Choice = ";
  fflush(stdin);
  cin>>ch0;
  switch(ch0)
  {
   case 'Y':
   {
    goto ZX;	
   } 	
   case 'y':
   {
   	ZX:
   	Sleep(100);
   	cout<<"\n\n\n\t\t\t\tThanks!! for your Response...";
   	Sleep(300);
   	cout<<"\n\n\n\t\t\t\tPlease.. Let me Confirm...";
   	Sleep(1500);
   	system("cls");
   	for(int x=5;x>0;x--)
    {
     cout<<"\n\n\n\n\t\t\t\tYour Request is Processing... (Wait "<<x<<" sec)";
     Sleep(1200);	
     system("cls");
    }
    Sleep(800);
   	ifstream rd("Prime.txt");
   	while(getline(rd,t))
   	{
	 if(t==Username)
	 {	
	  cout<<"\n\n\n\t\t\t\tTotal Amount to be Paid : Rs_60 ( Discount-50% )";
	  Sleep(100);
	  cout<<"\n\n\n\t\t\t\tPress 1 to Checkout or 0 to Back...";
	  Sleep(300);
	  cout<<"\n\n\n\t\t\t\tEnter your Choice = ";
	  fflush(stdin);
	  cin>>ch;
	  switch(ch)
	  {
	   case 1:
	   {
	   	system("cls"); 	
        for(int x=5;x>0;x--)
        {
         cout<<"\n\n\n\t\t\t\tYour Request is Processing... (Wait "<<x<<" sec)";
         Sleep(800);	
         system("cls");
        }		
        Sleep(300);
        char R[]="Congrats!! ";
        char Y[]="You Activate your Package Successfully.";
        cout<<"\n\n\n\t\t\t\t";
        for(int k=0;k<strlen(R);k++)
        {
         cout<<R[k];
         Sleep(50);	
        }
        Sleep(400);
        for(int m=0;m<strlen(Y);m++)
        {
         cout<<Y[m];
         Sleep(50);	
        }
        getch();
        obj.Cafe();
	   }
	   break;
	   case 0:
	   {
	   	obj.Payment();
	   }
	   break;
	   default:
	   {
	   	Sleep(100);	
        for(int i=2;i<7;i++)
        {
         if(i%2==0)
         {
          Beep(523,300);	
         }	
        }	
        Sleep(200);	
        cout<<"\n\n\n\t\t\t\t\t  ...Wrong Choice ...\n";
        Sleep(1500);
        obj.Payment(); 
	   }	
	  }	
	 }		
	 else
	 {
	  cout<<"\n\n\n\t\t\t\tSorry!! You are not a Prime Member Yet...";
	  Sleep(100);
	  cout<<"\n\n\n\t\t\t\t1) Want to Become Prime Member...";
	  Sleep(100);
	  cout<<"\n\n\t\t\t\t2) Want to Continue...";
	  Sleep(100);
	  cout<<"\n\n\t\t\t\t3) Want to Exit...";
	  Sleep(300);
	  cout<<"\n\n\n\t\t\t\tEnter your Choice = ";
	  fflush(stdin);
	  cin>>ch;
	  switch(ch)
	  {
	   case 1:
	   {
	    obj.Membership();	
	   }	
	   break;
	   case 2:
	   {
	    goto QWERTYUIOP;		
	   }
	   break;
	   case 3:
	   {
	   	system("cls");	
        system("color f");
        cout<<"\n\n\n\n\n\n\n\n\n\n";
        cout<<"\t\t\t\t\t  ... THANX FOR COMING ...";
        cout<<"\n\n\n\n\n\n\n\n";
        Sleep(1500);
        exit(0);	
	   }
	   break;
	   default:
	   {
	   	Sleep(100);	
        for(int i=2;i<7;i++)
        {
         if(i%2==0)
         {
          Beep(523,300);	
         }	
        }	
        Sleep(200);	
        cout<<"\n\n\n\t\t\t\t\t  ...Wrong Choice ...\n";
        Sleep(1500);
        obj.Payment();
	   } 	
	  }	
	 }
	}
   }
   break;
   case 'N':
   {
   	goto ZC;
   }
   case 'n':
   {
   	ZC:
   	system("cls");
   	Sleep(100);
   	cout<<"\n\n\n\t\t\t\tThanks!! for your Response...";
   	Sleep(300);
   	QWERTYUIOP:
   	cout<<"\n\n\n\t\t\t\tTotal Amount to be Paid : Rs_120";
   	Sleep(100);
   	cout<<"\n\n\n\t\t\t\tPress 1 to Checkout and 0 to back...";
   	Sleep(300);
   	cout<<"\n\n\n\t\t\t\tEnter your Choice = ";
	fflush(stdin);
   	cin>>ch;
   	if(ch==1)
   	{
   	 system("cls"); 
	 Sleep(100);		
     for(int x=5;x>0;x--)
     {
      cout<<"\n\n\n\t\t\t\tYour Request is Processing... (Wait "<<x<<" sec)";
      Sleep(800);	
      system("cls");
     }		
     Sleep(300);
     char R[]="Congrats!! ";
     char Y[]="You Activate your Package Successfully.";
     cout<<"\n\n\n\t\t\t\t";
     for(int k=0;k<strlen(R);k++)
     {
      cout<<R[k];
      Sleep(50);	
     }
     Sleep(400);
     for(int m=0;m<strlen(Y);m++)
     {
      cout<<Y[m];
      Sleep(50);	
     }
     getch();
     obj.Cafe();	
	}
	else if(ch==0)
	{
	 obj.Payment();	
	}
	else
	{
	 Sleep(100);	
     for(int i=2;i<7;i++)
     {
      if(i%2==0)
      {
       Beep(523,300);	
      }	
     }	
     Sleep(200);	
     cout<<"\n\n\n\t\t\t\t\t  ...Wrong Choice ...\n";
     Sleep(1500);
     obj.Payment();	
	}
   }
   break;
   default:
   {
    Sleep(100);	
    for(int i=2;i<7;i++)
    {
     if(i%2==0)
     {
      Beep(523,300);	
     }	
    }	
    Sleep(200);	
    cout<<"\n\n\n\t\t\t\t\t  ...Wrong Choice ...\n";
    Sleep(1500);
    obj.Payment();	
   }	
  }	
 }
 else
 {
  Sleep(100);	
  for(int i=2;i<7;i++)
  {
   if(i%2==0)
   {
    Beep(523,300);	
   }	
  }	
  Sleep(200);	
  cout<<"\n\n\n\t\t\t\t\t  ...Wrong Choice ...\n";
  Sleep(1500);
  obj.Payment();	
 }
}

main()
{	
 obj.Start();
}
