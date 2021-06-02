//////////////////////////////////////////////////////////////////////////////////
//
//	Q.	Write a program which is used to calculate percentage
//		 by accepting the total marks and obtained marks.		 
//		
//
//		Input:  1000  745	   |	140  28	     |  100   21
//		Otput:   74.5 %		   |  	20  %        |   21 %
//	
//		Technology: C++
//		Input: Int,Int
//		Output: Int
//	
//		Author: Sanket Kolhe
//		Date : 03/06/2021
//	
///////////////////////////////////////////////////////////////////////////////////



#include<iostream>
using namespace std;


class Percentage
{
	public:
		float calcPercentage(float,float);
};


float Percentage :: calcPercentage(float total,float secured)
{
	float ans=0.0;
	
	ans=((secured*100)/total);
	
	return ans;
}


int main()
{
	float n1,n2=0.0;
	float ans=0.0;
	
	cout<<"Enter the total marks ";
	cin>>n1;
	
	cout<<"Enter the obtained marks ";
	cin>>n2;
	
	Percentage obj;
	ans=obj.calcPercentage(n1,n2);
	
	cout<<"The obtained percentage are: "<<ans<<" %";
	
	return 0;
}
