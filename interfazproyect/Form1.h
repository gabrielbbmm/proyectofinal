#pragma once

namespace CppCLRWinFormsProject {

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
	private: String^ connectionString = "server=localhost;database=aerolineas_carrio;password=12345678;";
	private: MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ tx_pasajero;
	private: System::Windows::Forms::TextBox^ txt_pasedeabordar;
	private: System::Windows::Forms::TextBox^ txt_vuelo;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tx_pasajero = (gcnew System::Windows::Forms::TextBox());
			this->txt_pasedeabordar = (gcnew System::Windows::Forms::TextBox());
			this->txt_vuelo = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(219, 220);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// tx_pasajero
			// 
			this->tx_pasajero->Location = System::Drawing::Point(396, 46);
			this->tx_pasajero->Multiline = true;
			this->tx_pasajero->Name = L"tx_pasajero";
			this->tx_pasajero->Size = System::Drawing::Size(167, 20);
			this->tx_pasajero->TabIndex = 1;
			this->tx_pasajero->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// txt_pasedeabordar
			// 
			this->txt_pasedeabordar->Location = System::Drawing::Point(396, 103);
			this->txt_pasedeabordar->Multiline = true;
			this->txt_pasedeabordar->Name = L"txt_pasedeabordar";
			this->txt_pasedeabordar->Size = System::Drawing::Size(167, 20);
			this->txt_pasedeabordar->TabIndex = 2;
			// 
			// txt_vuelo
			// 
			this->txt_vuelo->Location = System::Drawing::Point(396, 167);
			this->txt_vuelo->Multiline = true;
			this->txt_vuelo->Name = L"txt_vuelo";
			this->txt_vuelo->Size = System::Drawing::Size(167, 20);
			this->txt_vuelo->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(236, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Pasajero";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(236, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Pase de abordar";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(233, 167);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Vuelo";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ClientSize = System::Drawing::Size(591, 261);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_vuelo);
			this->Controls->Add(this->txt_pasedeabordar);
			this->Controls->Add(this->tx_pasajero);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ sql = "select * from guardar = '" + tx_pasajero->Text + "' and pase de abordar = '"; txt_pasedeabordar->Text + "' and vuelo = '"; txt_vuelo->Text + "'";
		MySqlCommand^ cursor = gcnew MySqlCommand(sql, conn);
		MySqlDataReader^ dataReader;





	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
