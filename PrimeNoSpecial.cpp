/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Q.	Write a program which accept one number from
//		user and check if that number is prime or
//		 not.(A prime number is a number whose
//		 factors are 1 and number itself) 
//
//		NOTE:- (without using a flag and break)
//		
//		Input:   6	    |	 5	   |	12
//		Otput: 	FALSE       |   TRUE	   |   FALSE
//	
//		Technology: C++
//		Input: Int
//		Output: BOOL
//	
//		Author: Sanket Kolhe
//		Date : 01/06/2021
//	
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

#define TRUE  1
#define FALSE 0

typedef int BOOL;


class PrimeNo
{
	public:
		BOOL chkPrime(int);
};


BOOL PrimeNo :: chkPrime(int no)
{
	
	int i=0;
	
	if(no==1 || no==-1 || no==0)	//Exceptional case handeled seperately
	{
		return FALSE;
	}
	
	if(no<0)	//Updater
	{
		no=-no;
	}
	
	
	for(i=no/2;((i>1)&&(no%i)!=0);i--);	// special for loop 
	
	
	if(i==1)
	{
		return TRUE;
	}
	
	else
	{
		return FALSE;
	}
	
  } 
  


int main()
{
	int no=0;
	BOOL ans=FALSE;
	
	cout<<"Enter a number ";
	cin>>no;
	
	PrimeNo obj;
	ans=obj.chkPrime(no);	//Call the chkPrime function
	
	if(ans==TRUE)
	{
		cout<<no<<" is a prime number";
	}
	
	else
	{
		cout<<no<<" is not a prime number";
	}
	
	return 0;
}
