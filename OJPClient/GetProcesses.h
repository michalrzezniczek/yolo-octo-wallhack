#ifndef GET_PROCESSES_H
#define GET_PROCESSES_H

class GetProcesses
{
private:
	array<System::Diagnostics::Process^> ^processesList;
	System::Void UpdateProcessesList();
public:
	GetProcesses( void );
	System::String^ GetProcessesList();
};
#endif