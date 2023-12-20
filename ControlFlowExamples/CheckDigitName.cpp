#include<iostream>


void PrintDigitName(int x)
{

	if(x == 0)
	{

		std::cout<<"ZERO\n";
	}
	else if(x == 1)
	{
		std::cout<<"ONE\n";
	}
	else if(x==2)
	{

		std::cout<<"TWO\n";
	}
	else
	{
		std::cout<<"UNKNOWN\n";
	}
}
int main()
{
	std::cout<<"Enter Digit :\n";
	int InputValue{};
	std::cin>>InputValue;
	PrintDigitName(InputValue);
	//PrintDigitName(3);
	//PrintDigitName(0);

	return 0;
}
