#ifndef GET_PROCESSES_H
#define GET_PROCESSES_H


ref class GetProcesses
{
private:
	array<System::Diagnostics::Process^> ^processesList;
public:
	GetProcesses( void );
	array<System::Diagnostics::Process^>^ GetProcessesList();
	void UpdateProcessesList();
	System::String^ ProcessesListToString();

};
#endif