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
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPageCollect;
	private: System::Windows::Forms::Button^  buttonCollectData;
	private: System::Windows::Forms::TextBox^  textBoxIP;
	private: System::Windows::Forms::TabPage^  tabPageList;
	private: System::Windows::Forms::Label^  labelStatusOfConnection;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPageCollect = (gcnew System::Windows::Forms::TabPage());
			this->labelStatusOfConnection = (gcnew System::Windows::Forms::Label());
			this->buttonCollectData = (gcnew System::Windows::Forms::Button());
			this->textBoxIP = (gcnew System::Windows::Forms::TextBox());
			this->tabPageList = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabPageCollect->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add( this->tabPageCollect );
			this->tabControl1->Controls->Add( this->tabPageList );
			this->tabControl1->Location = System::Drawing::Point( 1, 1 );
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
			this->labelStatusOfConnection->AutoSize = true;
			this->labelStatusOfConnection->Location = System::Drawing::Point( 116, 177 );
			this->labelStatusOfConnection->Name = L"labelStatusOfConnection";
			this->labelStatusOfConnection->Size = System::Drawing::Size( 0, 13 );
			this->labelStatusOfConnection->TabIndex = 2;
			// 
			// buttonCollectData
			// 
			this->buttonCollectData->Location = System::Drawing::Point( 63, 111 );
			this->buttonCollectData->Name = L"buttonCollectData";
			this->buttonCollectData->Size = System::Drawing::Size( 156, 32 );
			this->buttonCollectData->TabIndex = 1;
			this->buttonCollectData->Text = L"Connect and get data";
			this->buttonCollectData->UseVisualStyleBackColor = true;
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
			this->tabPageList->Location = System::Drawing::Point( 4, 22 );
			this->tabPageList->Name = L"tabPageList";
			this->tabPageList->Padding = System::Windows::Forms::Padding( 3 );
			this->tabPageList->Size = System::Drawing::Size( 278, 237 );
			this->tabPageList->TabIndex = 1;
			this->tabPageList->Text = L"List";
			this->tabPageList->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF( 6, 13 );
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size( 284, 261 );
			this->Controls->Add( this->tabControl1 );
			this->Name = L"Form1";
			this->Text = L"[OJP] Manager";
			this->tabControl1->ResumeLayout( false );
			this->tabPageCollect->ResumeLayout( false );
			this->tabPageCollect->PerformLayout();
			this->ResumeLayout( false );

		}
#pragma endregion

	private: System::Void textBoxIP_Enter( System::Object^  sender, System::EventArgs^  e )
	{
		if ( textBoxIP->Text == "Write IP here" || textBoxIP->Text == "Wrong IP!" ) {
			textBoxIP->Text = "";
			textBoxIP->ForeColor = System::Drawing::Color::Black;
		}
	}
	private: System::Void textBoxIP_Leave( System::Object^  sender, System::EventArgs^  e )
	{
		bool correct = false;
		if ( textBoxIP->Text == "" ) {
			textBoxIP->Text = "Write IP here";
			textBoxIP->ForeColor = System::Drawing::Color::Gray;
		}
		else {
			System::String ^address = textBoxIP->Text;
			System::Int32 tmp;

			System::String ^patternRegex = "[0-2][0-9][0-9][.][0-2][0-9][0-9][.][0-2][0-9][0-9][.][0-2][0-9][0-9]";

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

			if ( correct == false ) {
				textBoxIP->Text = "Wrong IP!";
				textBoxIP->ForeColor = System::Drawing::Color::Red;
			}
		}
	}
};
}

