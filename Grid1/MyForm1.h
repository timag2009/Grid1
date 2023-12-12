#pragma once

namespace Grid1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: String^ BaseName;
	private: DataTable^ Table;
	private: DataSet^ Set;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	public: System::Windows::Forms::Button^ button1;  //Кнопка сохранить public
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Label^ remark;
	private: System::Windows::Forms::Label^ label2;
	public:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->remark = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(22, 80);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(249, 150);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(22, 264);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Сохранить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(172, 264);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(47, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(200, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Телефонный спровочник";
			// 
			// remark
			// 
			this->remark->AutoSize = true;
			this->remark->Location = System::Drawing::Point(62, 240);
			this->remark->Name = L"remark";
			this->remark->Size = System::Drawing::Size(35, 13);
			this->remark->TabIndex = 4;
			this->remark->Text = L"label2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(28, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Поиск";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(89, 50);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(133, 26);
			this->textBox1->TabIndex = 6;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(228, 50);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(43, 26);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Go";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(311, 294);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->remark);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm1";
			this->Text = L"Форма базы данных";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		BaseName = "table.xml";
		Table = gcnew DataTable();
		Set = gcnew DataSet();
		if (IO::File::Exists(BaseName) == false) {
			dataGridView1->DataSource = Table;
			Table->Columns->Add("Имена");
			Table->Columns->Add("Номера телефонов");
			Set->Tables->Add(Table);
		}
		else {
			Set->ReadXml(BaseName);
			String^ StringXML = Set->GetXml();
			dataGridView1->DataMember = "Название таблицы";
			dataGridView1->DataSource = Set;
		}
	}
	// Сохранили
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Table->TableName = "Название таблицы";
		Set->WriteXml(BaseName);
	}
	// Закрыли фору базы
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm1::Close();
	}

	//   ПОИСК
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	for (int i = 0; i < dataGridView1->RowCount; i++) // по строкам
		{
			for (int j = 0; j < this->dataGridView1->ColumnCount; ++j) // по колонкам
			{
			}
			if (dataGridView1->Rows[i]->Cells[0]->Value != nullptr) {

			}
			if (dataGridView1->Rows[i]->Cells[0]->Value != nullptr && dataGridView1->Rows[i]->Cells[0]->Value->ToString()->Equals(textBox1->Text)) {
				label2->Text = "";
				label1->Text = "Нашли - " + dataGridView1->Rows[i]->Cells[0]->Value->ToString() + "  " + dataGridView1->Rows[i]->Cells[1]->Value->ToString();
				break;
			}
			else {
				label1->Text = "Ничего не нашли ";
			}
		}
	} 
	//   ПОИСК

	};
}

	/*	for (int i = 0; i < dataGridView1.RowCount; i++)

		if (textBox1.Text == dataGridView1.Rows.Cells[0].Value.ToString())
		{
			dataGridView1.CurrentCell = dataGridView1.Rows.Cells[0];
			dataGridView1.FirstDisplayedScrollingRowIndex = i;
			flag = true;
			break;
		}
	if (!flag)
		MessageBox.Show("НЕТУ");

}


		int i = 0;
		while (i<dataGridView1->RowCount && dataGridView1->Rows[i]->Cells[0]->Value != nullptr) {
			if (dataGridView1->Rows[i]->Cells[0]->Value->ToString()->Equals(textBox1->Text)) {
				label2->Text = "";
				label1->Text = "Нашли - " + dataGridView1->Rows[i]->Cells[0]->Value->ToString() + "  " + dataGridView1->Rows[i]->Cells[1]->Value->ToString();
				break;
			}
		i++;
		}
*/