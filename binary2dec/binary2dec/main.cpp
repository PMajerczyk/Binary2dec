#include <iostream>

int main()
{
	std::cout << "Dzien dobry\n";
	std::cout << "Wpisz liczbe binarna\n";
	std::string liczba1;
	std::string wybor;
	bool dzia³a1 = false;
	bool dzia³a = true;



	for




	while (dzia³a == true)
	{
		std::cin >> liczba1;
		std::cout << "wprowadzona liczba wynosi:\t" + liczba1 + "\n";

		do
		{

			std::cout << "kontynuowac ?\n";
			std::cin >> wybor;

			if (wybor == "tak")
			{
				dzia³a = true;
				dzia³a1 = true;
			}
			else if (wybor == "nie")
			{
				dzia³a = false;
				dzia³a1 = true;
			}
			else
			{
				std::cout << "Zly wpis\n";
				dzia³a1 = false;
			}
		} 
		while (dzia³a1 == false);
		
	}
	system("pause");
}