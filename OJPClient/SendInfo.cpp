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
	//to do
	return 0;
}