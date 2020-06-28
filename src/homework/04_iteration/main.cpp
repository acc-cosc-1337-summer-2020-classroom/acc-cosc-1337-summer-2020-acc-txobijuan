//write include statements
#include "dna.h"
//write using statements
#include <iostream>

using std::cin;	using std::cout;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int choice;
	char cont;
	std::string dna;

	do
	{
		cout<<"Enter 1 for GC content 2 for DNA Complement: ";
		cin>>choice;
		cout<<"Enter DNA string: ";
		cin>>dna;

		if(choice == 1)
		{
			double gc = get_gc_content(dna);
			cout<<gc<<"\n";
		}
		else if(choice == 2)
		{
			std::string comp = get_dna_complement(dna);
			cout<<comp<<"\n";
		}
		else
		{
			cout<<"Invalid choice.";
		}

		cout<<"Continue y?: ";
		cin>>cont;
	} while (cont == 'y'  || cont == 'Y');
	

	return 0;
}