#pragma once
// to do attendance
#include"MyForm15.h"
//to check attendance
#include"MyForm16.h"
#
//#include <msclr\marshal_cppstd.h>
//#include "..\\..\\..\\..\\..\\include\\ClassLib\\ltWrappr.h"


namespace Includeme {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//to connect to database
	using namespace MySql::Data::MySqlClient;
	//for image saving hai guys haru
	//using namespace System::IO;

	/// <summary>
	/// Summary for MyForm13
	/// </summary>
	public ref class MyForm13 : public System::Windows::Forms::Form
	{

	public:
		MyForm13(void)
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
		~MyForm13()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ image1;
	private: System::Windows::Forms::PictureBox^ image2;



	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ imagelocation;

	private: System::ComponentModel::IContainer^ components;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm13::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->imagelocation = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->image1 = (gcnew System::Windows::Forms::Button());
			this->image2 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->image2))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, -1);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(107, 74);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Window;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(105, -1);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(482, 25);
			this->textBox4->TabIndex = 7;
			this->textBox4->Text = L"Welcome to teacher login page";
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(-1, 222);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(221, 248);
			this->panel1->TabIndex = 8;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Desktop;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(32, 19);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(151, 25);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"Attendance";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(25, 181);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(172, 62);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Check Attendance";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm13::Button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(25, 86);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(172, 58);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Do Attendance";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm13::Button1_Click);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->imagelocation);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->image1);
			this->panel2->Controls->Add(this->image2);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Location = System::Drawing::Point(220, 222);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(249, 252);
			this->panel2->TabIndex = 9;
			// 
			// imagelocation
			// 
			this->imagelocation->Location = System::Drawing::Point(26, 182);
			this->imagelocation->Name = L"imagelocation";
			this->imagelocation->Size = System::Drawing::Size(192, 20);
			this->imagelocation->TabIndex = 7;
			this->imagelocation->TextChanged += gcnew System::EventHandler(this, &MyForm13::Imagelocation_TextChanged);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(131, 211);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(119, 37);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Save";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm13::Button3_Click_1);
			// 
			// image1
			// 
			this->image1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->image1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->image1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->image1->Location = System::Drawing::Point(5, 210);
			this->image1->Margin = System::Windows::Forms::Padding(2);
			this->image1->Name = L"image1";
			this->image1->Size = System::Drawing::Size(119, 37);
			this->image1->TabIndex = 5;
			this->image1->Text = L"Browse";
			this->image1->UseVisualStyleBackColor = false;
			this->image1->Click += gcnew System::EventHandler(this, &MyForm13::Button3_Click);
			// 
			// image2
			// 
			this->image2->Location = System::Drawing::Point(26, 56);
			this->image2->Margin = System::Windows::Forms::Padding(2);
			this->image2->Name = L"image2";
			this->image2->Size = System::Drawing::Size(192, 107);
			this->image2->TabIndex = 4;
			this->image2->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Desktop;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox2->Location = System::Drawing::Point(59, 21);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(127, 25);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"Assignment";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Controls->Add(this->textBox6);
			this->panel3->Controls->Add(this->textBox5);
			this->panel3->Controls->Add(this->richTextBox1);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->textBox3);
			this->panel3->Location = System::Drawing::Point(469, 223);
			this->panel3->Margin = System::Windows::Forms::Padding(2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(251, 247);
			this->panel3->TabIndex = 10;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm13::Panel3_Paint);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::Desktop;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox6->Location = System::Drawing::Point(-1, 21);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(67, 25);
			this->textBox6->TabIndex = 7;
			this->textBox6->Text = L"Date";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(87, 23);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(156, 29);
			this->textBox5->TabIndex = 6;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(16, 90);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(211, 111);
			this->richTextBox1->TabIndex = 5;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm13::RichTextBox1_TextChanged);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(45, 213);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(172, 37);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Publish";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm13::Button4_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Desktop;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox3->Location = System::Drawing::Point(9, 55);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(67, 25);
			this->textBox3->TabIndex = 3;
			this->textBox3->Text = L"Notice";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm13::TextBox3_TextChanged);
			// 
			// MyForm13
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::GhostWhite;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(723, 487);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximumSize = System::Drawing::Size(739, 599);
			this->MinimumSize = System::Drawing::Size(739, 492);
			this->Name = L"MyForm13";
			this->Text = L"Teacher Login";
			this->Load += gcnew System::EventHandler(this, &MyForm13::MyForm13_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->image2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm13_Load(System::Object^ sender, System::EventArgs^ e) {
	}
			 // yo bata chai photo halney hai 
	private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {

		try

		{

			OpenFileDialog^ dialog = gcnew OpenFileDialog();



			if (dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)

			{
				//string picPath = msclr::interop::marshal_as<std::string>(dialog->FileName->ToString());

				imagelocation->Text = dialog->FileName->ToString();
				//MessageBox::Show(imagelocation->ToString());

				//imagelocation->Text = picPath;



				image2->Image = Image::FromFile(dialog->FileName);

				//image2->Image= picPath;



			}

		}

		catch (exception) {

			MessageBox::Show("an error occur", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}

	}

	private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
		// yo bata chai teacher ko notice aaucha
		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=includemecpp1";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			String^ Date = textBox5->Text;
			String^ Notice = richTextBox1->Text;


			MySqlCommand^ cmd = gcnew MySqlCommand("insert into notice_teacher values('" + Date + "','" + Notice + "')", con);
			MySqlDataReader^ dr;
			if (Date == "")
			{
				MessageBox::Show("please enter date");

			}

			else
			{
				con->Open();

				dr = cmd->ExecuteReader();
				textBox5->Text = "";

				richTextBox1->Text = "";
				MessageBox::Show("notice saved");

			}



		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);


		}
	}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm15^ f15 = gcnew MyForm15();
		f15->ShowDialog();
	}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm16^ f16 = gcnew MyForm16();
		f16->ShowDialog();

	}
	private: System::Void RichTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		// yaa baata xai imge file ko location database ma save garni
	}
	private: System::Void Button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=image_file";

			MySqlConnection^ con = gcnew MySqlConnection(constr);

			String^ image = imagelocation->Text;

			//string *aa = image;
			String^ updatedString = gcnew String("");
			int i = 0;
			while (i < image->Length) {
				if (image[i] == '\\') {
					updatedString += "\\\\\\\\";
				}
				else {
					updatedString += image[i];
				}
				i++;
			}
	

			MessageBox::Show(updatedString);

			MySqlCommand^ cmd = gcnew MySqlCommand("insert into assignment values('" + updatedString + "')", con);

			MySqlDataReader^ dr;

			con->Open();

			dr = cmd->ExecuteReader();

			MessageBox::Show("image file saved");
		}
		catch (const std::exception&)
		{

		}

	}
	private: System::Void Imagelocation_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
