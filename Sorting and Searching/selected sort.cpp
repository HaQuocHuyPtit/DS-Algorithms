#include<bits/stdc++.h>
using namespace std;

int n;
void selectionSort(int a[], int n)  
{  
    int i, j, min_idx;  
  	int num = 1;
    // One by one move boundary of unsorted subarray  
    for (i = 0; i < n-1; i++)  
    {  
        // Find the minimum element in unsorted array  
        min_idx = i;  
        for (j = i+1; j < n; j++)  
        if (a[j] < a[min_idx])  
            min_idx = j;  
  
        // Swap the found minimum element with the first element  
        swap(a[min_idx], a[i]);  
        cout << "Buoc " << num << ": ";
		for(int k = 0; k < n; k++){
			cout << a[k] << " ";
		}
		cout << endl;
		num++;
    }  
} 
main(){
	int a[1006];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	selectionSort(a,n);
}

