#pragma once
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
	/// Summary for payment
	/// </summary>
	
	public ref class payment : public System::Windows::Forms::Form
	{
	public:
		payment(void)
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
		~payment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:
	private: System::Windows::Forms::Button^ payment_button;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(payment::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->payment_button = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"January", L"February", L"March", L"April", L"May",
					L"June", L"July", L"August", L"September", L"October", L"November", L"December"
			});
			this->comboBox1->Location = System::Drawing::Point(881, 93);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(229, 33);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &payment::comboBox1_SelectedIndexChanged);
			// 
			// payment_button
			// 
			this->payment_button->BackColor = System::Drawing::Color::Orchid;
			this->payment_button->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->payment_button->ForeColor = System::Drawing::Color::Navy;
			this->payment_button->Location = System::Drawing::Point(1023, 497);
			this->payment_button->Name = L"payment_button";
			this->payment_button->Size = System::Drawing::Size(131, 46);
			this->payment_button->TabIndex = 1;
			this->payment_button->Text = L"Pay";
			this->payment_button->UseVisualStyleBackColor = false;
			this->payment_button->Visible = false;
			this->payment_button->Click += gcnew System::EventHandler(this, &payment::payment_button_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1023, 289);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(373, 35);
			this->textBox1->TabIndex = 2;
			this->textBox1->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(1023, 354);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(373, 35);
			this->textBox2->TabIndex = 3;
			this->textBox2->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(1023, 421);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(373, 35);
			this->textBox3->TabIndex = 4;
			this->textBox3->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Engravers MT", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Crimson;
			this->label1->Location = System::Drawing::Point(921, 238);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 28);
			this->label1->TabIndex = 5;
			this->label1->Text = L"label1";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(885, 289);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 29);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Card No.";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(876, 354);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(144, 29);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Card Holder";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(885, 421);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(120, 29);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Password";
			this->label4->Visible = false;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"2015", L"2016", L"2017", L"2018", L"2019", L"2020",
					L"2021", L"2022", L"2023", L"2024"
			});
			this->comboBox2->Location = System::Drawing::Point(1116, 93);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(204, 33);
			this->comboBox2->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::LawnGreen;
			this->label5->Location = System::Drawing::Point(886, 60);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(74, 23);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Month";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 12, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::LawnGreen;
			this->label6->Location = System::Drawing::Point(1112, 60);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 23);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Year";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SkyBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1019, 139);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 50);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Check Fee";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &payment::button1_Click);
			// 
			// payment
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1408, 626);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->payment_button);
			this->Controls->Add(this->comboBox1);
			this->Name = L"payment";
			this->Text = L"payment";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: void paidfees() {
			String^ month = "0";
			if (comboBox1->Text == "January") {
				month = "1";
			}
			else if (comboBox1->Text == "February") {
				month = "2";
			}
			else if (comboBox1->Text == "March") {
				month = "3";
			}
			else if (comboBox1->Text == "April") {
				month = "4";
			}
			else if (comboBox1->Text == "May") {
				month = "5";
			}
			else if (comboBox1->Text == "June") {
				month = "6";
			}
			else if (comboBox1->Text == "July") {
				month = "7";
			}
			else if (comboBox1->Text == "August") {
				month = "8";
			}
			else if (comboBox1->Text == "September") {
				month = "9";
			}
			else if (comboBox1->Text == "October") {
				month = "10";
			}
			else if (comboBox1->Text == "November") {
				month = "11";
			}
			else if (comboBox1->Text == "December") {
				month = "12";
			}
			String^ constring = L"datasource=localhost;port=3306;username=root;password=mufid@mysql048";
			MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into hostel_system.fees(username,hostel,ispaid,month,year) values('" + usernameset::user + "','" + usernameset::hostel + "','" + 1 + "','"+month+"','"+comboBox2->Text+"');", conDataBase);
			MySqlDataReader^ reader;
			try {
				conDataBase->Open();
				reader = cmdDataBase->ExecuteReader();
				while (reader->Read()) {
					
				}
				MessageBox::Show("You have paid your fees", "Congratulations", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message);
			}
		}
	private: void check_fees() {
		String^ month = "0";
		if (comboBox1->Text == "January") {
			month = "1";
		}
		else if (comboBox1->Text == "February") {
			month = "2";
		}
		else if (comboBox1->Text == "March") {
			month = "3";
		}
		else if (comboBox1->Text == "April") {
			month = "4";
		}
		else if (comboBox1->Text == "May") {
			month = "5";
		}
		else if (comboBox1->Text == "June") {
			month = "6";
		}
		else if (comboBox1->Text == "July") {
			month = "7";
		}
		else if (comboBox1->Text == "August") {
			month = "8";
		}
		else if (comboBox1->Text == "September") {
			month = "9";
		}
		else if (comboBox1->Text == "October") {
			month = "10";
		}
		else if (comboBox1->Text == "November") {
			month = "11";
		}
		else if (comboBox1->Text == "December") {
			month = "12";
		}
		String^ constring = L"datasource=localhost;port=3306;username=root;password=mufid@mysql048";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from hostel_system.fees where username = '"+usernameset::user+"'and month ='" + month + "'and year = '" + comboBox2->Text + "';", conDataBase);
		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			int count = 0;
			while (myReader->Read())
			{
				count = 2;
			}
			if (count == 0) {

				label1->Text = "Pay your fees here.";
				label1->Visible = true;
				label2->Visible = true;
				label3->Visible = true;
				label4->Visible = true;
				textBox1->Visible = true;
				textBox2->Visible = true;
				textBox3->Visible = true;
				payment_button->Visible = true;
				
			}
			else {
				label1->Text = "You have paid your fees.";
				label1->Visible = true;
			}
			
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	check_fees();
}
private: System::Void payment_button_Click(System::Object^ sender, System::EventArgs^ e) {
	paidfees();
}
};
}
