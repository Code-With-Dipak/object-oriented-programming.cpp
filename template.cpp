 // Template //
#include <iostream>
using namespace std;

template <class t> // Template 1 //
t sum(t a,t b)
{
	cout<<"\n addition is:-"<<a+b;
	
}

template <class p> // Template 2//
p sub(p a,p b)
{
	cout<<"\n subtraction is:-"<<a-b;
	
}

int main()
{
	sum(100,100);
	sub(300,200);
	return 0;
	
}

/*
OUTPUT:-

	comp@comp-HP-EliteDesk-800-G2-SFF:~$ gedit Dipak.cpp
	comp@comp-HP-EliteDesk-800-G2-SFF:~$ g++ Dipak.cpp
	comp@comp-HP-EliteDesk-800-G2-SFF:~$ ./a.out

		 addition is:-200
		 subtraction is:-100




   https://drive.google.com/drive/folders/1yXuS5cdJ7XMZYx3w50Wntbc7d-3_QMNV?usp=sharing
*/
