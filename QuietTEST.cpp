#include <iostream>
#include <iomanip>
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
size_t strlen(string group) {
	size_t size = 0;
	for (auto byte : group) {
		size += (((byte & 0x80) == 0) || ((byte & 0xC0) == 0xC0));
	}
	return size;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "RUS");
	string f, i, o, group;
	cout << "Введите группу: ";
	getline(cin, group);
	cout << "Введите фамилию: ";
	cin >> f;
	cout << "Введите имя: "; 
	cin >> i;
	cout << "Введите отчество: ";
	cin >> o;
	int x1 = f.length();
	int x2 = i.length();
	int x3 = o.length();
	int x4 = strlen(group);
	int fio = x1 + x2 + x3;
	if (fio <= 17 && fio > x4) {
		cout << "*" << setfill('*') << setw(fio + 5) << "**********************" << endl;
		cout << "* Практическая работа" << setfill(' ') << setw(fio - 15) << " *" << endl;
		cout << "* Выполнил(а): " << group << setfill(' ') << setw(19 - x4 - 11) << " *" << endl;
		cout << "* " << f << " " << i << " " << o << setfill(' ') << setw(19 - fio) << " *" << endl;
		cout << "*" << setfill('*') << setw(fio + 5) << "**********************" << endl;
	}
	else if (fio <= 17 && fio < x4) {
		cout << "*" << setfill('*') << setw(x4 + 16) << "**********************" << endl;
		cout << "* Практическая работа" << setfill(' ') << setw(x4 - 4) << " *" << endl;
		cout << "* Выполнил(а): " << group << setfill(' ') << setw(19 - x4 - 11) << " *" << endl;
		cout << "* " << f << " " << i << " " << o << setfill(' ') << setw(13 + x4 - fio) << " *" << endl;
		cout << "*" << setfill('*') << setw(x4 + 16) << "**********************" << endl;
	}
	else if (fio > 17 && fio < x4) {
		cout << " *" << setfill('*') << setw(x4 + 16) << "**********************" << endl;
		cout << " * Практическая работа" << setfill(' ') << setw(x4 - 4) << " *" << endl;
		cout << " * Выполнил(а): " << group << setfill(' ') << setw(19 - x4 - 11) << " *" << endl;
		cout << " * " << f << " " << i << " " << o << setfill(' ') << setw(13 + x4 - fio) << " *" << endl;
		cout << " *" << setfill('*') << setw(x4 + 16) << "**********************" << endl;
	}
	else {
		cout << "*" << setfill('*') << setw(fio + 5) << "**********************" << endl;
		cout << "* Практическая работа" << setfill(' ') << setw(fio - 15) << " *" << endl;
		cout << "* Выполнил(а): " << group << setfill(' ') << setw(fio + 5 - x4 - 14) << " *" << endl;
		cout << "* " << f << " " << i << " " << o << " *" << endl;
		cout << "*" << setfill('*') << setw(fio + 5) << "**********************" << endl;
	}
	return 0;
}