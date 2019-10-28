#include <iostream>

using namespace std;

string toBiner(long a) {
	if(a == 1) return "1";
	else if(a == 0) return "0";
	else return toBiner(a / 2) + toBiner(a % 2);
}

string toOktal(long a) {
	switch(a) {
		case 0 : return "0"; 
		case 1 : return "1";
		case 2 : return "2";
		case 3 : return "3";
		case 4 : return "4";
		case 5 : return "5";
		case 6 : return "6";
		case 7 : return "7";
		default : 	return toOktal(a / 8) + toOktal(a % 8);
	}
}

string toHexa(long a) {
	switch(a) {
		case 0 : return "0"; 
		case 1 : return "1";
		case 2 : return "2";
		case 3 : return "3";
		case 4 : return "4";
		case 5 : return "5";
		case 6 : return "6";
		case 7 : return "7";
		case 8 : return "8";
		case 9 : return "9";
		case 10 : return "A";
		case 11 : return "B";
		case 12 : return "C";
		case 13 : return "D";
		case 14 : return "E";
		case 15 : return "F";
		default : 	return toHexa(a / 16) + toHexa(a % 16);
	}
}

int main() {
	system("title HAFIDH AHMAD FAUZAN");
	long ans;
	cout << "Masukkan angka desimal : ";
	cin >> ans;
	cout << "Biner dari " << ans << " adalah ";
	cout << toBiner(ans);
	
	cout << "\nOktal dari " << ans << " adalah ";
	cout << toOktal(ans);
	
	cout << "\nHexa dari " << ans << " adalah ";
	cout << toHexa(ans);
	
	cin.get();
}
