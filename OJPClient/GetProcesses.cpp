#include "stdafx.h"
#include "GetProcesses.h"
#include <iomanip>

GetProcesses::GetProcesses(void)
{
	processesList = System::Diagnostics::Process::GetProcesses();
}

array<System::Diagnostics::Process^>^ GetProcesses::GetProcessesList()
{
	return processesList;
}

void GetProcesses::UpdateProcessesList()
{
	processesList = System::Diagnostics::Process::GetProcesses();
}

System::String^ GetProcesses::ProcessesListToString()
{
	System::String ^output = gcnew System::String( "" ),
				   ^priority = gcnew System::String( "" ), 
				   ^status = gcnew System::String( "" ),
				   ^hostName = gcnew System::String( System::Net::Dns::GetHostName() );
	double ramUsed = 0.0;
	System::TimeSpan time;

	output += System::String::Format( "Host name: {0}\nProcesses\n", hostName );
	output += System::String::Format( "{0,-50}{1,-15}{2,-20}{3, -30}{4,-12}\n",
			  "Process name", "Priority", "Memory", "Runs by", "Status" );
	output += System::String::Format( "{0,-50}{1,-15}{2,-20}{3,-30}{4,-12}\n",
									  "", "", "MB", "DD.hh:mm:ss", "" );
	for each (System::Diagnostics::Process^ var in processesList)
	{
		try {
			switch ( var->BasePriority ) {
				case 4:
					priority = "Idle";
					break;
				case 8:
					priority = "Normal";
					break;
				case 13:
					priority = "High";
					break;
				case 24:
					priority = "RealTime";
					break;
			}
			if ( var->Responding ) {
				status = "Running";
			}
			else {
				status = "Not Running";
			}
			
			time = (var->StartTime.Now - var->StartTime);
			ramUsed = (((double) var->WorkingSet64) / 1000000);
			output += System::String::Format( "{0,-50}{1,-15}{2,-20:F2}{3,-30:dd\\.hh\\:mm\\:ss}{4,-12}", 
											  var->ProcessName,priority,ramUsed,time,status );
		}
		catch(System::Exception^ e){
			System::Console::WriteLine( e->Message );
			output += System::String::Format( "{0,-50}{1,-15}{2,-20:F2}{3,-30}{4,-12}",
											  var->ProcessName, priority, ramUsed, "--", status );
		}

		output += "\n";

		
	}

	return output;
}