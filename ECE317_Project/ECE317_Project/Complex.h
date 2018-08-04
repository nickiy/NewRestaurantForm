#pragma once
#include "MyForm.h"
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include "MyForm5.h"
#include "MyForm6.h"
#include "MyForm7.h"
#include "MyForm8.h"
#include "MyForm9.h"

namespace ECE317_Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Complex
	/// </summary>






	public ref class Complex : public System::Windows::Forms::Form
	{
	public:
		Complex(void)
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
		~Complex()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	protected: 






































	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;










	private: System::ComponentModel::BackgroundWorker^  backgroundWorker2;
	private: System::Windows::Forms::TabPage^  tab_Server;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  btn_Table2;
	private: System::Windows::Forms::Button^  btn_Table3;
	private: System::Windows::Forms::Button^  btn_Table4;
	private: System::Windows::Forms::Button^  btn_Table5;
	private: System::Windows::Forms::Button^  btn_Table6;
	private: System::Windows::Forms::Button^  btn_Table7;
	private: System::Windows::Forms::Button^  btn_Table8;
	private: System::Windows::Forms::Button^  btn_Table9;
	private: System::Windows::Forms::Button^  btn_Table10;
	private: System::Windows::Forms::Button^  btn_Table1;
	private: System::Windows::Forms::TabPage^  tab_Chef;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox9;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox8;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox7;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox6;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox5;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox4;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox3;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox2;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label0;
	private: System::Windows::Forms::TabControl^  HomeTab;
	private: System::Windows::Forms::TabPage^  tab_Manager;
private: System::Windows::Forms::CheckedListBox^  checkedListBox10;
private: System::Windows::Forms::Label^  label15;
















































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
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->backgroundWorker2 = (gcnew System::ComponentModel::BackgroundWorker());
			this->tab_Server = (gcnew System::Windows::Forms::TabPage());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->btn_Table2 = (gcnew System::Windows::Forms::Button());
			this->btn_Table3 = (gcnew System::Windows::Forms::Button());
			this->btn_Table4 = (gcnew System::Windows::Forms::Button());
			this->btn_Table5 = (gcnew System::Windows::Forms::Button());
			this->btn_Table6 = (gcnew System::Windows::Forms::Button());
			this->btn_Table7 = (gcnew System::Windows::Forms::Button());
			this->btn_Table8 = (gcnew System::Windows::Forms::Button());
			this->btn_Table9 = (gcnew System::Windows::Forms::Button());
			this->btn_Table10 = (gcnew System::Windows::Forms::Button());
			this->btn_Table1 = (gcnew System::Windows::Forms::Button());
			this->tab_Chef = (gcnew System::Windows::Forms::TabPage());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox9 = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBox8 = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBox7 = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBox6 = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBox5 = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBox4 = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBox3 = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBox2 = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label0 = (gcnew System::Windows::Forms::Label());
			this->HomeTab = (gcnew System::Windows::Forms::TabControl());
			this->tab_Manager = (gcnew System::Windows::Forms::TabPage());
			this->checkedListBox10 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tab_Server->SuspendLayout();
			this->tab_Chef->SuspendLayout();
			this->HomeTab->SuspendLayout();
			this->SuspendLayout();
			// 
			// tab_Server
			// 
			this->tab_Server->Controls->Add(this->label17);
			this->tab_Server->Controls->Add(this->label14);
			this->tab_Server->Controls->Add(this->label13);
			this->tab_Server->Controls->Add(this->label12);
			this->tab_Server->Controls->Add(this->label11);
			this->tab_Server->Controls->Add(this->label10);
			this->tab_Server->Controls->Add(this->btn_Table2);
			this->tab_Server->Controls->Add(this->btn_Table3);
			this->tab_Server->Controls->Add(this->btn_Table4);
			this->tab_Server->Controls->Add(this->btn_Table5);
			this->tab_Server->Controls->Add(this->btn_Table6);
			this->tab_Server->Controls->Add(this->btn_Table7);
			this->tab_Server->Controls->Add(this->btn_Table8);
			this->tab_Server->Controls->Add(this->btn_Table9);
			this->tab_Server->Controls->Add(this->btn_Table10);
			this->tab_Server->Controls->Add(this->btn_Table1);
			this->tab_Server->Location = System::Drawing::Point(4, 22);
			this->tab_Server->Name = L"tab_Server";
			this->tab_Server->Padding = System::Windows::Forms::Padding(3);
			this->tab_Server->Size = System::Drawing::Size(824, 385);
			this->tab_Server->TabIndex = 1;
			this->tab_Server->Tag = L"";
			this->tab_Server->Text = L"Server";
			this->tab_Server->UseVisualStyleBackColor = true;
			this->tab_Server->Click += gcnew System::EventHandler(this, &Complex::tabPage2_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(38, 13);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(142, 33);
			this->label17->TabIndex = 24;
			this->label17->Text = L"Restaurant ";
			this->label17->Click += gcnew System::EventHandler(this, &Complex::label17_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(48, 355);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(122, 16);
			this->label14->TabIndex = 21;
			this->label14->Text = L"Waiting for Food";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label13->Location = System::Drawing::Point(233, 319);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(130, 16);
			this->label13->TabIndex = 20;
			this->label13->Text = L"Dish is not Ready";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Fuchsia;
			this->label12->Location = System::Drawing::Point(446, 319);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(119, 16);
			this->label12->TabIndex = 19;
			this->label12->Text = L"Needs Cleaning";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(233, 355);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(98, 16);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Ready to Eat";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Blue;
			this->label10->Location = System::Drawing::Point(48, 319);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(85, 16);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Free Table";
			// 
			// btn_Table2
			// 
			this->btn_Table2->BackColor = System::Drawing::Color::Blue;
			this->btn_Table2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_Table2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_Table2->Location = System::Drawing::Point(41, 155);
			this->btn_Table2->Name = L"btn_Table2";
			this->btn_Table2->Size = System::Drawing::Size(116, 46);
			this->btn_Table2->TabIndex = 11;
			this->btn_Table2->Text = L"2";
			this->btn_Table2->UseVisualStyleBackColor = false;
			this->btn_Table2->Click += gcnew System::EventHandler(this, &Complex::btn_Table2_Click);
			// 
			// btn_Table3
			// 
			this->btn_Table3->BackColor = System::Drawing::Color::Blue;
			this->btn_Table3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_Table3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_Table3->Location = System::Drawing::Point(41, 233);
			this->btn_Table3->Name = L"btn_Table3";
			this->btn_Table3->Size = System::Drawing::Size(116, 46);
			this->btn_Table3->TabIndex = 10;
			this->btn_Table3->Text = L"3";
			this->btn_Table3->UseVisualStyleBackColor = false;
			this->btn_Table3->Click += gcnew System::EventHandler(this, &Complex::button11_Click);
			// 
			// btn_Table4
			// 
			this->btn_Table4->BackColor = System::Drawing::Color::Blue;
			this->btn_Table4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_Table4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_Table4->Location = System::Drawing::Point(236, 79);
			this->btn_Table4->Name = L"btn_Table4";
			this->btn_Table4->Size = System::Drawing::Size(116, 46);
			this->btn_Table4->TabIndex = 9;
			this->btn_Table4->Text = L"4";
			this->btn_Table4->UseVisualStyleBackColor = false;
			this->btn_Table4->Click += gcnew System::EventHandler(this, &Complex::btn_Table4_Click);
			// 
			// btn_Table5
			// 
			this->btn_Table5->BackColor = System::Drawing::Color::Blue;
			this->btn_Table5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_Table5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_Table5->Location = System::Drawing::Point(236, 155);
			this->btn_Table5->Name = L"btn_Table5";
			this->btn_Table5->Size = System::Drawing::Size(116, 46);
			this->btn_Table5->TabIndex = 8;
			this->btn_Table5->Text = L"5";
			this->btn_Table5->UseVisualStyleBackColor = false;
			this->btn_Table5->Click += gcnew System::EventHandler(this, &Complex::btn_Table5_Click);
			// 
			// btn_Table6
			// 
			this->btn_Table6->BackColor = System::Drawing::Color::Blue;
			this->btn_Table6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_Table6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_Table6->Location = System::Drawing::Point(236, 233);
			this->btn_Table6->Name = L"btn_Table6";
			this->btn_Table6->Size = System::Drawing::Size(116, 46);
			this->btn_Table6->TabIndex = 7;
			this->btn_Table6->Text = L"6";
			this->btn_Table6->UseVisualStyleBackColor = false;
			this->btn_Table6->Click += gcnew System::EventHandler(this, &Complex::btn_Table6_Click);
			// 
			// btn_Table7
			// 
			this->btn_Table7->BackColor = System::Drawing::Color::Blue;
			this->btn_Table7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_Table7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_Table7->Location = System::Drawing::Point(449, 79);
			this->btn_Table7->Name = L"btn_Table7";
			this->btn_Table7->Size = System::Drawing::Size(116, 46);
			this->btn_Table7->TabIndex = 6;
			this->btn_Table7->Text = L"7";
			this->btn_Table7->UseVisualStyleBackColor = false;
			this->btn_Table7->Click += gcnew System::EventHandler(this, &Complex::btn_Table7_Click);
			// 
			// btn_Table8
			// 
			this->btn_Table8->BackColor = System::Drawing::Color::Blue;
			this->btn_Table8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_Table8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_Table8->Location = System::Drawing::Point(449, 155);
			this->btn_Table8->Name = L"btn_Table8";
			this->btn_Table8->Size = System::Drawing::Size(116, 46);
			this->btn_Table8->TabIndex = 5;
			this->btn_Table8->Text = L"8";
			this->btn_Table8->UseVisualStyleBackColor = false;
			this->btn_Table8->Click += gcnew System::EventHandler(this, &Complex::btn_Table8_Click);
			// 
			// btn_Table9
			// 
			this->btn_Table9->BackColor = System::Drawing::Color::Blue;
			this->btn_Table9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_Table9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_Table9->Location = System::Drawing::Point(449, 233);
			this->btn_Table9->Name = L"btn_Table9";
			this->btn_Table9->Size = System::Drawing::Size(116, 46);
			this->btn_Table9->TabIndex = 4;
			this->btn_Table9->Text = L"9";
			this->btn_Table9->UseVisualStyleBackColor = false;
			this->btn_Table9->Click += gcnew System::EventHandler(this, &Complex::btn_Table9_Click);
			// 
			// btn_Table10
			// 
			this->btn_Table10->BackColor = System::Drawing::Color::Blue;
			this->btn_Table10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_Table10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_Table10->Location = System::Drawing::Point(637, 155);
			this->btn_Table10->Name = L"btn_Table10";
			this->btn_Table10->Size = System::Drawing::Size(116, 46);
			this->btn_Table10->TabIndex = 3;
			this->btn_Table10->Text = L"10";
			this->btn_Table10->UseVisualStyleBackColor = false;
			this->btn_Table10->Click += gcnew System::EventHandler(this, &Complex::btn_Table10_Click);
			// 
			// btn_Table1
			// 
			this->btn_Table1->BackColor = System::Drawing::Color::Blue;
			this->btn_Table1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_Table1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_Table1->Location = System::Drawing::Point(41, 79);
			this->btn_Table1->Name = L"btn_Table1";
			this->btn_Table1->Size = System::Drawing::Size(116, 46);
			this->btn_Table1->TabIndex = 2;
			this->btn_Table1->Text = L"1";
			this->btn_Table1->UseVisualStyleBackColor = false;
			this->btn_Table1->Click += gcnew System::EventHandler(this, &Complex::btn_Table1_Click);
			// 
			// tab_Chef
			// 
			this->tab_Chef->Controls->Add(this->checkedListBox10);
			this->tab_Chef->Controls->Add(this->label15);
			this->tab_Chef->Controls->Add(this->textBox1);
			this->tab_Chef->Controls->Add(this->label1);
			this->tab_Chef->Controls->Add(this->checkedListBox9);
			this->tab_Chef->Controls->Add(this->checkedListBox8);
			this->tab_Chef->Controls->Add(this->checkedListBox7);
			this->tab_Chef->Controls->Add(this->checkedListBox6);
			this->tab_Chef->Controls->Add(this->checkedListBox5);
			this->tab_Chef->Controls->Add(this->checkedListBox4);
			this->tab_Chef->Controls->Add(this->checkedListBox3);
			this->tab_Chef->Controls->Add(this->checkedListBox2);
			this->tab_Chef->Controls->Add(this->checkedListBox1);
			this->tab_Chef->Controls->Add(this->label9);
			this->tab_Chef->Controls->Add(this->label8);
			this->tab_Chef->Controls->Add(this->label7);
			this->tab_Chef->Controls->Add(this->label6);
			this->tab_Chef->Controls->Add(this->label5);
			this->tab_Chef->Controls->Add(this->label4);
			this->tab_Chef->Controls->Add(this->label3);
			this->tab_Chef->Controls->Add(this->label2);
			this->tab_Chef->Controls->Add(this->label0);
			this->tab_Chef->Location = System::Drawing::Point(4, 22);
			this->tab_Chef->Name = L"tab_Chef";
			this->tab_Chef->Padding = System::Windows::Forms::Padding(3);
			this->tab_Chef->Size = System::Drawing::Size(824, 385);
			this->tab_Chef->TabIndex = 0;
			this->tab_Chef->Text = L"Chef";
			this->tab_Chef->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(487, 40);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(306, 258);
			this->textBox1->TabIndex = 30;
			this->textBox1->Text = L"Edw tha deixnei tin seira proteraiotitas twn paraggeliwn. Tha xrisimopoiisoume da" 
				L"tabase mallon ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(484, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 13);
			this->label1->TabIndex = 29;
			this->label1->Text = L"Priority Queue:";
			// 
			// checkedListBox9
			// 
			this->checkedListBox9->FormattingEnabled = true;
			this->checkedListBox9->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Food1", L"Food2", L"Food3"});
			this->checkedListBox9->Location = System::Drawing::Point(273, 189);
			this->checkedListBox9->Name = L"checkedListBox9";
			this->checkedListBox9->Size = System::Drawing::Size(120, 49);
			this->checkedListBox9->TabIndex = 28;
			// 
			// checkedListBox8
			// 
			this->checkedListBox8->FormattingEnabled = true;
			this->checkedListBox8->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Food1", L"Food2", L"Food3"});
			this->checkedListBox8->Location = System::Drawing::Point(137, 189);
			this->checkedListBox8->Name = L"checkedListBox8";
			this->checkedListBox8->Size = System::Drawing::Size(120, 49);
			this->checkedListBox8->TabIndex = 27;
			// 
			// checkedListBox7
			// 
			this->checkedListBox7->FormattingEnabled = true;
			this->checkedListBox7->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Food1", L"Food2", L"Food3"});
			this->checkedListBox7->Location = System::Drawing::Point(11, 189);
			this->checkedListBox7->Name = L"checkedListBox7";
			this->checkedListBox7->Size = System::Drawing::Size(120, 49);
			this->checkedListBox7->TabIndex = 26;
			// 
			// checkedListBox6
			// 
			this->checkedListBox6->FormattingEnabled = true;
			this->checkedListBox6->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Food1", L"Food2", L"Food3"});
			this->checkedListBox6->Location = System::Drawing::Point(273, 121);
			this->checkedListBox6->Name = L"checkedListBox6";
			this->checkedListBox6->Size = System::Drawing::Size(120, 49);
			this->checkedListBox6->TabIndex = 25;
			// 
			// checkedListBox5
			// 
			this->checkedListBox5->FormattingEnabled = true;
			this->checkedListBox5->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Food1", L"Food2", L"Food3"});
			this->checkedListBox5->Location = System::Drawing::Point(147, 121);
			this->checkedListBox5->Name = L"checkedListBox5";
			this->checkedListBox5->Size = System::Drawing::Size(120, 49);
			this->checkedListBox5->TabIndex = 24;
			// 
			// checkedListBox4
			// 
			this->checkedListBox4->FormattingEnabled = true;
			this->checkedListBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Food1", L"Food2", L"Food3"});
			this->checkedListBox4->Location = System::Drawing::Point(11, 121);
			this->checkedListBox4->Name = L"checkedListBox4";
			this->checkedListBox4->Size = System::Drawing::Size(120, 49);
			this->checkedListBox4->TabIndex = 23;
			// 
			// checkedListBox3
			// 
			this->checkedListBox3->FormattingEnabled = true;
			this->checkedListBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Food1", L"Food2", L"Food3"});
			this->checkedListBox3->Location = System::Drawing::Point(273, 38);
			this->checkedListBox3->Name = L"checkedListBox3";
			this->checkedListBox3->Size = System::Drawing::Size(120, 49);
			this->checkedListBox3->TabIndex = 22;
			// 
			// checkedListBox2
			// 
			this->checkedListBox2->FormattingEnabled = true;
			this->checkedListBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Food1", L"Food2", L"Food3"});
			this->checkedListBox2->Location = System::Drawing::Point(147, 39);
			this->checkedListBox2->Name = L"checkedListBox2";
			this->checkedListBox2->Size = System::Drawing::Size(120, 49);
			this->checkedListBox2->TabIndex = 21;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Food1", L"Food2", L"Food3"});
			this->checkedListBox1->Location = System::Drawing::Point(11, 39);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(120, 49);
			this->checkedListBox1->TabIndex = 18;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Complex::checkedListBox1_SelectedIndexChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(295, 173);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(40, 13);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Table9";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(166, 173);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(40, 13);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Table8";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(25, 173);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Table7";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(295, 105);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Table6";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(166, 105);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Table5";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(28, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Table4";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(292, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Table3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(166, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Table2";
			// 
			// label0
			// 
			this->label0->AutoSize = true;
			this->label0->Location = System::Drawing::Point(28, 23);
			this->label0->Name = L"label0";
			this->label0->Size = System::Drawing::Size(40, 13);
			this->label0->TabIndex = 3;
			this->label0->Text = L"Table1";
			// 
			// HomeTab
			// 
			this->HomeTab->Controls->Add(this->tab_Chef);
			this->HomeTab->Controls->Add(this->tab_Server);
			this->HomeTab->Controls->Add(this->tab_Manager);
			this->HomeTab->Location = System::Drawing::Point(12, 16);
			this->HomeTab->Name = L"HomeTab";
			this->HomeTab->SelectedIndex = 0;
			this->HomeTab->Size = System::Drawing::Size(832, 411);
			this->HomeTab->TabIndex = 0;
			// 
			// tab_Manager
			// 
			this->tab_Manager->Location = System::Drawing::Point(4, 22);
			this->tab_Manager->Name = L"tab_Manager";
			this->tab_Manager->Padding = System::Windows::Forms::Padding(3);
			this->tab_Manager->Size = System::Drawing::Size(824, 385);
			this->tab_Manager->TabIndex = 2;
			this->tab_Manager->Text = L"Manager";
			this->tab_Manager->UseVisualStyleBackColor = true;
			// 
			// checkedListBox10
			// 
			this->checkedListBox10->FormattingEnabled = true;
			this->checkedListBox10->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Food1", L"Food2", L"Food3"});
			this->checkedListBox10->Location = System::Drawing::Point(137, 264);
			this->checkedListBox10->Name = L"checkedListBox10";
			this->checkedListBox10->Size = System::Drawing::Size(120, 49);
			this->checkedListBox10->TabIndex = 32;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(159, 248);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(46, 13);
			this->label15->TabIndex = 31;
			this->label15->Text = L"Table10";
			// 
			// Complex
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1004, 439);
			this->Controls->Add(this->HomeTab);
			this->Name = L"Complex";
			this->Text = L"Restaurant";
			this->tab_Server->ResumeLayout(false);
			this->tab_Server->PerformLayout();
			this->tab_Chef->ResumeLayout(false);
			this->tab_Chef->PerformLayout();
			this->HomeTab->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	//private: System::Void fileToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			//this->tabControl1->Visible=!this->tabControl1->Visible; }
	
		

private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
		 
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tabPage2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {

			 //Table 3
			
		if (btn_Table3->BackColor == Color::Blue)
		{
			btn_Table3->BackColor = Color::Red;
			 MyForm2 ^labelt3 =gcnew MyForm2();
			 labelt3->Show();
			
		}
		else if (btn_Table3->BackColor == Color::Red)
		{
			btn_Table3->BackColor = Color::Black;
		}
		else if (btn_Table3->BackColor == Color::Black)
		{
			btn_Table3->BackColor = Color::Green;
		}
		else if (btn_Table3->BackColor == Color::Green)
		{
			btn_Table3->BackColor = Color::Pink;
		}
		else 
		{
			btn_Table3->BackColor = Color::Blue;
		}
	
		 }
private: System::Void btn_Table1_Click(System::Object^  sender, System::EventArgs^  e) {

			 //Table 1
		if (btn_Table1->BackColor == Color::Blue)
		{
			btn_Table1->BackColor = Color::Red;
			MyForm ^label1 = gcnew MyForm();
			label1->Show();
			
		}
		else if (btn_Table1->BackColor == Color::Red)
		{
			btn_Table1->BackColor = Color::Black;
		}
		else if (btn_Table1->BackColor == Color::Black)
		{
			btn_Table1->BackColor = Color::Green;
		}
		else if (btn_Table1->BackColor == Color::Green)
		{
			btn_Table1->BackColor = Color::Pink;
		}
		else 
		{
			btn_Table1->BackColor = Color::Blue;
			
		}

		 }
private: System::Void btn_Table4_Click(System::Object^  sender, System::EventArgs^  e) {

			 //Table 4

		if (btn_Table4->BackColor == Color::Blue)
		{
			btn_Table4->BackColor = Color::Red;
			 MyForm3 ^labelt4 = gcnew MyForm3();
			 labelt4->Show();
			
		}
		else if (btn_Table4->BackColor == Color::Red)
		{
			btn_Table4->BackColor = Color::Black;
		}
		else if (btn_Table4->BackColor == Color::Black)
		{
			btn_Table4->BackColor = Color::Green;
		}
		else if (btn_Table4->BackColor == Color::Green)
		{
			btn_Table4->BackColor = Color::Pink;
		}
		else 
		{
			btn_Table4->BackColor = Color::Blue;
		}
		 }
private: System::Void btn_Table2_Click(System::Object^  sender, System::EventArgs^  e) {

			 //Table 2

			 
		if (btn_Table2->BackColor == Color::Blue)
		{
			btn_Table2->BackColor = Color::Red;
			 MyForm1 ^labelt2 = gcnew MyForm1();
			 labelt2->Show();
			
		}
		else if (btn_Table2->BackColor == Color::Red)
		{
			btn_Table2->BackColor = Color::Black;
		}
		else if (btn_Table2->BackColor == Color::Black)
		{
			btn_Table2->BackColor = Color::Green;
		}
		else if (btn_Table2->BackColor == Color::Green)
		{
			btn_Table2->BackColor = Color::Pink;
		}
		else 
		{
			btn_Table2->BackColor = Color::Blue;
		}
			
		 }
private: System::Void btn_Table5_Click(System::Object^  sender, System::EventArgs^  e) {


			 //Table5
			 
		if (btn_Table5->BackColor == Color::Blue)
		{
			btn_Table5->BackColor = Color::Red;
			MyForm4 ^labelt5 = gcnew MyForm4();
			labelt5->Show();
			
		}
		else if (btn_Table5->BackColor == Color::Red)
		{
			btn_Table5->BackColor = Color::Black;
		}
		else if (btn_Table5->BackColor == Color::Black)
		{
			btn_Table5->BackColor = Color::Green;
		}
		else if (btn_Table5->BackColor == Color::Green)
		{
			btn_Table5->BackColor = Color::Pink;
		}
		else 
		{
			btn_Table5->BackColor = Color::Blue;
		}

		 }
private: System::Void btn_Table6_Click(System::Object^  sender, System::EventArgs^  e) {

			 //table6
			 
		if (btn_Table6->BackColor == Color::Blue)
		{
			btn_Table6->BackColor = Color::Red;
			MyForm5 ^labelt6 =gcnew MyForm5();
			labelt6->Show();
			
		}
		else if (btn_Table6->BackColor == Color::Red)
		{
			btn_Table6->BackColor = Color::Black;
		}
		else if (btn_Table6->BackColor == Color::Black)
		{
			btn_Table6->BackColor = Color::Green;
		}
		else if (btn_Table6->BackColor == Color::Green)
		{
			btn_Table6->BackColor = Color::Pink;
		}
		else 
		{
			btn_Table6->BackColor = Color::Blue;
		}

		 }
private: System::Void btn_Table7_Click(System::Object^  sender, System::EventArgs^  e) {

			 //Table 7
			 
		if (btn_Table7->BackColor == Color::Blue)
		{
			btn_Table7->BackColor = Color::Red;
			MyForm6 ^labelt7 =gcnew MyForm6();
			labelt7->Show();
		}
		else if (btn_Table7->BackColor == Color::Red)
		{
			btn_Table7->BackColor = Color::Black;
		}
		else if (btn_Table7->BackColor == Color::Black)
		{
			btn_Table7->BackColor = Color::Green;
		}
		else if (btn_Table7->BackColor == Color::Green)
		{
			btn_Table7->BackColor = Color::Pink;
		}
		else 
		{
			btn_Table7->BackColor = Color::Blue;
		}
		 }
private: System::Void btn_Table8_Click(System::Object^  sender, System::EventArgs^  e) {

			 //Table 8
			 
		if (btn_Table8->BackColor == Color::Blue)
		{
			btn_Table8->BackColor = Color::Red;
			MyForm7 ^labelt8 =gcnew MyForm7();
			labelt8->Show();
		}
		else if (btn_Table8->BackColor == Color::Red)
		{
			btn_Table8->BackColor = Color::Black;
		}
		else if (btn_Table8->BackColor == Color::Black)
		{
			btn_Table8->BackColor = Color::Green;
		}
		else if (btn_Table8->BackColor == Color::Green)
		{
			btn_Table8->BackColor = Color::Pink;
		}
		else 
		{
			btn_Table8->BackColor = Color::Blue;
		}
		 }
private: System::Void btn_Table9_Click(System::Object^  sender, System::EventArgs^  e) {

			 //Table 9
			
		if (btn_Table9->BackColor == Color::Blue)
		{
			btn_Table9->BackColor = Color::Red;
			MyForm8 ^labelt9 =gcnew MyForm8();
			labelt9->Show();
			
		}
		else if (btn_Table9->BackColor == Color::Red)
		{
			btn_Table9->BackColor = Color::Black;
		}
		else if (btn_Table9->BackColor == Color::Black)
		{
			btn_Table9->BackColor = Color::Green;
		}
		else if (btn_Table9->BackColor == Color::Green)
		{
			btn_Table9->BackColor = Color::Pink;
		}
		else 
		{
			btn_Table9->BackColor = Color::Blue;
		}
		 }
private: System::Void btn_Table10_Click(System::Object^  sender, System::EventArgs^  e) {

			 //Table 10
			
		if (btn_Table10->BackColor == Color::Blue)
		{
			btn_Table10->BackColor = Color::Red;
			MyForm9 ^labelt10 =gcnew MyForm9();
			labelt10->Show();
			
		}
		else if (btn_Table10->BackColor == Color::Red)
		{
			btn_Table10->BackColor = Color::Black;
		}
		else if (btn_Table10->BackColor == Color::Black)
		{
			btn_Table10->BackColor = Color::Green;
		}
		else if (btn_Table10->BackColor == Color::Green)
		{
			btn_Table10->BackColor = Color::Pink;
		}
		else 
		{
			btn_Table10->BackColor = Color::Blue;
		}
		 }
private: System::Void label17_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};

//private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		// }
} ;	
