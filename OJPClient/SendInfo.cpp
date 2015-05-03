#include "stdafx.h"

#include "SendInfo.h"
/*
ref class SendInfo
{
private:
	System::String^ address;
public:
	SendInfo( void );
	SendInfo(System::String^ address);
	System::Boolean SendMessage( System::String^ message );
	System::Void UPdateAddress( System::String ^newAddress );
};
*/

SendInfo::SendInfo( void )
{
	this->address = "127.0.0.1";
}
SendInfo::SendInfo( System::String^ address )
{
	this->address = address;
}

System::Void SendInfo::UpdateAddress( System::String ^newAddress )
{
	this->address = newAddress;
}

System::Boolean SendInfo::SendMessage( System::String^ message )
{
	System::Int32 portSending = 80;
	System::Net::Sockets::TcpClient ^client;
	try {
		client = gcnew System::Net::Sockets::TcpClient( address, portSending );

		array<System::Byte> ^messageByte = System::Text::Encoding::ASCII->GetBytes( message );

		System::Net::Sockets::NetworkStream ^networkStream = client->GetStream();

		networkStream->Write( messageByte, 0, messageByte->Length );

		
	}
	catch ( System::Net::Sockets::SocketException ^e ) {
		//
		client->Close();
		return false;
	}
	catch ( System::ArgumentNullException ^e ) {
		//
		client->Close();
		return false;
	}
	catch( System::ArgumentOutOfRangeException ^e )
	{
		//
		client->Close();
		return false;
	}
	client->Close();
	return true;
}