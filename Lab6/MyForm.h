#include "data.h"
#include "helper.h"
#include "lab6.h"
#include "sorts.h"
#include <msclr/marshal_cppstd.h>
#include <vector>

#pragma once

namespace Lab6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::ListBox^ stack_view;
	private: System::Windows::Forms::Button^ btn_sort;
	protected:

	private: System::Windows::Forms::ComboBox^ choice_sort;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ add_value;
	private: System::Windows::Forms::Button^ add_btn;


	private: System::Windows::Forms::Button^ subtract_btn;

	private: System::Windows::Forms::TextBox^ subtract_value;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ multiplication_btn;

	private: System::Windows::Forms::TextBox^ multiplication_value;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ division_btn;

	private: System::Windows::Forms::TextBox^ division_value;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ new_item_add;

	private: System::Windows::Forms::TextBox^ new_value;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ choice_type;

	private: System::Windows::Forms::Button^ delete_top_item;




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
			this->stack_view = (gcnew System::Windows::Forms::ListBox());
			this->btn_sort = (gcnew System::Windows::Forms::Button());
			this->choice_sort = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->add_value = (gcnew System::Windows::Forms::TextBox());
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->subtract_btn = (gcnew System::Windows::Forms::Button());
			this->subtract_value = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->multiplication_btn = (gcnew System::Windows::Forms::Button());
			this->multiplication_value = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->division_btn = (gcnew System::Windows::Forms::Button());
			this->division_value = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->new_item_add = (gcnew System::Windows::Forms::Button());
			this->new_value = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->choice_type = (gcnew System::Windows::Forms::ComboBox());
			this->delete_top_item = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// stack_view
			// 
			this->stack_view->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stack_view->FormattingEnabled = true;
			this->stack_view->ItemHeight = 21;
			this->stack_view->Location = System::Drawing::Point(0, 1);
			this->stack_view->Name = L"stack_view";
			this->stack_view->Size = System::Drawing::Size(270, 214);
			this->stack_view->TabIndex = 0;
			// 
			// btn_sort
			// 
			this->btn_sort->Location = System::Drawing::Point(532, 191);
			this->btn_sort->Name = L"btn_sort";
			this->btn_sort->Size = System::Drawing::Size(100, 23);
			this->btn_sort->TabIndex = 1;
			this->btn_sort->Text = L"сортировать";
			this->btn_sort->UseVisualStyleBackColor = true;
			this->btn_sort->Click += gcnew System::EventHandler(this, &MyForm::btn_sort_Click);
			// 
			// choice_sort
			// 
			this->choice_sort->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->choice_sort->FormattingEnabled = true;
			this->choice_sort->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Быстрая сортировка", L"Сортировка Шелла", L"Сортировка вставками",
					L"Пузырковая сортировка"
			});
			this->choice_sort->Location = System::Drawing::Point(369, 191);
			this->choice_sort->Name = L"choice_sort";
			this->choice_sort->Size = System::Drawing::Size(157, 21);
			this->choice_sort->TabIndex = 2;
			this->choice_sort->SelectedIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(282, 194);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Тип сортировки";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(282, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Добавить";
			// 
			// add_value
			// 
			this->add_value->Location = System::Drawing::Point(359, 18);
			this->add_value->Name = L"add_value";
			this->add_value->Size = System::Drawing::Size(88, 20);
			this->add_value->TabIndex = 5;
			// 
			// add_btn
			// 
			this->add_btn->Location = System::Drawing::Point(456, 18);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(48, 23);
			this->add_btn->TabIndex = 6;
			this->add_btn->Text = L"ок";
			this->add_btn->UseVisualStyleBackColor = true;
			this->add_btn->Click += gcnew System::EventHandler(this, &MyForm::add_btn_Click);
			// 
			// subtract_btn
			// 
			this->subtract_btn->Location = System::Drawing::Point(456, 44);
			this->subtract_btn->Name = L"subtract_btn";
			this->subtract_btn->Size = System::Drawing::Size(48, 23);
			this->subtract_btn->TabIndex = 9;
			this->subtract_btn->Text = L"ок";
			this->subtract_btn->UseVisualStyleBackColor = true;
			this->subtract_btn->Click += gcnew System::EventHandler(this, &MyForm::subtract_btn_Click);
			// 
			// subtract_value
			// 
			this->subtract_value->Location = System::Drawing::Point(359, 44);
			this->subtract_value->Name = L"subtract_value";
			this->subtract_value->Size = System::Drawing::Size(88, 20);
			this->subtract_value->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(282, 47);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Вычесть";
			// 
			// multiplication_btn
			// 
			this->multiplication_btn->Location = System::Drawing::Point(456, 71);
			this->multiplication_btn->Name = L"multiplication_btn";
			this->multiplication_btn->Size = System::Drawing::Size(48, 23);
			this->multiplication_btn->TabIndex = 12;
			this->multiplication_btn->Text = L"ок";
			this->multiplication_btn->UseVisualStyleBackColor = true;
			this->multiplication_btn->Click += gcnew System::EventHandler(this, &MyForm::multiplication_btn_Click);
			// 
			// multiplication_value
			// 
			this->multiplication_value->Location = System::Drawing::Point(362, 73);
			this->multiplication_value->Name = L"multiplication_value";
			this->multiplication_value->Size = System::Drawing::Size(88, 20);
			this->multiplication_value->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(285, 76);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Умножить на";
			// 
			// division_btn
			// 
			this->division_btn->Location = System::Drawing::Point(456, 99);
			this->division_btn->Name = L"division_btn";
			this->division_btn->Size = System::Drawing::Size(48, 23);
			this->division_btn->TabIndex = 15;
			this->division_btn->Text = L"ок";
			this->division_btn->UseVisualStyleBackColor = true;
			this->division_btn->Click += gcnew System::EventHandler(this, &MyForm::division_btn_Click);
			// 
			// division_value
			// 
			this->division_value->Location = System::Drawing::Point(359, 99);
			this->division_value->Name = L"division_value";
			this->division_value->Size = System::Drawing::Size(88, 20);
			this->division_value->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(282, 102);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Поделить на";
			// 
			// new_item_add
			// 
			this->new_item_add->Location = System::Drawing::Point(584, 156);
			this->new_item_add->Name = L"new_item_add";
			this->new_item_add->Size = System::Drawing::Size(48, 23);
			this->new_item_add->TabIndex = 18;
			this->new_item_add->Text = L"ок";
			this->new_item_add->UseVisualStyleBackColor = true;
			this->new_item_add->Click += gcnew System::EventHandler(this, &MyForm::new_item_add_Click);
			// 
			// new_value
			// 
			this->new_value->Location = System::Drawing::Point(490, 156);
			this->new_value->Name = L"new_value";
			this->new_value->Size = System::Drawing::Size(88, 20);
			this->new_value->TabIndex = 17;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(279, 159);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Добавить элемент";
			// 
			// choice_type
			// 
			this->choice_type->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->choice_type->FormattingEnabled = true;
			this->choice_type->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"int", L"float", L"double" });
			this->choice_type->Location = System::Drawing::Point(388, 156);
			this->choice_type->Name = L"choice_type";
			this->choice_type->Size = System::Drawing::Size(96, 21);
			this->choice_type->TabIndex = 19;
			this->choice_type->SelectedIndex = 0;
			// 
			// delete_top_item
			// 
			this->delete_top_item->Location = System::Drawing::Point(282, 128);
			this->delete_top_item->Name = L"delete_top_item";
			this->delete_top_item->Size = System::Drawing::Size(222, 22);
			this->delete_top_item->TabIndex = 20;
			this->delete_top_item->Text = L"Удалить верхний элемент стека";
			this->delete_top_item->UseVisualStyleBackColor = true;
			this->delete_top_item->Click += gcnew System::EventHandler(this, &MyForm::delete_top_item_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(638, 215);
			this->Controls->Add(this->delete_top_item);
			this->Controls->Add(this->choice_type);
			this->Controls->Add(this->new_item_add);
			this->Controls->Add(this->new_value);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->division_btn);
			this->Controls->Add(this->division_value);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->multiplication_btn);
			this->Controls->Add(this->multiplication_value);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->subtract_btn);
			this->Controls->Add(this->subtract_value);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->add_btn);
			this->Controls->Add(this->add_value);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->choice_sort);
			this->Controls->Add(this->btn_sort);
			this->Controls->Add(this->stack_view);
			this->Name = L"MyForm";
			this->Text = L"Лабораторная работа номер 6";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		private: void add_item(Item item) {
			std::wstring answer;
			answer = L"Тип: ";

			if (item.type == 0) {
				answer.append(L"int Значение: ");
				answer.append(std::to_wstring(int(item.value)));
			}
			else if (item.type == 1) {
				answer.append(L"float Значение: ");
				answer.append(std::to_wstring(float(item.value)));
			}
			else {
				answer.append(L"double Значение: ");
				answer.append(std::to_wstring(item.value));
			}

			this->stack_view->Items->Add(msclr::interop::marshal_as<String^>(answer));
		}

		private: void update_screen() {
			std::stack<Item> temp_stack;

			this->stack_view->Items->Clear();
			while (!STACK.empty()) {
				this->add_item(STACK.top());
				temp_stack.push(STACK.top());
				STACK.pop();
			}

			while (!temp_stack.empty()) {
				STACK.push(temp_stack.top());
				temp_stack.pop();
			}
		}

		private: System::Void new_item_add_Click(System::Object^ sender, System::EventArgs^ e) {
			std::string svalue;

			svalue = msclr::interop::marshal_as<std::string>(this->new_value->Text);

			if (this->choice_type->SelectedIndex == 0) {
				if (is_integer_number(svalue)) {
					Item item;
					item.value = std::stod(svalue);
					item.type = 0;
					STACK.push(item);
				}
				else {
					MessageBox::Show(L"Некорретный ввод данных", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
			}
			else if (this->choice_type->SelectedIndex == 1) {
				if (is_real_number(svalue)) {
					Item item;
					item.value = std::stod(svalue);
					item.type = 1;
					STACK.push(item);
				}
				else {
					MessageBox::Show(L"Некорретный ввод данных", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
			}
			else {
				if (is_real_number(svalue)) {
					Item item;
					item.value = std::stod(svalue);
					item.type = 2;
					STACK.push(item);
				}
				else {
					MessageBox::Show(L"Некорретный ввод данных", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
			}

			this->update_screen();
		}

		private: System::Void btn_sort_Click(System::Object^ sender, System::EventArgs^ e) {
			if (STACK.size() < 2) return;

			std::vector<Item> data;
			while (!STACK.empty()) {
				data.push_back(STACK.top());
				STACK.pop();
			}

			if (this->choice_sort->SelectedIndex == 0) qsort(data.begin(), data.end() - 1);
			else if (this->choice_sort->SelectedIndex == 1) shakersort(data.begin(), data.end() - 1);
			else if (this->choice_sort->SelectedIndex == 2) insertionsort(data.begin(), data.end() - 1);
			else if (this->choice_sort->SelectedIndex == 3) bubblesort(data.begin(), data.end() - 1);

			auto iter = data.end();
			do {
				--iter;
				STACK.push(*iter);
			} while (iter != data.begin());

			this->update_screen();
		}

		private: System::Void delete_top_item_Click(System::Object^ sender, System::EventArgs^ e) {
			if (STACK.empty()) {
				MessageBox::Show(L"Стек пустой", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			STACK.pop();
			this->update_screen();
		}

		private: System::Void add_btn_Click(System::Object^ sender, System::EventArgs^ e) {
			std::string svalue;

			svalue = msclr::interop::marshal_as<std::string>(this->add_value->Text);
			if (!is_real_number(svalue)) {
				MessageBox::Show(L"Некорректный ввод данных", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			add(Item(std::stod(svalue)));

			this->update_screen();
		}

		private: System::Void subtract_btn_Click(System::Object^ sender, System::EventArgs^ e) {
			std::string svalue;

			svalue = msclr::interop::marshal_as<std::string>(this->subtract_value->Text);
			if (!is_real_number(svalue)) {
				MessageBox::Show(L"Некорректный ввод данных", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			subtract(Item(std::stod(svalue)));

			this->update_screen();
		}

		private: System::Void multiplication_btn_Click(System::Object^ sender, System::EventArgs^ e) {
			std::string svalue;

			svalue = msclr::interop::marshal_as<std::string>(this->multiplication_value->Text);
			if (!is_real_number(svalue)) {
				MessageBox::Show(L"Некорректный ввод данных", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			multiplication(Item(std::stod(svalue)));

			this->update_screen();
		}

		private: System::Void division_btn_Click(System::Object^ sender, System::EventArgs^ e) {
			std::string svalue;

			svalue = msclr::interop::marshal_as<std::string>(this->division_value->Text);
			if (!is_real_number(svalue)) {
				MessageBox::Show(L"Некорректный ввод данных", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (std::stod(svalue) == 0) {
				MessageBox::Show(L"Делить на ноль нельзя", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			division(Item(std::stod(svalue)));

			this->update_screen();
		}
};
}
