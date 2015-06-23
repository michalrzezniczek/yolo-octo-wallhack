#include "stdafx.h"
/*
#include "HandleRequest.h"

/*
HandleRequest::HandleRequest()
{
	System::Int32 port = 80;
	System::Net::Sockets::TcpListener ^listner;
	System::Net::Sockets::TcpClient ^client;
	System::Net::Sockets::NetworkStream ^streamInput;
	SendInfo ^sender = gcnew SendInfo( "127.0.0.1" );
	GetProcesses ^processes = gcnew GetProcesses();
	bool sended = false;

	array<System::Byte> ^inputBytes = gcnew array<System::Byte>( 256 );

	try {
		listner = gcnew System::Net::Sockets::TcpListener( port );
		listner->Start();

		while ( true ) {
			System::Threading::Tasks::Task < System::Net::Sockets::TcpClient ^ > ^clientTask = listner->AcceptTcpClientAsync();
			
			//client = listner->AcceptTcpClient();
			clientTask->IsCompleted;
			streamInput = client->GetStream();
			if ( streamInput->CanWrite ) {
				processes->UpdateProcessesList();
				sender->UpdateAddress( listner->ToString() );
				sended = sender->SendMessage( processes->ProcessesListToString(), client );
				client->Close();
				streamInput->Close();
			}
		}

	}
	catch ( System::Net::Sockets::SocketException ^e ) {
		//
	}
}
*/
/*



HandleRequest::HandleRequest()
{
	port = 80;
	SendInfo ^sender = gcnew SendInfo( "127.0.0.1" );
	GetProcesses ^processes = gcnew GetProcesses();
	bool sended = false;

	try {
		listner = gcnew System::Net::Sockets::TcpListener( port );
		listner->Start();

		while ( true ) {
			System::Threading::Tasks::Task < System::Net::Sockets::TcpClient ^ > ^clientTask = listner->AcceptTcpClientAsync();

			if ( clientTask->IsCompleted ) {
				streamInput = clientTask->Result->GetStream();
				if ( streamInput->CanWrite ) {
					processes->UpdateProcessesList();
					sender->UpdateAddress( listner->ToString() );
					sended = sender->SendMessage( processes->ProcessesListToString(), clientTask->Result );
					clientTask->Result->Close();
					streamInput->Close();
				}
			}
		}
	}
	catch ( System::Net::Sockets::SocketException ^e ) {
		//
	}
}*/