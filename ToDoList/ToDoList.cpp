	// To do list

#include <iostream>
#include <fstream>

int main(); // Pre declare the main function

void Write()
{
	std::string WriteText;	

			std::ofstream File("Data.txt"); // Open the data file

		std::cout<<"\n\n\tWrite:\n";
		
		std::cin>> WriteText;

			File << WriteText; // Write in the data file
			
			File.close(); // Close the file

		main();
}

int main()
{
	char MainInput;	
	std::string Text;
							
			std::ifstream ReadData("Data.txt"); // Read the Data.txt file
	
		std::cout<<"\n\tTo do list\n\n";
			while (getline (ReadData, Text)) { // Whie loop to print line by line
				for (int i = 0; i < Text.length(); i++) {
 					if (Text[i] == '-')
						std::cout<<" ";
					else if (Text[i] == '_')
						std::cout<<"\n";
					else 
						std::cout<<Text[i];	
				}	
			}
			ReadData.close(); // Close the file
		std::cout<<"\n\n\t*Write*\n\t*Exit*\n---> ";
	
		std::cin>>MainInput;
			
			if (MainInput == 'w' || MainInput == 'W')
				Write();
			else 
				exit(0);
	return 0;
}
