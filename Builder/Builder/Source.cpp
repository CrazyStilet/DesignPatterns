#include<iostream>
using namespace std;

class Computer
{
public:
	double CpuFrequency;
	int RAM;
	char *type;

	void info()
	{
		cout << type << ": CPU Frequency - " << CpuFrequency << " RAM - " << RAM << endl;
	}
};

class NotebookBuilder
{
public:
	void BuildComputer(Computer* newComp)
	{
		newComp->CpuFrequency = 2.2;
		newComp->RAM = 4;
		newComp->type = "Notebook";
	}

	Computer* BuildComputer()
	{
		Computer* newComp = new Computer;
		BuildComputer(newComp);
		return newComp;
	}
}notebookBuilder;

class HomePCBuilder
{
public:
	void BuildComputer(Computer* newComp)
	{
		newComp->CpuFrequency = 2.6;
		newComp->RAM = 8;
		newComp->type = "Home PC";
	}

	Computer* BuildComputer()
	{
		Computer* newComp = new Computer;
		BuildComputer(newComp);
		return newComp;
	}
}homePCBuilder;

class GamerPCBuilder
{
public:
	void BuildComputer (Computer* newComp)
	{
		newComp->CpuFrequency = 4;
		newComp->RAM = 16;
		newComp->type = "Gamer PC";
	}

	Computer* BuildComputer()
	{
		Computer* newComp = new Computer;
		BuildComputer(newComp);
		return newComp;
	}
}gamerPCBuilder;
int main()
{
	Computer* newNotebook = notebookBuilder.BuildComputer();
	Computer* newHomePC = homePCBuilder.BuildComputer();
	Computer* newGamerPC = gamerPCBuilder.BuildComputer();

	newNotebook->info();
	newHomePC->info();
	newGamerPC->info();

	return 0;
}