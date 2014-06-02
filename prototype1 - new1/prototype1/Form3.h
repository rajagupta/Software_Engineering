#pragma once
#include "Form5.h"
#include "Form4.h"
#include "Form7.h"

namespace prototype1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		String ^ user;
		
		Form3(String ^a)
		{
			InitializeComponent();
			user = a;

			//DateTime datetime = DateTime::Now;
			//this->label1->Text = datetime.ToString();
			//
			//TODO: Add the constructor code here
			//
		}
		Form3(void)
	
		{
			InitializeComponent();

			DateTime datetime = DateTime::Now;
			this->label1->Text = datetime.ToString();
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

	
//		System::DateTime^ now = System::DateTime::Now;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;

	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(282, 59);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add New";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form3::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(74, 59);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Show Data";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form3::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(117, 127);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(240, 150);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form3::dataGridView1_CellClick);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(247, 343);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 4;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(281, 6);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(76, 21);
			this->comboBox1->TabIndex = 5;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(166, 295);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Search";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form3::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(40, 298);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(85, 20);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form3::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(184, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Today\'s Birthday :";
			this->label1->Click += gcnew System::EventHandler(this, &Form3::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(151, 182);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"No contacts";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(312, 295);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Share Contacts";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form3::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(101, 340);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(91, 23);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Exit";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form3::button5_Click);
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(459, 386);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form3";
			this->Text = L"Contacts";
			this->Load += gcnew System::EventHandler(this, &Form3::Form3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ constring=L"datasource=localhost;port=3306;username=root;password=contact";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Select first_name,last_name,mobile_1,mobile_2,landline from contact_database.contact where user_id='"+user+"'",conDataBase);
				 MySqlDataReader^ MyReader;
				 try
				 {       this->label2->Hide();
						 this->dataGridView1->Show();
				 MySqlDataAdapter ^ sda = gcnew MySqlDataAdapter(); 
				 sda->SelectCommand = cmdDataBase;
				 DataTable^ dbdataset = gcnew DataTable();
				 sda->Fill(dbdataset);
				 BindingSource ^bSource=gcnew BindingSource();

				 bSource->DataSource = dbdataset;
				 dataGridView1->DataSource=bSource;
				 //dataGridView1->AutoResizeColumns(DataGridViewAutoSizeColumnsMode::AllCellsExceptHeader);
				 sda->Update(dbdataset);

				 }catch(Exception^ex) 
				 {
					 MessageBox::Show(ex->Message);
				 } 
			 }
	
	private: System::Void dataGridView1_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
				 Form5^ f5 = gcnew Form5();
				 f5->ShowDialog();
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Form4^ f4 = gcnew Form4(user);
				 this->Hide();
				 f4->ShowDialog();
				 this->Show();

			 }
private: System::Void Form3_Load(System::Object^  sender, System::EventArgs^  e){
		 
			this->dateTimePicker1->Hide();
			this->label2->Hide();
			String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("Select * from contact_database.contact where dob='"+dateTimePicker1->Text+"' and user_id='"+user+"';",conDataBase);
				 MySqlDataReader^ MyReader1;
				 int count=0;
				 try{conDataBase->Open();
					 MyReader1=cmdDataBase1->ExecuteReader();
					 
					 while(MyReader1->Read()){
					 String^ cell;
					 cell= MyReader1->GetString("first_name"); 
					 comboBox1->Items->Add(cell);
				    }
					
				 	 conDataBase->Close();
				    }catch(Exception^ex){
						MessageBox::Show(ex->Message);
				 }
				

				 
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("Select first_name,last_name,mobile_1,mobile_2,landline,dob from contact_database.contact where first_name='"+textBox1->Text+"'",conDataBase);
				 MySqlDataReader^ MyReader2;
				 
				 int count=0;
				 try
				 {conDataBase->Open();
					 MyReader2=cmdDataBase2->ExecuteReader();
					 
					 while(MyReader2->Read()){
					 count++;
				    }
					 conDataBase->Close();
					 if(count>0){
						 this->label2->Hide();
						 this->dataGridView1->Show();
				 MySqlDataAdapter ^ sda1 = gcnew MySqlDataAdapter(); 
				 sda1->SelectCommand = cmdDataBase2;
				 DataTable^ dbdataset1 = gcnew DataTable();
				 sda1->Fill(dbdataset1);
				 BindingSource ^bSource1=gcnew BindingSource();

				 bSource1->DataSource = dbdataset1;
				 dataGridView1->DataSource=bSource1;
				 //dataGridView1->AutoResizeColumns(DataGridViewAutoSizeColumnsMode::AllCellsExceptHeader);
				 sda1->Update(dbdataset1);
					 }
					 else{
					 
					 this->dataGridView1->Hide();
					 //this->label2->Text="No Contacts with this name";
					 this->label2->Show();}
					
				 }catch(Exception^ex) 
				 {
					 MessageBox::Show(ex->Message);
				 } 
				 
			 }
		 
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			//  Form7^ f7 = gcnew Form7(user);
				// this->Hide();
				 //f7->ShowDialog();
				 //this->Show();
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->close();
		 }
};
}
