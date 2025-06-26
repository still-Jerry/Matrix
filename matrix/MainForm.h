#pragma once
#include <string.h>

namespace matrix {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			
			dataGridViewA->Rows->Add();
			dataGridViewA->Rows->Add();
			dataGridViewA->Rows->Add();

			dataGridViewB->Rows->Add();
			dataGridViewB->Rows->Add();
			dataGridViewB->Rows->Add();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:


	private: System::Windows::Forms::Label^ label1;




	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ DelRowButtunA;

	private: System::Windows::Forms::Button^ AddRowButtunA;
	private: System::Windows::Forms::Button^ OpredButtonA;



	private: System::Windows::Forms::Button^ DelColButtunA;

	private: System::Windows::Forms::Button^ AddColButtunA;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownA;


	private: System::Windows::Forms::Button^ StepButtonA;

	private: System::Windows::Forms::Button^ TransButtonA;
	private: System::Windows::Forms::Button^ ObrButtonA;




























	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;




	private: System::Windows::Forms::DataGridView^ dataGridViewA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::Button^ AddRowButtunB;
	private: System::Windows::Forms::Button^ DelRowButtunB;
	private: System::Windows::Forms::Button^ AddColButtunB;
	private: System::Windows::Forms::Button^ DelColButtunB;
	private: System::Windows::Forms::Button^ TransButtonB;
	private: System::Windows::Forms::Button^ StepButtonB;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownB;
	private: System::Windows::Forms::DataGridView^ dataGridViewB;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;








	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridViewA = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->numericUpDownA = (gcnew System::Windows::Forms::NumericUpDown());
			this->StepButtonA = (gcnew System::Windows::Forms::Button());
			this->TransButtonA = (gcnew System::Windows::Forms::Button());
			this->ObrButtonA = (gcnew System::Windows::Forms::Button());
			this->DelColButtunA = (gcnew System::Windows::Forms::Button());
			this->AddColButtunA = (gcnew System::Windows::Forms::Button());
			this->OpredButtonA = (gcnew System::Windows::Forms::Button());
			this->DelRowButtunA = (gcnew System::Windows::Forms::Button());
			this->AddRowButtunA = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->AddRowButtunB = (gcnew System::Windows::Forms::Button());
			this->DelRowButtunB = (gcnew System::Windows::Forms::Button());
			this->AddColButtunB = (gcnew System::Windows::Forms::Button());
			this->DelColButtunB = (gcnew System::Windows::Forms::Button());
			this->TransButtonB = (gcnew System::Windows::Forms::Button());
			this->StepButtonB = (gcnew System::Windows::Forms::Button());
			this->numericUpDownB = (gcnew System::Windows::Forms::NumericUpDown());
			this->dataGridViewB = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewB))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 340);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"label1";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridViewA);
			this->groupBox1->Controls->Add(this->numericUpDownA);
			this->groupBox1->Controls->Add(this->StepButtonA);
			this->groupBox1->Controls->Add(this->TransButtonA);
			this->groupBox1->Controls->Add(this->ObrButtonA);
			this->groupBox1->Controls->Add(this->DelColButtunA);
			this->groupBox1->Controls->Add(this->AddColButtunA);
			this->groupBox1->Controls->Add(this->OpredButtonA);
			this->groupBox1->Controls->Add(this->DelRowButtunA);
			this->groupBox1->Controls->Add(this->AddRowButtunA);
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(307, 325);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Матрица A";
			// 
			// dataGridViewA
			// 
			this->dataGridViewA->AllowUserToAddRows = false;
			this->dataGridViewA->AllowUserToDeleteRows = false;
			this->dataGridViewA->AllowUserToResizeColumns = false;
			this->dataGridViewA->AllowUserToResizeRows = false;
			this->dataGridViewA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridViewA->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridViewA->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridViewA->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewA->ColumnHeadersVisible = false;
			this->dataGridViewA->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn4,
					this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6
			});
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Gadugi", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::ControlLightLight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewA->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridViewA->Location = System::Drawing::Point(13, 24);
			this->dataGridViewA->Name = L"dataGridViewA";
			this->dataGridViewA->RowHeadersVisible = false;
			this->dataGridViewA->RowTemplate->Height = 32;
			this->dataGridViewA->Size = System::Drawing::Size(280, 185);
			this->dataGridViewA->TabIndex = 19;
			this->dataGridViewA->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::dataGridViewA_KeyPress);
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Column1";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Column2";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Column3";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			// 
			// numericUpDownA
			// 
			this->numericUpDownA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDownA->Location = System::Drawing::Point(249, 253);
			this->numericUpDownA->Name = L"numericUpDownA";
			this->numericUpDownA->ReadOnly = true;
			this->numericUpDownA->Size = System::Drawing::Size(44, 25);
			this->numericUpDownA->TabIndex = 8;
			// 
			// StepButtonA
			// 
			this->StepButtonA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->StepButtonA->Location = System::Drawing::Point(160, 252);
			this->StepButtonA->Name = L"StepButtonA";
			this->StepButtonA->Size = System::Drawing::Size(83, 29);
			this->StepButtonA->TabIndex = 18;
			this->StepButtonA->Text = L"В степень";
			this->StepButtonA->UseVisualStyleBackColor = true;
			this->StepButtonA->Click += gcnew System::EventHandler(this, &MainForm::StepButtonA_Click);
			// 
			// TransButtonA
			// 
			this->TransButtonA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->TransButtonA->Location = System::Drawing::Point(16, 252);
			this->TransButtonA->Name = L"TransButtonA";
			this->TransButtonA->Size = System::Drawing::Size(133, 29);
			this->TransButtonA->TabIndex = 17;
			this->TransButtonA->Text = L"Транспонировать";
			this->TransButtonA->UseVisualStyleBackColor = true;
			this->TransButtonA->Click += gcnew System::EventHandler(this, &MainForm::TransButtonA_Click);
			// 
			// ObrButtonA
			// 
			this->ObrButtonA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->ObrButtonA->Location = System::Drawing::Point(160, 287);
			this->ObrButtonA->Name = L"ObrButtonA";
			this->ObrButtonA->Size = System::Drawing::Size(133, 29);
			this->ObrButtonA->TabIndex = 16;
			this->ObrButtonA->Text = L"Обратная";
			this->ObrButtonA->UseVisualStyleBackColor = true;
			this->ObrButtonA->Click += gcnew System::EventHandler(this, &MainForm::ObrButtonA_Click);
			// 
			// DelColButtunA
			// 
			this->DelColButtunA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->DelColButtunA->Location = System::Drawing::Point(257, 217);
			this->DelColButtunA->Name = L"DelColButtunA";
			this->DelColButtunA->Size = System::Drawing::Size(36, 29);
			this->DelColButtunA->TabIndex = 14;
			this->DelColButtunA->Text = L"-C";
			this->DelColButtunA->UseVisualStyleBackColor = true;
			this->DelColButtunA->Click += gcnew System::EventHandler(this, &MainForm::DelColButtunA_Click);
			// 
			// AddColButtunA
			// 
			this->AddColButtunA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->AddColButtunA->Location = System::Drawing::Point(215, 217);
			this->AddColButtunA->Name = L"AddColButtunA";
			this->AddColButtunA->Size = System::Drawing::Size(36, 29);
			this->AddColButtunA->TabIndex = 13;
			this->AddColButtunA->Text = L"+C";
			this->AddColButtunA->UseVisualStyleBackColor = true;
			this->AddColButtunA->Click += gcnew System::EventHandler(this, &MainForm::AddColButtunA_Click);
			// 
			// OpredButtonA
			// 
			this->OpredButtonA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->OpredButtonA->Location = System::Drawing::Point(16, 287);
			this->OpredButtonA->Name = L"OpredButtonA";
			this->OpredButtonA->Size = System::Drawing::Size(133, 29);
			this->OpredButtonA->TabIndex = 15;
			this->OpredButtonA->Text = L"Определитель";
			this->OpredButtonA->UseVisualStyleBackColor = true;
			this->OpredButtonA->Click += gcnew System::EventHandler(this, &MainForm::OpredButtonA_Click);
			// 
			// DelRowButtunA
			// 
			this->DelRowButtunA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->DelRowButtunA->Location = System::Drawing::Point(55, 217);
			this->DelRowButtunA->Name = L"DelRowButtunA";
			this->DelRowButtunA->Size = System::Drawing::Size(36, 29);
			this->DelRowButtunA->TabIndex = 12;
			this->DelRowButtunA->Text = L"-R";
			this->DelRowButtunA->UseVisualStyleBackColor = true;
			this->DelRowButtunA->Click += gcnew System::EventHandler(this, &MainForm::DelRowButtunA_Click);
			// 
			// AddRowButtunA
			// 
			this->AddRowButtunA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->AddRowButtunA->Location = System::Drawing::Point(13, 217);
			this->AddRowButtunA->Name = L"AddRowButtunA";
			this->AddRowButtunA->Size = System::Drawing::Size(36, 29);
			this->AddRowButtunA->TabIndex = 11;
			this->AddRowButtunA->Text = L"+R";
			this->AddRowButtunA->UseVisualStyleBackColor = true;
			this->AddRowButtunA->Click += gcnew System::EventHandler(this, &MainForm::AddRowButtunA_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(323, 88);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"A x B";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(323, 151);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"A + B";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(323, 121);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 11;
			this->button3->Text = L"A - B";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// AddRowButtunB
			// 
			this->AddRowButtunB->Location = System::Drawing::Point(13, 217);
			this->AddRowButtunB->Name = L"AddRowButtunB";
			this->AddRowButtunB->Size = System::Drawing::Size(36, 29);
			this->AddRowButtunB->TabIndex = 11;
			this->AddRowButtunB->Text = L"+R";
			this->AddRowButtunB->UseVisualStyleBackColor = true;
			this->AddRowButtunB->Click += gcnew System::EventHandler(this, &MainForm::AddRowButtunB_Click);
			// 
			// DelRowButtunB
			// 
			this->DelRowButtunB->Location = System::Drawing::Point(55, 217);
			this->DelRowButtunB->Name = L"DelRowButtunB";
			this->DelRowButtunB->Size = System::Drawing::Size(36, 29);
			this->DelRowButtunB->TabIndex = 12;
			this->DelRowButtunB->Text = L"-R";
			this->DelRowButtunB->UseVisualStyleBackColor = true;
			this->DelRowButtunB->Click += gcnew System::EventHandler(this, &MainForm::DelRowButtunB_Click);
			// 
			// AddColButtunB
			// 
			this->AddColButtunB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->AddColButtunB->Location = System::Drawing::Point(215, 217);
			this->AddColButtunB->Name = L"AddColButtunB";
			this->AddColButtunB->Size = System::Drawing::Size(36, 29);
			this->AddColButtunB->TabIndex = 13;
			this->AddColButtunB->Text = L"+C";
			this->AddColButtunB->UseVisualStyleBackColor = true;
			this->AddColButtunB->Click += gcnew System::EventHandler(this, &MainForm::AddColButtunB_Click);
			// 
			// DelColButtunB
			// 
			this->DelColButtunB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->DelColButtunB->Location = System::Drawing::Point(257, 217);
			this->DelColButtunB->Name = L"DelColButtunB";
			this->DelColButtunB->Size = System::Drawing::Size(36, 29);
			this->DelColButtunB->TabIndex = 14;
			this->DelColButtunB->Text = L"-C";
			this->DelColButtunB->UseVisualStyleBackColor = true;
			this->DelColButtunB->Click += gcnew System::EventHandler(this, &MainForm::DelColButtunB_Click);
			// 
			// TransButtonB
			// 
			this->TransButtonB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->TransButtonB->Location = System::Drawing::Point(6, 254);
			this->TransButtonB->Name = L"TransButtonB";
			this->TransButtonB->Size = System::Drawing::Size(133, 29);
			this->TransButtonB->TabIndex = 17;
			this->TransButtonB->Text = L"Транспонировать";
			this->TransButtonB->UseVisualStyleBackColor = true;
			this->TransButtonB->Click += gcnew System::EventHandler(this, &MainForm::TransButtonB_Click);
			// 
			// StepButtonB
			// 
			this->StepButtonB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->StepButtonB->Location = System::Drawing::Point(160, 254);
			this->StepButtonB->Name = L"StepButtonB";
			this->StepButtonB->Size = System::Drawing::Size(83, 29);
			this->StepButtonB->TabIndex = 18;
			this->StepButtonB->Text = L"В степень";
			this->StepButtonB->UseVisualStyleBackColor = true;
			this->StepButtonB->Click += gcnew System::EventHandler(this, &MainForm::StepButtonB_Click);
			// 
			// numericUpDownB
			// 
			this->numericUpDownB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDownB->Location = System::Drawing::Point(249, 256);
			this->numericUpDownB->Name = L"numericUpDownB";
			this->numericUpDownB->Size = System::Drawing::Size(44, 25);
			this->numericUpDownB->TabIndex = 8;
			// 
			// dataGridViewB
			// 
			this->dataGridViewB->AllowUserToAddRows = false;
			this->dataGridViewB->AllowUserToDeleteRows = false;
			this->dataGridViewB->AllowUserToResizeColumns = false;
			this->dataGridViewB->AllowUserToResizeRows = false;
			this->dataGridViewB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridViewB->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridViewB->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridViewB->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewB->ColumnHeadersVisible = false;
			this->dataGridViewB->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Gadugi", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::ControlLightLight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewB->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridViewB->Location = System::Drawing::Point(13, 24);
			this->dataGridViewB->Name = L"dataGridViewB";
			this->dataGridViewB->RowHeadersVisible = false;
			this->dataGridViewB->RowTemplate->Height = 35;
			this->dataGridViewB->Size = System::Drawing::Size(280, 185);
			this->dataGridViewB->TabIndex = 13;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Column2";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Column3";
			this->Column3->Name = L"Column3";
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->dataGridViewB);
			this->groupBox2->Controls->Add(this->numericUpDownB);
			this->groupBox2->Controls->Add(this->StepButtonB);
			this->groupBox2->Controls->Add(this->TransButtonB);
			this->groupBox2->Controls->Add(this->DelColButtunB);
			this->groupBox2->Controls->Add(this->AddColButtunB);
			this->groupBox2->Controls->Add(this->DelRowButtunB);
			this->groupBox2->Controls->Add(this->AddRowButtunB);
			this->groupBox2->Location = System::Drawing::Point(413, 0);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(307, 325);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Матрица B";
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button5->Location = System::Drawing::Point(160, 287);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(133, 29);
			this->button5->TabIndex = 20;
			this->button5->Text = L"Обратная";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button4->Location = System::Drawing::Point(6, 290);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(133, 29);
			this->button4->TabIndex = 19;
			this->button4->Text = L"Определитель";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(722, 466);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Gadugi", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewB))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void AddRowButtunA_Click(System::Object^ sender, System::EventArgs^ e) {

	dataGridViewA->Rows->Add();
}
private: System::Void AddRowButtunB_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridViewB->Rows->Add();

}
private: System::Void DelRowButtunA_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridViewA->RowCount != 1) {
		dataGridViewA->Rows->RemoveAt(dataGridViewA->RowCount-1);
	}

}

private: System::Void DelRowButtunB_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridViewB->RowCount != 1) {
		dataGridViewB->Rows->RemoveAt(dataGridViewB->RowCount - 1);
	}
}
private: System::Void AddColButtunA_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridViewA->Columns->Add("1", "'");

}
private: System::Void AddColButtunB_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridViewB->Columns->Add("1", "'");

}
private: System::Void DelColButtunA_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridViewA->ColumnCount != 1) {
		dataGridViewA->Columns->RemoveAt(dataGridViewA->ColumnCount - 1);
	}
}
private: System::Void DelColButtunB_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridViewB->ColumnCount != 1) {
		dataGridViewB->Columns->RemoveAt(dataGridViewB->ColumnCount - 1);
	}
}


private: System::Void dataGridViewA_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char l = e->KeyChar;
	if (!Char::IsDigit(l))
	{
		e->Handled = true;
	}
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
		e->Handled = true;
	/*if (!Char::IsDigit(e->KeyChar) && !(e->KeyChar == '.'))
	{
		if (e->KeyChar != (char)Keys::Back)
		{
			e->Handled = true;
		}
	}*/
}

private: System::Void TransButtonA_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ str;
	 str = "Ответ:\n";
	 for (int i = 0; i < dataGridViewA->ColumnCount; i++) {
		 for (int j = 0; j < dataGridViewA->RowCount; j++) {
			System::String^ cell;

			 str += dataGridViewA->Rows[j]->Cells[i]->Value->ToString()+" ";
		}
		str += "\n";
	} 
	label1->Text = str;
}
private: System::Void TransButtonB_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ str;
	str = "Ответ:\n";
	for (int i = 0; i < dataGridViewB->ColumnCount; i++) {
		for (int j = 0; j < dataGridViewB->RowCount; j++) {
			System::String^ cell;

			str += dataGridViewB->Rows[j]->Cells[i]->Value->ToString() + " ";
		}
		str += "\n";
	}
	label1->Text = str;
}
#define SIZE 10
	   // Основная функция для вычисления обратной матрицы
	   void invertMatrix(double matrix[SIZE][SIZE], double inverse[SIZE][SIZE], int n) {
		   int i, j, k;
		   double ratio;

		   // Складываем слева единичную матрицу
		   for (i = 0; i < n; i++) {
			   for (j = 0; j < n; j++) {
				   inverse[i][j] = (i == j) ? 1.0f : 0.0f;
			   }
		   }

		   // Метод Гаусса-Жордана
		   for (i = 0; i < n; i++) {
			   // Главная диагональ должна быть ненулевой
			   if (matrix[i][i] == 0.0f) {
				  // printf("Обратная матрица не существует.\\n");
				   return;
			   }

			   // Делим строку на диагональный элемент
			   for (j = 0; j < 2 * n; j++) {
				   matrix[i][j] /= matrix[i][i];
				   inverse[i][j] /= matrix[i][i];
			   }

			   // Выравниваем остальные строки
			   for (k = 0; k < n; k++) {
				   if (k != i) {
					   ratio = matrix[k][i];
					   for (j = 0; j < n; j++) {
						   matrix[k][j] -= ratio * matrix[i][j];
						   inverse[k][j] -= ratio * inverse[i][j];
					   }
				   }
			   }
		   }
	   }


private: System::Void ObrButtonA_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridViewA->RowCount == dataGridViewA->ColumnCount) {
		int n= dataGridViewA->ColumnCount;
		System::String^ str;
		str = "Ответ:\n";
		double matrix[SIZE][SIZE], inverse[SIZE][SIZE];
		for (int i = 0; i < dataGridViewA->RowCount; i++) {
			for (int j = 0; j < dataGridViewA->ColumnCount; j++) {
				matrix[i][j] = Convert::ToDouble(dataGridViewA->Rows[i]->Cells[j]->Value);
			}
		}
		invertMatrix(matrix, inverse, n);
		for (int i = 0; i < dataGridViewA->RowCount; i++) {
			for (int j = 0; j < dataGridViewA->ColumnCount; j++) {
				str += inverse[i][j]+" ";
			}
			str += "\n";
		}
		label1->Text = str;
	}
	else {
		label1->Text = "Кол-во ячеек должно совпадать с кол-вом столбцов";
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridViewA->ColumnCount == dataGridViewB->RowCount) {
		System::String^ str;
		str = "Ответ:\n";
		
		for (int i = 0; i < dataGridViewA->RowCount; i++) {
			
			for (int k = 0; k < dataGridViewB->ColumnCount; k++) {
				int num = 0;
				for (int j = 0; j < dataGridViewA->ColumnCount; j++) {
					num += Convert::ToInt32(dataGridViewA->Rows[i]->Cells[j]->Value) * Convert::ToInt32(dataGridViewB->Rows[j]->Cells[k]->Value);	
				}
				str += num + " ";
			}
			str += "\n";

		}
		
		label1->Text = str;
	}
	else {
		label1->Text = "Количество столбцов первой матрицы должно равняться количеству строк второй.";

	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((dataGridViewA->ColumnCount == dataGridViewB->ColumnCount) &&  (dataGridViewA->RowCount == dataGridViewB->RowCount)) {
		System::String^ str;
		str = "Ответ:\n";

		for (int i = 0; i < dataGridViewA->RowCount; i++) {

			for (int k = 0; k < dataGridViewA->ColumnCount; k++) {
				int num = Convert::ToInt32(dataGridViewA->Rows[i]->Cells[k]->Value) - Convert::ToInt32(dataGridViewB->Rows[i]->Cells[k]->Value);

				
				str += num + " ";
			}
			str += "\n";

		}

		label1->Text = str;
	}
	else {
		label1->Text = "Матрицы должны быть одинаковыми";

	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((dataGridViewA->ColumnCount == dataGridViewB->ColumnCount) && (dataGridViewA->RowCount == dataGridViewB->RowCount)) {
		System::String^ str;
		str = "Ответ:\n";

		for (int i = 0; i < dataGridViewA->RowCount; i++) {

			for (int k = 0; k < dataGridViewA->ColumnCount; k++) {
				int num = Convert::ToInt32(dataGridViewA->Rows[i]->Cells[k]->Value) + Convert::ToInt32(dataGridViewB->Rows[i]->Cells[k]->Value);


				str += num + " ";
			}
			str += "\n";

		}

		label1->Text = str;
	}
	else {
		label1->Text = "Матрицы должны быть одинаковыми";

	}
}
private: System::Void StepButtonA_Click(System::Object^ sender, System::EventArgs^ e) {
	
	int rows = dataGridViewA->RowCount;
	int columns = dataGridViewA->ColumnCount;

	if (rows == columns) {
		System::String^ str;
		str = "Ответ:\n";
		int** mass{ new int* [rows] {} };
		int** mass1{ new int* [rows] {} };

		//создаём матрицу
		for (int i = 0; i < rows;i++) {
			mass[i] = new int[columns] {};
			mass1[i] = new int[columns] {};

		}
		for (int i = 0; i < rows;i++) {
			for (int j = 0; j < columns;j++) {
				mass[i][j] = Convert::ToInt32(dataGridViewA->Rows[i]->Cells[j]->Value);

			}
		}
		if (numericUpDownA->Value == 0) {
			for (int i = 0; i < rows;i++) {
				for (int j = 0; j < columns;j++) {
					if (j == i) {
						str += 1 + " ";
					}
					else {
						str += 0 + " ";
					}
				}
				str += "\n";
			}
		}
		else {
			for (int z = 1; z < numericUpDownA->Value;z++) {
				for (int i = 0; i < rows; i++) {

					for (int k = 0; k < dataGridViewA->ColumnCount; k++) {
						int num = 0;
						for (int j = 0; j < columns; j++) {
							num += mass[i][j] * Convert::ToInt32(dataGridViewA->Rows[j]->Cells[k]->Value);
						}
						mass1[i][k] = num;
					}

				}
				for (int i = 0; i < rows; i++) {

					for (int k = 0; k < dataGridViewA->ColumnCount; k++) {

						mass[i][k] = mass1[i][k];
					}

				}
			}
			for (int i = 0; i < rows;i++) {
				for (int j = 0; j < columns;j++) {
					str += mass[i][j] + " ";
				}
				str += "\n";
			}
		}

		label1->Text = str;
	}
	else {
		label1->Text = "Матрица должна быть квадратной";
	}
}
private: System::Void StepButtonB_Click(System::Object^ sender, System::EventArgs^ e) {
	int rows = dataGridViewB->RowCount;
	int columns = dataGridViewB->ColumnCount;

	if (rows == columns) {
		System::String^ str;
		str = "Ответ:\n";
		int** mass{ new int* [rows] {} };
		int** mass1{ new int* [rows] {} };

		//создаём матрицу
		for (int i = 0; i < rows;i++) {
			mass[i] = new int[columns] {};
			mass1[i] = new int[columns] {};

		}
		for (int i = 0; i < rows;i++) {
			for (int j = 0; j < columns;j++) {
				mass[i][j] = Convert::ToInt32(dataGridViewB->Rows[i]->Cells[j]->Value);

			}
		}
		if (numericUpDownB->Value == 0) {
			for (int i = 0; i < rows;i++) {
				for (int j = 0; j < columns;j++) {
					if (j == i) {
						str += 1 + " ";
					}
					else {
						str += 0 + " ";
					}
				}
				str += "\n";
			}
		}
		else {
			for (int z = 1; z < numericUpDownB->Value;z++) {
				for (int i = 0; i < rows; i++) {

					for (int k = 0; k < dataGridViewB->ColumnCount; k++) {
						int num = 0;
						for (int j = 0; j < columns; j++) {
							num += mass[i][j] * Convert::ToInt32(dataGridViewB->Rows[j]->Cells[k]->Value);
						}
						mass1[i][k] = num;
					}

				}
				for (int i = 0; i < rows; i++) {

					for (int k = 0; k < dataGridViewB->ColumnCount; k++) {

						mass[i][k] = mass1[i][k];
					}

				}
			}
			for (int i = 0; i < rows;i++) {
				for (int j = 0; j < columns;j++) {
					str += mass[i][j] + " ";
				}
				str += "\n";
			}
		}

		label1->Text = str;
	}
	else {
		label1->Text = "Матрица должна быть квадратной";
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridViewB->RowCount == dataGridViewB->ColumnCount) {
		int n = dataGridViewB->ColumnCount;
		System::String^ str;
		str = "Ответ:\n";
		double matrix[SIZE][SIZE], inverse[SIZE][SIZE];
		for (int i = 0; i < dataGridViewB->RowCount; i++) {
			for (int j = 0; j < dataGridViewB->ColumnCount; j++) {
				matrix[i][j] = Convert::ToDouble(dataGridViewB->Rows[i]->Cells[j]->Value);
			}
		}
		invertMatrix(matrix, inverse, n);
		for (int i = 0; i < dataGridViewB->RowCount; i++) {
			for (int j = 0; j < dataGridViewB->ColumnCount; j++) {
				str += inverse[i][j] + " ";
			}
			str += "\n";
		}
		label1->Text = str;
	}
	else {
		label1->Text = "Кол-во ячеек должно совпадать с кол-вом столбцов";
	}
}

	   // Рекурсивная функция для вычисления определителя матрицы
	   double determinant(double matrix[SIZE][SIZE], int n) {
		   double det = 0.0f;
		   double submatrix[SIZE][SIZE];
		   int sign = 1; // знак (изначально положительный)

		   // Базовый случай: если матрица 1x1
		   if (n == 1) {
			   return matrix[0][0];
		   }

		   // Расчёт определителя разложением по первой строке
		   for (int f = 0; f < n; f++) {
			   // Формирование уменьшенной матрицы (минор)
			   int pos_i = 0;
			   for (int i = 1; i < n; i++) {
				   int pos_j = 0;
				   for (int j = 0; j < n; j++) {
					   if (j == f) continue; // пропускаем выбранный столбец
					   submatrix[pos_i][pos_j++] = matrix[i][j];
				   }
				   pos_i++;
			   }

			   // Рекомбинация с предыдущими элементами
			   det += sign * matrix[0][f] * determinant(submatrix, n - 1);
			   sign = -sign; // чередование знака
		   }

		   return det;
	   }
private: System::Void OpredButtonA_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridViewA->RowCount == dataGridViewA->ColumnCount) {
		int n = dataGridViewA->ColumnCount;
		System::String^ str;
		str = "Ответ:\n";
		double matrix[SIZE][SIZE], inverse[SIZE][SIZE];
		for (int i = 0; i < dataGridViewA->RowCount; i++) {
			for (int j = 0; j < dataGridViewA->ColumnCount; j++) {
				matrix[i][j] = Convert::ToDouble(dataGridViewA->Rows[i]->Cells[j]->Value);
			}
		}
		double det = determinant(matrix, n);
		
		label1->Text = str + det;
	}
	else {
		label1->Text = "Кол-во ячеек должно совпадать с кол-вом столбцов";
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridViewB->RowCount == dataGridViewB->ColumnCount) {
		int n = dataGridViewB->ColumnCount;
		System::String^ str;
		str = "Ответ:\n";
		double matrix[SIZE][SIZE], inverse[SIZE][SIZE];
		for (int i = 0; i < dataGridViewB->RowCount; i++) {
			for (int j = 0; j < dataGridViewB->ColumnCount; j++) {
				matrix[i][j] = Convert::ToDouble(dataGridViewB->Rows[i]->Cells[j]->Value);
			}
		}
		double det = determinant(matrix, n);

		label1->Text = str + det;
	}
	else {
		label1->Text = "Кол-во ячеек должно совпадать с кол-вом столбцов";
	}
}
};
}
