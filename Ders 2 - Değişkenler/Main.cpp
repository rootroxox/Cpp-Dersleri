#include <iostream>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Turkish");

	//tamsayý      int                             8
	//float        ondalýklý sayý                  8.5
	//double       ondalýklý sayý                  8.5641856165
	//char         karakter						   "A"
	//bool		   mantýksal ifade				   true / false

	int a = 8;
	float b = 8.5;
	double c = 8.5641856165;
	char d = 'A';
	bool e = 5 > 6;

	cout << "a deðiþkeninin deðeri : " << a << endl;
	cout << "b deðiþkeninin deðeri : " << b << endl;
	cout << "c deðiþkeninin deðeri : " << c << endl;
	cout << "d deðiþkeninin deðeri : " << d << endl;
	cout << "e deðiþkeninin deðeri : " << e << endl;

	int h;
	h = 5;

	cout << h << endl;

	int n1 = 5;
	int n2 = 10;
	int n3 = n1 + n2;

	cout << n3 << endl;


	system("PAUSE");
	return 0;
}