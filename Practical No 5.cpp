
/* PRACTICAL NO.5

Problem Statement:

Write a function template for selection sort that inputs, sorts
and outputs an integer array and a float array

ROLL NO.:-

CLASS:-S.E COMPUTER

DATE:- / /2023

*/

#include<iostream>

using namespace std;

int n;

#define size 10

template<class T>

void sel(T A[size])

{

 int i,j,min;

 T temp;

 for(i=0;i<n-1;i++)

 {

 min=i;

 for(j=i+1;j<n;j++)

 {

 if(A[j]<A[min])

 min=j;

 }

 temp=A[i];

 A[i]=A[min];

 A[min]=temp;

 }

 cout<<"\nSorted array: ";

 for(i=0;i<n;i++)

 {

 cout<<" "<<A[i];

 }

}

int main()

{

 int choice;

 char C[size];

 int A[size];

 float B[size];
int i;

 cout<<"-----------------------";

 do

 {

 cout<<"\n 1. Integer : ";

 cout<<"\n 2. Float : ";

 cout<<"\n 3. Exit : "<<endl;

 cout<<"\n Enter Choice : ";

 cin>>choice;

 switch(choice)

 {

 case 1:

 {

 cout<<"\nEnter Total Number Of Integer Elements:";

 cin>>n;

 cout<<"\nEnter Integer Elements:";

 for(i=0;i<n;i++)

 {

 cin>>A[i];

 }

 sel(A);

 break;

 }

 case 2:

 {

 cout<<"\nEnter Total Number Of Float Elements:";

 cin>>n;

 cout<<"\nEnter Float Elememts:";

 for(i=0;i<n;i++)

 {

 cin>>B[i];

 }

 sel(B);

 break;

 }

 case 3:

{
cout<<"**********Program Exited Successfully**********"<<endl;

 exit(0);

 }

 default:

 {

 cout<<"\n Invalid";

 }

 }

 }

 while(choice!=4);

return 0;

}

/* output:-

-----------------------

 1. Integer :

 2. Float :

 3. Exit :

 Enter Choice : 1

Enter Total Number Of Integer Elements:4

Enter Integer Elements:60 50 30 20

Sorted array: 20 30 50 60

 1. Integer :

 2. Float :

 3. Exit :

 Enter Choice : 2

Enter Total Number Of Float Elements:4

Enter Float Elememts:4.4 4.3 4.2 4.1

Sorted array: 4.1 4.2 4.3 4.4

 1. Integer :

 2. Float :

 3. Exit :
Enter Choice : 3

**********Program Exited Successfully**********

--------------------------------

Process exited after 45.45 seconds with return value 0

Press any key to continue . . .
