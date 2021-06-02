//////////////////////////////////////////////////////////////////////////////////
//
//	Q.	Write a program which is used to perform multiplication
//		of three numbers. 		 
//		
//
//		Input:  5  4  7	   |  5  0  7	   |  5  0  0   | 0  0  0
//		Otput:  140		   |   35         |   5         |  0
//	
//		Technology: C++
//		Input: Int
//		Output: Int
//	
//		Author: Sanket Kolhe
//		Date : 03/06/2021
//	
///////////////////////////////////////////////////////////////////////////////////



#include<iostream>
using namespace std;


class Multiplication
{
	public:
		int calcMultiply(int,int,int);	
};


int Multiplication :: calcMultiply(int no1,int no2,int no3)
{
	int ans=0,mult=1;
	
	if(no1==0 && no2==0 && no3==0)
	{
		return 0;
	}
	
	if(no1==0)
	{
		no1=1;
	}
	
	if(no2==0)
	{
		no2=1;
	}
	
	if(no3==0)
	{
		no3=1;
	}
	
	
	mult=mult*no1*no2*no3;
	
	
	return mult;
}



int main()
{
	int n1,n2,n3,ans=0;
	
	cout<<"Enter the first number ";
	cin>>n1;
	
	cout<<"Enter the second number ";
	cin>>n2;
	
	cout<<"Enter second number";
	cin>>n3;
	
	Multiplication obj;
	ans=obj.calcMultiply(n1,n2,n3);
	
	cout<<"The answer is "<<ans;
	
	
	return 0;
}
