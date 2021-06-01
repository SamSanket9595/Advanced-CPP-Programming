//////////////////////////////////////////////////////////////////////////////////
//
//	Q.	Write a program which accept one number from
//		user and print even factors of that number 
//		on the screen.
//		
//		Input:  24			 |	 8		|	15
//		Otput: 2 4 6 8 12	 | 2 4 		|   -
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

class EvenFactors
{
	public:
		void dispEvenFactors(int);
};


void EvenFactors :: dispEvenFactors(int no)
{
	int i=0;
	
	for(i=1;i<=(no/2);i++)
	{
		if((no%2)!=0)
		{
			cout<<"There are no even factors of the given number  ";
			return;
		}
		
		
		if((no%i)==0)	//Check if the i is the factor of the number.
		{
			if((i%2)==0)	//Check if it is a even factor or not.
			{
				cout<<i<<' ';	//Print the even factor.
			}
		}
	}
}



int main()
{
	int no=0;
	
	cout<<"Enter a number whose even factors are to be displayed ";
	cin>>no;
	
	
	EvenFactors obj;			//EvenFactors object
	obj.dispEvenFactors(no);	//Call the display method
	
	return 0;
}
