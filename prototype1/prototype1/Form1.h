#pragma once
#include "Form2.h"
#include "stdafx.h"
#include "Form3.h"

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
			this->text_name = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->text_password = (gcnew System::Windows::Forms::TextBox());
			this->login = (gcnew System::Windows::Forms::Button());
			this->create_new = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// text_name
			// 
			this->text_name->Location = System::Drawing::Point(152, 51);
			this->text_name->Name = L"text_name";
			this->text_name->Size = System::Drawing::Size(100, 20);
			this->text_name->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(57, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"User Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(57, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password";
			// 
			// text_password
			// 
			this->text_password->Location = System::Drawing::Point(152, 94);
			this->text_password->Name = L"text_password";
			this->text_password->PasswordChar = '*';
			this->text_password->Size = System::Drawing::Size(100, 20);
			this->text_password->TabIndex = 2;
			// 
			// login
			// 
			this->login->Location = System::Drawing::Point(96, 158);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(75, 23);
			this->login->TabIndex = 4;
			this->login->Text = L"Login";
			this->login->UseVisualStyleBackColor = true;
			this->login->Click += gcnew System::EventHandler(this, &Form1::login_Click);
			// 
			// create_new
			// 
			this->create_new->Location = System::Drawing::Point(96, 201);
			this->create_new->Name = L"create_new";
			this->create_new->Size = System::Drawing::Size(75, 23);
			this->create_new->TabIndex = 5;
			this->create_new->Text = L"Create New";
			this->create_new->UseVisualStyleBackColor = true;
			this->create_new->Click += gcnew System::EventHandler(this, &Form1::create_new_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->create_new);
			this->Controls->Add(this->login);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->text_password);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->text_name);
			this->Name = L"Form1";
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void login_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Select * from try1.login where name='"+this->text_name->Text+"' and password='"+this->text_password->Text+"';",conDataBase);
				 MySqlDataReader^ MyReader;
				 //MySqlDataReader^ MyReader2;
				 int count=0;
				 try{
					 conDataBase->Open();
					 MyReader=cmdDataBase->ExecuteReader();
					 while(MyReader->Read()){
			         count++;
					 }
					 //MessageBox::Show("done!!");
					 conDataBase->Close();
				    }catch(Exception^ex){
						MessageBox::Show(ex->Message);
				 }

				 try{
					 conDataBase->Open();
					 if(count==0){
					 //MyReader2=cmdDataBase2->ExecuteReader();
					 MessageBox::Show("user does not Exist!");
					 Form2^ f2 = gcnew Form2();
					 f2->ShowDialog();
					 }
					 else
					 {
						 //MessageBox::Show("User already exist");
						 this->Hide();
						 Form3^ f3 = gcnew Form3();
						 f3->ShowDialog();
					 }
			 }catch(Exception^ex){
				 MessageBox::Show(ex->Message);
				 }
			 }
private: System::Void create_new_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 Form2^ f2 = gcnew Form2();
					 f2->ShowDialog();
		 }
};
}

