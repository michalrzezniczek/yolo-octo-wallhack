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
		DetailsForm( System::String^ hostname, System::String^ ip, System::String^ content )
		{
			InitializeComponent();
			labelContent->Text = content;
			labelHostName->Text = hostname;
			labelIPAddress->Text = ip;
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
	private: System::Windows::Forms::Panel^  panel1;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelHostName
			// 
			this->labelHostName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelHostName->AutoSize = true;
			this->labelHostName->Font = (gcnew System::Drawing::Font( L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238) ));
			this->labelHostName->Location = System::Drawing::Point( 196, 9 );
			this->labelHostName->Name = L"labelHostName";
			this->labelHostName->Size = System::Drawing::Size( 202, 46 );
			this->labelHostName->TabIndex = 0;
			this->labelHostName->Text = L"hostName";
			this->labelHostName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelIPAddress
			// 
			this->labelIPAddress->Location = System::Drawing::Point( 21, 55 );
			this->labelIPAddress->Name = L"labelIPAddress";
			this->labelIPAddress->Size = System::Drawing::Size( 557, 23 );
			this->labelIPAddress->TabIndex = 1;
			this->labelIPAddress->Text = L"255.255.255.255";
			this->labelIPAddress->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelContent
			// 
			this->labelContent->AutoSize = true;
			this->labelContent->Dock = System::Windows::Forms::DockStyle::Top;
			this->labelContent->Location = System::Drawing::Point( 0, 0 );
			this->labelContent->Margin = System::Windows::Forms::Padding( 13 );
			this->labelContent->MinimumSize = System::Drawing::Size( 550, 250 );
			this->labelContent->Name = L"labelContent";
			this->labelContent->Padding = System::Windows::Forms::Padding( 15, 80, 0, 0 );
			this->labelContent->Size = System::Drawing::Size( 550, 250 );
			this->labelContent->TabIndex = 2;
			this->labelContent->Text = L"label1";
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->AutoSize = true;
			this->panel1->Controls->Add( this->labelIPAddress );
			this->panel1->Controls->Add( this->labelHostName );
			this->panel1->Controls->Add( this->labelContent );
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point( 0, 0 );
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size( 579, 261 );
			this->panel1->TabIndex = 3;
			// 
			// DetailsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF( 6, 13 );
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size( 579, 261 );
			this->Controls->Add( this->panel1 );
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"DetailsForm";
			this->Text = L"Details";
			this->panel1->ResumeLayout( false );
			this->panel1->PerformLayout();
			this->ResumeLayout( false );
			this->PerformLayout();

		}
#pragma endregion
	};
}
