////////////////////////////////////////////////////////////////////////////////
//	Q. Write  program to check how many  elements in the array
//		are quadraples.(qadraples contains four array elements
//		in which the left side no are equal to the sumaation of
//		the right hand eleents.)
//
//	Input: 1 4 2 3  				  |  2 3  1  4 0
//  Output: 1 quadraple (1+4 = 2+3)   |		2 quadraples (2+3 = 1+4) and (3+1 = 4+0)
//
//	Technology: C++
//
//	Input: Array,Int
//	Output: Int
//
//	Author: Sanket Kolhe
// 	Date : 31/05/2021
//
////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;



class Quadruples
{
	public:
		int chkQuadruples(int [],int);
		
};


int  Quadruples :: chkQuadruples(int arr[],int n)
{
	int i=0,j=0,sum1=0,sum2=0,cnt=0,result=0;
	
	for(i=0;i<n;i++)
	{
		if(i+4 <= n)
		{
			for(j=i,cnt=0;j < i+4 ;j++,cnt++)
		{
			if(cnt<2)
			{
				sum1=sum1+arr[j];
			}
			else
			{
				sum2=sum2+arr[j];
			}
		}
		
		if(sum1==sum2)
		{
			result++;
		}
	}
	else
	{
		return result;
	}
	
	 sum1=0;
	 sum2=0;
	
	}	
	  return result;
}


int main()
{
	
	int n=0,i=0;
	int ans=0;
	
	
	cout<<"Please enter the no of array elements (Enter 4 or more elements)  ";
	cin>>n;
	
	if(n<4)
	{
		cout<<"No of elements are less to check.....";
		return -1;
	}
	
	
	int arr[n];
	
	cout<<"Enter the elements of the Array "<<endl;
	
	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<"  ";
		cin>>arr[i];
	}

	Quadruples obj;
	
	ans=obj.chkQuadruples(arr,n);
	
	cout<<"The no of quadruples present are: "<<ans;
	
		
	return 0;
}
