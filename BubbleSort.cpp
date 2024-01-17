
#include <iostream>

int arr[] = {5,1,4,2,8};
int size = ((sizeof(arr))/(sizeof(arr[0])));
int i = 0;

void PrintArr(int arr[], int n)
{
	for (int i = 0; i < n; i++)

		std::cout<<arr[i]<<"\n";
}

void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() 
{
	std::cout<<"\tBegining\n\n";

		PrintArr(arr,size);

			while (i < (size -1)) {
				for (int j = 0; j < (size - i - 1); j++) {
					if (arr[j] > arr[j + 1])
						Swap(&arr[j], &arr[j + 1]);	
				}
						i++;
			}

	
	std::cout<<"\n\tAfter sort\n\n";

		PrintArr(arr,size);

	return 0;
}
