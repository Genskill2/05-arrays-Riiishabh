#include <stdio.h>
#include <math.h>
int max(int [], int);
int min(int [], int);
float average(int [], int);
int mode(int [], int);
int factors(int, int []);

int min(int arr[], int n)
{
  int min1 =arr[0];
  for (int i=1; i<n;i++)
  {
    if (arr[i]<min1)
      min1=arr[i];   
  }
  return min1;
}

int max(int arr[], int n)
{
  int max1 =arr[0];
  for (int i=1; i<n;i++)
  {
    if (arr[i]>max1)
      max1=arr[i];   
  }
  return max1;
}

float average(int arr[], int n)
{
  float avg=0;
  for (int i=0; i<n;i++)
    {avg+=arr[i];}
  avg=(float)avg/(float)n;
  return avg;
}


int mode(int a[],int x)
{
	int b[x];
    for(int i=0;i<x;i++)
    {
    	int count=0;
    	for(int j=0;j<x;j++)
    	{
    		if(a[i]==a[j])
    		count++;
		}
		b[i]=count;
	}
	int maxi=a[0],flag=b[0];
  for(int i=0;i<x;i++)
  {
    if(b[i]>flag)
      maxi=a[i];
  }
  return maxi;
}


int factors(int n, int arr[])
{
  int a=n;
  int i=0;
  while (a%2==0)
  {
    arr[i]=2;
    ++i;
    a/=2;
  }
  int f=sqrt(a);
  for (int j=3;j<f;j+=2)
  {
    while (a%j==0)
    {
        arr[i]=j;
        ++i;
        a/=j;
    }
    if (a==1)
      break;      
  }
  return i;
}
 
 
