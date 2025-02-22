#include<iostream>
using namespace std;
int main()
{
  int arr[10], i, j, n, temp;

	// Input the number of values in the array
	cout<<"Input no. of values in the array: "<<endl;
	cin>>n;

	// Input array values
	cout<<"Input "<<n<<" array value(s): "<<endl;
	for (i = 0; i < n; i++)
    		cin>>arr[i];

	/* Insertion Sort */
	for (i = 1; i < n; i++) {
    	temp = arr[i];
    	j = i - 1;

    	// Move elements greater than temp to one position ahead of their current position
    	while (j >= 0 && arr[j] > temp) {
        	arr[j + 1] = arr[j];
        	j = j - 1;
    	}

    	// Insert temp at its correct position
    	arr[j + 1] = temp;
	}

	// Print the sorted array
	cout<<"Sorted Array after Insertion sort is: \n";
	for (i = 0; i < n; i++)
    	cout<<arr[i]<<endl;

	return 0;

}
