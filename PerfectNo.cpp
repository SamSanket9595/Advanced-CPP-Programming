//////////////////////////////////////////////////////////////////////////////////
//
//	Q.	Write a program which accept one number from
//		user and check if that number is perfect or
//		 not.(A perfect number is a number whose
//		 sum of the factors is the number itself)
//		
//		Input:   6		   |	28		|	12
//		Otput: 	TRUE       |  TRUE		|   FALSE
//	
//		Technology: C++
//		Input: Int
//		Output: BOOL
//	
//		Author: Sanket Kolhe
//		Date : 01/06/2021
//	
//////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

#define TRUE  1
#define FALSE 0

typedef int BOOL;


class PerfectNo
{
	public:
		BOOL chkPerfect(int);
};

BOOL PerfectNo :: chkPerfect(int no)
{
	int sum=0,i=0;
	
	if(no==1)
	{
		return TRUE;	
	}
	
	if(no<0)		//Updater
	{
		no=-no;
	}
	
	
	for(i=1;((i<=no/2) && (sum<=no));i++)  //for condition to reduce time complexity
	{
		if(no%i==0)
		{
			sum=sum+i;
		}
	}
	
	if(sum==no)
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
	
	
	cout<<"Enter the number ";
	cin>>no;
	
	PerfectNo obj;
	ans=obj.chkPerfect(no);		//Call the chkPerfect method
	
	if(ans==TRUE)
	{
		cout<<no<<" is a perfect number ";
	}
	
	else
	{
		cout<<no<<" is not a perfect number ";
	}
	
	
	return 0;
}
