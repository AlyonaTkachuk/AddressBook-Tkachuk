#pragma once
#include <vector>
#include "Contact.h"
class AdressBook
{
public:
	static AdressBook& Instance() 
	{
		static AdressBook adressbook;
		return adressbook;
	}
	void add(const Contact&);
	void sort(Contact::Field, Contact::SortOrder);
	void print();
private:
	vector<Contact> infa;	
	AdressBook();
	AdressBook(const AdressBook&) = delete;
	AdressBook*operator=(const AdressBook&) = delete;
	
};

