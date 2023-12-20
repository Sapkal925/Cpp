#include<iostream>

namespace Height
{
	constexpr int minrideHeight{ 140 };
}

int main()
{

	std::cout<<" Entre the Height (in cm) : ";
	int x{};
	std::cin>>x;

	//	if(x >= Height::minrideHeight)
	//		std::cout<<"You are tall enogugh to ride.\n";
	//	else
	//		std::cout<<"You are not tall enough to ride.\n";
	//	std::cout<<"Too bad.\n";




	if(x >= Height::minrideHeight)
	{
		std::cout<<"You are tall enogugh to ride.\n";
	}
	else
	{
		std::cout<<"You are not tall enough to ride.\n";
		std::cout<<"Too bad.\n";
	}


	return 0;
}
