#pragma once
#include "Form10.h"

namespace prototype1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form8
	/// </summary>
	public ref class Form8 : public System::Windows::Forms::Form
	{
	public:
		String ^ user;
		Form8(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Form8(String ^ a)
		{
			InitializeComponent();
			user=a;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form8()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button4;
	protected: 
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button2;


	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form8::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Maroon;
			this->button4->Location = System::Drawing::Point(23, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 69);
			this->button4->TabIndex = 22;
			this->button4->Text = L"Show Shared Contacts ";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form8::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Maroon;
			this->button3->Location = System::Drawing::Point(343, 329);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(103, 28);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form8::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(101, 253);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 25);
			this->label2->TabIndex = 20;
			this->label2->Text = L"No Contacts";
			this->label2->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(196, 15);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(121, 20);
			this->textBox2->TabIndex = 19;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Maroon;
			this->button2->Location = System::Drawing::Point(328, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(118, 28);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Search";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form8::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(196, 61);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 20);
			this->textBox1->TabIndex = 15;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Maroon;
			this->button1->Location = System::Drawing::Point(328, 53);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 28);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Share With\r\n";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form8::button1_Click);
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3});
			this->listView1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(23, 171);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(294, 186);
			this->listView1->Sorting = System::Windows::Forms::SortOrder::Ascending;
			this->listView1->TabIndex = 23;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"First Name";
			this->columnHeader1->Width = 92;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Last Name";
			this->columnHeader2->Width = 90;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Mobile 1";
			this->columnHeader3->Width = 108;
			// 
			// Form8
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(458, 393);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Form8";
			this->Text = L"Form8";
			this->Load += gcnew System::EventHandler(this, &Form8::Form8_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ constring=L"datasource=localhost;port=3306;username=root;password=contact";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^   cmdDataBase1=gcnew MySqlCommand("Select first_name,last_name,mobile_1 from try1.contacts, try1.temp  where try1.contacts.first_name = try1.temp.first_name AND try1.temp.too = '"+user+"' and try1.contacts.last_name = try1.temp.last_name",conDataBase);
				 MySqlDataReader^ MyReader1;

				 int count=0;
				 try
				 {
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
				 catch(Exception^ex) 
				 {
					 MessageBox::Show(ex->Message);
				 } 
			 }
private: System::Void listView1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {


			 ListViewItem ^ objName = listView1->Items[listView1->FocusedItem->Index];
			 String^ i = objName->SubItems[1]->Text;


			 Form10^ f10=gcnew Form10(user,objName->SubItems[0]->Text,objName->SubItems[1]->Text);
			 f10->ShowDialog();
		 }

private: System::Void Form8_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^   cmdDataBase2=gcnew MySqlCommand("Select first_name,last_name from try1.contacts where first_name='"+textBox2->Text+"'",conDataBase);
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

			 if(count==0)
			 {
				 this->listView1->Hide();
				 this->label2->Show();
			 }

			 } catch(Exception^ex) 
			 {
				 MessageBox::Show(ex->Message);
			 } 
		 }
System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) ;
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 ListViewItem ^ objName = listView1->Items[listView1->FocusedItem->Index];
			 String^ i = objName->SubItems[1]->Text;
			 String^ j = objName->SubItems[0]->Text;

			 if(this->textBox1->Text=="")
			 {
				 MessageBox::Show("Enter the user id of your friend");
			 }
			 else
			 { 
				 if(j=="")
				 {
					 MessageBox::Show("First Search The Contact");}
				 else{
					 if(user==this->textBox1->Text)
					 {
						 MessageBox::Show("Not Possible to Share");
					 }
					 else
					 {

						 String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
						 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
						 MySqlCommand^ cmdDataBase3=gcnew MySqlCommand("Select * from try1.login where user_id='"+this->textBox1->Text+"';",conDataBase);
						 MySqlDataReader^ MyReader3;
						 int count1=0;
						 try{
							 conDataBase->Open();
							 MyReader3=cmdDataBase3->ExecuteReader();
							 while(MyReader3->Read()){
								 count1++;
							 }
							 //MessageBox::Show("done!!");
							 conDataBase->Close();
						 }catch(Exception^ex){
							 MessageBox::Show(ex->Message);
						 }
						 if(count1==0)
						 {
							 MessageBox::Show("User id does not exist");
						 }
						 else{

							 MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("Select * from try1.temp where too ='"+this->textBox1->Text+"' and frome ='"+user+"' and first_name='"+j+"' and last_name='"+i+"';",conDataBase);
							 MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("insert into try1.temp (too,frome,first_name,last_name) values('"+this->textBox1->Text+"','"+user+"','"+j+"','"+i+"'); ",conDataBase); 
							 MySqlCommand^ cmdDataBase4=gcnew MySqlCommand("Select * from try1.temp where too ='"+user+"' and frome ='"+this->textBox1->Text+"' and first_name='"+j+"' and last_name='"+i+"';",conDataBase);

							 MySqlDataReader^ MyReader1;
							 MySqlDataReader^ MyReader2;
							 MySqlDataReader^ MyReader4;
							 int count=0,count2=0;
							 try{
								 conDataBase->Open();
								 MyReader1=cmdDataBase1->ExecuteReader();
								 while(MyReader1->Read()){
									 count++;
								 }
								 //MessageBox::Show("done!!");
								 conDataBase->Close();
							 }catch(Exception^ex){
								 MessageBox::Show(ex->Message);
							 }

							 try{
								 conDataBase->Open();
								 MyReader4=cmdDataBase4->ExecuteReader();
								 while(MyReader4->Read()){
									 count2++;
								 }
								 //MessageBox::Show("done!!");
								 conDataBase->Close();
							 }catch(Exception^ex){
								 MessageBox::Show(ex->Message);
							 }
							 if(count2>0)
							 {
								 MessageBox::Show("Resharing cannot be done!!");
							 } else 
							 {
								 try{
									 conDataBase->Open();
									 if(count==0){
										 MyReader2=cmdDataBase2->ExecuteReader();
										 MessageBox::Show("Contact Shared");
									 }
									 else
									 {
										 MessageBox::Show("Contact Already Shared");
									 }
									 conDataBase->Close();
								 }catch(Exception^ex){
									 MessageBox::Show(ex->Message);
								 }}

						 }}
				 }
			 }
		 }
};
}
