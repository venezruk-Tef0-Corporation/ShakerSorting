#pragma once /* #pragma once — это директива препроцессора, 
				которая указывает компилятору включить файл 
				заголовка только один раз при компиляции файла 
				исходного кода */

// Подключаемые файлы проекта
#include "SystemStrToStdstring.h"
#include "Database.h"

// Подключаемые библиотеки
#include <string>
#include "..\ShakerSorting\sqlite3\sqlite3\sqlite3.h"


namespace GraphicalShakerSorting {			  /* Пространство имён (namespace) в C++ — это группа 
												 взаимосвязанных функций, переменных, констант, классов, 
												 объектов и других компонентов программы. 

                                                 Оно позволяет группировать идентификаторы 
												 (например, переменные, функции, классы) в отдельные области, 
												 что помогает избежать конфликтов имён и упрощает организацию кода */

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	// Объявление элементов формы
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

/* #pragma region позволяет указать блок кода,
	который можно развернуть или свернуть при
	использовании функции структурирования редактора
	Visual Studio */
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(30, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(219, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите номер строки:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(237, 39);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(142, 32);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SteelBlue;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(35, 127);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 33);
			this->button1->TabIndex = 2;
			this->button1->Text = L"УДАЛИТЬ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SteelBlue;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(281, 127);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 33);
			this->button2->TabIndex = 3;
			this->button2->Text = L"ОТМЕНА";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(420, 172);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.142858F, System::Drawing::FontStyle::Bold));
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Удаление строки";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

// #pragma endregion помечает конец #pragma region блока
#pragma endregion

	/* Ниже расположены обработки событий,
	   которые могут быть вызваны в процессе работы программы */

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		bool ErrorFlag = false;

		String^ SystemNumber = "";
		SystemNumber = textBox1->Text;

		string StringNumber = "";
		StringNumber = ToStdstring(SystemNumber);

		int ID = 0;

		try {
			ID = stoi(StringNumber);

		}
		catch (...) {

			MessageBox::Show("Ошибка. Проверьте корректность вводимых данных.", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			ErrorFlag = true;

		}

		if (ErrorFlag == false) {

			sqlite3* db;
			sqlite3_open("arrays.db", &db);

			int rc = sqlite3_open_v2("arrays.db", &db, SQLITE_OPEN_READWRITE | SQLITE_OPEN_CREATE, nullptr);

			if (rc != SQLITE_OK) {
				MessageBox::Show("Ошибка открытия базы данных: " + gcnew System::String(sqlite3_errmsg(db)));				
				ErrorFlag = true;
				return;
			}

			deleteArrayById(db, ID);

			if (sqlite3_changes(db) == 0) MessageBox::Show("Строка не найдена", L"", MessageBoxButtons::OK, MessageBoxIcon::Error);

			else MessageBox::Show("Строка удалена", L"", MessageBoxButtons::OK, MessageBoxIcon::Information);

			sqlite3_close(db);
		}

		this->Close();
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}

// Конец файла