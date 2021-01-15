#include <iostream>
#include <math.h>

int main()
{
	std::cout << "Dzien dobry\n";
	std::string liczba1;
	std::string wybor;
	bool dzia³a1 = false;
	bool dzia³a = true;
	int wynik;
	wynik = 0;
	int dlugosc;
	int i;
	i = 0;

	while (dzia³a == true)
	{
		std::cout << "Wpisz liczbe binarna\n";
		std::cin >> liczba1;
		dlugosc = liczba1.length();
		do
		{
			wynik += (liczba1[dlugosc - 1] - 48) * pow(2, i);
			i++;
			dlugosc--;
		} while (dlugosc > 0);
		std::cout << "Wprowadzona liczba wynosi:\t" << wynik << "\n";
	    i = 0;
		wynik = 0;
		dlugosc = 0;

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
				std::cout << "Dziekuje, milego dnia :)\n";
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