#include <iostream>

int main()
{
	std::cout << "Dzien dobry\n";
	std::cout << "Wpisz liczbe binarna\n";
	std::string liczba1;
	std::string wybor;
	bool dzia�a1 = false;
	bool dzia�a = true;



	for




	while (dzia�a == true)
	{
		std::cin >> liczba1;
		std::cout << "wprowadzona liczba wynosi:\t" + liczba1 + "\n";

		do
		{

			std::cout << "kontynuowac ?\n";
			std::cin >> wybor;

			if (wybor == "tak")
			{
				dzia�a = true;
				dzia�a1 = true;
			}
			else if (wybor == "nie")
			{
				dzia�a = false;
				dzia�a1 = true;
			}
			else
			{
				std::cout << "Zly wpis\n";
				dzia�a1 = false;
			}
		} 
		while (dzia�a1 == false);
		
	}
	system("pause");
}