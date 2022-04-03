// C++ program for the above approach
#include<bits/stdc++.h>
using namespace std;

// Function to replace each even
// element by odd and vice-versa
// in a given array
void replace(int arr[], int n)
{
	
	// Traverse array
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			
			// If current element is even
			// then swap it with odd
			if (arr[i] >= 0 && arr[j] >= 0 &&
				arr[i%2]  == 0 &&
				arr[j%2]  == 0)
			{
				
				// Perform Swap
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;

				// Change the sign
				arr[j] = -arr[j];

				break;
			}

			// If current element is odd
			// then swap it with even
			else if (arr[i] >= 0 && arr[j] >= 0 &&
					arr[i%2]  != 0 &&
					arr[j%2]  != 0)
			{
				
				// Perform Swap
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;

				// Change the sign
				arr[j] = -arr[j];

				break;
			}
		}
	}

	// Marked element positive
	for(int i = 0; i < n; i++)
		arr[i] = abs(arr[i]);

	// Print final array
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

// Driver Code
int main()
{
	
	// Given array arr[]
	int arr[] = { 0,0,1,0,0,0};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	// Function Call
	replace(arr,n);
}

// This code is contributed by SURENDRA_GANGWAR
