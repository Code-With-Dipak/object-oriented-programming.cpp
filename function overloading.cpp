/* function oveloading */

#include<iostream>
using namespace std;

int num1=20,num2=10;

		void fun()
		{
			int sum=num1+num2;
			cout<<"\n addition:-"<<sum;
		}

		void fun(int a,int b)
		{
			int sub=a-b;
			cout<<"\n subtraction:-"<<sub;
		}

int main()
{
   fun(); 
   fun(100,50);
   return 0;
}

				/* OUTPUT */
				addition:-30
 				subtraction:-50
				--------------------------------
				Process exited after 0.6365 seconds with return value 0
				Press any key to continue . . .
