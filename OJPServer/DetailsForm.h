#pragma once

namespace OJPServer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DetailsForm
	/// </summary>
	public ref class DetailsForm : public System::Windows::Forms::Form
	{
	public:
		DetailsForm(void)
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
		~DetailsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelHostName;
	private: System::Windows::Forms::Label^  labelIPAddress;
	private: System::Windows::Forms::Label^  labelContent;
	protected:

	protected:

	private:
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
			this->labelHostName = (gcnew System::Windows::Forms::Label());
			this->labelIPAddress = (gcnew System::Windows::Forms::Label());
			this->labelContent = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labelHostName
			// 
			this->labelHostName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelHostName->Font = (gcnew System::Drawing::Font( L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238) ));
			this->labelHostName->Location = System::Drawing::Point( 13, 13 );
			this->labelHostName->Name = L"labelHostName";
			this->labelHostName->Size = System::Drawing::Size( 259, 51 );
			this->labelHostName->TabIndex = 0;
			this->labelHostName->Text = L"hostName";
			this->labelHostName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelIPAddress
			// 
			this->labelIPAddress->Location = System::Drawing::Point( 21, 64 );
			this->labelIPAddress->Name = L"labelIPAddress";
			this->labelIPAddress->Size = System::Drawing::Size( 251, 23 );
			this->labelIPAddress->TabIndex = 1;
			this->labelIPAddress->Text = L"255.255.255.255";
			this->labelIPAddress->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// labelContent
			// 
			this->labelContent->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelContent->Location = System::Drawing::Point( 21, 91 );
			this->labelContent->Name = L"labelContent";
			this->labelContent->Size = System::Drawing::Size( 251, 161 );
			this->labelContent->TabIndex = 2;
			this->labelContent->Text = L"label1";
			// 
			// DetailsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF( 6, 13 );
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size( 284, 261 );
			this->Controls->Add( this->labelContent );
			this->Controls->Add( this->labelIPAddress );
			this->Controls->Add( this->labelHostName );
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"DetailsForm";
			this->Text = L"Details";
			this->ResumeLayout( false );

		}
#pragma endregion
	};
}
