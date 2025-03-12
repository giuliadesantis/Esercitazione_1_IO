#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <fstream>

int main()
{
	std::ifstream file("data.txt");
	if (file.fail()) // per controllare se tutto è andato correttamente o meno...
	{
		std::cerr << "errore nell'apertura del file" << std::endl;
		return 1;
	}
	double x; //creo variabile ausiliaria dove vado a memorizzare i valori
	double val;
	double mean = 0;
	int k = 0;
	while (file >> val) 
	{ 
        	x = -1.0 +3.0/4.0 * (val-1.0);
		mean = (mean * k + x)/(k+1);
		std :: cout << std::scientific << std::setprecision(16) << mean << std::endl;
		k = k+1;
	}
	
	file.close();

    return 0;
}
