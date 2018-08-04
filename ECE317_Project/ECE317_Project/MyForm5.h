#pragma once

namespace ECE317_Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		MyForm5(void)
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
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelt6;
	private: System::Windows::Forms::Label^  Orderlabel6;


	private: System::Windows::Forms::Button^  btn_send6;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox3;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown11;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown10;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown8;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::TextBox^  textBox10;
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
			this->labelt6 = (gcnew System::Windows::Forms::Label());
			this->Orderlabel6 = (gcnew System::Windows::Forms::Label());
			this->btn_send6 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox3 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox2 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown11 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// labelt6
			// 
			this->labelt6->AutoSize = true;
			this->labelt6->Location = System::Drawing::Point(5, 9);
			this->labelt6->Name = L"labelt6";
			this->labelt6->Size = System::Drawing::Size(40, 13);
			this->labelt6->TabIndex = 0;
			this->labelt6->Text = L"Table6";
			// 
			// Orderlabel6
			// 
			this->Orderlabel6->AutoSize = true;
			this->Orderlabel6->Location = System::Drawing::Point(153, 9);
			this->Orderlabel6->Name = L"Orderlabel6";
			this->Orderlabel6->Size = System::Drawing::Size(33, 13);
			this->Orderlabel6->TabIndex = 1;
			this->Orderlabel6->Text = L"Order";
			this->Orderlabel6->Click += gcnew System::EventHandler(this, &MyForm5::Orderlabel6_Click);
			// 
			// btn_send6
			// 
			this->btn_send6->Location = System::Drawing::Point(308, 309);
			this->btn_send6->Name = L"btn_send6";
			this->btn_send6->Size = System::Drawing::Size(75, 23);
			this->btn_send6->TabIndex = 6;
			this->btn_send6->Text = L"Send";
			this->btn_send6->UseVisualStyleBackColor = true;
			this->btn_send6->Click += gcnew System::EventHandler(this, &MyForm5::btn_send6_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(100, 215);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 13);
			this->label6->TabIndex = 49;
			this->label6->Text = L"Drinks";
			// 
			// checkedListBox3
			// 
			this->checkedListBox3->FormattingEnabled = true;
			this->checkedListBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Beer\t\t\t�3.00", L"Soft Drinks\t\t�1.00", 
				L"Water\t\t\t�1.00"});
			this->checkedListBox3->Location = System::Drawing::Point(62, 232);
			this->checkedListBox3->Name = L"checkedListBox3";
			this->checkedListBox3->Size = System::Drawing::Size(189, 64);
			this->checkedListBox3->TabIndex = 48;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(100, 133);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 13);
			this->label7->TabIndex = 47;
			this->label7->Text = L"Main Dishes";
			// 
			// checkedListBox2
			// 
			this->checkedListBox2->FormattingEnabled = true;
			this->checkedListBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Souvlaki-Chicken            �5.00", L"Souvlaki-Beef\t\t�6.00", 
				L"Steak\t\t\t�4.00"});
			this->checkedListBox2->Location = System::Drawing::Point(62, 150);
			this->checkedListBox2->Name = L"checkedListBox2";
			this->checkedListBox2->Size = System::Drawing::Size(189, 64);
			this->checkedListBox2->TabIndex = 46;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(100, 42);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 45;
			this->label4->Text = L"Salads";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(100, 29);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 13);
			this->label3->TabIndex = 44;
			this->label3->Text = L"Item and Price";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(304, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 43;
			this->label2->Text = L"Notes";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 42;
			this->label1->Text = L"Quantity";
			// 
			// numericUpDown11
			// 
			this->numericUpDown11->Location = System::Drawing::Point(11, 51);
			this->numericUpDown11->Name = L"numericUpDown11";
			this->numericUpDown11->Size = System::Drawing::Size(45, 20);
			this->numericUpDown11->TabIndex = 41;
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->Location = System::Drawing::Point(11, 77);
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->Size = System::Drawing::Size(45, 20);
			this->numericUpDown10->TabIndex = 40;
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(11, 276);
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(45, 20);
			this->numericUpDown8->TabIndex = 39;
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(11, 250);
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(45, 20);
			this->numericUpDown7->TabIndex = 38;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(11, 224);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(45, 20);
			this->numericUpDown5->TabIndex = 37;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(11, 189);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(45, 20);
			this->numericUpDown4->TabIndex = 36;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(11, 163);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(45, 20);
			this->numericUpDown3->TabIndex = 35;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(9, 137);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(45, 20);
			this->numericUpDown2->TabIndex = 34;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(11, 103);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(45, 20);
			this->numericUpDown1->TabIndex = 33;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Cypriot-Salad\t\t�3.50", L"Caesar\t\t\t�4.00", 
				L"Hellenic\t\t\t�3.00"});
			this->checkedListBox1->Location = System::Drawing::Point(62, 59);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(189, 64);
			this->checkedListBox1->TabIndex = 32;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(272, 59);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(125, 237);
			this->textBox10->TabIndex = 31;
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(420, 400);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->checkedListBox3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->checkedListBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown11);
			this->Controls->Add(this->numericUpDown10);
			this->Controls->Add(this->numericUpDown8);
			this->Controls->Add(this->numericUpDown7);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->btn_send6);
			this->Controls->Add(this->Orderlabel6);
			this->Controls->Add(this->labelt6);
			this->Name = L"MyForm5";
			this->Text = L"Table 6";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Orderlabel6_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void btn_send6_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
