	/* Fizz Buzz
		Print integers one to N, but print "Fizz" if
		an integer is divisible by three, "Buzz" if 
		an integer is divisible by five, and "FizzBuzz"
		if an integer is divisible by both three and five
	*/

#include <iostream>
#include <cstdlib>

#define SIZE 20

int arr[SIZE];

void SetRandomValueArr(int min, int max)
{
	srand((unsigned) time(NULL));
	int range = max - min + 1;

		for (int i = 0; i < SIZE; i++) {
			int random = rand() % range + min;	
			arr[i] = random; 
		}	
}

int main()
{
	SetRandomValueArr(1, 20);

	
	for (int i = 0; i < SIZE; i++) {
		if ((arr[i] % 3)==0 && (arr[i] % 5)==0)
			std::cout<<"\nFizzBuzz\n";
		
		else if ((arr[i] % 3)==0)
			std::cout<<"\nFizz\n";
	
		else if ((arr[i] % 5)==0)
			std::cout<<"\nBuzz\n";
	
		else 
			std::cout<<"\n"<<arr[i]<<"\n";
	}



	return 0;
}







