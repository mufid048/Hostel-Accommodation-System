#pragma once
#include <iostream>
#include "usernameheader.h"
constexpr auto College_size = 9;


namespace hostel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for hostelsearch
	/// </summary>
	public ref class hostelsearch : public System::Windows::Forms::Form
	{
	public:
		hostelsearch(void)
		{
			InitializeComponent();
			
			//
			//TODO: Add the constructor code here
			//
			int x = 30;
			int y = 15;
			int xpanel = 30;
			int ypanel = 15;
			this->panel = gcnew array<System::Windows::Forms::Panel^>(College_size);
			this->name_label = gcnew array<System::Windows::Forms::Label^>(College_size);
			this->rent_label = gcnew array<System::Windows::Forms::Label^>(College_size);
			this->sharing_label = gcnew array<System::Windows::Forms::Label^>(College_size);
			this->college_label = gcnew array<System::Windows::Forms::Label^>(College_size);
			this->ac_label = gcnew array<System::Windows::Forms::Label^>(College_size);
			this->library_label = gcnew array<System::Windows::Forms::Label^>(College_size);
			this->gym_label = gcnew array<System::Windows::Forms::Label^>(College_size);
			this->capacity_label = gcnew array<System::Windows::Forms::Label^>(College_size);
			this->laundry_label = gcnew array<System::Windows::Forms::Label^>(College_size);
			this->rating_label = gcnew array<System::Windows::Forms::Label^>(College_size);
			this->button = gcnew array<System::Windows::Forms::Button^>(College_size);
			for (int i = 0; i < College_size; i++)
			{
				this->panel[i] = (gcnew System::Windows::Forms::Panel());
				this->name_label[i] = (gcnew System::Windows::Forms::Label());
				this->rent_label[i] = (gcnew System::Windows::Forms::Label());
				this->sharing_label[i] = (gcnew System::Windows::Forms::Label());
				this->college_label[i] = (gcnew System::Windows::Forms::Label());
				this->ac_label[i] = (gcnew System::Windows::Forms::Label());
				this->library_label[i] = (gcnew System::Windows::Forms::Label());
				this->gym_label[i] = (gcnew System::Windows::Forms::Label());
				this->capacity_label[i] = (gcnew System::Windows::Forms::Label());
				this->laundry_label[i] = (gcnew System::Windows::Forms::Label());
				this->rating_label[i] = (gcnew System::Windows::Forms::Label());
				this->button[i] = (gcnew System::Windows::Forms::Button());

				this->display_panel->Controls->Add(this->panel[i]);
				
			
				this->panel[i]->BackColor = System::Drawing::Color::LightCyan;
				this->panel[i]->Controls->Add(this->laundry_label[i]);
				this->panel[i]->Controls->Add(this->capacity_label[i]);
				this->panel[i]->Controls->Add(this->rating_label[i]);
				this->panel[i]->Controls->Add(this->gym_label[i]);
				this->panel[i]->Controls->Add(this->library_label[i]);
				this->panel[i]->Controls->Add(this->ac_label[i]);
				this->panel[i]->Controls->Add(this->college_label[i]);
				this->panel[i]->Controls->Add(this->name_label[i]);
				this->panel[i]->Controls->Add(this->sharing_label[i]);
				this->panel[i]->Controls->Add(this->rent_label[i]);
				this->panel[i]->Controls->Add(this->button[i]);
				this->panel[i]->Location = System::Drawing::Point(xpanel, ypanel);
				this->panel[i]->Name = L"panel" + i;
				this->panel[i]->Size = System::Drawing::Size(1100, 250);
				this->panel[i]->TabIndex = 3;
				panel[i]->Hide();
				x = 30;
				y = 15;

				//name_label
				this->name_label[i]->AutoSize = true;
				this->name_label[i]->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				x = x + 3;
				y = y + 2;
				this->name_label[i]->Location = System::Drawing::Point(x,y);
				this->name_label[i]->Name = L"name_label" + i;
				this->name_label[i]->Size = System::Drawing::Size(206, 38);
				this->name_label[i]->TabIndex = 11;
				this->name_label[i]->Text = L"Hostel Name";
				this->name_label[i]->Visible = false;

				//button
				this->button[i]->BackColor = System::Drawing::Color::YellowGreen;
				this->button[i]->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->button[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button[i]->Location = System::Drawing::Point(x+800,y);
				this->button[i]->Name = L"button"+i;
				this->button[i]->Size = System::Drawing::Size(200, 50);
				this->button[i]->TabIndex = 4;
				this->button[i]->Text = L"Book";
				this->button[i]->Visible = true;
				this->button[i]->UseVisualStyleBackColor = false;
				this->button[i]->Click += gcnew System::EventHandler(this, &hostelsearch::button_Click);

				//rent label
				y = y + 47;
				this->rent_label[i]->AutoSize = true;
				this->rent_label[i]->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->rent_label[i]->Location = System::Drawing::Point(x,y);
				this->rent_label[i]->Name = L"rent_label" + i;
				this->rent_label[i]->Size = System::Drawing::Size(206, 38);
				this->rent_label[i]->TabIndex = 12;
				this->rent_label[i]->Text = L"rent";
				this->rent_label[i]->Visible =false;

				//sharing label
				x = x + 500;
				this->sharing_label[i]->AutoSize = true;
				this->sharing_label[i]->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->sharing_label[i]->Location = System::Drawing::Point(x,y);
				this->sharing_label[i]->Name = L"sharing_label" + i;
				this->sharing_label[i]->Size = System::Drawing::Size(206, 38);
				this->sharing_label[i]->TabIndex = 13;
				this->sharing_label[i]->Text = L"sharing";
				this->sharing_label[i]->Visible = false;

				//ac label
				x = x - 500;
				y = y + 50;
				this->ac_label[i]->AutoSize = true;
				this->ac_label[i]->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->ac_label[i]->Location = System::Drawing::Point(x,y);
				this->ac_label[i]->Name = L"ac_label" + i;
				this->ac_label[i]->Size = System::Drawing::Size(206, 38);
				this->ac_label[i]->TabIndex = 14;
				this->ac_label[i]->Text = L"ac";
				this->ac_label[i]->Visible = false;

				//library label
				x = x + 330;
				this->library_label[i]->AutoSize = true;
				this->library_label[i]->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->library_label[i]->Location = System::Drawing::Point(x,y);
				this->library_label[i]->Name = L"library_label" + i;
				this->library_label[i]->Size = System::Drawing::Size(206, 38);
				this->library_label[i]->TabIndex = 15;
				this->library_label[i]->Text = L"library";
				this->library_label[i]->Visible = false;

				//gym label
				x = x + 330;
				this->gym_label[i]->AutoSize = true;
				this->gym_label[i]->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->gym_label[i]->Location = System::Drawing::Point(x,y);
				this->gym_label[i]->Name = L"gym_label" + i;
				this->gym_label[i]->Size = System::Drawing::Size(206, 38);
				this->gym_label[i]->TabIndex = 16;
				this->gym_label[i]->Text = L"gym";
				this->gym_label[i]->Visible = false;

				//rating label
				x = x - 660;
				y = y + 50;
				this->rating_label[i]->AutoSize = true;
				this->rating_label[i]->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->rating_label[i]->Location = System::Drawing::Point(x,y);
				this->rating_label[i]->Name = L"rating_label" + i;
				this->rating_label[i]->Size = System::Drawing::Size(206, 38);
				this->rating_label[i]->TabIndex = 17;
				this->rating_label[i]->Text = L"rating";
				this->rating_label[i]->Visible = false;

				//capacity label
				x = x + 330;
				this->capacity_label[i]->AutoSize = true;
				this->capacity_label[i]->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->capacity_label[i]->Location = System::Drawing::Point(x,y);
				this->capacity_label[i]->Name = L"capacity_label" + i;
				this->capacity_label[i]->Size = System::Drawing::Size(206, 38);
				this->capacity_label[i]->TabIndex = 18;
				this->capacity_label[i]->Text = L"capacity";
				this->capacity_label[i]->Visible = false;

				//laundry label
				x = x + 330;
				this->laundry_label[i]->AutoSize = true;
				this->laundry_label[i]->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->laundry_label[i]->Location = System::Drawing::Point(x,y);
				this->laundry_label[i]->Name = L"laundry_label" + i;
				this->laundry_label[i]->Size = System::Drawing::Size(206, 38);
				this->laundry_label[i]->TabIndex = 19;
				this->laundry_label[i]->Text = L"laundry";
				this->laundry_label[i]->Visible = false;

				//college label
				x = x - 660;
				y = y + 50;
				this->college_label[i]->AutoSize = true;
				this->college_label[i]->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->college_label[i]->Location = System::Drawing::Point(x,y);
				this->college_label[i]->Name = L"college_label" + i;
				this->college_label[i]->Size = System::Drawing::Size(300, 38);
				this->college_label[i]->TabIndex = 20;
				this->college_label[i]->Text = L"College Name";
				this->college_label[i]->Visible = false;

				
			
				xpanel = 30;
				ypanel = ypanel+y+75;
				x = 30;
				y = 15;

				this->panel[i]->ResumeLayout(false);
				this->panel[i]->PerformLayout();
				this->panel[i]->SuspendLayout();
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~hostelsearch()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ top_panel;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ filter_panel;
	private: System::Windows::Forms::Panel^ display_panel;

	private: array<System::Windows::Forms::Label^>^ name_label;
	private: array<System::Windows::Forms::Label^>^ rent_label;
	private: array<System::Windows::Forms::Label^>^ sharing_label;
	private: array<System::Windows::Forms::Label^>^ college_label;
	private: array<System::Windows::Forms::Label^>^ ac_label;
	private: array<System::Windows::Forms::Label^>^ library_label;
	private: array<System::Windows::Forms::Label^>^ gym_label;
	private: array<System::Windows::Forms::Label^>^ rating_label;
	private: array<System::Windows::Forms::Label^>^ capacity_label;
	private: array<System::Windows::Forms::Label^>^ laundry_label;
	private: array<System::Windows::Forms::Button^>^ button;

	private: array<System::Windows::Forms::Panel^>^ panel;
	private: System::Windows::Forms::Label^ ac_preference_label;
	private: System::Windows::Forms::Label^ sharing_filter_label;
	private: System::Windows::Forms::Label^ filter_label;
	private: System::Windows::Forms::Label^ gym_preference_label;
	private: System::Windows::Forms::Label^ library_preference_label;
	private: System::Windows::Forms::Label^ laundry_preference_label;
	private: System::Windows::Forms::Label^ rating_filter_label;
	private: System::Windows::Forms::Label^ capacity_preference_label;
	private: System::Windows::Forms::Label^ rent_filter_label;
	private: System::Windows::Forms::CheckBox^ laundry_no;
	private: System::Windows::Forms::CheckBox^ laundry_yes;
	private: System::Windows::Forms::CheckBox^ library_no;
	private: System::Windows::Forms::CheckBox^ library_yes;
	private: System::Windows::Forms::CheckBox^ gym_no;
	private: System::Windows::Forms::CheckBox^ gym_yes;
	private: System::Windows::Forms::CheckBox^ ac_no;
	private: System::Windows::Forms::CheckBox^ ac_yes;
	private: System::Windows::Forms::CheckBox^ cfour;
	private: System::Windows::Forms::CheckBox^ cthree;
	private: System::Windows::Forms::CheckBox^ ctwo;
	private: System::Windows::Forms::Button^ filterapply_button;
	private: System::Windows::Forms::CheckBox^ capacity300400;
	private: System::Windows::Forms::CheckBox^ capacity200300;
	private: System::Windows::Forms::CheckBox^ capacity200;
	private: System::Windows::Forms::CheckBox^ rent_10;
	private: System::Windows::Forms::CheckBox^ rent_7to10;
	private: System::Windows::Forms::CheckBox^ rent_5to7;
	private: System::Windows::Forms::CheckBox^ rating4650;
	private: System::Windows::Forms::CheckBox^ rating4145;
	private: System::Windows::Forms::CheckBox^ rating3140;
	private: System::Windows::Forms::CheckBox^ rating3;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(hostelsearch::typeid));
			this->top_panel = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->filter_panel = (gcnew System::Windows::Forms::Panel());
			this->rating4650 = (gcnew System::Windows::Forms::CheckBox());
			this->rating4145 = (gcnew System::Windows::Forms::CheckBox());
			this->rating3140 = (gcnew System::Windows::Forms::CheckBox());
			this->rating3 = (gcnew System::Windows::Forms::CheckBox());
			this->filterapply_button = (gcnew System::Windows::Forms::Button());
			this->capacity300400 = (gcnew System::Windows::Forms::CheckBox());
			this->capacity200300 = (gcnew System::Windows::Forms::CheckBox());
			this->capacity200 = (gcnew System::Windows::Forms::CheckBox());
			this->rent_10 = (gcnew System::Windows::Forms::CheckBox());
			this->rent_7to10 = (gcnew System::Windows::Forms::CheckBox());
			this->rent_5to7 = (gcnew System::Windows::Forms::CheckBox());
			this->laundry_no = (gcnew System::Windows::Forms::CheckBox());
			this->laundry_yes = (gcnew System::Windows::Forms::CheckBox());
			this->library_no = (gcnew System::Windows::Forms::CheckBox());
			this->library_yes = (gcnew System::Windows::Forms::CheckBox());
			this->gym_no = (gcnew System::Windows::Forms::CheckBox());
			this->gym_yes = (gcnew System::Windows::Forms::CheckBox());
			this->ac_no = (gcnew System::Windows::Forms::CheckBox());
			this->ac_yes = (gcnew System::Windows::Forms::CheckBox());
			this->cfour = (gcnew System::Windows::Forms::CheckBox());
			this->cthree = (gcnew System::Windows::Forms::CheckBox());
			this->ctwo = (gcnew System::Windows::Forms::CheckBox());
			this->rating_filter_label = (gcnew System::Windows::Forms::Label());
			this->capacity_preference_label = (gcnew System::Windows::Forms::Label());
			this->rent_filter_label = (gcnew System::Windows::Forms::Label());
			this->laundry_preference_label = (gcnew System::Windows::Forms::Label());
			this->library_preference_label = (gcnew System::Windows::Forms::Label());
			this->gym_preference_label = (gcnew System::Windows::Forms::Label());
			this->ac_preference_label = (gcnew System::Windows::Forms::Label());
			this->sharing_filter_label = (gcnew System::Windows::Forms::Label());
			this->filter_label = (gcnew System::Windows::Forms::Label());
			this->display_panel = (gcnew System::Windows::Forms::Panel());
			this->top_panel->SuspendLayout();
			this->filter_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// top_panel
			// 
			this->top_panel->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->top_panel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"top_panel.BackgroundImage")));
			this->top_panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->top_panel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->top_panel->Controls->Add(this->comboBox1);
			this->top_panel->Controls->Add(this->label1);
			this->top_panel->Dock = System::Windows::Forms::DockStyle::Top;
			this->top_panel->Location = System::Drawing::Point(0, 0);
			this->top_panel->Name = L"top_panel";
			this->top_panel->Size = System::Drawing::Size(1490, 212);
			this->top_panel->TabIndex = 0;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.8F));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"College1", L"College2", L"College3", L"College4",
					L"College5", L"College6", L"College7", L"College8", L"College9"
			});
			this->comboBox1->Location = System::Drawing::Point(593, 86);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(425, 44);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &hostelsearch::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23.8F));
			this->label1->ForeColor = System::Drawing::Color::Orange;
			this->label1->Location = System::Drawing::Point(219, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(351, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter your College";
			// 
			// filter_panel
			// 
			this->filter_panel->AutoScroll = true;
			this->filter_panel->BackColor = System::Drawing::Color::SeaShell;
			this->filter_panel->Controls->Add(this->rating4650);
			this->filter_panel->Controls->Add(this->rating4145);
			this->filter_panel->Controls->Add(this->rating3140);
			this->filter_panel->Controls->Add(this->rating3);
			this->filter_panel->Controls->Add(this->filterapply_button);
			this->filter_panel->Controls->Add(this->capacity300400);
			this->filter_panel->Controls->Add(this->capacity200300);
			this->filter_panel->Controls->Add(this->capacity200);
			this->filter_panel->Controls->Add(this->rent_10);
			this->filter_panel->Controls->Add(this->rent_7to10);
			this->filter_panel->Controls->Add(this->rent_5to7);
			this->filter_panel->Controls->Add(this->laundry_no);
			this->filter_panel->Controls->Add(this->laundry_yes);
			this->filter_panel->Controls->Add(this->library_no);
			this->filter_panel->Controls->Add(this->library_yes);
			this->filter_panel->Controls->Add(this->gym_no);
			this->filter_panel->Controls->Add(this->gym_yes);
			this->filter_panel->Controls->Add(this->ac_no);
			this->filter_panel->Controls->Add(this->ac_yes);
			this->filter_panel->Controls->Add(this->cfour);
			this->filter_panel->Controls->Add(this->cthree);
			this->filter_panel->Controls->Add(this->ctwo);
			this->filter_panel->Controls->Add(this->rating_filter_label);
			this->filter_panel->Controls->Add(this->capacity_preference_label);
			this->filter_panel->Controls->Add(this->rent_filter_label);
			this->filter_panel->Controls->Add(this->laundry_preference_label);
			this->filter_panel->Controls->Add(this->library_preference_label);
			this->filter_panel->Controls->Add(this->gym_preference_label);
			this->filter_panel->Controls->Add(this->ac_preference_label);
			this->filter_panel->Controls->Add(this->sharing_filter_label);
			this->filter_panel->Controls->Add(this->filter_label);
			this->filter_panel->Dock = System::Windows::Forms::DockStyle::Left;
			this->filter_panel->Location = System::Drawing::Point(0, 212);
			this->filter_panel->Name = L"filter_panel";
			this->filter_panel->Size = System::Drawing::Size(310, 587);
			this->filter_panel->TabIndex = 1;
			// 
			// rating4650
			// 
			this->rating4650->AutoSize = true;
			this->rating4650->ForeColor = System::Drawing::Color::SteelBlue;
			this->rating4650->Location = System::Drawing::Point(138, 554);
			this->rating4650->Name = L"rating4650";
			this->rating4650->Size = System::Drawing::Size(83, 21);
			this->rating4650->TabIndex = 30;
			this->rating4650->Text = L"4.6 - 5.0";
			this->rating4650->UseVisualStyleBackColor = true;
			// 
			// rating4145
			// 
			this->rating4145->AutoSize = true;
			this->rating4145->ForeColor = System::Drawing::Color::SteelBlue;
			this->rating4145->Location = System::Drawing::Point(30, 554);
			this->rating4145->Name = L"rating4145";
			this->rating4145->Size = System::Drawing::Size(83, 21);
			this->rating4145->TabIndex = 29;
			this->rating4145->Text = L"4.1 - 4.5";
			this->rating4145->UseVisualStyleBackColor = true;
			// 
			// rating3140
			// 
			this->rating3140->AutoSize = true;
			this->rating3140->ForeColor = System::Drawing::Color::SteelBlue;
			this->rating3140->Location = System::Drawing::Point(138, 527);
			this->rating3140->Name = L"rating3140";
			this->rating3140->Size = System::Drawing::Size(83, 21);
			this->rating3140->TabIndex = 28;
			this->rating3140->Text = L"3.1 - 4.0";
			this->rating3140->UseVisualStyleBackColor = true;
			// 
			// rating3
			// 
			this->rating3->AutoSize = true;
			this->rating3->ForeColor = System::Drawing::Color::SteelBlue;
			this->rating3->Location = System::Drawing::Point(30, 527);
			this->rating3->Name = L"rating3";
			this->rating3->Size = System::Drawing::Size(70, 21);
			this->rating3->TabIndex = 27;
			this->rating3->Text = L"upto 3";
			this->rating3->UseVisualStyleBackColor = true;
			// 
			// filterapply_button
			// 
			this->filterapply_button->BackColor = System::Drawing::Color::LightBlue;
			this->filterapply_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->filterapply_button->ForeColor = System::Drawing::Color::DarkRed;
			this->filterapply_button->Location = System::Drawing::Point(155, 24);
			this->filterapply_button->Name = L"filterapply_button";
			this->filterapply_button->Size = System::Drawing::Size(110, 45);
			this->filterapply_button->TabIndex = 26;
			this->filterapply_button->Text = L"Apply";
			this->filterapply_button->UseVisualStyleBackColor = false;
			this->filterapply_button->Click += gcnew System::EventHandler(this, &hostelsearch::filterapply_button_Click);
			// 
			// capacity300400
			// 
			this->capacity300400->AutoSize = true;
			this->capacity300400->ForeColor = System::Drawing::Color::SteelBlue;
			this->capacity300400->Location = System::Drawing::Point(211, 476);
			this->capacity300400->Name = L"capacity300400";
			this->capacity300400->Size = System::Drawing::Size(83, 21);
			this->capacity300400->TabIndex = 25;
			this->capacity300400->Text = L"301-400";
			this->capacity300400->UseVisualStyleBackColor = true;
			// 
			// capacity200300
			// 
			this->capacity200300->AutoSize = true;
			this->capacity200300->ForeColor = System::Drawing::Color::SteelBlue;
			this->capacity200300->Location = System::Drawing::Point(115, 476);
			this->capacity200300->Name = L"capacity200300";
			this->capacity200300->Size = System::Drawing::Size(83, 21);
			this->capacity200300->TabIndex = 24;
			this->capacity200300->Text = L"201-300";
			this->capacity200300->UseVisualStyleBackColor = true;
			// 
			// capacity200
			// 
			this->capacity200->AutoSize = true;
			this->capacity200->ForeColor = System::Drawing::Color::SteelBlue;
			this->capacity200->Location = System::Drawing::Point(16, 476);
			this->capacity200->Name = L"capacity200";
			this->capacity200->Size = System::Drawing::Size(88, 21);
			this->capacity200->TabIndex = 23;
			this->capacity200->Text = L"Upto 200";
			this->capacity200->UseVisualStyleBackColor = true;
			// 
			// rent_10
			// 
			this->rent_10->AutoSize = true;
			this->rent_10->ForeColor = System::Drawing::Color::SteelBlue;
			this->rent_10->Location = System::Drawing::Point(216, 409);
			this->rent_10->Name = L"rent_10";
			this->rent_10->Size = System::Drawing::Size(78, 21);
			this->rent_10->TabIndex = 22;
			this->rent_10->Text = L">10000";
			this->rent_10->UseVisualStyleBackColor = true;
			// 
			// rent_7to10
			// 
			this->rent_7to10->AutoSize = true;
			this->rent_7to10->ForeColor = System::Drawing::Color::SteelBlue;
			this->rent_7to10->Location = System::Drawing::Point(114, 409);
			this->rent_7to10->Name = L"rent_7to10";
			this->rent_7to10->Size = System::Drawing::Size(107, 21);
			this->rent_7to10->TabIndex = 21;
			this->rent_7to10->Text = L"7001-10000";
			this->rent_7to10->UseVisualStyleBackColor = true;
			// 
			// rent_5to7
			// 
			this->rent_5to7->AutoSize = true;
			this->rent_5to7->ForeColor = System::Drawing::Color::SteelBlue;
			this->rent_5to7->Location = System::Drawing::Point(14, 409);
			this->rent_5to7->Name = L"rent_5to7";
			this->rent_5to7->Size = System::Drawing::Size(99, 21);
			this->rent_5to7->TabIndex = 20;
			this->rent_5to7->Text = L"5000-7000";
			this->rent_5to7->UseVisualStyleBackColor = true;
			// 
			// laundry_no
			// 
			this->laundry_no->AutoSize = true;
			this->laundry_no->ForeColor = System::Drawing::Color::SteelBlue;
			this->laundry_no->Location = System::Drawing::Point(155, 346);
			this->laundry_no->Name = L"laundry_no";
			this->laundry_no->Size = System::Drawing::Size(48, 21);
			this->laundry_no->TabIndex = 19;
			this->laundry_no->Text = L"No";
			this->laundry_no->UseVisualStyleBackColor = true;
			// 
			// laundry_yes
			// 
			this->laundry_yes->AutoSize = true;
			this->laundry_yes->ForeColor = System::Drawing::Color::SteelBlue;
			this->laundry_yes->Location = System::Drawing::Point(34, 346);
			this->laundry_yes->Name = L"laundry_yes";
			this->laundry_yes->Size = System::Drawing::Size(54, 21);
			this->laundry_yes->TabIndex = 18;
			this->laundry_yes->Text = L"Yes";
			this->laundry_yes->UseVisualStyleBackColor = true;
			// 
			// library_no
			// 
			this->library_no->AutoSize = true;
			this->library_no->ForeColor = System::Drawing::Color::SteelBlue;
			this->library_no->Location = System::Drawing::Point(155, 282);
			this->library_no->Name = L"library_no";
			this->library_no->Size = System::Drawing::Size(48, 21);
			this->library_no->TabIndex = 17;
			this->library_no->Text = L"No";
			this->library_no->UseVisualStyleBackColor = true;
			// 
			// library_yes
			// 
			this->library_yes->AutoSize = true;
			this->library_yes->ForeColor = System::Drawing::Color::SteelBlue;
			this->library_yes->Location = System::Drawing::Point(34, 282);
			this->library_yes->Name = L"library_yes";
			this->library_yes->Size = System::Drawing::Size(54, 21);
			this->library_yes->TabIndex = 16;
			this->library_yes->Text = L"Yes";
			this->library_yes->UseVisualStyleBackColor = true;
			// 
			// gym_no
			// 
			this->gym_no->AutoSize = true;
			this->gym_no->ForeColor = System::Drawing::Color::SteelBlue;
			this->gym_no->Location = System::Drawing::Point(155, 216);
			this->gym_no->Name = L"gym_no";
			this->gym_no->Size = System::Drawing::Size(48, 21);
			this->gym_no->TabIndex = 15;
			this->gym_no->Text = L"No";
			this->gym_no->UseVisualStyleBackColor = true;
			// 
			// gym_yes
			// 
			this->gym_yes->AutoSize = true;
			this->gym_yes->ForeColor = System::Drawing::Color::SteelBlue;
			this->gym_yes->Location = System::Drawing::Point(34, 216);
			this->gym_yes->Name = L"gym_yes";
			this->gym_yes->Size = System::Drawing::Size(54, 21);
			this->gym_yes->TabIndex = 14;
			this->gym_yes->Text = L"Yes";
			this->gym_yes->UseVisualStyleBackColor = true;
			// 
			// ac_no
			// 
			this->ac_no->AutoSize = true;
			this->ac_no->ForeColor = System::Drawing::Color::SteelBlue;
			this->ac_no->Location = System::Drawing::Point(147, 155);
			this->ac_no->Name = L"ac_no";
			this->ac_no->Size = System::Drawing::Size(48, 21);
			this->ac_no->TabIndex = 13;
			this->ac_no->Text = L"No";
			this->ac_no->UseVisualStyleBackColor = true;
			// 
			// ac_yes
			// 
			this->ac_yes->AutoSize = true;
			this->ac_yes->ForeColor = System::Drawing::Color::SteelBlue;
			this->ac_yes->Location = System::Drawing::Point(34, 155);
			this->ac_yes->Name = L"ac_yes";
			this->ac_yes->Size = System::Drawing::Size(54, 21);
			this->ac_yes->TabIndex = 12;
			this->ac_yes->Text = L"Yes";
			this->ac_yes->UseVisualStyleBackColor = true;
			// 
			// cfour
			// 
			this->cfour->AutoSize = true;
			this->cfour->ForeColor = System::Drawing::Color::SteelBlue;
			this->cfour->Location = System::Drawing::Point(206, 104);
			this->cfour->Name = L"cfour";
			this->cfour->Size = System::Drawing::Size(59, 21);
			this->cfour->TabIndex = 11;
			this->cfour->Text = L"Four";
			this->cfour->UseVisualStyleBackColor = true;
			// 
			// cthree
			// 
			this->cthree->AutoSize = true;
			this->cthree->ForeColor = System::Drawing::Color::SteelBlue;
			this->cthree->Location = System::Drawing::Point(114, 104);
			this->cthree->Name = L"cthree";
			this->cthree->Size = System::Drawing::Size(68, 21);
			this->cthree->TabIndex = 10;
			this->cthree->Text = L"Three";
			this->cthree->UseVisualStyleBackColor = true;
			// 
			// ctwo
			// 
			this->ctwo->AutoSize = true;
			this->ctwo->ForeColor = System::Drawing::Color::SteelBlue;
			this->ctwo->Location = System::Drawing::Point(30, 104);
			this->ctwo->Name = L"ctwo";
			this->ctwo->Size = System::Drawing::Size(56, 21);
			this->ctwo->TabIndex = 9;
			this->ctwo->Text = L"Two";
			this->ctwo->UseVisualStyleBackColor = true;
			// 
			// rating_filter_label
			// 
			this->rating_filter_label->AutoSize = true;
			this->rating_filter_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold));
			this->rating_filter_label->ForeColor = System::Drawing::Color::SteelBlue;
			this->rating_filter_label->Location = System::Drawing::Point(14, 500);
			this->rating_filter_label->Name = L"rating_filter_label";
			this->rating_filter_label->Size = System::Drawing::Size(79, 24);
			this->rating_filter_label->TabIndex = 8;
			this->rating_filter_label->Text = L"Ratings";
			// 
			// capacity_preference_label
			// 
			this->capacity_preference_label->AutoSize = true;
			this->capacity_preference_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold));
			this->capacity_preference_label->ForeColor = System::Drawing::Color::SteelBlue;
			this->capacity_preference_label->Location = System::Drawing::Point(14, 438);
			this->capacity_preference_label->Name = L"capacity_preference_label";
			this->capacity_preference_label->Size = System::Drawing::Size(89, 24);
			this->capacity_preference_label->TabIndex = 7;
			this->capacity_preference_label->Text = L"Capacity";
			// 
			// rent_filter_label
			// 
			this->rent_filter_label->AutoSize = true;
			this->rent_filter_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold));
			this->rent_filter_label->ForeColor = System::Drawing::Color::SteelBlue;
			this->rent_filter_label->Location = System::Drawing::Point(14, 370);
			this->rent_filter_label->Name = L"rent_filter_label";
			this->rent_filter_label->Size = System::Drawing::Size(53, 24);
			this->rent_filter_label->TabIndex = 6;
			this->rent_filter_label->Text = L"Rent";
			// 
			// laundry_preference_label
			// 
			this->laundry_preference_label->AutoSize = true;
			this->laundry_preference_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold));
			this->laundry_preference_label->ForeColor = System::Drawing::Color::SteelBlue;
			this->laundry_preference_label->Location = System::Drawing::Point(14, 319);
			this->laundry_preference_label->Name = L"laundry_preference_label";
			this->laundry_preference_label->Size = System::Drawing::Size(193, 24);
			this->laundry_preference_label->TabIndex = 5;
			this->laundry_preference_label->Text = L"Laundry preference";
			// 
			// library_preference_label
			// 
			this->library_preference_label->AutoSize = true;
			this->library_preference_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold));
			this->library_preference_label->ForeColor = System::Drawing::Color::SteelBlue;
			this->library_preference_label->Location = System::Drawing::Point(14, 255);
			this->library_preference_label->Name = L"library_preference_label";
			this->library_preference_label->Size = System::Drawing::Size(181, 24);
			this->library_preference_label->TabIndex = 4;
			this->library_preference_label->Text = L"Library preference";
			// 
			// gym_preference_label
			// 
			this->gym_preference_label->AutoSize = true;
			this->gym_preference_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold));
			this->gym_preference_label->ForeColor = System::Drawing::Color::SteelBlue;
			this->gym_preference_label->Location = System::Drawing::Point(12, 189);
			this->gym_preference_label->Name = L"gym_preference_label";
			this->gym_preference_label->Size = System::Drawing::Size(160, 24);
			this->gym_preference_label->TabIndex = 3;
			this->gym_preference_label->Text = L"Gym preference";
			// 
			// ac_preference_label
			// 
			this->ac_preference_label->AutoSize = true;
			this->ac_preference_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold));
			this->ac_preference_label->ForeColor = System::Drawing::Color::SteelBlue;
			this->ac_preference_label->Location = System::Drawing::Point(12, 128);
			this->ac_preference_label->Name = L"ac_preference_label";
			this->ac_preference_label->Size = System::Drawing::Size(146, 24);
			this->ac_preference_label->TabIndex = 2;
			this->ac_preference_label->Text = L"AC preference";
			// 
			// sharing_filter_label
			// 
			this->sharing_filter_label->AutoSize = true;
			this->sharing_filter_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->sharing_filter_label->ForeColor = System::Drawing::Color::SteelBlue;
			this->sharing_filter_label->Location = System::Drawing::Point(14, 77);
			this->sharing_filter_label->Name = L"sharing_filter_label";
			this->sharing_filter_label->Size = System::Drawing::Size(140, 24);
			this->sharing_filter_label->TabIndex = 1;
			this->sharing_filter_label->Text = L"Room sharing";
			// 
			// filter_label
			// 
			this->filter_label->AutoSize = true;
			this->filter_label->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->filter_label->ForeColor = System::Drawing::Color::Green;
			this->filter_label->Location = System::Drawing::Point(37, 24);
			this->filter_label->Name = L"filter_label";
			this->filter_label->Size = System::Drawing::Size(104, 42);
			this->filter_label->TabIndex = 0;
			this->filter_label->Text = L"Filter";
			// 
			// display_panel
			// 
			this->display_panel->AutoScroll = true;
			this->display_panel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"display_panel.BackgroundImage")));
			this->display_panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->display_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->display_panel->Location = System::Drawing::Point(310, 212);
			this->display_panel->Name = L"display_panel";
			this->display_panel->Size = System::Drawing::Size(1180, 587);
			this->display_panel->TabIndex = 2;
			// 
			// hostelsearch
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1490, 799);
			this->Controls->Add(this->display_panel);
			this->Controls->Add(this->filter_panel);
			this->Controls->Add(this->top_panel);
			this->Name = L"hostelsearch";
			this->Text = L"hostelsearch";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->top_panel->ResumeLayout(false);
			this->top_panel->PerformLayout();
			this->filter_panel->ResumeLayout(false);
			this->filter_panel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		
	private: void searching() {
		String^ name;
		int rent;
		int sharing;
		String^ college;
		Boolean ac;
		Boolean library;
		Boolean gym;
		float rating;
		int capacity;
		Boolean laundry;

		Boolean search_found = true;  //currently not working
		int i = 0;
		

		String^ constring = L"datasource=localhost;port=3306;username=root;password=mufid@mysql048";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmd = gcnew MySqlCommand("select * from hostel_system.hostel_list where college ='" + this->comboBox1->Text + "';", conDataBase);
		MySqlDataReader^ reader;


		try {
			conDataBase->Open();
			reader = cmd->ExecuteReader();
			while (reader->Read()) {

				panel[i]->Show();
				name = reader->GetString(1);
				name_label[i]->Text = "Hostel Name : " + name;
				button[i]->Name = name;

				rent = reader->GetInt16(2);
				rent_label[i]->Text = "Rent : " + rent.ToString();

				sharing = reader->GetInt16(3);
				sharing_label[i]->Text = "Room Sharing : " + sharing.ToString();

				college = reader->GetString(4);
				college_label[i]->Text = "Affiliated Collage : " + college;

				ac = reader->GetBoolean(5);
				if (ac)
					ac_label[i]->Text = "AC : available";
				else
					ac_label[i]->Text = "AC : unavailable";

				library = reader->GetBoolean(6);
				if (library)
					library_label[i]->Text = "Library : available";
				else
					library_label[i]->Text = "Library : unavailable";

				gym = reader->GetBoolean(7);
				if (gym)
					gym_label[i]->Text = "Gym : available";
				else
					gym_label[i]->Text = "Gym : unavailable";

				rating = reader->GetFloat(8);
				rating_label[i]->Text = "Ratings : " + rating.ToString();

				capacity = reader->GetInt16(9);
				capacity_label[i]->Text = "Hostel capacity : " + capacity.ToString();

				laundry = reader->GetBoolean(10);
				if (laundry)
					laundry_label[i]->Text = "Laundry service : available";
				else
					laundry_label[i]->Text = "Laundry service : unavailable";

				//changing visibility

				name_label[i]->Visible = true;
				rent_label[i]->Visible = true;
				sharing_label[i]->Visible = true;
				college_label[i]->Visible = true;
				ac_label[i]->Visible = true;
				library_label[i]->Visible = true;
				gym_label[i]->Visible = true;
				rating_label[i]->Visible = true;
				capacity_label[i]->Visible = true;
				laundry_label[i]->Visible = true;
				i++;
				
			}
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}
	private: void searching_filter() {
		String^ name;
		int rent;
		int sharing;
		String^ college;
		Boolean ac;
		Boolean library;
		Boolean gym;
		float rating;
		int capacity;
		Boolean laundry;

		Boolean search_found = true;  //currently not working
		int i = 0;

		String^ constring = L"datasource=localhost;port=3306;username=root;password=mufid@mysql048";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmd = gcnew MySqlCommand("select * from hostel_system.hostel_list where college ='" + this->comboBox1->Text + "';", conDataBase);
		MySqlDataReader^ reader;


		try {
			conDataBase->Open();
			reader = cmd->ExecuteReader();
			while (reader->Read()) {

				
				name = reader->GetString(1);
				name_label[i]->Text = "Hostel Name : " + name;
				button[i]->Name = name;

				rent = reader->GetInt16(2);
				if (rent_5to7->Checked || rent_7to10->Checked || rent_10->Checked) {
					if (rent_5to7->Checked) {
						if (rent >= 5000 && rent <= 7000) {
							rent_label[i]->Text = "Rent : " + rent.ToString();
						}
						else {
							if(rent_7to10->Checked||rent_10->Checked){}
							else
							 continue;
						}
					}
					if (rent_7to10->Checked) {
						if (rent > 7000 && rent <= 10000) {
							rent_label[i]->Text = "Rent : " + rent.ToString();
						}
						else {
							if (rent_5to7->Checked || rent_10->Checked) {}
							else
								continue;
						}
					}
					if (rent_10->Checked) {
						if (rent > 10000) {
							rent_label[i]->Text = "Rent : " + rent.ToString();
						}
						else {
								continue;
						}
					}

				}
			    else {
				rent_label[i]->Text = "Rent : " + rent.ToString();
			    }

				//sharing filter
				sharing = reader->GetInt16(3);
				if (ctwo->Checked || cthree->Checked || cfour->Checked) {
					if (ctwo->Checked) {
						if (sharing == 2) {
							sharing_label[i]->Text = "Room Sharing : " + sharing.ToString();
						}
						else {
							if (cthree->Checked || cfour->Checked) {}
							else
								continue;
						}
					}
					if (cthree->Checked) {
						if (sharing == 3) {
							sharing_label[i]->Text = "Room Sharing : " + sharing.ToString();
						}
						else {
							if (ctwo->Checked || cfour->Checked) {}
							else
								continue;
						}
					}
					if (cfour->Checked) {
						if (sharing == 4) {
							sharing_label[i]->Text = "Room Sharing : " + sharing.ToString();
						}
						else {
							if (cthree->Checked || ctwo->Checked) {}
							else
								continue;
						}
					}
				}
				else {
					sharing_label[i]->Text = "Room Sharing : " + sharing.ToString();
				}
				

				college = reader->GetString(4);
				college_label[i]->Text = "Affiliated Collage : " + college;

				//filtering ac
				ac = reader->GetBoolean(5);
				if (ac_yes->Checked || ac_no->Checked) {
					if (ac_yes->Checked) {
						if (ac)
							ac_label[i]->Text = "AC : available";
						else
							continue;
					}
					if (ac_no->Checked) {
						if (!ac)
							ac_label[i]->Text = "AC : unavailable";
						else
							continue;
					}
				}
				else {
					if (ac)
						ac_label[i]->Text = "AC : available";
					else
						ac_label[i]->Text = "AC : unavailable";
				}
				

				//library filter
				library = reader->GetBoolean(6);
				if (library_yes->Checked || library_no->Checked) {
					if (library_yes->Checked) {
						if (library)
							library_label[i]->Text = "Library : available";
						else
							continue;
					}
					if (laundry_no->Checked) {
						if (!library)
							library_label[i]->Text = "Library : unavailable";
						else
							continue;
					}
				}
				else {
					if (library)
						library_label[i]->Text = "Library : available";
					else
						library_label[i]->Text = "Library : unavailable";
				}

				//filtering gym
				gym = reader->GetBoolean(7);
				if (gym_yes->Checked || gym_no->Checked) {
					if (gym_yes->Checked) {
						if (gym)
							gym_label[i]->Text = "Gym : available";
						else
							continue;
					}
					if (gym_no->Checked) {
						if (!gym)
							gym_label[i]->Text = "Gym : unavailable";
						else
							continue;
					}					
				}
				else {
					if (gym)
						gym_label[i]->Text = "Gym : available";
					else
						gym_label[i]->Text = "Gym : unavailable";
				}
				
				//rating filter
				rating = reader->GetFloat(8);
				if (rating3->Checked || rating3140->Checked || rating4145->Checked || rating4650->Checked){
					if (rating3->Checked) {
						if (rating <= 3.0) {
							rating_label[i]->Text = "Ratings : " + rating.ToString();
						}
						else {
							if (rating3140->Checked || rating4145->Checked || rating4650->Checked) {}
							else
								continue;
						}
					}
					if (rating3140->Checked) {
						if (rating > 3.0 && rating <=4.0) {
							rating_label[i]->Text = "Ratings : " + rating.ToString();
						}
						else {
							if (rating3->Checked || rating4145->Checked || rating4650->Checked) {}
							else
								continue;
						}
					}
					if (rating4145->Checked) {
						if (rating >4.0 && rating <=4.5) {
							rating_label[i]->Text = "Ratings : " + rating.ToString();
						}
						else {
							if (rating3140->Checked || rating3->Checked || rating4650->Checked) {}
							else
								continue;
						}
					}
					if (rating4650->Checked) {
						if (rating >4.5 && rating <=5.0) {
							rating_label[i]->Text = "Ratings : " + rating.ToString();
						}
						else {
							if (rating3140->Checked || rating4145->Checked || rating3->Checked) {}
							else
								continue;
						}
					}
				}
				else {
					rating_label[i]->Text = "Ratings : " + rating.ToString();
				}
				
				//capacity filter
				capacity = reader->GetInt16(9);
				if (capacity200->Checked || capacity200300->Checked || capacity300400->Checked) {
					if (capacity200->Checked) {
						if (capacity <= 200) {
							capacity_label[i]->Text = "Hostel capacity : " + capacity.ToString();
						}
						else {
							if(capacity200300->Checked || capacity300400->Checked){}
							else {
								continue;
							}
						}
					}
					if (capacity200300->Checked) {
						if (capacity > 200 && capacity <=300) {
							capacity_label[i]->Text = "Hostel capacity : " + capacity.ToString();
						}
						else {
							if (capacity200->Checked || capacity300400->Checked) {}
							else {
								continue;
							}
						}
					}
					if (capacity300400->Checked) {
						if (capacity >300 && capacity <= 400) {
							capacity_label[i]->Text = "Hostel capacity : " + capacity.ToString();
						}
						else {
							if (capacity200300->Checked || capacity200->Checked) {}
							else {
								continue;
							}
						}
					}
				}
				else {
					capacity_label[i]->Text = "Hostel capacity : " + capacity.ToString();
				}
				

				//filtering laundry
				laundry = reader->GetBoolean(10);
				if (laundry_yes->Checked || laundry_no->Checked) {
					if (laundry_yes->Checked) {
						if (laundry)
							laundry_label[i]->Text = "Laundry service : available";
						else
							continue;
					}
					if (laundry_no->Checked) {
						if (!laundry)
							laundry_label[i]->Text = "Laundry service : unavailable";
						else
							continue;
					}
				}
				else {
					if (laundry)
						laundry_label[i]->Text = "Laundry service : available";
					else
						laundry_label[i]->Text = "Laundry service : unavailable";
				}
				

				//showing content
				//changing visibility
				panel[i]->Show();
				name_label[i]->Visible = true;
				rent_label[i]->Visible = true;
				sharing_label[i]->Visible = true;
				college_label[i]->Visible = true;
				ac_label[i]->Visible = true;
				library_label[i]->Visible = true;
				gym_label[i]->Visible = true;
				rating_label[i]->Visible = true;
				capacity_label[i]->Visible = true;
				laundry_label[i]->Visible = true;
				i++;
			}
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}

	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < College_size; i++) {
			panel[i]->Hide();
		}
		searching();
	}
private: System::Void filterapply_button_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < College_size; i++) {
		panel[i]->Hide();
	}
	searching_filter();
}
	   private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
		   Button^ a = (Button^)sender;
		   String^ s = a->Name;
		   String^ sr = usernameset::user;
		   String^ constring = L"datasource=localhost;port=3306;username=root;password=mufid@mysql048";
		   MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		   MySqlCommand^ cmdDataBase = gcnew MySqlCommand("UPDATE `hostel_system`.`login` SET `hostel` = '"+s+"' WHERE (`Username` = '"+sr+"'); ", conDataBase);
		   MySqlDataReader^ reader;
		   try
		   {
			   conDataBase->Open();
			   reader = cmdDataBase->ExecuteReader();
			   Boolean checker = false;
			   while (reader->Read()) {
				   checker = true;
			   }			   
			   if (MessageBox::Show("Are you sure you want to register for this hostel?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == Windows::Forms::DialogResult::Yes) {
				   String^ msg = "Temparary Registration is Done\nPay your Fees from \'Pay Fees\' option on Main page to conform registration\nVisit your hostel for further process\nThank you";
				   MessageBox::Show(msg, "Registration Done", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   }
		   }
		   catch (Exception^ e)
		   {
			   String^ msg = "Could not register at this moment\nTry again later";
			   MessageBox::Show(msg, "Registration unsuccessfull", MessageBoxButtons::OK, MessageBoxIcon::Error);
		   }
	   }
    };
}