#include <iostream>

using std::string;

void celsius()
{
	double celsius;
	std::cout<<"\nIntroduce celsius degree\n";
	std::cin>>celsius;
	std::cout<<celsius<<" = "<<(celsius * 1.8) + 32<<" fahrenheit degree\n";
	system("pause>0");

}


void fahrenheit()
{
	double fahrenheit;
	std::cout<<"\nIntroduce fahrenheit degree\n";
	std::cin>>fahrenheit;
	std::cout<<fahrenheit<<" = "<<(fahrenheit - 32) * 5/9<<" celsius degree\n";
	system("pause>0");
}

int main()
{
	string answare;

	std::cout<<"Translate of degree between Celsius and Fahrenheit\n"
	"   select a degree\n"
	"   Celsius\n"
	"   Fahrenheit\n";

	std::cin>>answare;

	while(1){
	if (answare == "celsius" || answare == "Celsius"){celsius();
	break;}

	if (answare == "fahrenheit" || answare == "Fahrenheit"){fahrenheit();
	break;}

	else {std::cout<<"\tinvalid comand\n";
	string answare = "";
	continue;}
}
	
	system("pause>0");

	return 0;
}