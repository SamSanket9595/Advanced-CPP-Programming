//////////////////////////////////////////////////////////////////////////////////
//
//	Q.	Write a program which accept one number from
//		user and return difference of factors and 
//		non-factors of that number on the screen.
//		
//		Input:  10		     |	 6		    |	12
//		Otput: -29 (8 - 37)  | -3 (6  9)    |   -34 (16 - 50)
//	
//		Technology: C++
//		Input: Int
//		Output: Int
//	
//		Author: Sanket Kolhe
//		Date : 01/06/2021
//	
//////////////////////////////////////////////////////////////////////////////////



#include<iostream>
using namespace std;

class FactorsAndNonFactors
{
	public:
		int diffFactAndNonFact(int no);
};

int FactorsAndNonFactors :: diffFactAndNonFact(int no)
{
	int Sum1=0,Sum2=0,i=0,result=0;
	
	for(i=1;i<no;i++)
	{
		if(no%i==0)
		{
			Sum1=Sum1 + i;
		}
		else
		{
			Sum2=Sum2 + i;
		}
	}
	
	result=Sum1 - Sum2 ;
	
	return result;

}


int main()
{
	int no=0,ans=0;
	
	cout<<"Enter a number ";
	cin>>no;
	
	FactorsAndNonFactors obj;
	ans=obj.diffFactAndNonFact(no);
	
	cout<<"The diff between Factors and NonFactors is: "<<ans;
	
	return 0;
	
}
