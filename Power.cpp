//////////////////////////////////////////////////////////////////////////////////
//
//	Q.	Write a program which is used to perform power operation
//		We have to accept 2 numbers as x and y and return the 		 
//		result as x^y.
//
//		Input:  10	 2	   |	10  -2	   |  2   4
//		Otput: 100		   |  100         |   16
//	
//		Technology: C++
//		Input: Int
//		Output: Int
//	
//		Author: Sanket Kolhe
//		Date : 01/06/2021
//	
///////////////////////////////////////////////////////////////////////////////////



#include<iostream>
using namespace std;


typedef unsigned long int ULONG;


class Power
{
	public:
		int calcPower(int,int);
};


int Power :: calcPower(int no1,int no2)
{
	int i=0;
	ULONG mult=1;
	
	if(no1 < 0)
	{
		no1 = -no1;
	}
	
	if(no2 < 0)
	{
		no2 = -no2;
	}
	
	
	for(i=1;i<=no2;i++)
	{
		mult=mult*no1;
	}
	
	return mult;
}


int main()
{
	int no1=0,no2=0,ans=0;
	
	cout<<"Enter the first number ";
	cin>>no1;
	
	cout<<"Enter the second number ";
	cin>>no2;
	
	Power obj;
	ans=obj.calcPower(no1,no2);
	
	cout<<"The answer is "<<ans;
	
	return 0;
}

