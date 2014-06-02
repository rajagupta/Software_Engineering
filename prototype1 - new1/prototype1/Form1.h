#pragma once
#include "Form2.h"
#include "Form3.h"
#include "Form6.h"

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
			this->text_name->Location = System::Drawing::Point(332, 79);
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
			this->label1->Location = System::Drawing::Point(117, 79);
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
			this->label2->Location = System::Drawing::Point(117, 143);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password";
			// 
			// text_password
			// 
			this->text_password->Location = System::Drawing::Point(332, 143);
			this->text_password->Name = L"text_password";
			this->text_password->PasswordChar = '*';
			this->text_password->Size = System::Drawing::Size(100, 20);
			this->text_password->TabIndex = 2;
			// 
			// login
			// 
			this->login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->login->Location = System::Drawing::Point(237, 199);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(75, 27);
			this->login->TabIndex = 4;
			this->login->Text = L"Login";
			this->login->UseVisualStyleBackColor = true;
			this->login->Click += gcnew System::EventHandler(this, &Form1::login_Click);
			// 
			// create_new
			// 
			this->create_new->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->create_new->Location = System::Drawing::Point(237, 243);
			this->create_new->Name = L"create_new";
			this->create_new->Size = System::Drawing::Size(75, 27);
			this->create_new->TabIndex = 5;
			this->create_new->Text = L"Create New";
			this->create_new->UseVisualStyleBackColor = true;
			this->create_new->Click += gcnew System::EventHandler(this, &Form1::create_new_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(27, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(503, 55);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Contact Management";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(216, 291);
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
			this->ClientSize = System::Drawing::Size(565, 325);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->create_new);
			this->Controls->Add(this->login);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->text_password);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->text_name);
			this->Name = L"Form1";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void login_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("Select * from contact_database.registration where user_id='"+this->text_name->Text+"' and password='"+this->text_password->Text+"';",conDataBase);
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
					 text_name->Text="";
					 }
					 else
					 {
						 //MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("INSERT into try1.temp (id) values('"+this->text_name->Text+"');",conDataBase);
						 //MySqlDataReader^ MyReader1;
						 //MyReader1=cmdDataBase1->ExecuteReader();
						 //MessageBox::Show("User already exist");
						 
						 Form3^ f3 = gcnew Form3(text_name->Text);
						 this->Hide();
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

private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 Form6^ f6 = gcnew Form6();
			 f6->ShowDialog();
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

