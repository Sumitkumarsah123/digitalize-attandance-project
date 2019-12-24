#pragma once

namespace Includeme {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	

	/// <summary>
	/// Summary for MyForm16
	/// </summary>
	public ref class MyForm16 : public System::Windows::Forms::Form
	{
	public:
		MyForm16(void)
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
		~MyForm16()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
















	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;




	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label9;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm16::typeid));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(-68, 367);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(19, 13);
			this->label4->TabIndex = 34;
			this->label4->Text = L"04";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(-68, 332);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(19, 13);
			this->label3->TabIndex = 33;
			this->label3->Text = L"03";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(-68, 302);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 13);
			this->label2->TabIndex = 32;
			this->label2->Text = L"02";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(-68, 274);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(22, 13);
			this->label1->TabIndex = 31;
			this->label1->Text = L"01.";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(-65, 225);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(38, 20);
			this->textBox1->TabIndex = 26;
			this->textBox1->Text = L"S.N";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(487, 14);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(146, 29);
			this->label8->TabIndex = 53;
			this->label8->Text = L"Roll No : -";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm16::Label8_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(5, 190);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(195, 74);
			this->richTextBox1->TabIndex = 54;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(261, 190);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(104, 74);
			this->richTextBox2->TabIndex = 55;
			this->richTextBox2->Text = L"";
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &MyForm16::RichTextBox2_TextChanged);
			// 
			// richTextBox3
			// 
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox3->Location = System::Drawing::Point(430, 190);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(115, 74);
			this->richTextBox3->TabIndex = 56;
			this->richTextBox3->Text = L"";
			// 
			// richTextBox4
			// 
			this->richTextBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox4->Location = System::Drawing::Point(583, 190);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(227, 74);
			this->richTextBox4->TabIndex = 57;
			this->richTextBox4->Text = L"";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Cross;
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(613, 356);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 52);
			this->button1->TabIndex = 58;
			this->button1->Text = L"Check";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm16::Button1_Click);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(639, 14);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(171, 37);
			this->textBox6->TabIndex = 59;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm16::TextBox6_TextChanged_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(30, 123);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 23);
			this->label5->TabIndex = 60;
			this->label5->Text = L"Name";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(205, 130);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(175, 18);
			this->label6->TabIndex = 61;
			this->label6->Text = L"Total Present Days";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(427, 130);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(167, 18);
			this->label7->TabIndex = 62;
			this->label7->Text = L"Total Absent Days";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(694, 130);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(86, 18);
			this->label9->TabIndex = 63;
			this->label9->Text = L"Remarks";
			// 
			// MyForm16
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(813, 487);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox4);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->MaximumSize = System::Drawing::Size(829, 655);
			this->MinimumSize = System::Drawing::Size(829, 492);
			this->Name = L"MyForm16";
			this->Text = L"MyForm16";
			this->Load += gcnew System::EventHandler(this, &MyForm16::MyForm16_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm16_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TextBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		int total_days = 160;
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=includemecpp";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		String^ id = (textBox6->Text)->ToLower();
		MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM `register_data`  WHERE id ='" + id + "'", con);

		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();
		while (dr->Read())
		{
			richTextBox1->Text = dr->GetString(2);
			richTextBox2->Text = dr->GetString(4);
			String^ present_days = dr->GetString(4);
			int pre = (Int32::Parse(present_days));
			int absent = total_days - pre;
			
			richTextBox3->Text = absent.ToString();
			richTextBox4->Text = dr->GetString(5);

	



		}
		textBox6->Text = "";
	
		con->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);


	}
}
private: System::Void TextBox6_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RichTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
