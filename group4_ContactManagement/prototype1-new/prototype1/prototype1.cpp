// prototype1.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"
#include "Form2.h"
#include "Form3.h"
#include "Form4.h"
#include "Form5.h"
#include "Form6.h"
#include "Form7.h"
#include "Form8.h"
#include "Form9.h"
using namespace prototype1;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}

System::Void Form1::label4_Click(System::Object^  sender, System::EventArgs^  e) {
	//Forgot password label from Login Form, ie Form1
	this->Hide();
	Form6^ f6 = gcnew Form6();
	f6->ShowDialog();
}

System::Void Form1::create_new_Click(System::Object^  sender, System::EventArgs^  e) {
		//Create new user button from Login form, ie Form1 
			 this->Hide();
			 Form2^ f2 = gcnew Form2();
			 f2->ShowDialog();
		 }

System::Void Form3::button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	//Log out the user from Home Page and redirects to Login Page
	Form1^ f1 = gcnew Form1();
	this->Hide();
	f1->ShowDialog();

}

System::Void Form4::button2_Click(System::Object^  sender, System::EventArgs^  e)
{
	//This opens the user home page again from Add new contact form
	Form3^ f3=gcnew Form3(user_id);
	this->Hide();
	f3->ShowDialog();
}

System::Void Form5::button2_Click(System::Object^  sender, System::EventArgs^  e) {
	//This allows the user to delete the contact temporarily and redirect to User Home Page
	String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
	MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
	String ^ d ="1";
	MySqlCommand^ cmdDataBase=gcnew MySqlCommand("update try1.contacts set del='"+d+"' where (user_id='"+user+"' and first_name='"+first_name+"' and last_name='"+last_name+"');",conDataBase);
	MySqlDataReader^ MyReader;

	try{
		conDataBase->Open();
		MyReader=cmdDataBase->ExecuteReader();
		conDataBase->Close();
		Form3^ f3=gcnew Form3(user);
		this->Hide();
		f3->ShowDialog();

	}catch(Exception ^ex)
	{
		MessageBox::Show(ex->Message);
	}
}

System::Void Form5::button3_Click(System::Object^  sender, System::EventArgs^  e) {
	//This allows the user to delete the contact permanently
	String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
	MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase=gcnew MySqlCommand("delete from try1.contacts where (user_id='"+user+"' and first_name='"+first_name+"' and last_name='"+last_name+"')",conDataBase);
	MySqlDataReader^ MyReader;

	try{
		conDataBase->Open();
		MyReader=cmdDataBase->ExecuteReader();
		conDataBase->Close();
		Form3^ f3=gcnew Form3(user);
		this->Hide();
		f3->ShowDialog();

	}catch(Exception ^ex)
	{
		MessageBox::Show(ex->Message);
	}
}

System::Void Form7::button1_Click(System::Object^  sender, System::EventArgs^  e) {
	//This allows the user to change password from User Home Page
	String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
	MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("Select * from try1.login where name='"+user+"';",conDataBase);
	MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("Select * from try1.login where (name='"+user+"' and password='"+this->textBox2->Text+"');",conDataBase);
	MySqlCommand^ cmdDataBase3=gcnew MySqlCommand("update try1.login set password='"+this->textBox3->Text+"' where (name='"+user+"'); ",conDataBase); 
	MySqlDataReader^ MyReader1;
	MySqlDataReader^ MyReader2;
	MySqlDataReader^ MyReader3;
	int count1=0;
	int count2=0;
	try{
		conDataBase->Open();
		MyReader1=cmdDataBase1->ExecuteReader();
		while(MyReader1->Read()){
			count1++;
		}
		//MessageBox::Show("done!!");
		conDataBase->Close();
		conDataBase->Open();
		MyReader2=cmdDataBase2->ExecuteReader();
		while(MyReader2->Read()){
			count2++;
		}
		//MessageBox::Show("done!!");
		conDataBase->Close();

	}catch(Exception^ex){
		MessageBox::Show(ex->Message);
	}

	try{
		
		if(textBox1->Text!="" && textBox2->Text!="" && textBox3->Text!="" && textBox4->Text!=""){
			if(count1!=0)
			{
				if(count2!=0)
				{
					if(textBox3->Text == textBox4->Text){
						conDataBase->Open();
						MyReader3=cmdDataBase3->ExecuteReader();
						MessageBox::Show("Password is Changed!!");
						conDataBase->Close();
						Form3^ f3=gcnew Form3(user);
						this->Hide();
						f3->ShowDialog();
					}
					else{
						MessageBox::Show("The password is not same!!");
						textBox4->Text="";
					}
				}
				else
				{
					MessageBox::Show("Password is not correct!!");
					textBox2->Text="";
				}
			}
			else
			{
				MessageBox::Show("The user does not Exist!!");
				textBox1->Text="";
			}
		}else{
			MessageBox::Show("Fill all the mandatory fields!!");
		}
		
	}catch(Exception^ ex){
		MessageBox::Show(ex->Message);
	}
}

System::Void Form8::button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	Form3 ^f3 = gcnew Form3(user);
	this->Hide();
	f3->ShowDialog();
}

System::Void Form9::button1_Click(System::Object^  sender, System::EventArgs^  e) {
	//Updates the contact as per user requirement
	String^ constring=L"datasource=localhost;port=3306;username=root;password=root";
	MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase=gcnew MySqlCommand("update try1.contacts set mobile_1='"+textBox3->Text+"', mobile_2='"+textBox4->Text+"', landline='"+textBox5->Text+"', address='"+textBox6->Text+"', birth_day='"+textBox11->Text+"', aniversary='"+textBox12->Text+"', fax='"+textBox7->Text+"', imp_date='"+textBox13->Text+"', note_date='"+textBox8->Text+"', custom_info='"+textBox10->Text+"', designation='"+textBox9->Text+"' ,grp='"+comboBox1->Text+"' where (user_id='"+user+"' and first_name='"+first+"' and last_name='"+last+"')",conDataBase);
	//MessageBox::Show("update try1.contacts set mobile_1='"+textBox3->Text+"', mobile_2='"+textBox4->Text+"', landline='"+textBox5->Text+"', address='"+textBox6->Text+"', birth_day'"+textBox11->Text+"', aniversary='"+textBox12->Text+"', fax='"+textBox7->Text+"', imp_date='"+textBox13->Text+"', note_date='"+textBox8->Text+"', custom_info='"+textBox10->Text+"', designation='"+textBox9->Text+"' ,grp='"+comboBox1->Text+"' where (user_id='"+user+"' and first_name='"+first+"' and last_name='"+last+"')");
	MySqlDataReader^ MyReader;
	try{
		conDataBase->Open();
		MyReader=cmdDataBase->ExecuteReader();
		MessageBox::Show("Contact Updated!!");
		conDataBase->Close();
		Form5 ^f5 = gcnew Form5(user,first,last);
		f5->ShowDialog();
		this->Hide();
	}catch(Exception ^ex)
	{
		MessageBox::Show(ex->Message);
	}
}