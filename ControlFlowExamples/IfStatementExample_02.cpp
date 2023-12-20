#include<iostream>

int main()
{

	std::cout<<"============================ Control Flow If Statements ========================================="<<std::endl;

	int x{};

	std::cout<<"1_Initial Value of x = "<<x<<std::endl;

	std::cout<<"Enter any Value which needs to checkc"<<std::endl;
	std::cin>>x;

	//	if(x>10)
	//		std::cout<<"Value Greater than 10\n";
	//	else
	//		std::cout<<"Value Less than 10\n";
	//

	if(x>10)
	{

		std::cout<<"Value greater Than 10\n";
	}
	else
	{

		std::cout<<"Value less than 10\n";
	}
	return 0;
}
