#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <fstream>


double map_values(double x){
	int a = 1;
	int b = 5;
	int c = -1;
	int d = 2;
	return [(c-d)*x+a*d-b*c]/(a-b); // la formula da [a,b] a [c,d] sarebbe: x' = [(c-d)*x+a*d-b*c]/(a-b)
}

int main()
{
	std::ifstream file("data.txt");
	if (file.fail()) // per controllare se il file si apre correttamente
	{
		std::cerr << "errore nell'apertura del file" << std::endl;
		return 1;
	}
	double val; //creo variabile ausiliaria dove vado a memorizzare i valori letti dal file
	double mean = 0.0;
	unsigned int k = 0;
	double x = 0.0;
	while (file >> val) 
	{ 
        x = map_values(val);
		mean = (mean * k + x)/(k+1);
		std :: cout << std::scientific << std::setprecision(16) << mean << std::endl;
		k++;
	}
	file.close();
    return 0;
}







