#pragma once
#include "Form3.h"
//This is the code for login form

namespace prototype1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

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
	private: System::Windows::Forms::TextBox^  text_name;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  text_password;
	private: System::Windows::Forms::Button^  login;
	private: System::Windows::Forms::Button^  create_new;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label4;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->text_name = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->text_password = (gcnew System::Windows::Forms::TextBox());
			this->login = (gcnew System::Windows::Forms::Button());
			this->create_new = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// text_name
			// 
			this->text_name->ForeColor = System::Drawing::Color::Black;
			this->text_name->Location = System::Drawing::Point(302, 111);
			this->text_name->Name = L"text_name";
			this->text_name->Size = System::Drawing::Size(100, 20);
			this->text_name->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Location = System::Drawing::Point(133, 111);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"User Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label2->Location = System::Drawing::Point(133, 162);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password";
			// 
			// text_password
			// 
			this->text_password->ForeColor = System::Drawing::Color::Black;
			this->text_password->Location = System::Drawing::Point(302, 162);
			this->text_password->Name = L"text_password";
			this->text_password->PasswordChar = '*';
			this->text_password->Size = System::Drawing::Size(100, 20);
			this->text_password->TabIndex = 2;
			// 
			// login
			// 
			this->login->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->login->Cursor = System::Windows::Forms::Cursors::Hand;
			this->login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->login->ForeColor = System::Drawing::Color::Maroon;
			this->login->Location = System::Drawing::Point(222, 201);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(75, 28);
			this->login->TabIndex = 4;
			this->login->Text = L"Login";
			this->login->UseVisualStyleBackColor = false;
			this->login->Click += gcnew System::EventHandler(this, &Form1::login_Click);
			// 
			// create_new
			// 
			this->create_new->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->create_new->Cursor = System::Windows::Forms::Cursors::Hand;
			this->create_new->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->create_new->ForeColor = System::Drawing::Color::Maroon;
			this->create_new->Location = System::Drawing::Point(222, 243);
			this->create_new->Name = L"create_new";
			this->create_new->Size = System::Drawing::Size(75, 28);
			this->create_new->TabIndex = 5;
			this->create_new->Text = L"Create New";
			this->create_new->UseVisualStyleBackColor = false;
			this->create_new->Click += gcnew System::EventHandler(this, &Form1::create_new_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label3->Location = System::Drawing::Point(46, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(444, 50);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Contact Management";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Maroon;
			this->label4->Location = System::Drawing::Point(197, 292);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(125, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Forgot Password";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(544, 332);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->create_new);
			this->Controls->Add(this->login);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->text_password);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->text_name);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(560, 370);
			this->MinimumSize = System::Drawing::Size(560, 370);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void login_Click(System::Object^  sender, System::EventArgs^  e) {
				 //Button for the user to login into system
				 String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 //MySql query to find user from the table try1.contacts
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Select * from try1.login where name='"+this->text_name->Text+"' and password='"+this->text_password->Text+"';",conDataBase);
				 MySqlDataReader^ MyReader;
				 int count=0;  //This will keep track if user exist or not
				 try{
					 conDataBase->Open();
					 MyReader=cmdDataBase->ExecuteReader();
					 while(MyReader->Read()){
			         count++;
					 }
					 conDataBase->Close();
				    }catch(Exception^ex){
						MessageBox::Show(ex->Message);
				 }

				 try{
					 conDataBase->Open();
					 if(count==0){
					 MessageBox::Show("User and Password combination does not exist!!");
					 text_name->Text="";
					 text_password->Text="";
					 }
					 else
					 {
						 Form3^ f3 = gcnew Form3(text_name->Text); //this will open a new form
						 this->Hide();
						 f3->ShowDialog();
					 }
			 }catch(Exception^ex){
				 MessageBox::Show(ex->Message);
				 }
			 }
System::Void create_new_Click(System::Object^  sender, System::EventArgs^  e) ;//This button is called in protoype1.cpp to make it public and access other forms
//used to create new user


System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) ;//This label is called in protoype1.cpp to make it public and access other forms
//Forget password label


private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("CREATE DATABASE  IF NOT EXISTS `try1`;USE `try1`; ",conDataBase);
			 MySqlDataReader^ MyReader1;
			 MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("CREATE TABLE IF NOT EXISTS `contacts` (	 `id` int(11) NOT NULL AUTO_INCREMENT, `first_name` varchar(45) DEFAULT 'NONE', `last_name` varchar(45) DEFAULT 'NONE', `mobile_1` varchar(45) DEFAULT '0', `mobile_2` varchar(45) DEFAULT '0', `landline` varchar(45) DEFAULT '0', `user_id` varchar(45) DEFAULT 'NONE', `status` varchar(45) DEFAULT '1', `address` varchar(1000) DEFAULT 'NONE', `birth_day` varchar(100) DEFAULT 'NONE', `aniversary` varchar(100) DEFAULT 'NONE', `fax` varchar(45) DEFAULT '0', `imp_date` varchar(100) DEFAULT 'NONE', `note_date` varchar(1000) DEFAULT 'NONE',`custom_info` varchar(1000) DEFAULT 'NONE', `del` int(11) DEFAULT '0', `designation` varchar(45) DEFAULT 'NONE',	 `grp` varchar(45) DEFAULT 'NONE',`safefilename` varchar(45) DEFAULT 'NONE', PRIMARY KEY (`id`)) ENGINE=InnoDB AUTO_INCREMENT=10 DEFAULT CHARSET=utf8; ",conDataBase);
			 MySqlDataReader^ MyReader2;
			 MySqlCommand^ cmdDataBase3=gcnew MySqlCommand("CREATE TABLE IF NOT EXISTS `login` ( `id` int(11) NOT NULL AUTO_INCREMENT, `name` varchar(45) DEFAULT NULL, `password` varchar(45) DEFAULT NULL, `first_name` varchar(45) DEFAULT NULL, `last_name` varchar(45) DEFAULT NULL,`security` varchar(100) DEFAULT NULL, PRIMARY KEY (`id`)) ENGINE=InnoDB AUTO_INCREMENT=14 DEFAULT CHARSET=utf8; ",conDataBase);
			 MySqlDataReader^ MyReader3;
			 MySqlCommand^ cmdDataBase4=gcnew MySqlCommand("CREATE TABLE IF NOT EXISTS `temp` ( `id` int(11) NOT NULL DEFAULT '1000', `too` varchar(45) DEFAULT NULL, `frome` varchar(45) DEFAULT NULL,`first_name` varchar(45) DEFAULT NULL,`last_name` varchar(45) DEFAULT NULL, PRIMARY KEY (`id`)) ENGINE=InnoDB DEFAULT CHARSET=utf8;",conDataBase);
			 MySqlDataReader^ MyReader4;

			 try{
				 conDataBase->Open();
				  MyReader1=cmdDataBase1->ExecuteReader();
				  conDataBase->Close();
				  conDataBase->Open();
				  MyReader2=cmdDataBase2->ExecuteReader();
				  conDataBase->Close();
				  conDataBase->Open();
				  MyReader3=cmdDataBase3->ExecuteReader();
				  conDataBase->Close();
				  conDataBase->Open();
				  MyReader4=cmdDataBase4->ExecuteReader();
				  conDataBase->Close();
			 }catch(Exception^ ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
		 }
};
}

