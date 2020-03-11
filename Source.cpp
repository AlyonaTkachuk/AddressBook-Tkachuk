#include <iostream>
#include <string>
#include <Windows.h>
#include "AdressBook.h"
using namespace std;

int main() {
	AdressBook&d = AdressBook::Instance();	
	char flag;
	do {
		cout << "Add new contact?[y/n]"<<endl;
		cin >> flag;
		if (flag == 'y') {
			string f,i,o, tel;
			int voz;
			cout<< "FIO" << endl << "AGE" << endl << "TL" << endl;
			cin >> f >> i >> o >> voz >> tel;
			d.add(Contact(f + ' ' + i + ' ' + o, voz, tel));
		}
	} while (flag == 'y');
		cout << "Sort by:" << endl << "1 FIO" << endl << "2 AGE" << endl << "3 TL" << endl;
		cout << "enter number: ";
		int num;
		cin >> num;
		cout << "Up(1) or down(2)?" << endl;
		int b;
		cin >> b;
		d.sort((Contact::Field)num, (Contact::SortOrder)b);
		d.print();
	system("pause");
	return 0;
}