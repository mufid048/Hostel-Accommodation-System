#pragma once
#include "Signup.h"
#include <iostream>
#include "usernameheader.h"

namespace hostel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			panel1->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^ username_textBox;
	private: System::Windows::Forms::TextBox^ password_textBox;
	protected:

	protected:




	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->username_textBox = (gcnew System::Windows::Forms::TextBox());
			this->password_textBox = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// username_textBox
			// 
			this->username_textBox->BackColor = System::Drawing::Color::PaleTurquoise;
			this->username_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.8F));
			this->username_textBox->ForeColor = System::Drawing::Color::RoyalBlue;
			this->username_textBox->Location = System::Drawing::Point(335, 211);
			this->username_textBox->Multiline = true;
			this->username_textBox->Name = L"username_textBox";
			this->username_textBox->Size = System::Drawing::Size(347, 45);
			this->username_textBox->TabIndex = 3;
			this->username_textBox->Text = L"Username";
			this->username_textBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Login::textBox1_KeyDown);
			// 
			// password_textBox
			// 
			this->password_textBox->BackColor = System::Drawing::Color::PaleTurquoise;
			this->password_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.8F));
			this->password_textBox->ForeColor = System::Drawing::Color::RoyalBlue;
			this->password_textBox->Location = System::Drawing::Point(335, 294);
			this->password_textBox->Multiline = true;
			this->password_textBox->Name = L"password_textBox";
			this->password_textBox->PasswordChar = '*';
			this->password_textBox->Size = System::Drawing::Size(347, 45);
			this->password_textBox->TabIndex = 4;
			this->password_textBox->Text = L"Password";
			this->password_textBox->UseSystemPasswordChar = true;
			this->password_textBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Login::textBox2_KeyDown);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F));
			this->checkBox1->Location = System::Drawing::Point(306, 394);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(125, 30);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"I agree to";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Login::checkBox1_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label4->Location = System::Drawing::Point(426, 396);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(213, 26);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Terms and Condition";
			this->label4->Click += gcnew System::EventHandler(this, &Login::label4_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::CornflowerBlue;
			this->button1->FlatAppearance->BorderSize = 5;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Green;
			this->button1->Location = System::Drawing::Point(316, 463);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 57);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Sign in";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::DodgerBlue;
			this->button2->FlatAppearance->BorderSize = 5;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.8F));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(513, 463);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(126, 57);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Login::button2_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Location = System::Drawing::Point(856, 52);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(455, 659);
			this->panel1->TabIndex = 9;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(113, 323);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(164, 47);
			this->button3->TabIndex = 1;
			this->button3->Text = L"OK";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Login::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(20, 23);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(411, 270);
			this->textBox3->TabIndex = 0;
			this->textBox3->Text = L"Terms and Condition";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label6->Location = System::Drawing::Point(508, 634);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(174, 29);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Create account";
			this->label6->Click += gcnew System::EventHandler(this, &Login::label6_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(270, 211);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(48, 45);
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.ErrorImage")));
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(270, 294);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(48, 45);
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// Login
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1482, 753);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->password_textBox);
			this->Controls->Add(this->username_textBox);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label6);
			this->Name = L"Login";
			this->Text = L"Login";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//public: std::string un() {
			//return user;
		//}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=mufid@mysql048";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from hostel_system.login where Username ='"+this->username_textBox->Text+"' and Password = '"+this->password_textBox->Text+"';",conDataBase);
	MySqlDataReader^ myReader;
	
	try{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		int count = 0;
		while (myReader->Read()) {
			count = count + 1;
		}
		if (count == 1) {
			
			usernameset::user = username_textBox->Text;
			usernameset::hostel = myReader->GetString(4);
			usernameset::signin = true;
			if (MessageBox::Show("Username and Password is correct", "Login Successfull", MessageBoxButtons::OKCancel, MessageBoxIcon::Information) == Windows::Forms::DialogResult::OK) {
				this->Close();
			}
		}
		else if (count > 1) {
			MessageBox::Show("Username and Password is duplicate", "Login unsuccessfull", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
		}
		else {
			MessageBox::Show("Username and Password is not correct", "Access Denied", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
		}
	}catch(Exception^ e){
		MessageBox::Show(e->Message);
	}
	conDataBase->Close();
	
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked) {
		button1->Enabled = true;
	}
	else
	{
		button1->Enabled = false;
	}
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Dock;
	panel1->Show();
	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Hide();
}

private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		password_textBox->Focus();
	}
}
private: System::Void textBox2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		button1->Focus();
	}
}

private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	Signup^ s = gcnew Signup;
	s ->Show();
}

};
}
