#pragma once
#include <msclr\marshal_cppstd.h>
#include "Arifmetics.h"

Arithmetic* AV;

namespace asdasdasda {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ A_V;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ poliz;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ Res;
	private: System::Windows::Forms::Button^ ok;
	private: System::Windows::Forms::Button^ go;
	private: System::Windows::Forms::DataGridView^ tab;


	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->A_V = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->poliz = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Res = (gcnew System::Windows::Forms::TextBox());
			this->ok = (gcnew System::Windows::Forms::Button());
			this->go = (gcnew System::Windows::Forms::Button());
			this->tab = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab))->BeginInit();
			this->SuspendLayout();
			// 
			// A_V
			// 
			this->A_V->BackColor = System::Drawing::SystemColors::Window;
			this->A_V->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->A_V->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->A_V->Location = System::Drawing::Point(39, 71);
			this->A_V->Multiline = true;
			this->A_V->Name = L"A_V";
			this->A_V->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->A_V->Size = System::Drawing::Size(379, 59);
			this->A_V->TabIndex = 0;
			this->A_V->TextChanged += gcnew System::EventHandler(this, &MyForm::A_V_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(36, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Арифметика";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// poliz
			// 
			this->poliz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->poliz->Location = System::Drawing::Point(39, 325);
			this->poliz->Multiline = true;
			this->poliz->Name = L"poliz";
			this->poliz->ReadOnly = true;
			this->poliz->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->poliz->Size = System::Drawing::Size(377, 57);
			this->poliz->TabIndex = 2;
			this->poliz->TextChanged += gcnew System::EventHandler(this, &MyForm::poliz_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(36, 294);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Полиз";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(36, 420);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(124, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Результат";
			// 
			// Res
			// 
			this->Res->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->Res->Location = System::Drawing::Point(39, 452);
			this->Res->Multiline = true;
			this->Res->Name = L"Res";
			this->Res->ReadOnly = true;
			this->Res->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->Res->Size = System::Drawing::Size(377, 57);
			this->Res->TabIndex = 5;
			this->Res->TextChanged += gcnew System::EventHandler(this, &MyForm::Res_TextChanged);
			// 
			// ok
			// 
			this->ok->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ok->Location = System::Drawing::Point(39, 154);
			this->ok->Name = L"ok";
			this->ok->Size = System::Drawing::Size(157, 63);
			this->ok->TabIndex = 6;
			this->ok->Text = L"Создать таблицу";
			this->ok->UseVisualStyleBackColor = true;
			this->ok->Click += gcnew System::EventHandler(this, &MyForm::ok_Click);
			// 
			// go
			// 
			this->go->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->go->Location = System::Drawing::Point(257, 154);
			this->go->Name = L"go";
			this->go->Size = System::Drawing::Size(161, 63);
			this->go->TabIndex = 7;
			this->go->Text = L"Вычислить";
			this->go->UseVisualStyleBackColor = true;
			this->go->Click += gcnew System::EventHandler(this, &MyForm::go_Click);
			// 
			// tab
			// 
			this->tab->AllowUserToAddRows = false;
			this->tab->AllowUserToDeleteRows = false;
			this->tab->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->tab->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->tab->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->tab->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->tab->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tab->ColumnHeadersVisible = false;
			this->tab->Location = System::Drawing::Point(621, 83);
			this->tab->Name = L"tab";
			this->tab->RowHeadersVisible = false;
			this->tab->RowHeadersWidth = 51;
			this->tab->RowTemplate->Height = 24;
			this->tab->Size = System::Drawing::Size(289, 310);
			this->tab->TabIndex = 8;
			this->tab->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::tab_CellContentClick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1165, 554);
			this->Controls->Add(this->tab);
			this->Controls->Add(this->go);
			this->Controls->Add(this->ok);
			this->Controls->Add(this->Res);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->poliz);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->A_V);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tab))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void A_V_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void poliz_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Res_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ok_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string st = msclr::interop::marshal_as< std::string>(A_V->Text);
		Arithmetic A(st);
		std::string pol = A.get_poliz()->get_poliz();
		String^ As = gcnew System::String(pol.c_str());
		poliz->Text = As;
		AV = new Arithmetic(A);
		//A_V->ReadOnly = true;

		tab->Rows->Clear();
		tab->Columns->Clear();
		tab->RowCount = AV->get_poliz()->get_tabl_variable()->get_count() + 1;
		tab->ColumnCount = 2;
		tab->Rows[0]->Cells[0]->Value = "Name";
		tab->Rows[0]->Cells[1]->Value = "Value";
		tab->Rows[0]->Cells[0]->ReadOnly = true;
		tab->Rows[0]->Cells[1]->ReadOnly = true;
		for (int i = 0; i < AV->get_poliz()->get_tabl_variable()->get_count(); i++) {
			String^ str = gcnew System::String(AV->get_poliz()->get_tabl_variable()->operator[](i).get_name().c_str());
			String^ val = System::Convert::ToString(AV->get_poliz()->get_tabl_variable()->operator[](i).get_value());
			tab->Rows[i + 1]->Cells[0]->Value = str;
			tab->Rows[i + 1]->Cells[0]->ReadOnly = true;
			tab->Rows[i + 1]->Cells[1]->Value = val;
			if (str->Length > 0 && (str[0] >= '0' && str[0] <= '9')) {
				tab->Rows[i + 1]->Cells[1]->ReadOnly = true;
			}
		}
	}
	private: System::Void go_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < AV->get_poliz()->get_tabl_variable()->get_count(); i++) {
			double m = System::Convert::ToDouble(tab->Rows[i + 1]->Cells[1]->Value);
			AV->get_poliz()->get_tabl_variable()->operator[](i).set_value(m);
		}
		double result = AV->calculate();
		Res->Text = System::Convert::ToString(Convert::ToDouble(result));
	}
	private: System::Void tab_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}
	};
}