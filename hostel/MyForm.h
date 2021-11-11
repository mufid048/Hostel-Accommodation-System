#pragma once
#include "Login.h"
#include "hostelsearch.h"
#include "complain.h"
#include "payment.h"
#include "usernameheader.h"
#include "review.h"

namespace hostel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm(String^ s)
		{
			InitializeComponent();
			button1->Text = s;
					
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ homeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ feesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ complainToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reviewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ contactToolStripMenuItem;
	private: System::Windows::Forms::Button^ button2;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->homeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->feesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->complainToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reviewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contactToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Coral;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F));
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(1358, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 44);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Sign In";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 72, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SeaGreen;
			this->label1->Location = System::Drawing::Point(88, 142);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1395, 300);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Hostel Accommodation System";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::YellowGreen;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(323, 464);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(200, 50);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Book Hostel";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::YellowGreen;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(323, 582);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(200, 50);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Pay Fees";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::YellowGreen;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(323, 703);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(200, 50);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Complain";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(634, 464);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(800, 299);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->AutoSize = false;
			this->menuStrip1->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->homeToolStripMenuItem,
					this->feesToolStripMenuItem, this->complainToolStripMenuItem, this->reviewToolStripMenuItem, this->aboutToolStripMenuItem, this->contactToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(200, 82);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1326, 50);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// homeToolStripMenuItem
			// 
			this->homeToolStripMenuItem->Name = L"homeToolStripMenuItem";
			this->homeToolStripMenuItem->Size = System::Drawing::Size(129, 46);
			this->homeToolStripMenuItem->Text = L" Home ";
			// 
			// feesToolStripMenuItem
			// 
			this->feesToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 16.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->feesToolStripMenuItem->Name = L"feesToolStripMenuItem";
			this->feesToolStripMenuItem->Size = System::Drawing::Size(111, 46);
			this->feesToolStripMenuItem->Text = L"Fees  ";
			this->feesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::feesToolStripMenuItem_Click);
			// 
			// complainToolStripMenuItem
			// 
			this->complainToolStripMenuItem->Name = L"complainToolStripMenuItem";
			this->complainToolStripMenuItem->Size = System::Drawing::Size(136, 46);
			this->complainToolStripMenuItem->Text = L"Review";
			this->complainToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::complainToolStripMenuItem_Click);
			// 
			// reviewToolStripMenuItem
			// 
			this->reviewToolStripMenuItem->Name = L"reviewToolStripMenuItem";
			this->reviewToolStripMenuItem->Size = System::Drawing::Size(116, 46);
			this->reviewToolStripMenuItem->Text = L"About";
			this->reviewToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::reviewToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(144, 46);
			this->aboutToolStripMenuItem->Text = L"Contact";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// contactToolStripMenuItem
			// 
			this->contactToolStripMenuItem->Name = L"contactToolStripMenuItem";
			this->contactToolStripMenuItem->Size = System::Drawing::Size(98, 46);
			this->contactToolStripMenuItem->Text = L"Help";
			this->contactToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::contactToolStripMenuItem_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SandyBrown;
			this->button2->Location = System::Drawing::Point(1230, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 44);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Log out";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1482, 753);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Hostel Acommodation System";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Login^ log = gcnew Login;
		log->Show();
		button1->Visible = false;
		if (usernameset::signin) {
			button5->Visible = true;
		}
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (usernameset::signin) {
		hostelsearch^ hs = gcnew hostelsearch;
		hs->Show();
	}
	else {
		if(MessageBox::Show("Please sign in to continue","Sign in",MessageBoxButtons::OKCancel,MessageBoxIcon::Error)==Windows::Forms::DialogResult::OK){
			Login^ log = gcnew Login;
			log->Show();
		}
	}
	
}

private: System::Void contactToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("visit our website for more help", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ s = "You can contact us on our Email : abc@example.com\nYou can also contact on our mobile : +911111111111";
	MessageBox::Show(s, "Contact Us", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void reviewToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ s = "Thanks for using our Application\nYou can come to know more about us on our website and blog\nwebsite : abc.com\nblog : blogger.com";
	MessageBox::Show(s, "About", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (usernameset::signin) {
		complain^ cp = gcnew complain;
		cp->Show();
	}
	else {
		if (MessageBox::Show("Please sign in to continue", "Sign in", MessageBoxButtons::OKCancel, MessageBoxIcon::Error) == Windows::Forms::DialogResult::OK) {
			Login^ log = gcnew Login;
			log->Show();
		}
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (usernameset::signin) {
		payment^ p = gcnew payment;
		p->Show();
	}
	else {
		if (MessageBox::Show("Please sign in to continue", "Sign in", MessageBoxButtons::OKCancel, MessageBoxIcon::Error) == Windows::Forms::DialogResult::OK) {
			Login^ log = gcnew Login;
			log->Show();
		}
	}
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	if (usernameset::signin)
	{
		hostelsearch^ hs = gcnew hostelsearch;
		hs->Show();
	}
	else {
		if (MessageBox::Show("Please sign in to continue", "Sign in", MessageBoxButtons::OKCancel, MessageBoxIcon::Error) == Windows::Forms::DialogResult::OK) {
			Login^ log = gcnew Login;
			log->Show();
		}
	}
}
private: System::Void complainToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (usernameset::signin) {
		review^ r = gcnew review;
		r->Show();
	}
	else {
		if (MessageBox::Show("Please sign in to continue", "Sign in", MessageBoxButtons::OKCancel, MessageBoxIcon::Error) == Windows::Forms::DialogResult::OK) {
			Login^ log = gcnew Login;
			log->Show();
		}
	}
}
private: System::Void feesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (usernameset::user) {
		payment^ p = gcnew payment;
		p->Show();
	}
	else {
		if (MessageBox::Show("Please sign in to continue", "Sign in", MessageBoxButtons::OKCancel, MessageBoxIcon::Error) == Windows::Forms::DialogResult::OK) {
			Login^ log = gcnew Login;
			log->Show();
		}
	}
}
};
}
