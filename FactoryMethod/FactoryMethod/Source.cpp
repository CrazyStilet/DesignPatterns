#include<iostream>
using namespace std;

enum OS
{
	Windows, Linux, MacOS
};

class Forms
{
public:
	static Forms* createForms(const OS &os);
};

class WindowsForms:public Forms
{
public:
	WindowsForms()
	{
		cout << " нопки, текстовые пол€, радио-кнопки и т.д. стил€ Windows созданы" << endl;
	}
};

class LinuxForms: public Forms
{
public:
	LinuxForms()
	{
		cout << " нопки, текстовые пол€, радио-кнопки и т.д. стил€ Linux созданы" << endl;
	}
};

class MacOSForms:public Forms
{
public:
	MacOSForms()
	{
		cout << " нопки, текстовые пол€, радио-кнопки и т.д. стил€ MacOS созданы" << endl;
	}
};

Forms* Forms::createForms(const OS &os)
{
	switch(os)
	{
	case Windows:
		return new WindowsForms();
	case Linux:
		return new LinuxForms();
	case MacOS:
		return new MacOSForms();
	}
}

int main()
{
	setlocale(0, "rus");

	Forms* newWindowsForms = Forms::createForms(Windows);
	Forms* newLinuxForms = Forms::createForms(Linux);
	Forms* newMacOSForms = Forms::createForms(MacOS);

	return 0;
}