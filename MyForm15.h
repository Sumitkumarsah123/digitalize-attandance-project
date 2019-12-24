#pragma once
#include<string>
#include<cstdlib>
static int i;
namespace Includeme {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	//
	static int count, for_scope = 0;
	/// <summary>
	/// Summary for MyForm15
	/// </summary>
	public ref class MyForm15 : public System::Windows::Forms::Form
	{
	public:
		MyForm15(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			try
			{
				String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=includemecpp";
				MySqlConnection^ con = gcnew MySqlConnection(constr);
				MySqlDataAdapter^ da = gcnew MySqlDataAdapter("SELECT * FROM `register_data` ", con);
				DataTable^ dt = gcnew DataTable();


				da->Fill(dt);
				DataRow^ ls = dt->Rows[0];
				richTextBox1->Text = ls[1]->ToString();
				richTextBox3->Text = ls[2]->ToString();


			}
			catch (const std::exception&)
			{

			}

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm15()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:


	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;







	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm15::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(519, 2);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 93);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Present";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm15::Button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(2, 2);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(68, 93);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(258, 2);
			this->richTextBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(257, 93);
			this->richTextBox2->TabIndex = 4;
			this->richTextBox2->Text = L"";
			// 
			// richTextBox3
			// 
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox3->Location = System::Drawing::Point(74, 2);
			this->richTextBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(180, 93);
			this->richTextBox3->TabIndex = 5;
			this->richTextBox3->Text = L"";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 5;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				28.23529F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				71.76471F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				261)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				114)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				99)));
			this->tableLayoutPanel1->Controls->Add(this->richTextBox1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->richTextBox3, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->button2, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->richTextBox2, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->button1, 3, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(38, 171);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(731, 97);
			this->tableLayoutPanel1->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(633, 2);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 93);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Absent";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm15::Button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(381, 134);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 25);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Remark";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(163, 134);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 25);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Name";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm15::Label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(59, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 25);
			this->label3->TabIndex = 13;
			this->label3->Text = L"ID";
			// 
			// MyForm15
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(784, 461);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MaximumSize = System::Drawing::Size(800, 500);
			this->MinimumSize = System::Drawing::Size(500, 500);
			this->Name = L"MyForm15";
			this->Text = L"MyForm15";
			this->Load += gcnew System::EventHandler(this, &MyForm15::MyForm15_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {






		//uo bata chai onclick attendance linxa




		// aba yo bata chai remarks register huney





		try
		{


			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=includemecpp";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			DataTable^ dt = gcnew DataTable();
			MySqlDataReader^ dr;





			MySqlDataAdapter^ da = gcnew MySqlDataAdapter("SELECT * FROM `register_data` ", con);
			da->Fill(dt);

			if (for_scope > (dt->Rows->Count - 1))
			{

				this->Close();
			}

			else// (for_scope <= (dt->Rows->Count - 1))
			{
				DataRow^ lastRow = dt->Rows[for_scope];


				//MessageBox::Show(lastRow[2]->ToString());

				String^ str = lastRow[4]->ToString();

				count = Int32::Parse(str);
				count++;
				MessageBox::Show(count.ToString());

				String^ rema = richTextBox2->Text;


				// UPDATE `student_att` SET `data`=[value - 2], `remarks`=[value - 3] WHERE 1


				MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE `register_data` SET `remarks`= '" + rema + "',`data`='" + count.ToString() + "' WHERE `sn`='" + lastRow[0] + "' ", con);
				con->Open();

				dr = cmd->ExecuteReader();

				con->Close();
				richTextBox3->Text = "";
				richTextBox1->Text = "";





				//yo bata chai dekhauxa
				String^ constr1 = "Server=127.0.0.1;Uid=root;Pwd=;Database=includemecpp";
				MySqlConnection^ con1 = gcnew MySqlConnection(constr1);
				MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * FROM `register_data` ", con1);
				MySqlDataReader^ dr1;
				con1->Open();
				dr1 = cmd1->ExecuteReader();


				if (dr1->Read())
				{
					//ma aba yesma data read garaidinchu ani each time euta row read huda mlai tha huncha kati ota
						//xa vanera ani loop lagayera dekhauchu yeslai


					con1->Close();
					MySqlDataAdapter^ da1 = gcnew MySqlDataAdapter("SELECT * FROM `register_data` ", con1);
					DataTable^ dt1 = gcnew DataTable();
					da1->Fill(dt1);

					for_scope++;
					if (for_scope < (dt->Rows->Count))
					{
						DataRow^ ls = dt1->Rows[for_scope];


						richTextBox1->Text = ls[1]->ToString();
						richTextBox3->Text = ls[2]->ToString();
						richTextBox2->Text = "";
					}
					else
					{
						MessageBox::Show("attendance done");
						this->Close();

					}







				}




			}
		}

		catch (const std::exception&)
		{

		}









		//	 MessageBox::Show(count.ToString());



	}
	private: System::Void MyForm15_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// yo bata chai absent ko hunxa

		try
		{


			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=includemecpp";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			DataTable^ dt = gcnew DataTable();
			MySqlDataReader^ dr;





			MySqlDataAdapter^ da = gcnew MySqlDataAdapter("SELECT * FROM `register_data` ", con);
			da->Fill(dt);

			if (for_scope >= (dt->Rows->Count - 1))
			{
				MessageBox::Show("attendance done");
				this->Close();
			}

			else// (for_scope <= (dt->Rows->Count - 1))
			{
				DataRow^ lastRow = dt->Rows[for_scope];


				//MessageBox::Show(lastRow[2]->ToString());

				String^ str = lastRow[4]->ToString();

				count = Int32::Parse(str);



				String^ rema1 = richTextBox2->Text;


				// UPDATE `student_att` SET `data`=[value - 2], `remarks`=[value - 3] WHERE 1

			
				MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE `register_data` SET `remarks`= '" + rema1 + "',`data`='" + count.ToString() + "' WHERE `id`='" + lastRow[0] + "' ", con);
				con->Open();

				dr = cmd->ExecuteReader();

				con->Close();




				richTextBox3->Text = "";
				richTextBox1->Text = "";
				//yo bata chai dekhauxa
				String^ constr1 = "Server=127.0.0.1;Uid=root;Pwd=;Database=includemecpp";
				MySqlConnection^ con1 = gcnew MySqlConnection(constr1);
				MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * FROM `register_data` ", con1);
				MySqlDataReader^ dr1;
				con1->Open();
				dr1 = cmd1->ExecuteReader();


				if (dr1->Read())
				{
					//ma aba yesma data read garaidinchu ani each time euta row read huda mlai tha huncha kati ota
						//xa vanera ani loop lagayera dekhauchu yeslai


					con1->Close();
					MySqlDataAdapter^ da1 = gcnew MySqlDataAdapter("SELECT * FROM `register_data` ", con1);
					DataTable^ dt1 = gcnew DataTable();
					da1->Fill(dt1);
					for_scope++;
					if (for_scope < (dt->Rows->Count))
					{
						DataRow^ ls = dt1->Rows[for_scope];

						richTextBox1->Text = ls[1]->ToString();
						richTextBox3->Text = ls[2]->ToString();
						richTextBox2->Text = "";
					}

				}




			}
		}

		catch (const std::exception&)
		{

		}



	}
	private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
