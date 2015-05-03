#ifndef SEND_INFO_H
#define SEND_INFO_H

ref class SendInfo
{
private:
	System::String^ address;
public:
	SendInfo( void );
	SendInfo(System::String^ address);
	System::Boolean SendMessage( System::String^ message );
	System::Boolean SendMessage( System::String^ message, System::Net::Sockets::TcpClient ^client );
	System::Void UpdateAddress( System::String ^newAddress );
};
#endif