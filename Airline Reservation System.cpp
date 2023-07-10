#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <cstring>
using namespace std;
int pk1, pk2, pk3 = 0;
int memberid = 0;
void login()
{
cout << "\t\t:---:WELCOME TO:---:\n";
cout << "\t\t:---:AIRLINE RESERVATION SYSTEM:---:\n";
cout << "\t\t:---:********************************:---:\t
\t";
cout << "Press any key to continue...";
getch();
}
void schedule()
{
system("color 71");
system("cls");
cout << "\n\t** Welcome to the Airline Flight Schedule **" 
<< endl<< endl;
cout 
<< "\t-----------------------------------------------------------
--------------------" << endl<< endl;
cout << "\t\t Read the Schedule CAREFULLY before 
reserving your seat" << endl<< endl;
cout 
<< "\t-----------------------------------------------------------
--------------------" << endl<< endl;
cout << "\t<1>\t\tAIRINDIA \t\tKOLKATA\t\tMUMBAI \t 
"<< 40 - pk1 << endl<< endl;
cout << "\t<2>\t\tINDIGO \t\tKOLKATA\t\tBANGALORE \t 
"<< 40 - pk1 << endl<< endl;
cout << "\t<3>\t\tAIRASIA \t\tKOLKATA\t\tDELHI \t 
"<< 60 - pk2 << endl<< endl;
cout << "\t<4>\t\tVISTARA \t\tKOLKATA\t\tPUNE \t 
"<< 120 - pk3 << endl<< endl;
cout << "\t
\t---------------------------------------------------------------
----------------" << endl<< endl;
cout << "\t\tPress any key to continue...";
getch();
}
class declaration
{
public:
1
string id, name, age, gender, cnic, address, contact, depar, 
desti, f_name, seat_type, passport;
};
class Member : public declaration
{
public:
declaration m[10];
int en;
string back;
int status1;
int status2;
void get_data();
void show_data();
void reservation();
void seat();
void edit();
void alldata();
void delet();
};
void Member ::get_data()
{
system("color 71");
system("cls");
cout << endl;
cout << "\tMention a unique id: ";
cin.ignore();
getline(cin, m[memberid].id);
cout << endl;
cout << "\tName: ";
getline(cin, m[memberid].name);
cout << endl;
cout << "\tAge: ";
getline(cin, m[memberid].age);
cout << endl
<< endl;
cout << "\tGender: ";
getline(cin, m[memberid].gender);
cout << endl;
cout << "\tCnic: ";
getline(cin, m[memberid].cnic);
cout << endl;
cout << "\tPassport number: ";
getline(cin, m[memberid].passport);
cout << endl;
cout << "\tAddress: ";
getline(cin, m[memberid].address);
cout << endl;
cout << "\tContact: ";
getline(cin, m[memberid].contact);
2
back:
cout << endl;
cout << "\tProceed Forward[Y/N] : ";
cin >> back;
if (back == "Y" || back == "y")
{
cout << endl;
cout << "\tYou filled all Entries of traveler 
successfully...";
getch();
}
else if (back == "N" || back == "n")
{
cout << endl;
cout << "\tYou filled all Entries of traveler 
successfully...";
getch();
}
else
{
cout << "\n\tWrong Input";
goto back;
}
}
void Member ::show_data()
{
system("color 71");
system("cls");
string n;
cout << "\n\tEnter the member's ID to display Record: ";
cin >> n;
system("cls");
if (n == "0")
{
system("cls");
cout << "\n\tOOPS!!!!" << endl;
cout << "\tNote: No Record To Display Plz Go Back And 
Enter Some Entries...";
}
else
{
int i;
for (i = 0; i < memberid; i++)
{
status1 = 0;
if (n == m[i].id)
{
status1 = 1; 
break;
}
} 
3
if (status1) 
{
cout << "\n\n";
cout << "\t------------------------------------" 
<<endl;
cout << "\tID :" << m[i].id 
<< endl;
cout << "\tName :" << m[i].name 
<< endl;
cout << "\tAge :" << m[i].age 
<< endl
<< endl;
cout << "\tGender :" << m[i].gender 
<< endl
<< endl;
cout << "\tCnic :" << m[i].cnic 
<< endl
<< endl;
cout << "\tPassport Number :" 
<< m[i].passport << endl
<< endl;
cout << "\tAddress :" 
<< m[i].address << endl
<< endl;
cout << "\tContact :" 
<< m[i].contact << endl
<< endl;
cout << "\tFlight Name :" << m[i].f_name 
<< endl
<< endl;
cout << "\tDeparture :" << m[i].depar 
<< endl
<< endl;
cout << "\tDestination :" << m[i].desti 
<< endl
<< endl;
cout << "\tSeat Type :" 
<< m[i].seat_type << endl
<< endl;
cout << "\t------------------------------------" 
<< endl
<< endl;
cout << "\tPress any key to choose another 
option...";
}
else
{
cout << "\nNo such ID in database" << endl;
cout << "\ttPress any key to choose another 
option...";
}
4
}
getch();
}
void Member ::reservation()
{
system("color 71");
string res;
above:
system("cls");
cout << "\nt** Select Departure And Destination **" << endl;
cout 
<< "\t----------------------------------------------------------" 
<< endl;
cout << "\t<1>\t\tAIRINDIA \t\tKOLKATA\t\tMUMBAI \t 
"<< endl<< endl;
cout << "\t<2>\t\tINDIGO \t\tKOLKATA\t\tBANGALORE \t 
"<< endl<< endl;
cout << "\t<3>\t\tAIRASIA \t\tKOLKATA\t\tDELHI \t 
"<< endl<< endl;
cout << "\t<4>\t\tVISTARA \t\tKOLKATA\t\tPUNE \t 
"<< endl<< endl;
cout 
<< "\t----------------------------------------------------------" 
<< endl;
cout << "\n\tPress any key to continue...";
getch();
cout << endl;
cout << "\tEnter Your Choice: ";
cin >> res;
if (res == "1")
{
m[memberid].depar = "KOLKATA";
m[memberid].desti = "MUMBAI";
m[memberid].f_name = "AIR INDIA";
}
else if (res == "2")
{
m[memberid].depar = "KOLKATA";
m[memberid].desti = "BANGALORE";
m[memberid].f_name = "INDIGO";
}
else if (res == "3")
{
m[memberid].depar = "KOLKATA";
m[memberid].desti = "DELHI";
m[memberid].f_name = "AIR ASIA";
}
else if (res == "4")
5
{
m[memberid].depar = "KOLKATA";
m[memberid].desti = "PUNE";
m[memberid].f_name = "VISATRA";
}
else
{
system("cls");
cout << "\n\tWrong Input" << endl;
cout << "\n\tPress any key to choose another 
option...";
getch();
goto above;
}
}
void Member ::seat()
{
system("color 71");
string choise;
above1:
system("cls");
cout << "\n\t** Select Your Seat Type**" << endl;
cout << "\t----------------------------------" << endl;
cout << "\t\tNumber \t\t Seat Type \t\t Price" << endl;
cout << "\t\t<1> \t\t Simple Seat\t\t 5000/-" << endl;
cout << "\t\t<2> \t\t Window side\t\t 6000/-" << endl;
cout << "\t----------------------------------" << endl;
cout << "\tPress any key to continue...";
getch();
cout << endl;
cout << "\tEnter Your Choice: ";
cin >> choise;
if (choise == "1")
{
m[memberid].seat_type = "Simple Seat";
}
else if (choise == "2")
{
m[memberid].seat_type = "Window Side";
}
else
{
system("cls");
cout << "\n\tWrong Input" << endl;
cout << "\tPress any key to choose another option...";
getch();
goto above1;
}
6
}
void Member ::edit()
{
system("color 71");
system("cls");
string n;
cout << "\n\tEnter the member's ID to display Record: ";
cin >> n;
system("cls");
if (n == "0")
{
system("cls");
cout << "\n\tOOPS!!!!" << endl;
cout << "\t\tNote: No Record To Display Plz Go Back 
And Enter Some Entries...";
}
else
{
int i;
for (i = 0; i < memberid; i++)
{
status1 = 0;
if (n == m[i].id)
{
status1 = 1; 
break;
}
} 
if (status1) 
{
system("cls");
cout << endl;
cout << "\tMention a unique id: ";
cin.ignore();
getline(cin, m[i].id);
cout << endl;
cout << "\tName: ";
getline(cin, m[i].name);
cout << endl;
cout << "\tAg: ";
getline(cin, m[i].age);
cout << endl;
cout << "\tAddress: ";
getline(cin, m[i].address);
cout << endl;
cout << "\tContact: ";
getline(cin, m[i].contact);
schedule();
string res;
above2:
7
cout << "\nt** Select Departure And Destination 
**" << endl;
cout 
<< "\t----------------------------------------------------------" 
<< endl;
cout << "\t<1>\t\tAIRINDIA \t\tKOLKATA\t\tMUMBAI 
\t "<< endl<< endl;
cout << "\t<2>\t\tINDIGO \t\tKOLKATA\t
\tBANGALORE \t "<< endl<< endl;
cout << "\t<3>\t\tAIRASIA \t\tKOLKATA\t\tDELHI 
\t "<< endl<< endl;
cout << "\t<4>\t\tVISTARA \t\tKOLKATA\t\tPUNE 
\t "<< endl<< endl;
cout 
<< "\t----------------------------------------------------------" 
<< endl;
cout << "\n\tPress any key to continue...";
getch();
cout <<endl;
cout << "\tEnter Your Choice: ";
getline(cin, res);
if (res == "1")
{
m[i].depar = "KOLKATA";
m[i].desti = "MUMBAI";
m[i].f_name = "AIR INDIA";
}
else if (res == "2")
{
m[i].depar = "KOLKATA";
m[i].desti = "BANGALORE";
m[i].f_name = "INDIGO";
}
else if (res == "3")
{
m[i].depar = "KOLKATA";
m[i].desti = "DELHI";
m[i].f_name = "AIR ASIA";
}
else if (res == "4")
{
m[i].depar = "KOLKATA";
m[i].desti = "PUNE";
m[i].f_name = "VISTARA";
}
else
{
system("cls");
8
cout << "\n\tWrong Input" << endl;
cout << "\tPress any key to choose another 
option...";
getch();
goto above2;
}
string choise;
above3:
cout << "\n\t** Select Your Seat Type**" 
<< endl;
cout 
<< "\t----------------------------------" << endl;
cout << "\t\tNumber \t\t Seat Type \t\t 
Price" << endl;
cout << "\t\t\t<1> \t\t Simple Seat\t\t 
5000/-" << endl;
cout << "\t\t<2> \t\t Window side\t\t 
6000/-" << endl;
cout 
<< "\t----------------------------------" << endl;
cout << "\tPress any key to continue...";
getch();
cout << endl;
cout << "\t\t\t\t\t\t\t\tEnter Your Choice: 
";
cin >> choise;
if (choise == "1")
{
m[i].seat_type = "Simple Seat";
}
else if (choise == "2")
{
m[i].seat_type = "Window Side";
}
else
{
system("cls");
cout << "\n\tWrong Input" << endl;
cout << "\tPress any key to choose another 
option...";
getch();
goto above3;
}
}
else
{
cout << "\nNo such ID in database" << endl;
cout << "\tPress any key to choose another 
9
option...";
}
}
getch();
}
void Member ::alldata()
{
system("cls");
system("color 71");
//int i;
if (memberid == 0)
{
system("cls");
cout << "\n\tOOPS!!!!" << endl;
cout << "\tNote: No Record To Display Plz Go Back And 
Enter Some Entries...";
}
else
{
cout << "\n
\t---------------------------------------------------------------
-----------------" << endl;
cout << "\t Details Of All The Travelers In 
registered" << endl;
cout << "\t---------------------------------------" 
<< endl
<< endl;
cout << "\tID"
<< "\t\t"
<< "NAME"
<< "\t\t"
<< "Cnic"
<< "\t\t"
<< "AGE"
<< "\t\t"
<< "Gender"
<< "\t\t"
<< "Contact"
<< "\t\t"
<< "Flight"
<< "\t\t"
<< "Departure"
<< "\t\t"
<< "Destination";
cout << endl;
for (int i = 0; i < memberid; i++)
{
cout << "\t" << m[i].id << "\t\t" << m[i].name 
<< "\t\t" << m[i].cnic << m[i].age << "\t\t" << m[i].gender 
<< "\t\t" << m[i].contact << "\t" << m[i].f_name << "\t\t" 
10
<< m[i].depar << "\t\t\t" << m[i].desti << endl
<< endl;
}
cout << "\t\t\t\t\t
\t---------------------------------------------------------------
-----------------" << endl
<< endl;
cout << "\n\t\t\t\t\t\tPress any key to choose another 
option...";
}
getch();
}
void Member ::delet()
{
system("color 71");
system("cls");
string n;
cout << "\n\tEnter the member's ID to display Record: ";
cin >> n;
system("cls");
if (n == "0")
{
system("cls");
cout << "\n\tOOPS!!!!" << endl;
cout << "\t\tNote: No Record To Display Plz Go Back 
And Enter Some Entries...";
}
else
{
int i;
for (i = 0; i < memberid; i++)
{
status1 = 0;
if (n == m[i].id)
{
status1 = 1; 
break;
}
} 
if (status1) 
{
m[i].id, name, age, address, contact, depar, 
desti, f_name, seat_type = "Removed";
cout << "\n\nRecord Deleted...";
getch();
}
else
{
cout << "\n\tNo such ID in database" << endl;
cout << "\t\tPress any key to choose another 
11
option...";
getch();
}
}
}
int main()
{
system("color 71");
Member obj;
string ch, ch1, ch2, ch3, ch4, ch5, ch6, ch7, ch8, ch9;
int count = 0;
login();
mainmenu:
system("cls");
cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t** Welcome 
to the Airline Reservation System **" << endl
<< endl;
cout << "\t\t\t\t\t\t\t
\t--------------------------------------------" << endl
<< endl;
cout << "\t\t\t\t\t\t\t\t<1> Menu" << endl
<< endl;
cout << "\t\t\t\t\t\t\t\t<2> Flight Schedule" << endl
<< endl;
cout << "\t\t\t\t\t\t\t\t<3> Instructions/Help" << endl
<< endl;
cout << "\t\t\t\t\t\t\t\t<4> Exit" << endl
<< endl;
cout << "\t\t\t\t\t\t\t
\t--------------------------------------------" << endl
<< endl;
cout << "\t\t\t\t\t\t\t\tEnter Your Choice: ";
cin >> ch;
if (ch == "1")
{
secondmain:
system("cls");
cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t** 
Welcome to the Main Menu **" << endl
<< endl;
cout << "\t\t\t\t\t\t\t
\t----------------------------------------------" << endl
<< endl;
cout << "\t\t\t\t\t\t\t\t<1> Reserve 
Flight/Registration" << endl
<< endl;
cout << "\t\t\t\t\t\t\t\t<2> Flight Schedule" << endl
<< endl;
cout << "\t\t\t\t\t\t\t\t<3> View Your Seat" << endl
<< endl;
cout << "\t\t\t\t\t\t\t\t<4> Edit Your Seat" << endl
12
<< endl;
cout << "\t\t\t\t\t\t\t\t<5> View All Reserved Seats" 
<< endl
<< endl;
cout << "\t\t\t\t\t\t\t\t<6> Delete Your Reservation" 
<< endl
<< endl;
cout << "\t\t\t\t\t\t\t\t<7> Go Back" << endl
<< endl;
cout << "\t\t\t\t\t\t\t
\t----------------------------------------------" << endl
<< endl;
cout << "\t\t\t\t\t\t\t\tEnter Your choice: ";
cin >> ch1;
if (ch1 == "1")
{
obj.get_data();
system("cls");
schedule();
obj.reservation();
obj.seat();
memberid++;
count++;
goto secondmain;
}
else if (ch1 == "2")
{
schedule();
goto secondmain;
}
else if (ch1 == "3")
{
if (count == 0)
{
system("cls");
cout << "\n\tOOPS!!!!" << endl;
cout << "\t\tNote: No Record To Display 
Plz Go Back And Enter Some Entries...";
getch();
goto secondmain;
}
else
{
obj.show_data();
goto secondmain;
}
}
else if (ch1 == "4")
{
13
if (count == 0)
{
system("cls");
cout << "\ntOOPS!!!!" << endl;
cout << "\t\tNote: No Record To Display 
Plz Go Back And Enter Some Entries...";
getch();
goto secondmain;
}
else
{
obj.edit();
goto secondmain;
}
}
else if (ch1 == "5")
{
if (count == 0)
{
system("cls");
cout << "\n\tOOPS!!!!" << endl;
cout << "\t\tNote: No Record To Display 
Plz Go Back And Enter Some Entries...";
getch();
goto secondmain;
}
else
{
obj.alldata();
goto secondmain;
}
}
else if (ch1 == "6")
{
if (count == 0)
{
system("cls");
cout << "\n\tOOPS!!!!" << endl;
cout << "t\t\tNote: No Record To Display 
Plz Go Back And Enter Some Entries...";
getch();
goto secondmain;
}
else
{
obj.delet();
goto secondmain;
}
}
14
else if (ch1 == "7")
{
goto mainmenu;
}
else
{
system("cls");
cout << "\n\tWrong Input" << endl;
cout << "\t\tPress any key to choose another 
option...";
getch();
goto secondmain;
}
}
else if (ch == "2")
{
schedule();
goto mainmenu;
}
else if (ch == "3")
{
system("cls");
cout << "\n
\t ------------------------------------------------------------
----------------------------------------------" << endl;
cout << "\t The most important thing to note while 
running this software is that first of all enter into main menu 
" << endl;
cout << "\t and start with entering the members and 
than afterwards you can register the employes. This is a data 
" << endl;
cout << "\t recording system in which you can easily 
record data of members and employes also if you enter into the " 
<< endl;
cout << "\t monetary database where you can also 
record the fee received from the members and calculate all the 
fee " << endl;
cout << "\t received. This system also allows you to 
record the pay schedle of the employes that to which employe you" 
<< endl;
cout << "\t have made the payment and which are 
left. At the end it also shows you that how much you have 
received " << endl;
cout << "\t income from the members and how much you 
have paid. Than it shows the message that either you are in " 
<< endl;
cout << "\t Profit or Loss" << endl;
cout 
<< "\t -------------------------------------------------------
15
-----------------" << endl;
cout << "\t\t\t\t Press any key to choose another 
option...";
getch();
goto mainmenu;
}
else if (ch == "4")
{
system("cls");
cout << "\t\t:---:WELCOME TO:---:\n";
cout << "\t\t:---:AIRLINE RESERVATION SYSTEM:---:\n";
cout << "\t\t:---:
*********************************:---:\t\t";
}
else
{
system("cls");
cout << "\n\tWrong Input" << endl;
cout << "\tPress any key to choose another option...";
getch();
goto mainmenu;
}
}
16
