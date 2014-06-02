#pragma once
#include "Form5.h"
#include "Form4.h"
#include "Form7.h"
#include "Form8.h"
//This is User Home Page 

namespace prototype1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;   //Library to import and Export data into .csv file
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		String ^ user;
		Form3(String ^a)   //Constructor that take user_id as input
		{
			InitializeComponent();
			user = a;
			//
			//TODO: Add the constructor code here
			//
		}
		Form3(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::ListView^  listView1;

	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::ListBox^  listBox3;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form3::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Maroon;
			this->button2->Location = System::Drawing::Point(28, 78);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 28);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Show ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form3::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Location = System::Drawing::Point(21, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 38);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Welcome,";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label2->Location = System::Drawing::Point(184, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 38);
			this->label2->TabIndex = 4;
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {this->columnHeader2, this->columnHeader3, 
				this->columnHeader4});
			this->listView1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listView1->ForeColor = System::Drawing::Color::Maroon;
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(28, 263);
			this->listView1->MultiSelect = false;
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(373, 242);
			this->listView1->Sorting = System::Windows::Forms::SortOrder::Ascending;
			this->listView1->TabIndex = 6;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form3::listView1_MouseClick);
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"First Name";
			this->columnHeader2->Width = 125;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Last Name";
			this->columnHeader3->Width = 132;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Mobile";
			this->columnHeader4->Width = 123;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Maroon;
			this->button3->Location = System::Drawing::Point(459, 78);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(91, 28);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Log Out";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form3::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Maroon;
			this->button4->Location = System::Drawing::Point(248, 78);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(182, 28);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Change Password";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form3::button4_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Maroon;
			this->button1->Location = System::Drawing::Point(131, 78);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 28);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add New";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form3::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(248, 142);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(182, 20);
			this->textBox1->TabIndex = 9;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Maroon;
			this->button5->Location = System::Drawing::Point(459, 134);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(91, 28);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Search";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form3::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Maroon;
			this->button6->Location = System::Drawing::Point(28, 134);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 28);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Share";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form3::button6_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::Color::Maroon;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"View Family", L"View Acquintances", L"View Friends", 
				L"View Co-workers"});
			this->comboBox1->Location = System::Drawing::Point(248, 191);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(182, 28);
			this->comboBox1->TabIndex = 12;
			this->comboBox1->Text = L"View All";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Maroon;
			this->button7->Location = System::Drawing::Point(28, 191);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 28);
			this->button7->TabIndex = 13;
			this->button7->Text = L"Import";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form3::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Maroon;
			this->button8->Location = System::Drawing::Point(131, 190);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(91, 28);
			this->button8->TabIndex = 14;
			this->button8->Text = L"Export";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form3::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::Maroon;
			this->button9->Location = System::Drawing::Point(459, 190);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(91, 28);
			this->button9->TabIndex = 15;
			this->button9->Text = L"Deleted";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Form3::button9_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->listBox1);
			this->groupBox1->Controls->Add(this->listBox2);
			this->groupBox1->Controls->Add(this->listBox3);
			this->groupBox1->Location = System::Drawing::Point(412, 256);
			this->groupBox1->Margin = System::Windows::Forms::Padding(0);
			this->groupBox1->MaximumSize = System::Drawing::Size(163, 106);
			this->groupBox1->MinimumSize = System::Drawing::Size(163, 106);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(163, 106);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label4->ForeColor = System::Drawing::Color::Maroon;
			this->label4->Location = System::Drawing::Point(6, 72);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 13);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Notification:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label3->ForeColor = System::Drawing::Color::Maroon;
			this->label3->Location = System::Drawing::Point(6, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Birthday:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label5->ForeColor = System::Drawing::Color::Maroon;
			this->label5->Location = System::Drawing::Point(6, 49);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 13);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Anniversary:";
			// 
			// listBox1
			// 
			this->listBox1->AllowDrop = true;
			this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->listBox1->ForeColor = System::Drawing::Color::Maroon;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(75, 22);
			this->listBox1->Name = L"listBox1";
			this->listBox1->ScrollAlwaysVisible = true;
			this->listBox1->Size = System::Drawing::Size(76, 17);
			this->listBox1->TabIndex = 12;
			// 
			// listBox2
			// 
			this->listBox2->AllowDrop = true;
			this->listBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->listBox2->ForeColor = System::Drawing::Color::Maroon;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(75, 45);
			this->listBox2->Name = L"listBox2";
			this->listBox2->ScrollAlwaysVisible = true;
			this->listBox2->Size = System::Drawing::Size(76, 17);
			this->listBox2->TabIndex = 13;
			// 
			// listBox3
			// 
			this->listBox3->AllowDrop = true;
			this->listBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->listBox3->ForeColor = System::Drawing::Color::Maroon;
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(75, 68);
			this->listBox3->Name = L"listBox3";
			this->listBox3->ScrollAlwaysVisible = true;
			this->listBox3->Size = System::Drawing::Size(76, 17);
			this->listBox3->TabIndex = 14;
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(584, 542);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(600, 580);
			this->MinimumSize = System::Drawing::Size(600, 580);
			this->Name = L"Form3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Contacts";
			this->Load += gcnew System::EventHandler(this, &Form3::Form3_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 //This button shows the contacts corresponding to the logged in user
				 //It gives you flexibility to chose between different groups
				 String ^ gr;
				 String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 if(comboBox1->Text=="View All"){
					 gr="all";
				 }
				 else if(comboBox1->Text=="View Family"){
					 gr="Family";
				 }
				 else if(comboBox1->Text=="View Acquintances"){
					 gr="Acquaintainces";
				 }
				 else if(comboBox1->Text=="View Friends"){
					 gr="Friends";
				 }
				 else if(comboBox1->Text=="View Coworkers"){
					 gr="Coworkers";
				 }	
				 //MyqSql query to show all contacts which are not deleted
				 String ^ d = "0";
				 MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("Select first_name,last_name,mobile_1 from try1.contacts where user_id='"+user+"' and del='"+d+"'",conDataBase);
				 MySqlDataReader^ MyReader1;
				 //MySql query to show contacts specific to a group
				 MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("Select first_name,last_name,mobile_1 from try1.contacts where user_id='"+user+"' and grp='"+gr+"' and del='"+d+"'",conDataBase);
				 MySqlDataReader^ MyReader2;
				 int c1=0;
				 int c2=0;
				 try{
				 conDataBase->Open();
				 MyReader1=cmdDataBase1->ExecuteReader();
				 while(MyReader1->Read())
					 c1++;
				 conDataBase->Close();
				 conDataBase->Open();
				 MyReader2=cmdDataBase2->ExecuteReader();
				 while(MyReader2->Read())
					 c2++;
				 conDataBase->Close();
				 }catch(Exception^ex) 
				 {
					 MessageBox::Show(ex->Message);
				 } 
				 
				 try
				 {
					 
					if(gr=="all"){
						if(c1>0){
						conDataBase->Open();
						MyReader1=cmdDataBase1->ExecuteReader();
						listView1->Items->Clear();
						ListViewItem^ objName;
						int i=1;
				 while(MyReader1->Read())//This will display all contacts in the listview alphabetically
				 {
					 objName=listView1->Items->Add(MyReader1->GetString(0));
					 objName->SubItems->Add(MyReader1->GetString(1));
					 objName->SubItems->Add(MyReader1->GetString(2));
					 i++;
				 }
				 conDataBase->Close();
						}
						else{
							MessageBox::Show("No Contacts to display");
						}
					}
					else
					{
						if(c2>0){
						conDataBase->Open();
						MyReader2=cmdDataBase2->ExecuteReader();
						listView1->Items->Clear();
						ListViewItem^ objName;
						int i=1;
						while(MyReader2->Read())//This will display particular contacts corresponding to a group in the listview alphabetically
						{
							objName=listView1->Items->Add(MyReader2->GetString(0));
							objName->SubItems->Add(MyReader2->GetString(1));
							objName->SubItems->Add(MyReader2->GetString(2));
							i++;
						}
						conDataBase->Close();
						}
						else
						{
							MessageBox::Show("No Contacts to display");
						}
					}
				 }catch(Exception^ex) 
				 {
					 MessageBox::Show(ex->Message);
				 } 
			 }
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //This opens up a form which allows you to add new Contact
				 Form4^ f4 = gcnew Form4(user);
				 this->Hide();
				 f4->ShowDialog();
				 
			 }
private: System::Void Form3_Load(System::Object^  sender, System::EventArgs^  e) {
			 //This happens when form loads and show the first name of user
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Select first_name from try1.login where name='"+user+"'",conDataBase);
			 MySqlDataReader^ MyReader;
			 try{
				 conDataBase->Open();
				 MyReader=cmdDataBase->ExecuteReader();
				 MyReader->Read();
				 label2->Text=MyReader->GetString(0);
				 conDataBase->Close();
			 }catch(Exception ^ex)
			 {
				 MessageBox::Show(ex->Message);
			 }		 

			 //this->label6->Hide();
			 DateTime datetime = DateTime::Now;

			 String^ x;
			 String^ y;
			 x=datetime.ToString(L"MM/dd");
			 y=datetime.ToString(L"yyyy/MM/dd");

			 //MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Select first_name from try1.login where name='"+user+"'",conDataBase);
			 MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("Select * from try1.contacts where birth_day='"+x+"' and user_id='"+user+"';",conDataBase);
			 MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("Select * from try1.contacts where aniversary='"+x+"' and user_id='"+user+"';",conDataBase);
			 MySqlCommand^ cmdDataBase3=gcnew MySqlCommand("Select * from try1.contacts where imp_date='"+y+"' and user_id='"+user+"';",conDataBase);
			 MySqlDataReader^ MyReader1;
			 MySqlDataReader^ MyReader2;
			 MySqlDataReader^ MyReader3;
			 int count=0;
			 int count0=0;
			 try{conDataBase->Open();
			 MyReader1=cmdDataBase1->ExecuteReader();

			 while(MyReader1->Read()){
				 String^ cell;
				 cell= MyReader1->GetString("first_name"); 
				 listBox1->Items->Add(cell);
			 }

			 conDataBase->Close();
			 }catch(Exception^ex){
				 MessageBox::Show(ex->Message);
			 }

			 try{conDataBase->Open();
			 MyReader3=cmdDataBase3->ExecuteReader();

			 while(MyReader3->Read()){
				 String^ cell;
				 cell= MyReader3->GetString("first_name"); 
				 listBox3->Items->Add(cell);
			 }

			 conDataBase->Close();
			 }catch(Exception^ex){
				 MessageBox::Show(ex->Message);
			 }

			 try{conDataBase->Open();
			 MyReader2=cmdDataBase2->ExecuteReader();

			 while(MyReader2->Read()){
				 String^ cell;
				 cell= MyReader2->GetString("first_name"); 
				 listBox2->Items->Add(cell);
			 }

			 conDataBase->Close();
			 }catch(Exception^ex){
				 MessageBox::Show(ex->Message);
			 }

		 }

		 
System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) ;//This button is called in protoype1.cpp to make it public and access other forms
		 

private: System::Void listView1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 //This will open up a new form showing all the details of the selected user from the list view
			 ListViewItem ^ objName = listView1->Items[listView1->FocusedItem->Index];
			 String^ i = objName->SubItems[1]->Text;
			
			 Form5^ f5=gcnew Form5(user,objName->SubItems[0]->Text,objName->SubItems[1]->Text);//This opens the Show Contact form with all the details of the contact
			 f5->ShowDialog();
		 }

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 //This is used to Change password of the user
			 Form7 ^ f7= gcnew Form7(user);
			 f7->ShowDialog();
		 }

private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 //This will open a form where the user can share all the details with some other user
			 Form8 ^ f8 = gcnew Form8(user);
			 f8->ShowDialog();
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 //This button allows the user to import a .csv file into his contacts 
			 MessageBox::Show("The format must be similar to the file Exported from this Software!!");
			 Stream^ myStream;
			 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			 openFileDialog1->Filter = "Comma Seperated Values File|*.csv";

			 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
			 {
				 if( (myStream = openFileDialog1->OpenFile()) != nullptr)
				 {
					 String^ strfilename = openFileDialog1->FileName;
					 try
					 {
						 //Console::WriteLine("trying to open file {0}...", strfilename);
						 StreamReader^ din = File::OpenText(strfilename);
						 String^ delimiter= ",";
						 array<Char>^ delim = delimiter->ToCharArray( );

						 array<String^>^ words;
						 String^ line,^str;
						 String^ colnames = din->ReadLine() + ",user_id";	//edit here to add change user_id
						 //int count = 0;
						 while ((line = din->ReadLine()) != nullptr) 
						 {
							 //count++;
							 words = line->Split(delim);

							 str="'" + words[0] + "'";

							 for (int i=1; i<words->Length; i++)
								 str=str + "," + "'" + words[i] + "'";

							 String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
							 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
							 //MessageBox::Show("insert into try1.contacts (" + colnames + ") values ("+ str  + user + ");");
							 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("insert into try1.contacts (" + colnames + ") values ("+ str +",'" +user + "');",conDataBase);
							 MySqlDataReader^ MyReader;
							 conDataBase->Open();
							 MyReader=cmdDataBase->ExecuteReader();
							 conDataBase->Close();

							 MessageBox::Show( str );
						 }
					 }
					 catch (Exception^ e)
					 {
						 if (dynamic_cast<FileNotFoundException^>(e))
							 MessageBox::Show("file not found");
						 else
							 MessageBox::Show(e->Message);
					 }

					 //String^ ReadFile = File::ReadAllText(strfilename);
					 //MessageBox::Show(ReadFile);
					 myStream->Close();
				 }
			 }
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 //This button allows the user to export a .csv file from his contacts 
			     Stream^ myStream;
				 SaveFileDialog^ openFileDialog1 = gcnew SaveFileDialog;
				 openFileDialog1->Filter = "Comma Seperated Values File|*.csv";
				 openFileDialog1->Title = "Save Exported Contact As";

				 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
				 {
					 String^ strfilename = openFileDialog1->FileName;
					 StreamWriter^ sw = gcnew StreamWriter(strfilename);

				   		 String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
						 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
						 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Select first_name,last_name,mobile_1,mobile_2,landline,address,birth_day,aniversary,fax,imp_date,note_date,custom_info,designation,grp from try1.contacts where user_id='"+user+"';",conDataBase);
						 MySqlDataReader^ MyReader;
						 //MySqlDataReader^ MyReader2;
						// int count=0;
						 try{
							 conDataBase->Open();
							 MyReader=cmdDataBase->ExecuteReader();
							 String^ line;

							 line = MyReader->GetName(0);
							 for(int i=1; i<MyReader->FieldCount; i++)
							 {
								 line=line+","+MyReader->GetName(i);
							 }

							 sw->WriteLine(line);

							 //MessageBox::Show(MyReader->GetName(10));
							 while(MyReader->Read()){
								 line = MyReader->GetString(0);

								 for(int i=1; i<MyReader->FieldCount; i++)
								 {
									 line=line+","+MyReader->GetString(i);
								 }

								 sw->WriteLine(line);

								 //MessageBox::Show(MyReader->GetString(4));
								//count++;
							 }
							 //MessageBox::Show("done!!");
							 conDataBase->Close();
							}catch(Exception^ex){
								MessageBox::Show(ex->Message);
						 }
					
					/*sw->WriteLine("A text file is born!");
					sw->Write("You can use WriteLine");
					sw->WriteLine("...or just Write");
					sw->WriteLine("and do {0} output too.", "formatted");
					sw->WriteLine("You can also send non-text objects:");
					sw->WriteLine(DateTime::Now);*/
					sw->Close();
					/*Console::WriteLine("a new file ('{0}') has been written", strfilename);*/

				//String^ ReadFile = File::ReadAllText(strfilename);
				//MessageBox::Show(ReadFile);
						
				 }
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 //This button shows the deleted  contacts corresponding to the logged in user
			 //It gives you flexibility to chose between different groups
			 String ^ gr;
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 if(comboBox1->Text=="View All"){
				 gr="all";
			 }
			 else if(comboBox1->Text=="View Family"){
				 gr="Family";
			 }
			 else if(comboBox1->Text=="View Acquintances"){
				 gr="Acquaintainces";
			 }
			 else if(comboBox1->Text=="View Friends"){
				 gr="Friends";
			 }
			 else if(comboBox1->Text=="View Coworkers"){
				 gr="Coworkers";
			 }	
			 //MyqSql query to show all contacts which are deleted
			 String ^ d = "1";
			 MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("Select first_name,last_name,mobile_1 from try1.contacts where user_id='"+user+"' and del='"+d+"'",conDataBase);
			 MySqlDataReader^ MyReader1;
			 //MySql query to show contacts specific to a group
			 MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("Select first_name,last_name,mobile_1 from try1.contacts where user_id='"+user+"' and grp='"+gr+"' and del='"+d+"'",conDataBase);
			 MySqlDataReader^ MyReader2;
			 try
			 {

				 if(gr=="all"){
					 conDataBase->Open();
					 MyReader1=cmdDataBase1->ExecuteReader();
					 listView1->Items->Clear();
					 ListViewItem^ objName;
					 int i=1;
					 while(MyReader1->Read())
					 {
						 objName=listView1->Items->Add(MyReader1->GetString(0));
						 objName->SubItems->Add(MyReader1->GetString(1));
						 objName->SubItems->Add(MyReader1->GetString(2));
						 //objName->SubItems->Add(MyReader->GetString(4));
						 //objName->SubItems->Add(MyReader->GetString(5));
						 //objName->SubItems->Add(System::Convert::ToString(i));
						 i++;
					 }
				 }
				 else
				 {
					 conDataBase->Open();
					 MyReader2=cmdDataBase2->ExecuteReader();
					 listView1->Items->Clear();
					 ListViewItem^ objName;
					 int i=1;
					 while(MyReader2->Read())
					 {
						 objName=listView1->Items->Add(MyReader2->GetString(0));
						 objName->SubItems->Add(MyReader2->GetString(1));
						 objName->SubItems->Add(MyReader2->GetString(2));
						 //objName->SubItems->Add(MyReader->GetString(4));
						 //objName->SubItems->Add(MyReader->GetString(5));
						 //objName->SubItems->Add(System::Convert::ToString(i));
						 i++;
					 }
				 }


			 }catch(Exception^ex) 
			 {
				 MessageBox::Show(ex->Message);
			 } 

		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("Select first_name,last_name,mobile_1 from try1.contacts where first_name='"+textBox1->Text+"' AND user_id='"+user+"'",conDataBase);
			 MySqlDataReader^ MyReader2;

			 int count=0;
			 try
			 {conDataBase->Open();
			 MyReader2=cmdDataBase2->ExecuteReader();
			 listView1->Items->Clear();
			 ListViewItem^ objName;
			 int i=1;
			 while(MyReader2->Read()){
				 objName=listView1->Items->Add(MyReader2->GetString(0));
				 objName->SubItems->Add(MyReader2->GetString(1));
				 objName->SubItems->Add(MyReader2->GetString(2));
				 //objName->SubItems->Add(MyReader->GetString(4));
				 //objName->SubItems->Add(MyReader->GetString(5));
				 //objName->SubItems->Add(System::Convert::ToString(i));
				 i++;

				 count++;
			 }
			 conDataBase->Close();
			 if(count==0){
				 //this->listView1->Hide();
				 //this->label6->Show();
			 }
			 }
			 catch(Exception^ex) 
			 {
				 MessageBox::Show(ex->Message);
			 } 
		 }
};
}
