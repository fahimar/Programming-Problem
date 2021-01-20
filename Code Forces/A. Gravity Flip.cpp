
#include<bits/stdc++.h>
using namespace std;

/*
int partition(int a[], int low, int high)
{
	int pivot = a[high];
	int i = (low - 1);
	
	for(int j = low; j <= high - 1; j++)
	{
		if(a[j] < pivot)
		{
			i++;
			  int temp = a[i]; 
                a[i] = a[j]; 
                a[j] = temp; 
			
			}
		}
		//swap(&a[i+1], &a[high]);
		  int temp = a[i+1]; 
                a[i+1] = a[high]; 
                a[high] = temp; 
		return (i+1);
	}
void quickSort(int a[], int low, int high)
{
	if(low < high)
	{
		int pi =  partition(a,low, high);
		
		quickSort(a, low, pi -1 );
		quickSort(a, pi + 1 , high);
		}
	
	}
	void  printArray(int a[], int N)
	{
			for(int j = 0; j < N;j++)
		{
			cout<< a[j] <<" ";
		}
	}
	*int N = sizeof(a[i]);
		quickSort(a,0,N-1);
		
		printArray(a,N); */
int main()
{
	int n,a[100];
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		
		 
		}
		sort(a, a + n);
		for(int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
			}
	
	 return 0;
	}
