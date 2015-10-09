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
		cout << "������, ��������� ����, �����-������ � �.�. ����� Windows �������" << endl;
	}
};

class LinuxForms: public Forms
{
public:
	LinuxForms()
	{
		cout << "������, ��������� ����, �����-������ � �.�. ����� Linux �������" << endl;
	}
};

class MacOSForms:public Forms
{
public:
	MacOSForms()
	{
		cout << "������, ��������� ����, �����-������ � �.�. ����� MacOS �������" << endl;
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