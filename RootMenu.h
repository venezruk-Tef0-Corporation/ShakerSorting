#pragma once /* #pragma once — это директива препроцессора, 
				которая указывает компилятору включить файл 
				заголовка только один раз при компиляции файла 
				исходного кода */

// Подключаемые файлы проекта
#include "ShakerSorting.h"
#include "SystemStrToStdstring.h"
#include "Database.h"

// Подключаемые библиотеки
#include <string>
#include <sstream>
#include <vector>
#include "..\ShakerSorting\sqlite3\sqlite3\sqlite3.h"

// Подключаемые формы
#include "MyForm.h"
#include "MyForm1.h"

using namespace std; /* Using namespace std в C++ — это директива, 
						которая позволяет использовать все идентификаторы 
						из пространства имён std без указания префикса std:: */



namespace GraphicalShakerSorting {            /* Пространство имён (namespace) в C++ — это группа 
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
	/// Сводка для RootMenu
	/// </summary>
	public ref class RootMenu : public System::Windows::Forms::Form
	{
	public:
		RootMenu(void)
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
		~RootMenu()
		{
			if (components)
			{
				delete components;
			}
		}

	// Объявление элементов формы
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Data::DataTable^ dataTable;
	private: System::Windows::Forms::Button^ button5;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RootMenu::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataTable = (gcnew System::Data::DataTable());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.142858F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(1, 1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1416, 595);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::White;
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->ForeColor = System::Drawing::Color::White;
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1408, 569);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Главное меню";
			this->tabPage1->Click += gcnew System::EventHandler(this, &RootMenu::tabPage1_Click);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(7, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1392, 445);
			this->label4->TabIndex = 1;
			this->label4->Text = resources->GetString(L"label4.Text");
			this->label4->Click += gcnew System::EventHandler(this, &RootMenu::label4_Click_1);
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::White;
			this->tabPage4->Controls->Add(this->label2);
			this->tabPage4->Controls->Add(this->label1);
			this->tabPage4->Controls->Add(this->button2);
			this->tabPage4->Controls->Add(this->textBox6);
			this->tabPage4->Controls->Add(this->button1);
			this->tabPage4->Controls->Add(this->textBox5);
			this->tabPage4->ForeColor = System::Drawing::Color::White;
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1408, 569);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Сортировка";
			this->tabPage4->Click += gcnew System::EventHandler(this, &RootMenu::tabPage4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(322, 322);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(243, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Отсортированный массив:";
			this->label2->Visible = false;
			this->label2->Click += gcnew System::EventHandler(this, &RootMenu::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(322, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(383, 25);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Введите элементы массива через запятую:";
			this->label1->Click += gcnew System::EventHandler(this, &RootMenu::label1_Click_1);
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->BackColor = System::Drawing::Color::SteelBlue;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.857143F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(575, 401);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(201, 37);
			this->button2->TabIndex = 5;
			this->button2->Text = L"СОХРАНИТЬ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &RootMenu::button2_Click);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::White;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.14286F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox6->Location = System::Drawing::Point(327, 350);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(644, 28);
			this->textBox6->TabIndex = 4;
			this->textBox6->Visible = false;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &RootMenu::textBox6_TextChanged);
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::Color::SteelBlue;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(575, 176);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(201, 37);
			this->button1->TabIndex = 2;
			this->button1->Text = L"СОРТИРОВАТЬ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &RootMenu::button1_Click);
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.14286F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox5->Location = System::Drawing::Point(327, 125);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(653, 28);
			this->textBox5->TabIndex = 1;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &RootMenu::textBox5_TextChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::White;
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->ForeColor = System::Drawing::Color::White;
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1408, 569);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Список массивов";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::SteelBlue;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(1182, 122);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(201, 37);
			this->button5->TabIndex = 4;
			this->button5->Text = L"ОБНОВИТЬ ТАБЛИЦУ";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &RootMenu::button5_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.142858F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.142858F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->Location = System::Drawing::Point(16, 6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			this->dataGridView1->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->dataGridView1->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->Size = System::Drawing::Size(1160, 546);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &RootMenu::dataGridView1_CellContentClick);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::SteelBlue;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(1182, 69);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(201, 37);
			this->button4->TabIndex = 2;
			this->button4->Text = L"УДАЛИТЬ ВСЕ СТРОКИ";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &RootMenu::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::SteelBlue;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(1182, 17);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(201, 37);
			this->button3->TabIndex = 1;
			this->button3->Text = L"УДАЛИТЬ СТРОКУ";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &RootMenu::button3_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->linkLabel1);
			this->tabPage3->Controls->Add(this->label5);
			this->tabPage3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage3->ForeColor = System::Drawing::Color::White;
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1408, 569);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"О нас";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoEllipsis = true;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.14286F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->linkLabel1->Location = System::Drawing::Point(172, 261);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->linkLabel1->Size = System::Drawing::Size(402, 25);
			this->linkLabel1->TabIndex = 1;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"https://github.com/venezruk-Tef0-Corporation";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RootMenu::linkLabel1_LinkClicked);
			// 
			// label5
			// 
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(7, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(1396, 415);
			this->label5->TabIndex = 3;
			this->label5->Text = resources->GetString(L"label5.Text");
			// 
			// RootMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1416, 597);
			this->Controls->Add(this->tabControl1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.142858F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"RootMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Приложение шейкерной сортировки";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &RootMenu::RootMenu_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->EndInit();
			this->ResumeLayout(false);

		}


// #pragma endregion помечает конец #pragma region блока
#pragma endregion

	/* Ниже расположены обработки событий, 
	   которые могут быть вызваны в процессе работы программы */

	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void RootMenu_Load(System::Object^ sender, System::EventArgs^ e) {

		sqlite3* db;
		int rc = sqlite3_open_v2("arrays.db", &db, SQLITE_OPEN_READWRITE | SQLITE_OPEN_CREATE, nullptr);
		if (rc != SQLITE_OK) {
			MessageBox::Show("Ошибка открытия базы данных: " + gcnew System::String(sqlite3_errmsg(db)));
			sqlite3_close(db);
			return;
		}
		dataGridView1->AutoSize = false;
		dataGridView1->Columns->Add("ID", "№");
		dataGridView1->Columns->Add("UnsortedArray", "Неотсортированный");
		dataGridView1->Columns->Add("SortedArray", "Отсортированный");

		DataGridViewColumn^ FirstColumn = nullptr;
		FirstColumn = dataGridView1->Columns[0];
		FirstColumn->Width = 28;

		DataGridViewColumn^ SecondColumn = nullptr;
		SecondColumn = dataGridView1->Columns[1];
		SecondColumn->Width = 550;

		DataGridViewColumn^ ThirdColumn = nullptr;
		ThirdColumn = dataGridView1->Columns[2];
		ThirdColumn->Width = 550;

		const char* sqlSelect = "SELECT * FROM arrays;";
		sqlite3_stmt* stmt;
		rc = sqlite3_prepare_v2(db, sqlSelect, -1, &stmt, nullptr);
		if (rc != SQLITE_OK) {
			MessageBox::Show("Ошибка выполнения запроса: " + gcnew System::String(sqlite3_errmsg(db)));
			sqlite3_finalize(stmt);
			sqlite3_close(db);
			return;
		}
		while (sqlite3_step(stmt) == SQLITE_ROW) {
			String^ ID = gcnew String((const char*)sqlite3_column_text(stmt, 0));
			String^ UnsortedArray = gcnew String((const char*)sqlite3_column_text(stmt, 1));
			String^ SortedArray = gcnew String((const char*)sqlite3_column_text(stmt, 2));
			cli::array<String^>^ Row = { ID, UnsortedArray, SortedArray };
			dataGridView1->Rows->Add(Row);
		}
		sqlite3_finalize(stmt);
		sqlite3_close(db);
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		System::Diagnostics::Process::Start("https://github.com/venezruk-Tef0-Corporation");
	}

	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void tabPage4_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		bool ErrorFlag = false;

		String^ LineArray = "";
		string StringLine = "";
		string TempLine = "";

		LineArray = textBox5->Text;
		if (LineArray == "") ErrorFlag = true;

		StringLine = ToStdstring(LineArray);

		vector<string> SeparatedList;

		stringstream LineStream(StringLine);

		char del = ',';

		while (getline(LineStream, TempLine, del)) SeparatedList.push_back(TempLine);

		int size = static_cast<int>(SeparatedList.size());

		int* Array = new int[size];



		int number = 0;
		try {
			for (int i = 0; i < size; i++) {

				number = stoi(SeparatedList[i]);
				Array[i] = number;
			}


		}
		catch (...) {

			MessageBox::Show(L"Ошибка. Проверьте корректность вводимых данных.", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			ErrorFlag = true;

		}

		if (ErrorFlag == false) {
			ShakerSorting(Array, size);

			String^ LineSortedArray = "";

			for (int i = 0; i < size - 1; i++) {

				LineSortedArray += Array[i].ToString();
				LineSortedArray += ", ";

			}
			LineSortedArray += Array[size - 1].ToString();

			textBox6->Text = LineSortedArray;

			button2->Visible = true;
			textBox6->Visible = true;
			label2->Visible = true;
		}

	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ LineUnsortedArray = "";
		string StringUnsortedLine = "";
		String^ LineSortedArray = "";
		string StringSortedLine = "";

		LineUnsortedArray = textBox5->Text;
		StringUnsortedLine = ToStdstring(LineUnsortedArray);

		LineSortedArray = textBox6->Text;
		StringSortedLine = ToStdstring(LineSortedArray);

		saveArrayToDB(StringUnsortedLine, StringSortedLine);

	}

	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		MyForm^ DeleteForm = gcnew MyForm();
		DeleteForm->Show();

	}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		dataGridView1->Rows->Clear();

		sqlite3* db;
		int rc = sqlite3_open_v2("arrays.db", &db, SQLITE_OPEN_READWRITE | SQLITE_OPEN_CREATE, nullptr);
		if (rc != SQLITE_OK) {
			MessageBox::Show("Ошибка открытия базы данных: " + gcnew System::String(sqlite3_errmsg(db)));
			sqlite3_close(db);
			return;
		}

		const char* sqlSelect = "SELECT * FROM arrays;";
		sqlite3_stmt* stmt;
		rc = sqlite3_prepare_v2(db, sqlSelect, -1, &stmt, nullptr);
		if (rc != SQLITE_OK) {
			MessageBox::Show("Ошибка выполнения запроса: " + gcnew System::String(sqlite3_errmsg(db)));
			sqlite3_finalize(stmt);
			sqlite3_close(db);
			return;
		}
		while (sqlite3_step(stmt) == SQLITE_ROW) {
			String^ ID = gcnew String((const char*)sqlite3_column_text(stmt, 0));
			String^ UnsortedArray = gcnew String((const char*)sqlite3_column_text(stmt, 1));
			String^ SortedArray = gcnew String((const char*)sqlite3_column_text(stmt, 2));
			cli::array<String^>^ Row = { ID, UnsortedArray, SortedArray };
			dataGridView1->Rows->Add(Row);
		}
		sqlite3_finalize(stmt);
		sqlite3_close(db);

	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		MyForm1^ DeleteAllForm = gcnew MyForm1();
		DeleteAllForm->Show();

	}
	};
}

// Конец файла