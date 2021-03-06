#pragma once
#include "SendInfo.h"
#include "DetailsForm.h"

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
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPageCollect;
	private: System::Windows::Forms::Button^  buttonCollectData;
	private: System::Windows::Forms::TextBox^  textBoxIP;
	private: System::Windows::Forms::TabPage^  tabPageList;

	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  HostName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  IP;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Date;


	protected:







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		System::String ^address = "";
		array<System::String ^, 2> ^listOfRecivedData = gcnew array < System::String ^, 2>( 50, 4 );
	private: System::Windows::Forms::Label^  labelStatusOfConnection;
			 int numberOfRecivedData = 0;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPageCollect = (gcnew System::Windows::Forms::TabPage());
			this->labelStatusOfConnection = (gcnew System::Windows::Forms::Label());
			this->buttonCollectData = (gcnew System::Windows::Forms::Button());
			this->textBoxIP = (gcnew System::Windows::Forms::TextBox());
			this->tabPageList = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->HostName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->IP = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->tabPageCollect->SuspendLayout();
			this->tabPageList->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add( this->tabPageCollect );
			this->tabControl1->Controls->Add( this->tabPageList );
			this->tabControl1->Location = System::Drawing::Point( 0, 0 );
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size( 286, 263 );
			this->tabControl1->TabIndex = 0;
			// 
			// tabPageCollect
			// 
			this->tabPageCollect->Controls->Add( this->labelStatusOfConnection );
			this->tabPageCollect->Controls->Add( this->buttonCollectData );
			this->tabPageCollect->Controls->Add( this->textBoxIP );
			this->tabPageCollect->Location = System::Drawing::Point( 4, 22 );
			this->tabPageCollect->Name = L"tabPageCollect";
			this->tabPageCollect->Padding = System::Windows::Forms::Padding( 3 );
			this->tabPageCollect->Size = System::Drawing::Size( 278, 237 );
			this->tabPageCollect->TabIndex = 0;
			this->tabPageCollect->Text = L"Collect";
			this->tabPageCollect->UseVisualStyleBackColor = true;
			// 
			// labelStatusOfConnection
			// 
			this->labelStatusOfConnection->Font = (gcnew System::Drawing::Font( L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238) ));
			this->labelStatusOfConnection->Location = System::Drawing::Point( 8, 146 );
			this->labelStatusOfConnection->Name = L"labelStatusOfConnection";
			this->labelStatusOfConnection->Size = System::Drawing::Size( 260, 95 );
			this->labelStatusOfConnection->TabIndex = 2;
			this->labelStatusOfConnection->Text = L"";
			this->labelStatusOfConnection->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonCollectData
			// 
			this->buttonCollectData->Enabled = false;
			this->buttonCollectData->Location = System::Drawing::Point( 63, 111 );
			this->buttonCollectData->Name = L"buttonCollectData";
			this->buttonCollectData->Size = System::Drawing::Size( 156, 32 );
			this->buttonCollectData->TabIndex = 1;
			this->buttonCollectData->Text = L"Connect and get data";
			this->buttonCollectData->UseVisualStyleBackColor = true;
			this->buttonCollectData->Click += gcnew System::EventHandler( this, &Form1::buttonCollectData_Click );
			// 
			// textBoxIP
			// 
			this->textBoxIP->Font = (gcnew System::Drawing::Font( L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238) ));
			this->textBoxIP->ForeColor = System::Drawing::Color::Gray;
			this->textBoxIP->Location = System::Drawing::Point( 63, 48 );
			this->textBoxIP->Name = L"textBoxIP";
			this->textBoxIP->Size = System::Drawing::Size( 156, 30 );
			this->textBoxIP->TabIndex = 0;
			this->textBoxIP->Text = L"Write IP here";
			this->textBoxIP->Enter += gcnew System::EventHandler( this, &Form1::textBoxIP_Enter );
			this->textBoxIP->Leave += gcnew System::EventHandler( this, &Form1::textBoxIP_Leave );
			// 
			// tabPageList
			// 
			this->tabPageList->Controls->Add( this->dataGridView1 );
			this->tabPageList->Location = System::Drawing::Point( 4, 22 );
			this->tabPageList->Name = L"tabPageList";
			this->tabPageList->Padding = System::Windows::Forms::Padding( 3 );
			this->tabPageList->Size = System::Drawing::Size( 278, 237 );
			this->tabPageList->TabIndex = 1;
			this->tabPageList->Text = L"List";
			this->tabPageList->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange( gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >( 3 )
			{
				this->HostName,
					this->IP, this->Date
			} );
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point( 3, 3 );
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size( 272, 231 );
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler( this, &Form1::dataGridView1_CellDoubleClick );
			// 
			// HostName
			// 
			this->HostName->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->HostName->HeaderText = L"HostName";
			this->HostName->Name = L"HostName";
			this->HostName->ReadOnly = true;
			this->HostName->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// IP
			// 
			this->IP->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->IP->HeaderText = L"IP";
			this->IP->Name = L"IP";
			this->IP->ReadOnly = true;
			this->IP->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// Date
			// 
			this->Date->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Date->HeaderText = L"Date";
			this->Date->Name = L"Date";
			this->Date->ReadOnly = true;
			this->Date->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Date->Width = 55;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF( 6, 13 );
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size( 284, 261 );
			this->Controls->Add( this->tabControl1 );
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"Form1";
			this->Text = L"[OJP] Manager";
			this->tabControl1->ResumeLayout( false );
			this->tabPageCollect->ResumeLayout( false );
			this->tabPageCollect->PerformLayout();
			this->tabPageList->ResumeLayout( false );
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout( false );

		}
#pragma endregion

	private: System::Void textBoxIP_Enter( System::Object^  sender, System::EventArgs^  e )
	{
		if ( textBoxIP->Text == "Write IP here" || textBoxIP->Text == "Wrong IP!" ) {
			textBoxIP->Text = "";
			textBoxIP->ForeColor = System::Drawing::Color::Black;
		}
		labelStatusOfConnection->Text = "";
	}
	private: System::Void textBoxIP_Leave( System::Object^  sender, System::EventArgs^  e )
	{
		bool correct = false;
		if ( textBoxIP->Text == "" ) {
			textBoxIP->Text = "Write IP here";
			textBoxIP->ForeColor = System::Drawing::Color::Gray;
		}
		else {
			address = textBoxIP->Text;
			System::Int32 tmp;

			System::String ^patternRegex = "([0-2]|[0-9][0-9]|[0-2][0-9][0-9])[.]([0-2]|[0-9][0-9]|[0-2][0-9][0-9])[.]([0-2]|[0-9][0-9]|[0-2][0-9][0-9])[.]([0-2]|[0-9][0-9]|[0-2][0-9][0-9])";

			System::Text::RegularExpressions::Regex ^Regex = gcnew System::Text::RegularExpressions::Regex( patternRegex );

			if ( Regex->IsMatch( address ) ) {
				array<System::String ^> ^splitted = address->Split( '.' );
				correct = true;
				for each (System::String ^ var in splitted)
				{
					tmp = System::Int32::Parse( var );
					if ( tmp < 0 || tmp > 255 ) {
						correct = false;
						break;
					}
				}
			}
			buttonCollectData->Enabled = true;
			if ( correct == false ) {
				address = "";
				buttonCollectData->Enabled = false;
				textBoxIP->Text = "Wrong IP!";
				textBoxIP->ForeColor = System::Drawing::Color::Red;
			}
		}
	}

	private: System::Void buttonCollectData_Click( System::Object^  sender, System::EventArgs^  e )
	{
		System::Int32 port;
		System::Net::Sockets::TcpListener ^listner;
		System::Net::Sockets::NetworkStream ^streamInput;
		System::Net::Sockets::TcpClient ^client;
		port = 8000;
		SendInfo ^ messageSender = gcnew SendInfo( address );
		System::Net::IPAddress ^addressIP = System::Net::IPAddress::Parse( address );
		int byteCount = 0;
		array<System::Byte> ^messageByte = gcnew array<System::Byte>( 1048576 );
		System::String ^hostname;

		System::String ^datePatt = "M/d/yyyy hh:mm:ss tt";
		try {
			client = gcnew System::Net::Sockets::TcpClient( address, port );

			buttonCollectData->Enabled = false;
			labelStatusOfConnection->Text = "Collecting data";
			this->Refresh();

			if ( client->Connected ) {
				
				streamInput = client->GetStream();
				byteCount = streamInput->Read( messageByte, 0, messageByte->Length );
				System::String ^message = System::Text::Encoding::ASCII->GetString( messageByte, 0, byteCount );
				
				listOfRecivedData[numberOfRecivedData, 0] = System::Net::Dns::GetHostEntry( address )->HostName;
				listOfRecivedData[numberOfRecivedData, 1] = address;
				listOfRecivedData[numberOfRecivedData, 2] = System::DateTime::Now.ToString(datePatt);
				client->Close();
				if ( numberOfRecivedData == 49 ) {
					numberOfRecivedData = 0;
				}
				listOfRecivedData[numberOfRecivedData, 3] = message;
				numberOfRecivedData++;


				dataGridView1->RowCount = numberOfRecivedData;
				for ( int i = 0; i < numberOfRecivedData; i++ ) {
					for ( int j = 0; j < 3; j++ ) {
						dataGridView1->Rows[i]->Cells[j]->Value = listOfRecivedData[i, j];
					}
				}

				buttonCollectData->Enabled = true;
				labelStatusOfConnection->Text = "The data were collected.";
			}
		}
	
		catch ( System::Net::Sockets::SocketException ^e ) {
			labelStatusOfConnection->Text = "I can not connect to the host! Try again later.";
			buttonCollectData->Enabled = true;
		}
	}
	private: System::Void dataGridView1_CellDoubleClick( System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e )
	{
		int currentRow = dataGridView1->CurrentCellAddress.Y;

		OJPServer::DetailsForm ^window = gcnew OJPServer::DetailsForm( listOfRecivedData[currentRow, 0], listOfRecivedData[currentRow, 1], listOfRecivedData[currentRow,3] );
		
		window->ShowDialog();

	}
};
}

