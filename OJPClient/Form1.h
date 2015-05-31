#include <string>
#include "GetProcesses.h";
#include "SendInfo.h";

#pragma once

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			
		//	backgroundWorker1->RunWorkerAsync();
		}
		System::String^ getAddressIP(void)
		{
			return address;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  textServerIP;
	protected:

	private: System::Windows::Forms::MaskedTextBox^  textBoxServerIP0;
	private: System::Windows::Forms::MaskedTextBox^  textBoxServerIP1;
	private: System::Windows::Forms::MaskedTextBox^  textBoxServerIP2;
	private: System::Windows::Forms::MaskedTextBox^  textBoxServerIP3;
	private: System::Windows::Forms::Label^  labelDot;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  buttonSave;





	protected:


	protected:

	private:
		System::String ^address = "127.0.0.1";
		Byte adr0 = 0, adr1 = 0, adr2 = 0, adr3 = 0;
		System::Int32 port = 8000;
		System::Net::Sockets::TcpListener ^listner;
		System::Net::Sockets::NetworkStream ^streamInput;
		System::Net::Sockets::TcpClient ^client;
	private: System::Windows::Forms::Label^  labelServerIP;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: int licznik = 0;
	private: System::Windows::Forms::Button^  buttonConnect;










			 /// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textServerIP = (gcnew System::Windows::Forms::Label());
			this->textBoxServerIP0 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBoxServerIP1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBoxServerIP2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBoxServerIP3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->labelDot = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->labelServerIP = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->buttonConnect = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textServerIP
			// 
			this->textServerIP->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textServerIP->Font = (gcnew System::Drawing::Font( L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238) ));
			this->textServerIP->Location = System::Drawing::Point( 18, 24 );
			this->textServerIP->Name = L"textServerIP";
			this->textServerIP->Size = System::Drawing::Size( 101, 23 );
			this->textServerIP->TabIndex = 0;
			this->textServerIP->Text = L"Server IP:";
			// 
			// textBoxServerIP0
			// 
			this->textBoxServerIP0->Font = (gcnew System::Drawing::Font( L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238) ));
			this->textBoxServerIP0->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBoxServerIP0->Location = System::Drawing::Point( 23, 51 );
			this->textBoxServerIP0->Mask = L"000";
			this->textBoxServerIP0->Name = L"textBoxServerIP0";
			this->textBoxServerIP0->ResetOnPrompt = false;
			this->textBoxServerIP0->ResetOnSpace = false;
			this->textBoxServerIP0->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->textBoxServerIP0->Size = System::Drawing::Size( 51, 38 );
			this->textBoxServerIP0->SkipLiterals = false;
			this->textBoxServerIP0->TabIndex = 1;
			this->textBoxServerIP0->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxServerIP0->TextChanged += gcnew System::EventHandler( this, &Form1::textBoxServerIP0_TextChanged );
			this->textBoxServerIP0->Enter += gcnew System::EventHandler( this, &Form1::textBoxServerIP0_Enter );
			this->textBoxServerIP0->Validated += gcnew System::EventHandler( this, &Form1::textBoxServerIP0_Validated );
			// 
			// textBoxServerIP1
			// 
			this->textBoxServerIP1->BeepOnError = true;
			this->textBoxServerIP1->Font = (gcnew System::Drawing::Font( L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238) ));
			this->textBoxServerIP1->Location = System::Drawing::Point( 80, 50 );
			this->textBoxServerIP1->Mask = L"000";
			this->textBoxServerIP1->Name = L"textBoxServerIP1";
			this->textBoxServerIP1->ResetOnPrompt = false;
			this->textBoxServerIP1->ResetOnSpace = false;
			this->textBoxServerIP1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->textBoxServerIP1->Size = System::Drawing::Size( 51, 38 );
			this->textBoxServerIP1->SkipLiterals = false;
			this->textBoxServerIP1->TabIndex = 2;
			this->textBoxServerIP1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxServerIP1->TextChanged += gcnew System::EventHandler( this, &Form1::textBoxServerIP1_TextChanged );
			this->textBoxServerIP1->Enter += gcnew System::EventHandler( this, &Form1::textBoxServerIP1_Enter );
			this->textBoxServerIP1->Validated += gcnew System::EventHandler( this, &Form1::textBoxServerIP1_Validated );
			// 
			// textBoxServerIP2
			// 
			this->textBoxServerIP2->Font = (gcnew System::Drawing::Font( L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238) ));
			this->textBoxServerIP2->Location = System::Drawing::Point( 137, 50 );
			this->textBoxServerIP2->Mask = L"000";
			this->textBoxServerIP2->Name = L"textBoxServerIP2";
			this->textBoxServerIP2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->textBoxServerIP2->Size = System::Drawing::Size( 51, 38 );
			this->textBoxServerIP2->TabIndex = 3;
			this->textBoxServerIP2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxServerIP2->TextChanged += gcnew System::EventHandler( this, &Form1::textBoxServerIP2_TextChanged );
			this->textBoxServerIP2->Enter += gcnew System::EventHandler( this, &Form1::textBoxServerIP2_Enter );
			this->textBoxServerIP2->Validated += gcnew System::EventHandler( this, &Form1::textBoxServerIP2_Validated );
			// 
			// textBoxServerIP3
			// 
			this->textBoxServerIP3->Font = (gcnew System::Drawing::Font( L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238) ));
			this->textBoxServerIP3->Location = System::Drawing::Point( 194, 50 );
			this->textBoxServerIP3->Mask = L"000";
			this->textBoxServerIP3->Name = L"textBoxServerIP3";
			this->textBoxServerIP3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->textBoxServerIP3->Size = System::Drawing::Size( 51, 38 );
			this->textBoxServerIP3->TabIndex = 4;
			this->textBoxServerIP3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxServerIP3->TextChanged += gcnew System::EventHandler( this, &Form1::textBoxServerIP3_TextChanged );
			this->textBoxServerIP3->Enter += gcnew System::EventHandler( this, &Form1::textBoxServerIP3_Enter );
			this->textBoxServerIP3->Validated += gcnew System::EventHandler( this, &Form1::textBoxServerIP3_Validated );
			// 
			// labelDot
			// 
			this->labelDot->AutoSize = true;
			this->labelDot->Font = (gcnew System::Drawing::Font( L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238) ));
			this->labelDot->Location = System::Drawing::Point( 67, 58 );
			this->labelDot->Margin = System::Windows::Forms::Padding( 0 );
			this->labelDot->Name = L"labelDot";
			this->labelDot->Size = System::Drawing::Size( 22, 31 );
			this->labelDot->TabIndex = 5;
			this->labelDot->Text = L".";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font( L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238) ));
			this->label1->Location = System::Drawing::Point( 124, 58 );
			this->label1->Margin = System::Windows::Forms::Padding( 0 );
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size( 22, 31 );
			this->label1->TabIndex = 6;
			this->label1->Text = L".";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font( L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238) ));
			this->label2->Location = System::Drawing::Point( 181, 58 );
			this->label2->Margin = System::Windows::Forms::Padding( 0 );
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size( 22, 31 );
			this->label2->TabIndex = 7;
			this->label2->Text = L".";
			// 
			// buttonSave
			// 
			this->buttonSave->Location = System::Drawing::Point( 56, 94 );
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size( 75, 23 );
			this->buttonSave->TabIndex = 8;
			this->buttonSave->Text = L"Save";
			this->buttonSave->UseVisualStyleBackColor = true;
			this->buttonSave->Click += gcnew System::EventHandler( this, &Form1::buttonSave_Click );
			// 
			// labelServerIP
			// 
			this->labelServerIP->AutoSize = true;
			this->labelServerIP->Font = (gcnew System::Drawing::Font( L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238) ));
			this->labelServerIP->Location = System::Drawing::Point( 125, 24 );
			this->labelServerIP->Name = L"labelServerIP";
			this->labelServerIP->Size = System::Drawing::Size( 0, 25 );
			this->labelServerIP->TabIndex = 9;
			this->labelServerIP->Visible = false;
			// 
			// backgroundWorker1
			// 
		//	this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler( this, &Form1::backgroundWorker1_DoWork );
		//	this->backgroundWorker1->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler( this, &Form1::backgroundWorker1_RunWorkerCompleted );
			// 
			// buttonConnect
			// 
			this->buttonConnect->Location = System::Drawing::Point( 137, 95 );
			this->buttonConnect->Name = L"buttonConnect";
			this->buttonConnect->Size = System::Drawing::Size( 75, 23 );
			this->buttonConnect->TabIndex = 10;
			this->buttonConnect->Text = L"Connect";
			this->buttonConnect->UseVisualStyleBackColor = true;
			this->buttonConnect->Click += gcnew System::EventHandler( this, &Form1::buttonConnect_Click );
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF( 6, 13 );
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size( 257, 119 );
			this->Controls->Add( this->buttonConnect );
			this->Controls->Add( this->labelServerIP );
			this->Controls->Add( this->buttonSave );
			this->Controls->Add( this->textBoxServerIP3 );
			this->Controls->Add( this->textBoxServerIP2 );
			this->Controls->Add( this->textBoxServerIP1 );
			this->Controls->Add( this->textBoxServerIP0 );
			this->Controls->Add( this->textServerIP );
			this->Controls->Add( this->labelDot );
			this->Controls->Add( this->label1 );
			this->Controls->Add( this->label2 );
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"[OJP] Client part";
			this->ResumeLayout( false );
			this->PerformLayout();

		}
#pragma endregion
		
		
		private: System::Void ClearTextBox( System::Object^ sender )
		{
			if ( static_cast<MaskedTextBox^>(sender)->Text == "" ) {
				static_cast<MaskedTextBox^>(sender)->Clear();
			}
		}
		private: System::Byte AfterValidation( System::Object ^ sender )
		{
			Byte tmp;
			if ( static_cast<MaskedTextBox^>(sender)->Text->Length > 0 ) {
				static_cast<MaskedTextBox^>(sender)->Text = static_cast<MaskedTextBox^>(sender)->Text->Replace( " ", "" );
				if ( System::Convert::ToInt32( static_cast<MaskedTextBox^>(sender)->Text ) <= 255 ) {
					return System::Convert::ToByte( static_cast<MaskedTextBox^>(sender)->Text );
				}
				else {
					static_cast<MaskedTextBox^>(sender)->Text = "000";
				}
				return 0;
			}
		}

		//
		// textBoxServerIP0
		//
		private: System::Void textBoxServerIP0_Enter( System::Object^  sender, System::EventArgs^  e )
		{
			ClearTextBox( textBoxServerIP0 );

		}
		private: System::Void textBoxServerIP0_Validated( System::Object^  sender, System::EventArgs^  e )
		{
			adr0 = AfterValidation( textBoxServerIP0 );
		}

		private: System::Void textBoxServerIP0_TextChanged( System::Object^  sender, System::EventArgs^  e )
		{
			if ( textBoxServerIP0->Text->Length == 3 && licznik == 0 ) {
				licznik = licznik + 1;
				ProcessTabKey( true );
				licznik = 0;
			}
		}

		//
		// textBoxServerIP1
		//
		private: System::Void textBoxServerIP1_Enter( System::Object^  sender, System::EventArgs^  e )
		{
			ClearTextBox( textBoxServerIP1 );

		}
		private: System::Void textBoxServerIP1_Validated( System::Object^  sender, System::EventArgs^  e )
		{
			adr1 = AfterValidation( textBoxServerIP1 );
		}

		private: System::Void textBoxServerIP1_TextChanged( System::Object^  sender, System::EventArgs^  e )
		{
			if ( textBoxServerIP1->Text->Length == 3 && licznik == 0) {
				licznik += 1;
				ProcessTabKey( true );
				licznik = 0;
			}
		}
		
		//
		// textBoxServerIP2
		//
		private: System::Void textBoxServerIP2_Enter( System::Object^  sender, System::EventArgs^  e )
		{
			ClearTextBox( textBoxServerIP2 );

		}
		private: System::Void textBoxServerIP2_Validated( System::Object^  sender, System::EventArgs^  e )
		{
			adr2 = AfterValidation( textBoxServerIP2 );
		}

		private: System::Void textBoxServerIP2_TextChanged( System::Object^  sender, System::EventArgs^  e )
		{
			if ( textBoxServerIP2->Text->Length == 3 && licznik == 0 ) {
				licznik += 1;
				ProcessTabKey( true );
				licznik = 0;
			}
		}

		//
		// textBoxServerIP3
		//
		private: System::Void textBoxServerIP3_Enter( System::Object^  sender, System::EventArgs^  e )
		{
			ClearTextBox( textBoxServerIP3 );

		}
		private: System::Void textBoxServerIP3_Validated( System::Object^  sender, System::EventArgs^  e )
		{
			adr3 = AfterValidation( textBoxServerIP3 );
		}

		private: System::Void textBoxServerIP3_TextChanged( System::Object^  sender, System::EventArgs^  e )
		{
			if ( textBoxServerIP3->Text->Length == 3 && licznik == 0 ){
				licznik += 1;
				ProcessTabKey( true );
				licznik = 0;
			}
		}
		private: System::Void buttonSave_Click( System::Object^  sender, System::EventArgs^  e )
		{
			if ( adr0 == 0 && adr1 == 0 && adr2 == 0 && adr3 == 0 ) {
				adr0 = 127;
				adr3 = 1;
			}
			address = (adr0.ToString() + "." + adr1.ToString() + "." + adr2.ToString() + "." + adr3.ToString());
			labelServerIP->Text = address;
			labelServerIP->Visible = true;
		}
	private: System::Void backgroundWorker1_DoWork( System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e)
	{
		while ( true ) {
			client = listner->AcceptTcpClient();
			send();
			
		}
	}

			 


private: System::Void buttonConnect_Click( System::Object^  sender, System::EventArgs^  e )
{
	/*System::Int32 port;
	System::Net::Sockets::TcpListener ^listner;
	System::Net::Sockets::NetworkStream ^streamInput;
	System::Net::Sockets::TcpClient ^client;
	port = 8000;
	SendInfo ^ messageSender = gcnew SendInfo( address );
	GetProcesses ^processes = gcnew GetProcesses();
	bool sended = false;

	*/

	System::Net::IPAddress ^addressIP = System::Net::IPAddress::Parse( address );
	try {
//		while ( true ) {
			listner = gcnew System::Net::Sockets::TcpListener( addressIP, port );
			listner->Start();

			backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler( this, &WindowsFormApplication1::Form1::backgroundWorker1_DoWork );
		//	backgroundWorker1->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler( this, &WindowsFormApplication1::Form1::backgroundWorker1_RunWorkerCompleted );
			
			backgroundWorker1->RunWorkerAsync();
			
			buttonConnect->Enabled = false;

	//		client = listner->AcceptTcpClient();

			/*streamInput = client->GetStream();

			buttonConnect->Enabled = false;

			processes->UpdateProcessesList();
			messageSender->UpdateAddress( listner->ToString() );
			address = listner->ToString();
			labelServerIP->Text = address;
			sended = messageSender->SendMessage( processes->ProcessesListToString(), client );

			streamInput->Close();

			client->Close();*/
	//		listner->Stop();

		//	buttonConnect->Enabled = true;

//		}



/*		client = gcnew System::Net::Sockets::TcpClient( address, port );

		messageSender->SendMessage( "feedMe", client );
		client->Close();
		*/

		/*
		listner = gcnew System::Net::Sockets::TcpListener( port );
		listner->Start();
		//musi byæ rz¹danie by zacz¹³ wysy³aæ..
		//POPRAWIC
		*/
//		while ( true ) {
			/*//Async part
			System::Threading::Tasks::Task < System::Net::Sockets::TcpClient ^ > ^clientTask = listner->AcceptTcpClientAsync();
			if ( clientTask->IsCompleted ) {
			streamInput = clientTask->Result->GetStream();
			if ( streamInput->CanWrite ) {
			processes->UpdateProcessesList();
			messageSender->UpdateAddress( listner->ToString() );
			sended = messageSender->SendMessage( processes->ProcessesListToString(), clientTask->Result );
			clientTask->Result->Close();
			streamInput->Close();
			}
			}*/
		/*
			buttonConnect->Enabled = false;
			client = listner->AcceptTcpClient();
			streamInput = client->GetStream();
			if ( streamInput->CanWrite ) {
				processes->UpdateProcessesList();
				messageSender->UpdateAddress( listner->ToString() );
				address = listner->ToString();
				labelServerIP->Text = address;
				sended = messageSender->SendMessage( processes->ProcessesListToString(), client );
				client->Close();
				streamInput->Close();
				
			}
			if ( sended == true ) {
				buttonConnect->Enabled = true;
				break;
			}
		}*/
	}
	catch ( System::Net::Sockets::SocketException ^e ) {
		//
	}
}
		 private: System::Void send()
		 {
			 SendInfo ^ messageSender = gcnew SendInfo( address );
			 GetProcesses ^processes = gcnew GetProcesses();
			 bool sended = false;

			 streamInput = client->GetStream();

			 buttonConnect->Enabled = false;

			 processes->UpdateProcessesList();
			 messageSender->UpdateAddress( listner->ToString() );
			 sended = messageSender->SendMessage( processes->ProcessesListToString(), client );

			 streamInput->Close();
			 client->Close();
			 
		 }
private: System::Void backgroundWorker1_RunWorkerCompleted( System::Object^  sender, System::ComponentModel::RunWorkerCompletedEventArgs^  e )
{
	SendInfo ^ messageSender = gcnew SendInfo( address );
	GetProcesses ^processes = gcnew GetProcesses();
	bool sended = false;

	streamInput = client->GetStream();

	buttonConnect->Enabled = false;

	processes->UpdateProcessesList();
	messageSender->UpdateAddress( listner->ToString() );
	address = listner->ToString();
	labelServerIP->Text = address;
	sended = messageSender->SendMessage( processes->ProcessesListToString(), client );

	streamInput->Close();
	client->Close();
//	buttonConnect->Enabled = true;
}
};
}

