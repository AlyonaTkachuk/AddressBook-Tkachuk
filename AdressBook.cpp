#include "adressBook.h"
#include <iostream>
using namespace std;
void AdressBook::add(const Contact& user) {
	infa.push_back(user);
}
void AdressBook::sort(Contact::Field field, Contact::SortOrder sortorder) {
	if (infa.size()==0) {
		return;
	}
	for (int i = 0; i < infa.size()-1; i++){
		for (int j = 0; j < infa.size()-i-1; j++)
		{
			if (sortorder == 0) {
				switch (field)
				{
				case Contact::FIO:
					if (infa[j].fio > infa[j+1].fio) {
						swap(infa[j], infa[j+1]);
					}
					break;
				case Contact::AGE:
					if (infa[j].voz > infa[j + 1].voz) {
						swap(infa[j], infa[j + 1]);
					}
					break;
				case Contact::TL:
					if (infa[j].tel > infa[j + 1].tel) {
						swap(infa[j], infa[j + 1]);
					}
					break;
				default:
					break;
				}
			}
			else {
				switch (field)
				{
				case Contact::FIO:
					if (infa[j].fio < infa[j + 1].fio) {
						swap(infa[j], infa[j + 1]);
					}
					break;
				case Contact::AGE:
					if (infa[j].voz < infa[j + 1].voz) {
						swap(infa[j], infa[j + 1]);
					}
					break;
				case Contact::TL:
					if (infa[j].tel < infa[j + 1].tel) {
						swap(infa[j], infa[j + 1]);
					}
					break;
				default:
					break;
				}
			}
		}
	}
}
void AdressBook::print() {
	for (int i = 0; i < infa.size(); i++) {
		cout << "FIO  " << infa[i].fio << endl;
		cout << "AGE  " << infa[i].voz << endl;
		cout << "TL   " << infa[i].tel << endl << endl;
	}
	cout << endl;
	cout << infa.size();
	cout << endl;
}
AdressBook::AdressBook()
{
}
