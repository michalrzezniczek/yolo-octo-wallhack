#include "stdafx.h"
#include "GetProcesses.h"
#include <iomanip>

GetProcesses::GetProcesses(void)
{
}

System::String^ GetProcesses::GetProcessesList()
{
	System::String ^delimiter = "\t";
	array<System::Diagnostics::Process^> ^processesList = System::Diagnostics::Process::GetProcesses();
	System::String ^output = "";
	System::String ^priority = "", ^status = "";
	double ramUsed = 0.0;
	System::TimeSpan time;
	output += System::String::Format( "{0,-24}{1,9}{2,8}{3,15}{4,-12}\n",
			  "Process name", "Priority", "Memory", "Runs by", "Status" );
	output += System::String::Format( "{0,-24}{1,9}{2,8}{3,15}{4,12}\n",
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
				status = "Running" + delimiter;
			}
			else {
				status = "Not Running" + delimiter;
			}
			
			time = (var->StartTime.Now - var->StartTime);
			ramUsed = (((double) var->WorkingSet64) / 1000000);
			output += System::String::Format( "{0,-24}{1,9}{2,8:F2}{3,15:dd\\.hh\\:mm\\:ss}{4,12}", 
											  var->ProcessName,priority,ramUsed,time,status );
		}
		catch(System::Exception^ e){
			System::Console::WriteLine( e->Message );
			output += System::String::Format( "{0,-24}{1,9}{2,8:F2}{3,15}{4,12}",
											  var->ProcessName, priority, ramUsed, "--", status );
		}

		output += "\n";
	}

	return output;
}