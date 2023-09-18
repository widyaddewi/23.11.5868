// Mencari Sisi Miring Segitiga Siku Siku

#include <iostream>
#include <string>

using namespace std;

int main()
{
	float a, t, c;
	cout << "\tProgram Menghitung Sisi Miring Segitiga Siku-Siku" << endl;
	cout << "\t-------------------------------------------------" << endl;
	cout << "Masukan alas segitiga : ";
	cin >> a;
	cout << "Masukan tinggi segitiga : ";
	cin >> t;
	c = sqrt((a * a) + (t * t));
	cout << "------------------------" << endl;
	cout << " Hasilnya adalah : " << c << endl;

	return 0;

}

