#pragma once
#include <string>

using namespace std;
class Contact
{
public:	
	enum Field
	{
		FIO,
		AGE,
		TL
	};
	enum SortOrder
	{
		INCREASE,
		DECREASE
	};
	string fio, tel;
	int voz;
	Contact(string f, int v, string t) {
		fio = f;
		voz = v;
		tel = t;
	}
};

