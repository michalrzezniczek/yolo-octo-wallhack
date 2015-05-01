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
	private: System::Windows::Forms::Label^  labelServerIP;
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
			this->labelServerIP = (gcnew System::Windows::Forms::Label());
			this->textBoxServerIP0 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBoxServerIP1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBoxServerIP2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBoxServerIP3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->labelDot = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelServerIP
			// 
			this->labelServerIP->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelServerIP->Font = (gcnew System::Drawing::Font( L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238) ));
			this->labelServerIP->Location = System::Drawing::Point( 13, 13 );
			this->labelServerIP->Name = L"labelServerIP";
			this->labelServerIP->Size = System::Drawing::Size( 227, 23 );
			this->labelServerIP->TabIndex = 0;
			this->labelServerIP->Text = L"Server IP:";
			// 
			// textBoxServerIP0
			// 
			this->textBoxServerIP0->Font = (gcnew System::Drawing::Font( L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238) ));
			this->textBoxServerIP0->Location = System::Drawing::Point( 18, 40 );
			this->textBoxServerIP0->Mask = L"000";
			this->textBoxServerIP0->Name = L"textBoxServerIP0";
			this->textBoxServerIP0->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->textBoxServerIP0->Size = System::Drawing::Size( 51, 38 );
			this->textBoxServerIP0->TabIndex = 1;
			this->textBoxServerIP0->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBoxServerIP1
			// 
			this->textBoxServerIP1->Font = (gcnew System::Drawing::Font( L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238) ));
			this->textBoxServerIP1->Location = System::Drawing::Point( 75, 39 );
			this->textBoxServerIP1->Mask = L"000";
			this->textBoxServerIP1->Name = L"textBoxServerIP1";
			this->textBoxServerIP1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->textBoxServerIP1->Size = System::Drawing::Size( 51, 38 );
			this->textBoxServerIP1->TabIndex = 2;
			this->textBoxServerIP1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBoxServerIP2
			// 
			this->textBoxServerIP2->Font = (gcnew System::Drawing::Font( L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238) ));
			this->textBoxServerIP2->Location = System::Drawing::Point( 132, 39 );
			this->textBoxServerIP2->Mask = L"000";
			this->textBoxServerIP2->Name = L"textBoxServerIP2";
			this->textBoxServerIP2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->textBoxServerIP2->Size = System::Drawing::Size( 51, 38 );
			this->textBoxServerIP2->TabIndex = 3;
			this->textBoxServerIP2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBoxServerIP3
			// 
			this->textBoxServerIP3->Font = (gcnew System::Drawing::Font( L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238) ));
			this->textBoxServerIP3->Location = System::Drawing::Point( 189, 39 );
			this->textBoxServerIP3->Mask = L"000";
			this->textBoxServerIP3->Name = L"textBoxServerIP3";
			this->textBoxServerIP3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->textBoxServerIP3->Size = System::Drawing::Size( 51, 38 );
			this->textBoxServerIP3->TabIndex = 4;
			this->textBoxServerIP3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// labelDot
			// 
			this->labelDot->AutoSize = true;
			this->labelDot->Font = (gcnew System::Drawing::Font( L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238) ));
			this->labelDot->Location = System::Drawing::Point( 62, 47 );
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
			this->label1->Location = System::Drawing::Point( 119, 47 );
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
			this->label2->Location = System::Drawing::Point( 176, 47 );
			this->label2->Margin = System::Windows::Forms::Padding( 0 );
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size( 22, 31 );
			this->label2->TabIndex = 7;
			this->label2->Text = L".";
			// 
			// buttonSave
			// 
			this->buttonSave->Location = System::Drawing::Point( 91, 84 );
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size( 75, 23 );
			this->buttonSave->TabIndex = 8;
			this->buttonSave->Text = L"Save";
			this->buttonSave->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF( 6, 13 );
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size( 257, 119 );
			this->Controls->Add( this->buttonSave );
			this->Controls->Add( this->textBoxServerIP3 );
			this->Controls->Add( this->textBoxServerIP2 );
			this->Controls->Add( this->textBoxServerIP1 );
			this->Controls->Add( this->textBoxServerIP0 );
			this->Controls->Add( this->labelServerIP );
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

};
}

