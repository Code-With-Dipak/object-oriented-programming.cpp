             /* Practical No 4 */
/*

Problem Statement:

Write a C++ program that creates an output file, writes information to
it, closes the file and
open it again as an input file and read the information from the file.

ROLL NO.:-

CLASS:-S.E COMPUTER

DATE:- / /2023

*/

#include<iostream>

#include<fstream>

using namespace std;

class Employee

{

 char Name[20];

 int ID;

 double salary;

 public:

 void accept()

 {

 cin>>Name;

 cin>>ID;

 cin>>salary;

 }

 void display()

 {

 cout<<"\n Enter Name:"<<Name;

 cout<<"\n Enter Id:"<<ID;

 cout<<"\n Enter Salary:"<<salary;

 }

};

 

int main()

{

 Employee o[5];

 fstream f;

 int i,n;

 

 f.open("b16.txt");
cout<<"\n How many employee information do you need to store?";

 cin>>n;

 cout<<"\n Enter information of employee in this

format(NAME/ID/SALARY)";

 for(i=0;i<n;i++)

 {

 cout<<"\n Enter information of:"<<i<<"\n Employee";

 o[i].accept();

 f.write((char*)&o[i],sizeof o[i]);

 }

 

 f.close();

 

 f.open("b16.txt",ios::in);

 cout<<"\n Information of Employees is as follows:";

 for(i=0;i<n;i++)

 {

 f.write((char*)&o[i],sizeof o[i]);

 o[i].display();

 }

 f.close();

 

 return 0;

}

/*

output-

 How many employee information do you need to store?3

 Enter information of employee in this format(NAME/ID/SALARY)

 Enter information of:0

 Employee Prathmesh 346 50000

 Enter information of:1

 Employee Dipak 347 60000

 Enter information of:2

 Employee Amol 348 70000

 Information of Employees is as follows:

 Enter Name:Dipak
  Enter Id:346

 Enter Salary:50000

 Enter Name:Dipak

 Enter Id:347

 Enter Salary:60000

 Enter Name:Amol

 Enter Id:348

 Enter Salary:70000

--------------------------------

Process exited after 52.21 seconds with return value 0

Press any key to continue . . ./
