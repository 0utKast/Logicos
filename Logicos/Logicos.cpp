#include <iostream>

int main()
{
	int x{ 5 };
	int y{ 7 };

	if (!(x > y))
		std::cout << x << " no es mayor que " << y << '\n';
	else
		std::cout << x << " es mayor que " << y << '\n';

	return 0;
}











/*#include <iostream>

int main()
{
	int x{ 5 };
	int y{ 7 };

	if (!x > y)
		std::cout << x << " no es mayor que  " << y << '\n';
	else
		std::cout << x << " es mayor que " << y << '\n';

	return 0;
}*/












/*#include <iostream>
int main() {

	int x { 75 };

	bool muyGrande{ x > 100 }; // muyGrande es true si x > 100
	if (!muyGrande)
		std::cout << "Correcto";
	else
		std::cout << "Error";

}*/



/*#include <iostream>
#include <string>

int main()
{
	setlocale(LC_ALL, "es_ES.UTF-8");
	bool x = false;
	bool y = false;
	bool z = true;
	bool a = false;
	bool b = false;
	bool c = true;

	if ((x == true || y == true || z == true) && a == true)
		std::cout << "Hoy no puedo ir a trabajar, estoy enfermo";
	else if ((x == true || y == true || z == true) && b == true)
		std::cout << "Hoy no puedo ir a trabajar estoy de mudanza";
	else if ((x == true || y == true || z == true) && c == true)
		std::cout << "Me ha tocado la quiniela. Dile al jefe que c&@$#/°s";
	else
		std::cout << "Hoy tengo que ir a trabajar, me he quedado sin disculpas";
	
}*/
	




	
		
		





		














/*int main() {
	int uno {'1'};
	int dos {'X'};
	int tres {'1'};
	int cuatro {'X'};
	int cinco {'2'};
	int seis { '1' };
	int siete { 'X' };
	int ocho { '1' };
	int nueve { '2' };
	int diez { '1' };
	int once { '1' };
	int doce { 'X' };
	int trece { '1' };
	int catorce { '2' };
	int quince { '1' };
	if (uno == '1' && dos == 'X' && tres == '1' && cuatro == 'X' && cinco == '2' && seis == '1'
		&& siete == 'X' && ocho == '1' && nueve == '2' && diez == '1' && once == '1'
		&& doce == 'X' && trece == '1' && catorce == '2' && quince == '1')
		std::cout << "Enhorabuena, tienes un pleno al quince";
	else if (uno == '1' && dos == 'X' && tres == '1' && cuatro == 'X' && cinco == '2' && seis == '1'
		&& siete == 'X' && ocho == '1' && nueve == '2' && diez == '1' && once == '1'
		&& doce == 'X' && trece == '1' && catorce == '2')
		std::cout << "Enhorabuena, has acertado catorce resultados";
	else
		std::cout << "Lo siento, no has acertado al menos 14 resultados";




}*/
