#pragma once
//guys haru maile mero part gareko ma nabujini tham explain gareko chu hai hernu ni ramrari
//to link one form to another remember hai aayush
#include "MyForm13.h"
//teacher ma redirect garxa
#include "MyForm14.h"

namespace Includeme {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//to connect to database
	using namespace MySql::Data::MySqlClient;





	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			password_txt ->PasswordChar = '*';	              //for encryption
			//password_txt ->MaxLength = 10;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Panel^ panel2;


	private: System::Windows::Forms::PictureBox^ pictureBox1;





	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;


	private: System::Windows::Forms::Button^ button1;











	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ password_txt;




	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel1;












	
	private: System::Windows::Forms::Splitter^ splitter1;

	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label10;


	private: System::ComponentModel::IContainer^ components;



	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->password_txt = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->splitter1);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->textBox10);
			this->panel2->Controls->Add(this->textBox9);
			this->panel2->Controls->Add(this->textBox7);
			this->panel2->Location = System::Drawing::Point(479, 283);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(615, 418);
			this->panel2->TabIndex = 2;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Panel2_Paint);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(76, 251);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(157, 25);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Password : -";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(114, 181);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 25);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Name : -";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(156, 114);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 25);
			this->label5->TabIndex = 15;
			this->label5->Text = L"ID : - ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 26.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(37, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(339, 42);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Register Here !!!";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 26.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(37, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(240, 42);
			this->label2->TabIndex = 9;
			this->label2->Text = L"New User \?";
			// 
			// splitter1
			// 
			this->splitter1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->splitter1->Location = System::Drawing::Point(0, 0);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(3, 418);
			this->splitter1->TabIndex = 16;
			this->splitter1->TabStop = false;
			// 
			// button3
			// 
			this->button3->AutoEllipsis = true;
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(451, 351);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 58);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Teacher";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click);
			// 
			// button1
			// 
			this->button1->AutoEllipsis = true;
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(94, 351);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 58);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Student ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(233, 183);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(311, 24);
			this->textBox10->TabIndex = 7;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::HighlightText;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox9->Location = System::Drawing::Point(233, 116);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(311, 24);
			this->textBox9->TabIndex = 6;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(233, 253);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(314, 24);
			this->textBox7->TabIndex = 4;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox7_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-4, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(127, 104);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::PictureBox1_Click);
			// 
			// password_txt
			// 
			this->password_txt->BackColor = System::Drawing::Color::GhostWhite;
			this->password_txt->ForeColor = System::Drawing::SystemColors::InfoText;
			this->password_txt->Location = System::Drawing::Point(204, 240);
			this->password_txt->Name = L"password_txt";
			this->password_txt->Size = System::Drawing::Size(272, 24);
			this->password_txt->TabIndex = 4;
			this->password_txt->TextChanged += gcnew System::EventHandler(this, &MyForm::Password_txt_TextChanged);
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::SystemColors::HighlightText;
			this->textBox15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox15->Location = System::Drawing::Point(204, 186);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(272, 24);
			this->textBox15->TabIndex = 6;
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox15_TextChanged);
			// 
			// button2
			// 
			this->button2->AutoEllipsis = true;
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(225, 351);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 58);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Log in";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->textBox15);
			this->panel1->Controls->Add(this->password_txt);
			this->panel1->Location = System::Drawing::Point(-2, 284);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(484, 418);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Panel1_Paint);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(-1, 240);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(157, 25);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Password : -";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::Label8_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(95, 182);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 25);
			this->label4->TabIndex = 14;
			this->label4->Text = L"ID : - ";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::Label4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 26.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(14, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(153, 42);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Sign in";
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->monthCalendar1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->monthCalendar1->Location = System::Drawing::Point(850, 5);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 8;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &MyForm::MonthCalendar1_DateChanged);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(120, 47);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(277, 62);
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(169, -5);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(666, 73);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Kathmandu University";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1084, 744);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(6);
			this->MaximumSize = System::Drawing::Size(1100, 800);
			this->MinimumSize = System::Drawing::Size(1100, 736);
			this->Name = L"MyForm";
			this->Text = L"#include<me>";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TextBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void TextBox15_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TextBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}



		 // from this line we register thye data into the database



	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ id = textBox9->Text;
		String^ name = textBox10->Text;
		String^ password = textBox7->Text;
		if (textBox9->Text == "" || textBox10->Text == "" || textBox7->Text == "") {

			MessageBox::Show("OOPS! Error. Please insert all the required data");
		}

		else {

			try
			{
				String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=includemecpp";
				MySqlConnection^ con = gcnew MySqlConnection(constr);
				String^ id = textBox9->Text;
				String^ name = textBox10->Text;
				String^ password = textBox7->Text;
				MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO `register_data`(`id`, `name`, `password`, `data`, `remarks`) VALUES ('" + id + "','" + name + "','" + password + "','0','remarks')", con);
				MySqlDataReader^ dr;
				con->Open();
				dr = cmd->ExecuteReader();
				MessageBox::Show("student info saved");
				textBox9->Text = "";
				textBox10->Text = "";
				textBox7->Text = "";

			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);


			}
		}
	}

		 //yesbata chai teacher ko save hunxa



		 private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
			 try
			 {
				 String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=includemecpp1";
				 MySqlConnection^ con = gcnew MySqlConnection(constr);
				 String^ id = textBox9->Text;
				 String^ name = textBox10->Text;
				 String^ password = textBox7->Text;
				 MySqlCommand^ cmd = gcnew MySqlCommand("insert into register_data_teacher values('" + id + "','" + name + "','" + password + "')", con);
				 MySqlDataReader^ dr;
				 con->Open();
				 dr = cmd->ExecuteReader();
				 MessageBox::Show("teacher info saved");
				  textBox9->Text="";
				  textBox10->Text="";
				  textBox7->Text="";
			 }
			 catch (Exception ^ ex)
			 {
				 MessageBox::Show(ex->Message);


			 }
		 }




		 //aba yo bata chai sign in click garda page change huney!!!





private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {

	
	try
	{
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=includemecpp";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		String^ id = textBox15->Text;
		
		String^ password = password_txt->Text;
		//to check the data base values
		//yesma select garda chai yaad garnu ki harek database name pachi and rakhe vanye jancha
		MySqlCommand^ cmd = gcnew MySqlCommand("SELECT `id`, `name`, `password` FROM `register_data` WHERE   id= '" + this->textBox15->Text + "' AND password= '" + this->password_txt->Text + "';", con);

		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();
		//initilization of count to log in using if else
		int count_student = 0;
		//dr->Read() ley database vitra read garxa ani yedi user input sanga milyo vaney count badhcha
		while (dr->Read())
		{
			count_student += 1;

		}
		if (count_student == 1)
		{//yesley chai teacher ko dekhauxa
			this->Hide();
			MyForm14^ f14 = gcnew MyForm14();
			f14->ShowDialog();

		}
	
		else
		{
			
			//paila student ko database jancha ani vayena vaney chai teacher ko ma janxa ani kunai ma vayena vaney chai error dinxa

			try

			{
				String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=includemecpp1";
				MySqlConnection^ con = gcnew MySqlConnection(constr);
				String^ id = textBox15->Text;
				
				String^ password = password_txt->Text;
				//to check the data base values
				//yesma select garda chai yaad garnu ki harek database name pachi and rakhe vanye jancha
				MySqlCommand^ cmd = gcnew MySqlCommand("SELECT `id`, `name`, `password` FROM `register_data_teacher` WHERE   id= '" + this->textBox15->Text + "' AND password= '" + this->password_txt->Text + "';", con);

				MySqlDataReader^ dr;
				con->Open();
				dr = cmd->ExecuteReader();
				//initilization of count to log in using if else
				int count_teacher = 0;
				//dr->Read() ley database vitra read garxa ani yedi user input sanga milyo vaney count badhcha
				while (dr->Read())
				{
					count_teacher += 1;

				}
				if (count_teacher == 1)
				{
					this->Hide();
					MyForm13^ f13 = gcnew MyForm13();
					f13->ShowDialog();

				}

				else
				{
					MessageBox::Show("wrong input...try again");

				}

			}
			catch (Exception ^ ex)
			{
				MessageBox::Show(ex->Message);


			}



		}
		
	}
	catch (Exception ^ ex)
	{
		MessageBox::Show(ex->Message);


	}
	 textBox15->Text="";
	 
	 password_txt->Text="";

	

	






	
	
}

private: System::Void TextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TextBox17_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void PictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TextBox14_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TextBox18_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void Password_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MonthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
}
private: System::Void Label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
