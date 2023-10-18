#pragma once

namespace Raspisanie {

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

	protected:


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;









	private: System::Windows::Forms::Label^ label6;




	private: System::Windows::Forms::PictureBox^ logo;
	private: System::Windows::Forms::Label^ label7;

























	private: System::Windows::Forms::ListBox^ listBox1;


private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::Panel^ panel2;









private: System::Windows::Forms::PictureBox^ pictureBox6;








































private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TabControl^ tabControl1;
private: System::Windows::Forms::TabPage^ tabPage1;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
private: System::Windows::Forms::TextBox^ textbox_password;
private: System::Windows::Forms::TextBox^ textbox_login;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::PictureBox^ pictureBox_eye;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::PictureBox^ pictureBox_group;
private: System::Windows::Forms::TabPage^ tabPage2;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::TextBox^ textBox_login_2;
private: System::Windows::Forms::TextBox^ textBox_password_2;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::TextBox^ textBox_name;
private: System::Windows::Forms::TextBox^ textBox_surname;
private: System::Windows::Forms::TextBox^ textBox_group;
private: System::Windows::Forms::PictureBox^ button_registration;
private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::TabPage^ tabPage3;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::PictureBox^ pictureBox8;
private: System::Windows::Forms::TabPage^ tabPage4;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::ComboBox^ comboBox_group;
private: System::Windows::Forms::DataGridView^ dataGridView1;





private: System::Windows::Forms::TabPage^ tabPage5;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel11;
private: System::Windows::Forms::ListBox^ listBox3;
private: System::Windows::Forms::ListBox^ listBox4;
private: System::Windows::Forms::PictureBox^ pictureBox14;
private: System::Windows::Forms::TabPage^ tabPage6;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel10;
private: System::Windows::Forms::ListBox^ listBox2;
private: System::Windows::Forms::TabPage^ tabPage7;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;

private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::PictureBox^ pictureBox10;
private: System::Windows::Forms::PictureBox^ button_remove;
private: System::Windows::Forms::PictureBox^ button_delete;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::PictureBox^ pictureBox_edit;
private: System::Windows::Forms::TabPage^ tabPage8;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::PictureBox^ button_edit;
private: System::Windows::Forms::PictureBox^ pictureBox12;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::TabPage^ tabPage9;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel8;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::TabPage^ tabPage10;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel9;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::PictureBox^ pictureBox13;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::PictureBox^ pictureBox15;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ pn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ vt;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ sr;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ht;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ pt;
private: System::Windows::Forms::PictureBox^ pictureBox16;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel12;
private: System::Windows::Forms::TabPage^ tabPage11;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel13;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label36;



private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::PictureBox^ pictureBox18;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::PictureBox^ pictureBox17;
private: System::Windows::Forms::PictureBox^ pictureBox19;
private: System::Windows::Forms::DomainUpDown^ domainUpDown1;
private: System::Windows::Forms::DomainUpDown^ domainUpDown2;
private: System::Windows::Forms::DomainUpDown^ domainUpDown3;
private: System::Windows::Forms::PictureBox^ pictureBox22;
private: System::Windows::Forms::PictureBox^ pictureBox21;
private: System::Windows::Forms::PictureBox^ pictureBox20;
private: System::Windows::Forms::PictureBox^ pictureBox23;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel14;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel15;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel16;
private: System::Windows::Forms::PictureBox^ pictureBox4;










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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->textbox_password = (gcnew System::Windows::Forms::TextBox());
            this->textbox_login = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox_eye = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox_group = (gcnew System::Windows::Forms::PictureBox());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->textBox_login_2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox_password_2 = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->textBox_name = (gcnew System::Windows::Forms::TextBox());
            this->textBox_surname = (gcnew System::Windows::Forms::TextBox());
            this->textBox_group = (gcnew System::Windows::Forms::TextBox());
            this->button_registration = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
            this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->comboBox_group = (gcnew System::Windows::Forms::ComboBox());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->pn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->vt = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->sr = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->ht = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->pt = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
            this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel11 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->listBox3 = (gcnew System::Windows::Forms::ListBox());
            this->listBox4 = (gcnew System::Windows::Forms::ListBox());
            this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel10 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->listBox2 = (gcnew System::Windows::Forms::ListBox());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
            this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->button_delete = (gcnew System::Windows::Forms::PictureBox());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox_edit = (gcnew System::Windows::Forms::PictureBox());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->button_remove = (gcnew System::Windows::Forms::PictureBox());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
            this->button_edit = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel9 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->tableLayoutPanel12 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
            this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel13 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->textBox12 = (gcnew System::Windows::Forms::TextBox());
            this->textBox13 = (gcnew System::Windows::Forms::TextBox());
            this->textBox14 = (gcnew System::Windows::Forms::TextBox());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
            this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
            this->domainUpDown2 = (gcnew System::Windows::Forms::DomainUpDown());
            this->domainUpDown3 = (gcnew System::Windows::Forms::DomainUpDown());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->tableLayoutPanel15 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->logo = (gcnew System::Windows::Forms::PictureBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel16 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->listBox1 = (gcnew System::Windows::Forms::ListBox());
            this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->tableLayoutPanel14 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->tableLayoutPanel1->SuspendLayout();
            this->tabControl1->SuspendLayout();
            this->tabPage1->SuspendLayout();
            this->tableLayoutPanel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_eye))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_group))->BeginInit();
            this->tabPage2->SuspendLayout();
            this->tableLayoutPanel3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->button_registration))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
            this->tabPage3->SuspendLayout();
            this->tableLayoutPanel4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
            this->tabPage4->SuspendLayout();
            this->tableLayoutPanel5->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
            this->tabPage5->SuspendLayout();
            this->tableLayoutPanel11->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
            this->tabPage6->SuspendLayout();
            this->tableLayoutPanel10->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
            this->tabPage7->SuspendLayout();
            this->tableLayoutPanel6->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->button_delete))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_edit))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->button_remove))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            this->tabPage8->SuspendLayout();
            this->tableLayoutPanel7->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->button_edit))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
            this->tabPage9->SuspendLayout();
            this->tableLayoutPanel8->SuspendLayout();
            this->tabPage10->SuspendLayout();
            this->tableLayoutPanel9->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
            this->panel3->SuspendLayout();
            this->tableLayoutPanel12->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
            this->tabPage11->SuspendLayout();
            this->tableLayoutPanel13->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
            this->panel2->SuspendLayout();
            this->tableLayoutPanel15->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->BeginInit();
            this->tableLayoutPanel16->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
            this->panel1->SuspendLayout();
            this->tableLayoutPanel14->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            this->SuspendLayout();
            // 
            // tableLayoutPanel1
            // 
            this->tableLayoutPanel1->BackColor = System::Drawing::Color::White;
            this->tableLayoutPanel1->ColumnCount = 3;
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel1->Controls->Add(this->tabControl1, 1, 1);
            this->tableLayoutPanel1->Controls->Add(this->panel2, 0, 0);
            this->tableLayoutPanel1->Controls->Add(this->label7, 2, 2);
            this->tableLayoutPanel1->Controls->Add(this->listBox1, 0, 2);
            this->tableLayoutPanel1->Controls->Add(this->pictureBox6, 0, 1);
            this->tableLayoutPanel1->Controls->Add(this->panel1, 0, 3);
            this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 4;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 7.212205F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 62.69071F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(863, 721);
            this->tableLayoutPanel1->TabIndex = 1;
            // 
            // tabControl1
            // 
            this->tabControl1->Controls->Add(this->tabPage1);
            this->tabControl1->Controls->Add(this->tabPage2);
            this->tabControl1->Controls->Add(this->tabPage3);
            this->tabControl1->Controls->Add(this->tabPage4);
            this->tabControl1->Controls->Add(this->tabPage5);
            this->tabControl1->Controls->Add(this->tabPage6);
            this->tabControl1->Controls->Add(this->tabPage7);
            this->tabControl1->Controls->Add(this->tabPage8);
            this->tabControl1->Controls->Add(this->tabPage9);
            this->tabControl1->Controls->Add(this->tabPage10);
            this->tabControl1->Controls->Add(this->tabPage11);
            this->tabControl1->Cursor = System::Windows::Forms::Cursors::Default;
            this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tabControl1->Location = System::Drawing::Point(135, 114);
            this->tabControl1->Margin = System::Windows::Forms::Padding(6);
            this->tabControl1->Name = L"tabControl1";
            this->tabControl1->Padding = System::Drawing::Point(0, 0);
            this->tabControl1->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->tabControl1->RightToLeftLayout = true;
            this->tableLayoutPanel1->SetRowSpan(this->tabControl1, 2);
            this->tabControl1->SelectedIndex = 0;
            this->tabControl1->Size = System::Drawing::Size(592, 492);
            this->tabControl1->TabIndex = 0;
            this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabControl1_SelectedIndexChanged);
            // 
            // tabPage1
            // 
            this->tabPage1->BackColor = System::Drawing::Color::White;
            this->tabPage1->Controls->Add(this->tableLayoutPanel2);
            this->tabPage1->Location = System::Drawing::Point(4, 31);
            this->tabPage1->Margin = System::Windows::Forms::Padding(0);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Padding = System::Windows::Forms::Padding(6, 5, 6, 5);
            this->tabPage1->Size = System::Drawing::Size(584, 457);
            this->tabPage1->TabIndex = 0;
            this->tabPage1->Text = L"Вход";
            // 
            // tableLayoutPanel2
            // 
            this->tableLayoutPanel2->BackColor = System::Drawing::Color::Transparent;
            this->tableLayoutPanel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tableLayoutPanel2.BackgroundImage")));
            this->tableLayoutPanel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->tableLayoutPanel2->ColumnCount = 3;
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15.55944F)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                67.65734F)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                16.78322F)));
            this->tableLayoutPanel2->Controls->Add(this->textbox_password, 1, 4);
            this->tableLayoutPanel2->Controls->Add(this->textbox_login, 1, 2);
            this->tableLayoutPanel2->Controls->Add(this->label1, 1, 1);
            this->tableLayoutPanel2->Controls->Add(this->label2, 1, 3);
            this->tableLayoutPanel2->Controls->Add(this->pictureBox3, 1, 8);
            this->tableLayoutPanel2->Controls->Add(this->pictureBox_eye, 2, 4);
            this->tableLayoutPanel2->Controls->Add(this->pictureBox2, 1, 5);
            this->tableLayoutPanel2->Controls->Add(this->pictureBox_group, 1, 6);
            this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel2->Location = System::Drawing::Point(6, 5);
            this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
            this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
            this->tableLayoutPanel2->RowCount = 10;
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 4.761769F)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 4.999977F)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.04993F)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 4.761769F)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.18568F)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.52796F)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 19.04708F)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 4.474273F)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 19.01566F)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 4.9217F)));
            this->tableLayoutPanel2->Size = System::Drawing::Size(572, 447);
            this->tableLayoutPanel2->TabIndex = 0;
            // 
            // textbox_password
            // 
            this->textbox_password->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textbox_password->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textbox_password->Location = System::Drawing::Point(138, 142);
            this->textbox_password->Margin = System::Windows::Forms::Padding(50, 15, 50, 5);
            this->textbox_password->MaximumSize = System::Drawing::Size(290, 30);
            this->textbox_password->MaxLength = 100;
            this->textbox_password->MinimumSize = System::Drawing::Size(290, 30);
            this->textbox_password->Name = L"textbox_password";
            this->textbox_password->PasswordChar = '*';
            this->textbox_password->Size = System::Drawing::Size(290, 30);
            this->textbox_password->TabIndex = 3;
            // 
            // textbox_login
            // 
            this->textbox_login->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textbox_login->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textbox_login->Location = System::Drawing::Point(138, 65);
            this->textbox_login->Margin = System::Windows::Forms::Padding(50, 15, 50, 5);
            this->textbox_login->MaximumSize = System::Drawing::Size(290, 30);
            this->textbox_login->MaxLength = 100;
            this->textbox_login->MinimumSize = System::Drawing::Size(290, 30);
            this->textbox_login->Name = L"textbox_login";
            this->textbox_login->Size = System::Drawing::Size(290, 30);
            this->textbox_login->TabIndex = 4;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->Location = System::Drawing::Point(94, 22);
            this->label1->Margin = System::Windows::Forms::Padding(6, 1, 6, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(375, 21);
            this->label1->TabIndex = 5;
            this->label1->Text = L"Логин";
            this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->Location = System::Drawing::Point(94, 106);
            this->label2->Margin = System::Windows::Forms::Padding(6, 1, 6, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(375, 20);
            this->label2->TabIndex = 6;
            this->label2->Text = L"Пароль";
            this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox3
            // 
            this->pictureBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
            this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox3->Location = System::Drawing::Point(98, 355);
            this->pictureBox3->Margin = System::Windows::Forms::Padding(10, 18, 10, 18);
            this->pictureBox3->MaximumSize = System::Drawing::Size(420, 70);
            this->pictureBox3->MinimumSize = System::Drawing::Size(367, 45);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(367, 49);
            this->pictureBox3->TabIndex = 8;
            this->pictureBox3->TabStop = false;
            this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::button_vhod_Click);
            // 
            // pictureBox_eye
            // 
            this->pictureBox_eye->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->pictureBox_eye->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox_eye->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_eye.BackgroundImage")));
            this->pictureBox_eye->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox_eye->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox_eye->Location = System::Drawing::Point(475, 136);
            this->pictureBox_eye->Margin = System::Windows::Forms::Padding(0, 10, 5, 5);
            this->pictureBox_eye->Name = L"pictureBox_eye";
            this->pictureBox_eye->Size = System::Drawing::Size(38, 35);
            this->pictureBox_eye->TabIndex = 10;
            this->pictureBox_eye->TabStop = false;
            this->pictureBox_eye->Click += gcnew System::EventHandler(this, &MyForm::pictureBox9_Click);
            // 
            // pictureBox2
            // 
            this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
            this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox2->Location = System::Drawing::Point(138, 191);
            this->pictureBox2->Margin = System::Windows::Forms::Padding(50, 15, 50, 15);
            this->pictureBox2->MaximumSize = System::Drawing::Size(320, 40);
            this->pictureBox2->MinimumSize = System::Drawing::Size(290, 30);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(290, 30);
            this->pictureBox2->TabIndex = 7;
            this->pictureBox2->TabStop = false;
            this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::button_no_password_Click);
            // 
            // pictureBox_group
            // 
            this->pictureBox_group->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox_group->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_group.BackgroundImage")));
            this->pictureBox_group->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox_group->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox_group->Location = System::Drawing::Point(98, 252);
            this->pictureBox_group->Margin = System::Windows::Forms::Padding(10, 20, 10, 20);
            this->pictureBox_group->MaximumSize = System::Drawing::Size(420, 70);
            this->pictureBox_group->MinimumSize = System::Drawing::Size(367, 45);
            this->pictureBox_group->Name = L"pictureBox_group";
            this->pictureBox_group->Size = System::Drawing::Size(367, 45);
            this->pictureBox_group->TabIndex = 11;
            this->pictureBox_group->TabStop = false;
            this->pictureBox_group->Click += gcnew System::EventHandler(this, &MyForm::pictureBox_group_Click);
            // 
            // tabPage2
            // 
            this->tabPage2->BackColor = System::Drawing::Color::White;
            this->tabPage2->Controls->Add(this->tableLayoutPanel3);
            this->tabPage2->Location = System::Drawing::Point(4, 31);
            this->tabPage2->Margin = System::Windows::Forms::Padding(0);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(6, 5, 6, 5);
            this->tabPage2->Size = System::Drawing::Size(584, 457);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"Регистрация";
            // 
            // tableLayoutPanel3
            // 
            this->tableLayoutPanel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tableLayoutPanel3.BackgroundImage")));
            this->tableLayoutPanel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->tableLayoutPanel3->ColumnCount = 5;
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                10)));
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                10)));
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                10)));
            this->tableLayoutPanel3->Controls->Add(this->label3, 1, 2);
            this->tableLayoutPanel3->Controls->Add(this->textBox_login_2, 2, 2);
            this->tableLayoutPanel3->Controls->Add(this->textBox_password_2, 2, 3);
            this->tableLayoutPanel3->Controls->Add(this->label4, 1, 3);
            this->tableLayoutPanel3->Controls->Add(this->label9, 1, 4);
            this->tableLayoutPanel3->Controls->Add(this->label10, 1, 5);
            this->tableLayoutPanel3->Controls->Add(this->label11, 1, 6);
            this->tableLayoutPanel3->Controls->Add(this->textBox_name, 2, 4);
            this->tableLayoutPanel3->Controls->Add(this->textBox_surname, 2, 5);
            this->tableLayoutPanel3->Controls->Add(this->textBox_group, 2, 6);
            this->tableLayoutPanel3->Controls->Add(this->button_registration, 0, 8);
            this->tableLayoutPanel3->Controls->Add(this->pictureBox9, 3, 3);
            this->tableLayoutPanel3->Controls->Add(this->label29, 0, 0);
            this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel3->Location = System::Drawing::Point(6, 5);
            this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
            this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
            this->tableLayoutPanel3->RowCount = 9;
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.78027F)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.726458F)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10.53811F)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10.08968F)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10.3139F)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.65919F)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10.3139F)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.502242F)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 21.07623F)));
            this->tableLayoutPanel3->Size = System::Drawing::Size(572, 447);
            this->tableLayoutPanel3->TabIndex = 1;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::Transparent;
            this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->Location = System::Drawing::Point(62, 92);
            this->label3->Margin = System::Windows::Forms::Padding(5);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(104, 37);
            this->label3->TabIndex = 5;
            this->label3->Text = L"Логин";
            this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // textBox_login_2
            // 
            this->textBox_login_2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox_login_2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox_login_2->Location = System::Drawing::Point(191, 97);
            this->textBox_login_2->Margin = System::Windows::Forms::Padding(20, 10, 50, 0);
            this->textBox_login_2->MaxLength = 100;
            this->textBox_login_2->Name = L"textBox_login_2";
            this->textBox_login_2->Size = System::Drawing::Size(216, 27);
            this->textBox_login_2->TabIndex = 4;
            // 
            // textBox_password_2
            // 
            this->textBox_password_2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox_password_2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox_password_2->Location = System::Drawing::Point(191, 144);
            this->textBox_password_2->Margin = System::Windows::Forms::Padding(20, 10, 50, 0);
            this->textBox_password_2->MaxLength = 100;
            this->textBox_password_2->Name = L"textBox_password_2";
            this->textBox_password_2->PasswordChar = '*';
            this->textBox_password_2->Size = System::Drawing::Size(216, 27);
            this->textBox_password_2->TabIndex = 3;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::Transparent;
            this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->Location = System::Drawing::Point(62, 139);
            this->label4->Margin = System::Windows::Forms::Padding(5);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(104, 35);
            this->label4->TabIndex = 6;
            this->label4->Text = L"Пароль";
            this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->BackColor = System::Drawing::Color::Transparent;
            this->label9->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label9->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label9->Location = System::Drawing::Point(62, 184);
            this->label9->Margin = System::Windows::Forms::Padding(5);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(104, 36);
            this->label9->TabIndex = 13;
            this->label9->Text = L"Ваше Имя";
            this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->BackColor = System::Drawing::Color::Transparent;
            this->label10->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label10->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label10->Location = System::Drawing::Point(62, 230);
            this->label10->Margin = System::Windows::Forms::Padding(5);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(104, 42);
            this->label10->TabIndex = 14;
            this->label10->Text = L"Ваша Фамилия";
            this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->BackColor = System::Drawing::Color::Transparent;
            this->label11->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label11->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label11->Location = System::Drawing::Point(62, 282);
            this->label11->Margin = System::Windows::Forms::Padding(5);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(104, 36);
            this->label11->TabIndex = 15;
            this->label11->Text = L"Группа";
            this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // textBox_name
            // 
            this->textBox_name->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox_name->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox_name->Location = System::Drawing::Point(191, 189);
            this->textBox_name->Margin = System::Windows::Forms::Padding(20, 10, 50, 0);
            this->textBox_name->MaxLength = 100;
            this->textBox_name->Name = L"textBox_name";
            this->textBox_name->Size = System::Drawing::Size(216, 27);
            this->textBox_name->TabIndex = 16;
            // 
            // textBox_surname
            // 
            this->textBox_surname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox_surname->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox_surname->Location = System::Drawing::Point(191, 235);
            this->textBox_surname->Margin = System::Windows::Forms::Padding(20, 10, 50, 0);
            this->textBox_surname->MaxLength = 100;
            this->textBox_surname->Name = L"textBox_surname";
            this->textBox_surname->Size = System::Drawing::Size(216, 27);
            this->textBox_surname->TabIndex = 17;
            // 
            // textBox_group
            // 
            this->textBox_group->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox_group->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox_group->Location = System::Drawing::Point(191, 287);
            this->textBox_group->Margin = System::Windows::Forms::Padding(20, 10, 50, 0);
            this->textBox_group->MaxLength = 4;
            this->textBox_group->Name = L"textBox_group";
            this->textBox_group->Size = System::Drawing::Size(216, 27);
            this->textBox_group->TabIndex = 18;
            // 
            // button_registration
            // 
            this->button_registration->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button_registration->BackColor = System::Drawing::Color::Transparent;
            this->button_registration->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_registration.BackgroundImage")));
            this->button_registration->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->tableLayoutPanel3->SetColumnSpan(this->button_registration, 5);
            this->button_registration->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button_registration->Location = System::Drawing::Point(38, 374);
            this->button_registration->Margin = System::Windows::Forms::Padding(5, 20, 0, 20);
            this->button_registration->MaximumSize = System::Drawing::Size(500, 50);
            this->button_registration->MinimumSize = System::Drawing::Size(500, 50);
            this->button_registration->Name = L"button_registration";
            this->button_registration->Size = System::Drawing::Size(500, 50);
            this->button_registration->TabIndex = 8;
            this->button_registration->TabStop = false;
            this->button_registration->Click += gcnew System::EventHandler(this, &MyForm::button_registration_Click);
            // 
            // pictureBox9
            // 
            this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.BackgroundImage")));
            this->pictureBox9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox9->Location = System::Drawing::Point(457, 144);
            this->pictureBox9->Margin = System::Windows::Forms::Padding(0, 10, 5, 5);
            this->pictureBox9->Name = L"pictureBox9";
            this->pictureBox9->Size = System::Drawing::Size(35, 29);
            this->pictureBox9->TabIndex = 20;
            this->pictureBox9->TabStop = false;
            this->pictureBox9->Click += gcnew System::EventHandler(this, &MyForm::pictureBox9_Click_1);
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->BackColor = System::Drawing::Color::Transparent;
            this->tableLayoutPanel3->SetColumnSpan(this->label29, 5);
            this->label29->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label29->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label29->Location = System::Drawing::Point(3, 0);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(566, 57);
            this->label29->TabIndex = 21;
            this->label29->Text = L"Регистрация";
            this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tabPage3
            // 
            this->tabPage3->BackColor = System::Drawing::Color::White;
            this->tabPage3->Controls->Add(this->tableLayoutPanel4);
            this->tabPage3->Location = System::Drawing::Point(4, 31);
            this->tabPage3->Margin = System::Windows::Forms::Padding(0);
            this->tabPage3->Name = L"tabPage3";
            this->tabPage3->Padding = System::Windows::Forms::Padding(6, 5, 6, 5);
            this->tabPage3->Size = System::Drawing::Size(584, 457);
            this->tabPage3->TabIndex = 2;
            this->tabPage3->Text = L"О колледже";
            // 
            // tableLayoutPanel4
            // 
            this->tableLayoutPanel4->ColumnCount = 2;
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.39161F)));
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                66.60839F)));
            this->tableLayoutPanel4->Controls->Add(this->label12, 1, 0);
            this->tableLayoutPanel4->Controls->Add(this->pictureBox8, 0, 0);
            this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel4->Location = System::Drawing::Point(6, 5);
            this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
            this->tableLayoutPanel4->RowCount = 1;
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel4->Size = System::Drawing::Size(572, 447);
            this->tableLayoutPanel4->TabIndex = 0;
            // 
            // label12
            // 
            this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label12->Location = System::Drawing::Point(205, 25);
            this->label12->Margin = System::Windows::Forms::Padding(10, 20, 10, 20);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(353, 396);
            this->label12->TabIndex = 0;
            this->label12->Text = resources->GetString(L"label12.Text");
            // 
            // pictureBox8
            // 
            this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
            this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox8->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox8->Location = System::Drawing::Point(10, 10);
            this->pictureBox8->Margin = System::Windows::Forms::Padding(10);
            this->pictureBox8->Name = L"pictureBox8";
            this->pictureBox8->Size = System::Drawing::Size(171, 427);
            this->pictureBox8->TabIndex = 1;
            this->pictureBox8->TabStop = false;
            // 
            // tabPage4
            // 
            this->tabPage4->BackColor = System::Drawing::Color::White;
            this->tabPage4->Controls->Add(this->tableLayoutPanel5);
            this->tabPage4->Location = System::Drawing::Point(4, 31);
            this->tabPage4->Margin = System::Windows::Forms::Padding(0);
            this->tabPage4->Name = L"tabPage4";
            this->tabPage4->Size = System::Drawing::Size(584, 457);
            this->tabPage4->TabIndex = 3;
            this->tabPage4->Text = L"Расписание";
            // 
            // tableLayoutPanel5
            // 
            this->tableLayoutPanel5->ColumnCount = 3;
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                26.98962F)));
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                73.01038F)));
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                73)));
            this->tableLayoutPanel5->Controls->Add(this->label13, 0, 0);
            this->tableLayoutPanel5->Controls->Add(this->comboBox_group, 1, 0);
            this->tableLayoutPanel5->Controls->Add(this->dataGridView1, 0, 1);
            this->tableLayoutPanel5->Controls->Add(this->pictureBox19, 2, 0);
            this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel5->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
            this->tableLayoutPanel5->RowCount = 2;
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.492273F)));
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 90.50773F)));
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
            this->tableLayoutPanel5->Size = System::Drawing::Size(584, 457);
            this->tableLayoutPanel5->TabIndex = 0;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label13->Location = System::Drawing::Point(5, 5);
            this->label13->Margin = System::Windows::Forms::Padding(5);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(127, 33);
            this->label13->TabIndex = 0;
            this->label13->Text = L"Группа:";
            this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // comboBox_group
            // 
            this->comboBox_group->Dock = System::Windows::Forms::DockStyle::Fill;
            this->comboBox_group->FormattingEnabled = true;
            this->comboBox_group->Location = System::Drawing::Point(147, 10);
            this->comboBox_group->Margin = System::Windows::Forms::Padding(10, 10, 250, 10);
            this->comboBox_group->MaximumSize = System::Drawing::Size(116, 0);
            this->comboBox_group->MinimumSize = System::Drawing::Size(116, 0);
            this->comboBox_group->Name = L"comboBox_group";
            this->comboBox_group->Size = System::Drawing::Size(116, 30);
            this->comboBox_group->TabIndex = 1;
            this->comboBox_group->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox_group_SelectedIndexChanged);
            this->comboBox_group->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_no);
            this->comboBox_group->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Text_no_2);
            // 
            // dataGridView1
            // 
            this->dataGridView1->AllowUserToResizeColumns = false;
            this->dataGridView1->AllowUserToResizeRows = false;
            this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(218)));
            this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
            this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
                this->pn, this->vt,
                    this->sr, this->ht, this->pt
            });
            this->tableLayoutPanel5->SetColumnSpan(this->dataGridView1, 3);
            this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dataGridView1->GridColor = System::Drawing::Color::White;
            this->dataGridView1->Location = System::Drawing::Point(15, 58);
            this->dataGridView1->Margin = System::Windows::Forms::Padding(15);
            this->dataGridView1->MultiSelect = false;
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->ReadOnly = true;
            this->dataGridView1->Size = System::Drawing::Size(554, 384);
            this->dataGridView1->TabIndex = 2;
            // 
            // pn
            // 
            this->pn->HeaderText = L"Понедельник";
            this->pn->Name = L"pn";
            this->pn->ReadOnly = true;
            this->pn->Width = 140;
            // 
            // vt
            // 
            this->vt->HeaderText = L"Вторник";
            this->vt->Name = L"vt";
            this->vt->ReadOnly = true;
            // 
            // sr
            // 
            this->sr->HeaderText = L"Среда";
            this->sr->Name = L"sr";
            this->sr->ReadOnly = true;
            this->sr->Width = 80;
            // 
            // ht
            // 
            this->ht->HeaderText = L"Четверг";
            this->ht->Name = L"ht";
            this->ht->ReadOnly = true;
            // 
            // pt
            // 
            this->pt->HeaderText = L"Пятница";
            this->pt->Name = L"pt";
            this->pt->ReadOnly = true;
            // 
            // pictureBox19
            // 
            this->pictureBox19->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.BackgroundImage")));
            this->pictureBox19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox19->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox19->Location = System::Drawing::Point(516, 6);
            this->pictureBox19->Margin = System::Windows::Forms::Padding(6);
            this->pictureBox19->Name = L"pictureBox19";
            this->pictureBox19->Size = System::Drawing::Size(40, 31);
            this->pictureBox19->TabIndex = 3;
            this->pictureBox19->TabStop = false;
            this->pictureBox19->Click += gcnew System::EventHandler(this, &MyForm::pictureBox19_Click);
            // 
            // tabPage5
            // 
            this->tabPage5->BackColor = System::Drawing::Color::White;
            this->tabPage5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->tabPage5->Controls->Add(this->tableLayoutPanel11);
            this->tabPage5->Location = System::Drawing::Point(4, 31);
            this->tabPage5->Margin = System::Windows::Forms::Padding(0);
            this->tabPage5->Name = L"tabPage5";
            this->tabPage5->Size = System::Drawing::Size(584, 457);
            this->tabPage5->TabIndex = 4;
            this->tabPage5->Text = L"Для групп";
            // 
            // tableLayoutPanel11
            // 
            this->tableLayoutPanel11->BackColor = System::Drawing::Color::Transparent;
            this->tableLayoutPanel11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tableLayoutPanel11.BackgroundImage")));
            this->tableLayoutPanel11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->tableLayoutPanel11->ColumnCount = 4;
            this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                30)));
            this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                40)));
            this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel11->Controls->Add(this->listBox3, 1, 1);
            this->tableLayoutPanel11->Controls->Add(this->listBox4, 2, 1);
            this->tableLayoutPanel11->Controls->Add(this->pictureBox14, 0, 2);
            this->tableLayoutPanel11->Controls->Add(this->label26, 1, 0);
            this->tableLayoutPanel11->Controls->Add(this->label27, 2, 0);
            this->tableLayoutPanel11->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel11->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel11->Name = L"tableLayoutPanel11";
            this->tableLayoutPanel11->RowCount = 3;
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 14.25439F)));
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 58.11403F)));
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 27.63158F)));
            this->tableLayoutPanel11->Size = System::Drawing::Size(584, 457);
            this->tableLayoutPanel11->TabIndex = 1;
            // 
            // listBox3
            // 
            this->listBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(218)));
            this->listBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->listBox3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->listBox3->FormattingEnabled = true;
            this->listBox3->ItemHeight = 22;
            this->listBox3->Location = System::Drawing::Point(90, 68);
            this->listBox3->Name = L"listBox3";
            this->listBox3->Size = System::Drawing::Size(169, 259);
            this->listBox3->TabIndex = 0;
            // 
            // listBox4
            // 
            this->listBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(218)));
            this->listBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->listBox4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->listBox4->FormattingEnabled = true;
            this->listBox4->ItemHeight = 22;
            this->listBox4->Location = System::Drawing::Point(277, 68);
            this->listBox4->Margin = System::Windows::Forms::Padding(15, 3, 3, 3);
            this->listBox4->Name = L"listBox4";
            this->listBox4->Size = System::Drawing::Size(215, 259);
            this->listBox4->TabIndex = 1;
            // 
            // pictureBox14
            // 
            this->pictureBox14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.BackgroundImage")));
            this->pictureBox14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->tableLayoutPanel11->SetColumnSpan(this->pictureBox14, 4);
            this->pictureBox14->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox14->Location = System::Drawing::Point(3, 333);
            this->pictureBox14->Name = L"pictureBox14";
            this->pictureBox14->Size = System::Drawing::Size(578, 121);
            this->pictureBox14->TabIndex = 2;
            this->pictureBox14->TabStop = false;
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label26->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label26->Location = System::Drawing::Point(88, 1);
            this->label26->Margin = System::Windows::Forms::Padding(1);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(173, 63);
            this->label26->TabIndex = 3;
            this->label26->Text = L"Список групп";
            this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label27->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label27->Location = System::Drawing::Point(263, 1);
            this->label27->Margin = System::Windows::Forms::Padding(1);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(231, 63);
            this->label27->TabIndex = 4;
            this->label27->Text = L"Список предметов";
            this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tabPage6
            // 
            this->tabPage6->BackColor = System::Drawing::Color::White;
            this->tabPage6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->tabPage6->Controls->Add(this->tableLayoutPanel10);
            this->tabPage6->Location = System::Drawing::Point(4, 31);
            this->tabPage6->Margin = System::Windows::Forms::Padding(0);
            this->tabPage6->Name = L"tabPage6";
            this->tabPage6->Size = System::Drawing::Size(584, 457);
            this->tabPage6->TabIndex = 5;
            this->tabPage6->Text = L"Учителя";
            // 
            // tableLayoutPanel10
            // 
            this->tableLayoutPanel10->BackColor = System::Drawing::Color::Transparent;
            this->tableLayoutPanel10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tableLayoutPanel10.BackgroundImage")));
            this->tableLayoutPanel10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->tableLayoutPanel10->ColumnCount = 3;
            this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                10)));
            this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                45)));
            this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                45)));
            this->tableLayoutPanel10->Controls->Add(this->listBox2, 1, 1);
            this->tableLayoutPanel10->Controls->Add(this->label28, 1, 0);
            this->tableLayoutPanel10->Controls->Add(this->pictureBox15, 2, 0);
            this->tableLayoutPanel10->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel10->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel10->Name = L"tableLayoutPanel10";
            this->tableLayoutPanel10->RowCount = 3;
            this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 13.75546F)));
            this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 77.94759F)));
            this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.296944F)));
            this->tableLayoutPanel10->Size = System::Drawing::Size(584, 457);
            this->tableLayoutPanel10->TabIndex = 0;
            // 
            // listBox2
            // 
            this->listBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(218)));
            this->listBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->listBox2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->listBox2->FormattingEnabled = true;
            this->listBox2->ItemHeight = 22;
            this->listBox2->Location = System::Drawing::Point(61, 65);
            this->listBox2->Name = L"listBox2";
            this->listBox2->Size = System::Drawing::Size(256, 350);
            this->listBox2->TabIndex = 0;
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label28->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label28->Location = System::Drawing::Point(61, 0);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(256, 62);
            this->label28->TabIndex = 1;
            this->label28->Text = L"Учителя";
            this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox15
            // 
            this->pictureBox15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.BackgroundImage")));
            this->pictureBox15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox15->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox15->Location = System::Drawing::Point(322, 5);
            this->pictureBox15->Margin = System::Windows::Forms::Padding(2, 5, 60, 5);
            this->pictureBox15->Name = L"pictureBox15";
            this->tableLayoutPanel10->SetRowSpan(this->pictureBox15, 3);
            this->pictureBox15->Size = System::Drawing::Size(202, 447);
            this->pictureBox15->TabIndex = 2;
            this->pictureBox15->TabStop = false;
            // 
            // tabPage7
            // 
            this->tabPage7->BackColor = System::Drawing::Color::White;
            this->tabPage7->Controls->Add(this->tableLayoutPanel6);
            this->tabPage7->Location = System::Drawing::Point(4, 31);
            this->tabPage7->Margin = System::Windows::Forms::Padding(0);
            this->tabPage7->Name = L"tabPage7";
            this->tabPage7->Size = System::Drawing::Size(584, 457);
            this->tabPage7->TabIndex = 6;
            this->tabPage7->Text = L"Профиль";
            // 
            // tableLayoutPanel6
            // 
            this->tableLayoutPanel6->ColumnCount = 3;
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                35)));
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel6->Controls->Add(this->button_delete, 2, 3);
            this->tableLayoutPanel6->Controls->Add(this->label16, 2, 4);
            this->tableLayoutPanel6->Controls->Add(this->pictureBox10, 0, 0);
            this->tableLayoutPanel6->Controls->Add(this->pictureBox_edit, 0, 1);
            this->tableLayoutPanel6->Controls->Add(this->label14, 1, 0);
            this->tableLayoutPanel6->Controls->Add(this->button_remove, 0, 3);
            this->tableLayoutPanel6->Controls->Add(this->label15, 0, 4);
            this->tableLayoutPanel6->Controls->Add(this->pictureBox4, 0, 2);
            this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel6->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
            this->tableLayoutPanel6->RowCount = 5;
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.55264F)));
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.40351F)));
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 37.5F)));
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.40351F)));
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 6.140351F)));
            this->tableLayoutPanel6->Size = System::Drawing::Size(584, 457);
            this->tableLayoutPanel6->TabIndex = 0;
            // 
            // button_delete
            // 
            this->button_delete->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button_delete->BackColor = System::Drawing::Color::Transparent;
            this->button_delete->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_delete.BackgroundImage")));
            this->button_delete->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->button_delete->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button_delete->Location = System::Drawing::Point(506, 387);
            this->button_delete->Margin = System::Windows::Forms::Padding(10);
            this->button_delete->MaximumSize = System::Drawing::Size(69, 30);
            this->button_delete->MinimumSize = System::Drawing::Size(69, 30);
            this->button_delete->Name = L"button_delete";
            this->button_delete->Size = System::Drawing::Size(69, 30);
            this->button_delete->TabIndex = 4;
            this->button_delete->TabStop = false;
            this->button_delete->Click += gcnew System::EventHandler(this, &MyForm::button_delete_Click);
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label16->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label16->Location = System::Drawing::Point(498, 430);
            this->label16->Margin = System::Windows::Forms::Padding(2);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(84, 25);
            this->label16->TabIndex = 6;
            this->label16->Text = L"Удалить";
            this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox10
            // 
            this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.BackgroundImage")));
            this->pictureBox10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox10->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox10->Location = System::Drawing::Point(10, 10);
            this->pictureBox10->Margin = System::Windows::Forms::Padding(10);
            this->pictureBox10->Name = L"pictureBox10";
            this->pictureBox10->Size = System::Drawing::Size(184, 133);
            this->pictureBox10->TabIndex = 1;
            this->pictureBox10->TabStop = false;
            // 
            // pictureBox_edit
            // 
            this->pictureBox_edit->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox_edit->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox_edit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_edit.BackgroundImage")));
            this->pictureBox_edit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox_edit->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox_edit->Location = System::Drawing::Point(65, 158);
            this->pictureBox_edit->Margin = System::Windows::Forms::Padding(8, 4, 8, 4);
            this->pictureBox_edit->MaximumSize = System::Drawing::Size(73, 42);
            this->pictureBox_edit->MinimumSize = System::Drawing::Size(73, 42);
            this->pictureBox_edit->Name = L"pictureBox_edit";
            this->pictureBox_edit->Size = System::Drawing::Size(73, 42);
            this->pictureBox_edit->TabIndex = 7;
            this->pictureBox_edit->TabStop = false;
            this->pictureBox_edit->Click += gcnew System::EventHandler(this, &MyForm::pictureBox_edit_Click);
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->BackColor = System::Drawing::Color::Transparent;
            this->tableLayoutPanel6->SetColumnSpan(this->label14, 2);
            this->label14->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label14->Location = System::Drawing::Point(214, 10);
            this->label14->Margin = System::Windows::Forms::Padding(10);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(360, 133);
            this->label14->TabIndex = 0;
            this->label14->Text = L". . .";
            this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // button_remove
            // 
            this->button_remove->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button_remove->BackColor = System::Drawing::Color::Transparent;
            this->button_remove->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_remove.BackgroundImage")));
            this->button_remove->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->button_remove->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button_remove->Location = System::Drawing::Point(68, 387);
            this->button_remove->Margin = System::Windows::Forms::Padding(10);
            this->button_remove->MaximumSize = System::Drawing::Size(67, 30);
            this->button_remove->MinimumSize = System::Drawing::Size(67, 30);
            this->button_remove->Name = L"button_remove";
            this->button_remove->Size = System::Drawing::Size(67, 30);
            this->button_remove->TabIndex = 3;
            this->button_remove->TabStop = false;
            this->button_remove->Click += gcnew System::EventHandler(this, &MyForm::button_remove_Click);
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label15->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label15->Location = System::Drawing::Point(2, 430);
            this->label15->Margin = System::Windows::Forms::Padding(2);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(200, 25);
            this->label15->TabIndex = 5;
            this->label15->Text = L"Выйти";
            this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox4
            // 
            this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
            this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->tableLayoutPanel6->SetColumnSpan(this->pictureBox4, 3);
            this->pictureBox4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox4->Location = System::Drawing::Point(3, 208);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(578, 165);
            this->pictureBox4->TabIndex = 8;
            this->pictureBox4->TabStop = false;
            // 
            // tabPage8
            // 
            this->tabPage8->BackColor = System::Drawing::Color::White;
            this->tabPage8->Controls->Add(this->tableLayoutPanel7);
            this->tabPage8->Location = System::Drawing::Point(4, 31);
            this->tabPage8->Name = L"tabPage8";
            this->tabPage8->Padding = System::Windows::Forms::Padding(3);
            this->tabPage8->Size = System::Drawing::Size(584, 457);
            this->tabPage8->TabIndex = 7;
            this->tabPage8->Text = L"Редактор профиля";
            // 
            // tableLayoutPanel7
            // 
            this->tableLayoutPanel7->BackColor = System::Drawing::Color::Transparent;
            this->tableLayoutPanel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tableLayoutPanel7.BackgroundImage")));
            this->tableLayoutPanel7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->tableLayoutPanel7->ColumnCount = 5;
            this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                8)));
            this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                52)));
            this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                5)));
            this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanel7->Controls->Add(this->label17, 1, 1);
            this->tableLayoutPanel7->Controls->Add(this->textBox1, 2, 1);
            this->tableLayoutPanel7->Controls->Add(this->textBox2, 2, 2);
            this->tableLayoutPanel7->Controls->Add(this->label18, 1, 2);
            this->tableLayoutPanel7->Controls->Add(this->label19, 1, 3);
            this->tableLayoutPanel7->Controls->Add(this->label20, 1, 4);
            this->tableLayoutPanel7->Controls->Add(this->label21, 1, 5);
            this->tableLayoutPanel7->Controls->Add(this->textBox3, 2, 3);
            this->tableLayoutPanel7->Controls->Add(this->textBox4, 2, 4);
            this->tableLayoutPanel7->Controls->Add(this->textBox5, 2, 5);
            this->tableLayoutPanel7->Controls->Add(this->pictureBox7, 3, 2);
            this->tableLayoutPanel7->Controls->Add(this->button_edit, 2, 7);
            this->tableLayoutPanel7->Controls->Add(this->pictureBox12, 1, 7);
            this->tableLayoutPanel7->Controls->Add(this->label22, 0, 0);
            this->tableLayoutPanel7->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel7->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel7->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
            this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
            this->tableLayoutPanel7->RowCount = 9;
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.72621F)));
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10.94008F)));
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10.94008F)));
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10.94008F)));
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.05641F)));
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.600478F)));
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 7.367807F)));
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20.09402F)));
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5.334827F)));
            this->tableLayoutPanel7->Size = System::Drawing::Size(578, 451);
            this->tableLayoutPanel7->TabIndex = 2;
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->BackColor = System::Drawing::Color::Transparent;
            this->label17->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label17->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label17->Location = System::Drawing::Point(51, 62);
            this->label17->Margin = System::Windows::Forms::Padding(5);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(76, 39);
            this->label17->TabIndex = 5;
            this->label17->Text = L"Логин";
            this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // textBox1
            // 
            this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox1->Location = System::Drawing::Point(182, 67);
            this->textBox1->Margin = System::Windows::Forms::Padding(50, 10, 50, 0);
            this->textBox1->MaxLength = 100;
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(200, 27);
            this->textBox1->TabIndex = 4;
            // 
            // textBox2
            // 
            this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox2->Location = System::Drawing::Point(182, 116);
            this->textBox2->Margin = System::Windows::Forms::Padding(50, 10, 50, 0);
            this->textBox2->MaxLength = 100;
            this->textBox2->Name = L"textBox2";
            this->textBox2->PasswordChar = '*';
            this->textBox2->Size = System::Drawing::Size(200, 27);
            this->textBox2->TabIndex = 3;
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->BackColor = System::Drawing::Color::Transparent;
            this->label18->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label18->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label18->Location = System::Drawing::Point(51, 111);
            this->label18->Margin = System::Windows::Forms::Padding(5);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(76, 39);
            this->label18->TabIndex = 6;
            this->label18->Text = L"Пароль";
            this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->BackColor = System::Drawing::Color::Transparent;
            this->label19->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label19->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label19->Location = System::Drawing::Point(51, 160);
            this->label19->Margin = System::Windows::Forms::Padding(5);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(76, 39);
            this->label19->TabIndex = 13;
            this->label19->Text = L"Ваше Имя";
            this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->BackColor = System::Drawing::Color::Transparent;
            this->label20->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label20->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label20->Location = System::Drawing::Point(51, 209);
            this->label20->Margin = System::Windows::Forms::Padding(5);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(76, 44);
            this->label20->TabIndex = 14;
            this->label20->Text = L"Ваша Фамилия";
            this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->BackColor = System::Drawing::Color::Transparent;
            this->label21->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label21->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label21->Location = System::Drawing::Point(51, 263);
            this->label21->Margin = System::Windows::Forms::Padding(5);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(76, 33);
            this->label21->TabIndex = 15;
            this->label21->Text = L"Группа";
            this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // textBox3
            // 
            this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox3->Location = System::Drawing::Point(182, 165);
            this->textBox3->Margin = System::Windows::Forms::Padding(50, 10, 50, 0);
            this->textBox3->MaxLength = 100;
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(200, 27);
            this->textBox3->TabIndex = 16;
            // 
            // textBox4
            // 
            this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox4->Location = System::Drawing::Point(182, 214);
            this->textBox4->Margin = System::Windows::Forms::Padding(50, 10, 50, 0);
            this->textBox4->MaxLength = 100;
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(200, 27);
            this->textBox4->TabIndex = 17;
            // 
            // textBox5
            // 
            this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox5->Location = System::Drawing::Point(182, 268);
            this->textBox5->Margin = System::Windows::Forms::Padding(50, 10, 50, 0);
            this->textBox5->MaxLength = 4;
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(200, 27);
            this->textBox5->TabIndex = 18;
            // 
            // pictureBox7
            // 
            this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
            this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox7->Location = System::Drawing::Point(432, 116);
            this->pictureBox7->Margin = System::Windows::Forms::Padding(0, 10, 0, 0);
            this->pictureBox7->Name = L"pictureBox7";
            this->pictureBox7->Size = System::Drawing::Size(28, 29);
            this->pictureBox7->TabIndex = 20;
            this->pictureBox7->TabStop = false;
            this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click);
            // 
            // button_edit
            // 
            this->button_edit->BackColor = System::Drawing::Color::Transparent;
            this->button_edit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_edit.BackgroundImage")));
            this->button_edit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->tableLayoutPanel7->SetColumnSpan(this->button_edit, 3);
            this->button_edit->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button_edit->Location = System::Drawing::Point(132, 374);
            this->button_edit->Margin = System::Windows::Forms::Padding(0, 40, 0, 0);
            this->button_edit->MaximumSize = System::Drawing::Size(358, 46);
            this->button_edit->MinimumSize = System::Drawing::Size(358, 46);
            this->button_edit->Name = L"button_edit";
            this->button_edit->Size = System::Drawing::Size(358, 46);
            this->button_edit->TabIndex = 8;
            this->button_edit->TabStop = false;
            this->button_edit->Click += gcnew System::EventHandler(this, &MyForm::button_edit_Click);
            // 
            // pictureBox12
            // 
            this->pictureBox12->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.BackgroundImage")));
            this->pictureBox12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox12->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox12->Location = System::Drawing::Point(66, 379);
            this->pictureBox12->Margin = System::Windows::Forms::Padding(20, 45, 0, 0);
            this->pictureBox12->MaximumSize = System::Drawing::Size(35, 35);
            this->pictureBox12->MinimumSize = System::Drawing::Size(35, 35);
            this->pictureBox12->Name = L"pictureBox12";
            this->pictureBox12->Size = System::Drawing::Size(35, 35);
            this->pictureBox12->TabIndex = 21;
            this->pictureBox12->TabStop = false;
            this->pictureBox12->Click += gcnew System::EventHandler(this, &MyForm::pictureBox12_Click);
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->BackColor = System::Drawing::Color::Transparent;
            this->tableLayoutPanel7->SetColumnSpan(this->label22, 5);
            this->label22->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label22->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label22->Location = System::Drawing::Point(3, 0);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(572, 57);
            this->label22->TabIndex = 22;
            this->label22->Text = L"Редактор профиля";
            this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // tabPage9
            // 
            this->tabPage9->Controls->Add(this->tableLayoutPanel8);
            this->tabPage9->Location = System::Drawing::Point(4, 31);
            this->tabPage9->Name = L"tabPage9";
            this->tabPage9->Padding = System::Windows::Forms::Padding(3);
            this->tabPage9->Size = System::Drawing::Size(584, 457);
            this->tabPage9->TabIndex = 8;
            this->tabPage9->Text = L"Админ панель";
            this->tabPage9->UseVisualStyleBackColor = true;
            // 
            // tableLayoutPanel8
            // 
            this->tableLayoutPanel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(218)));
            this->tableLayoutPanel8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->tableLayoutPanel8->ColumnCount = 3;
            this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                41.76776F)));
            this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                30.32929F)));
            this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                27.90295F)));
            this->tableLayoutPanel8->Controls->Add(this->button1, 2, 0);
            this->tableLayoutPanel8->Controls->Add(this->label23, 0, 0);
            this->tableLayoutPanel8->Controls->Add(this->textBox6, 1, 0);
            this->tableLayoutPanel8->Controls->Add(this->button2, 2, 1);
            this->tableLayoutPanel8->Controls->Add(this->button3, 1, 5);
            this->tableLayoutPanel8->Controls->Add(this->textBox8, 1, 4);
            this->tableLayoutPanel8->Controls->Add(this->comboBox1, 0, 4);
            this->tableLayoutPanel8->Controls->Add(this->label8, 1, 3);
            this->tableLayoutPanel8->Controls->Add(this->label25, 0, 3);
            this->tableLayoutPanel8->Controls->Add(this->button4, 2, 5);
            this->tableLayoutPanel8->Cursor = System::Windows::Forms::Cursors::Default;
            this->tableLayoutPanel8->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel8->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel8->Margin = System::Windows::Forms::Padding(0);
            this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
            this->tableLayoutPanel8->RowCount = 7;
            this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10.19956F)));
            this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.52993F)));
            this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 7.317073F)));
            this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.42572F)));
            this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.534369F)));
            this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.97339F)));
            this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 42.1286F)));
            this->tableLayoutPanel8->Size = System::Drawing::Size(578, 451);
            this->tableLayoutPanel8->TabIndex = 0;
            // 
            // button1
            // 
            this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button1->Location = System::Drawing::Point(244, 48);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(169, 45);
            this->button1->TabIndex = 0;
            this->button1->Text = L"Назначить";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label23->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label23->Location = System::Drawing::Point(3, 0);
            this->label23->Name = L"label23";
            this->tableLayoutPanel8->SetRowSpan(this->label23, 2);
            this->label23->Size = System::Drawing::Size(235, 96);
            this->label23->TabIndex = 1;
            this->label23->Text = L"Назначить / отозвать администратора (введите логин человека)";
            this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // textBox6
            // 
            this->textBox6->BackColor = System::Drawing::Color::White;
            this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->tableLayoutPanel8->SetColumnSpan(this->textBox6, 2);
            this->textBox6->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox6->Location = System::Drawing::Point(271, 10);
            this->textBox6->Margin = System::Windows::Forms::Padding(30, 10, 30, 6);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(277, 27);
            this->textBox6->TabIndex = 2;
            // 
            // button2
            // 
            this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button2->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button2->Location = System::Drawing::Point(419, 48);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(156, 45);
            this->button2->TabIndex = 5;
            this->button2->Text = L"Отозвать";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // button3
            // 
            this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button3->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button3->Location = System::Drawing::Point(244, 210);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(169, 47);
            this->button3->TabIndex = 7;
            this->button3->Text = L"Добавить";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // textBox8
            // 
            this->textBox8->BackColor = System::Drawing::Color::White;
            this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->tableLayoutPanel8->SetColumnSpan(this->textBox8, 2);
            this->textBox8->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox8->Location = System::Drawing::Point(243, 173);
            this->textBox8->Margin = System::Windows::Forms::Padding(2, 8, 2, 2);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(333, 27);
            this->textBox8->TabIndex = 8;
            // 
            // comboBox1
            // 
            this->comboBox1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->comboBox1->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Группа", L"Учителя", L"Предмет" });
            this->comboBox1->Location = System::Drawing::Point(4, 171);
            this->comboBox1->Margin = System::Windows::Forms::Padding(4, 6, 4, 4);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(233, 29);
            this->comboBox1->TabIndex = 6;
            this->comboBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_no);
            this->comboBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Text_no_2);
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->tableLayoutPanel8->SetColumnSpan(this->label8, 2);
            this->label8->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label8->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label8->Location = System::Drawing::Point(242, 129);
            this->label8->Margin = System::Windows::Forms::Padding(1);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(335, 35);
            this->label8->TabIndex = 9;
            this->label8->Text = L"Данные для добавления / удаления:";
            this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label25->Location = System::Drawing::Point(1, 129);
            this->label25->Margin = System::Windows::Forms::Padding(1);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(239, 35);
            this->label25->TabIndex = 10;
            this->label25->Text = L"Выберите БД:";
            this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // button4
            // 
            this->button4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button4->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button4->Location = System::Drawing::Point(419, 210);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(156, 47);
            this->button4->TabIndex = 11;
            this->button4->Text = L"Удалить";
            this->button4->UseVisualStyleBackColor = true;
            this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
            // 
            // tabPage10
            // 
            this->tabPage10->BackColor = System::Drawing::Color::White;
            this->tabPage10->Controls->Add(this->tableLayoutPanel9);
            this->tabPage10->Location = System::Drawing::Point(4, 31);
            this->tabPage10->Margin = System::Windows::Forms::Padding(0);
            this->tabPage10->Name = L"tabPage10";
            this->tabPage10->Padding = System::Windows::Forms::Padding(6, 5, 6, 5);
            this->tabPage10->Size = System::Drawing::Size(584, 457);
            this->tabPage10->TabIndex = 9;
            this->tabPage10->Text = L"Вход по группе";
            // 
            // tableLayoutPanel9
            // 
            this->tableLayoutPanel9->BackColor = System::Drawing::Color::Transparent;
            this->tableLayoutPanel9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tableLayoutPanel9.BackgroundImage")));
            this->tableLayoutPanel9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->tableLayoutPanel9->ColumnCount = 3;
            this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                10)));
            this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                80)));
            this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                10)));
            this->tableLayoutPanel9->Controls->Add(this->pictureBox1, 0, 3);
            this->tableLayoutPanel9->Controls->Add(this->pictureBox13, 0, 4);
            this->tableLayoutPanel9->Controls->Add(this->label24, 1, 1);
            this->tableLayoutPanel9->Controls->Add(this->panel3, 1, 2);
            this->tableLayoutPanel9->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel9->Location = System::Drawing::Point(6, 5);
            this->tableLayoutPanel9->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
            this->tableLayoutPanel9->Name = L"tableLayoutPanel9";
            this->tableLayoutPanel9->RowCount = 6;
            this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15.86207F)));
            this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 40.8805F)));
            this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 43.39622F)));
            this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 69)));
            this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 222)));
            this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
            this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
            this->tableLayoutPanel9->Size = System::Drawing::Size(572, 447);
            this->tableLayoutPanel9->TabIndex = 0;
            // 
            // pictureBox1
            // 
            this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
            this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->tableLayoutPanel9->SetColumnSpan(this->pictureBox1, 3);
            this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox1->Location = System::Drawing::Point(77, 149);
            this->pictureBox1->Margin = System::Windows::Forms::Padding(20, 15, 20, 15);
            this->pictureBox1->MaximumSize = System::Drawing::Size(417, 39);
            this->pictureBox1->MinimumSize = System::Drawing::Size(417, 39);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(417, 39);
            this->pictureBox1->TabIndex = 2;
            this->pictureBox1->TabStop = false;
            this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
            // 
            // pictureBox13
            // 
            this->pictureBox13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.BackgroundImage")));
            this->pictureBox13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->tableLayoutPanel9->SetColumnSpan(this->pictureBox13, 3);
            this->pictureBox13->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox13->Location = System::Drawing::Point(3, 206);
            this->pictureBox13->Name = L"pictureBox13";
            this->tableLayoutPanel9->SetRowSpan(this->pictureBox13, 2);
            this->pictureBox13->Size = System::Drawing::Size(566, 238);
            this->pictureBox13->TabIndex = 3;
            this->pictureBox13->TabStop = false;
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label24->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label24->Location = System::Drawing::Point(58, 22);
            this->label24->Margin = System::Windows::Forms::Padding(1);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(455, 53);
            this->label24->TabIndex = 0;
            this->label24->Text = L"Вход по группе";
            this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // panel3
            // 
            this->panel3->Controls->Add(this->tableLayoutPanel12);
            this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel3->Location = System::Drawing::Point(60, 79);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(451, 52);
            this->panel3->TabIndex = 5;
            // 
            // tableLayoutPanel12
            // 
            this->tableLayoutPanel12->ColumnCount = 3;
            this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel12->Controls->Add(this->textBox7, 1, 0);
            this->tableLayoutPanel12->Controls->Add(this->pictureBox16, 0, 0);
            this->tableLayoutPanel12->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel12->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel12->Name = L"tableLayoutPanel12";
            this->tableLayoutPanel12->RowCount = 1;
            this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel12->Size = System::Drawing::Size(451, 52);
            this->tableLayoutPanel12->TabIndex = 0;
            // 
            // textBox7
            // 
            this->textBox7->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->textBox7->BackColor = System::Drawing::Color::White;
            this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox7->Location = System::Drawing::Point(167, 12);
            this->textBox7->Margin = System::Windows::Forms::Padding(100, 12, 100, 14);
            this->textBox7->MaximumSize = System::Drawing::Size(115, 27);
            this->textBox7->MaxLength = 4;
            this->textBox7->MinimumSize = System::Drawing::Size(115, 27);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(115, 27);
            this->textBox7->TabIndex = 1;
            // 
            // pictureBox16
            // 
            this->pictureBox16->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->pictureBox16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.BackgroundImage")));
            this->pictureBox16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox16->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox16->Location = System::Drawing::Point(17, 17);
            this->pictureBox16->Margin = System::Windows::Forms::Padding(17);
            this->pictureBox16->MaximumSize = System::Drawing::Size(33, 18);
            this->pictureBox16->MinimumSize = System::Drawing::Size(33, 18);
            this->pictureBox16->Name = L"pictureBox16";
            this->pictureBox16->Size = System::Drawing::Size(33, 18);
            this->pictureBox16->TabIndex = 4;
            this->pictureBox16->TabStop = false;
            this->pictureBox16->Click += gcnew System::EventHandler(this, &MyForm::pictureBox16_Click);
            // 
            // tabPage11
            // 
            this->tabPage11->BackColor = System::Drawing::Color::White;
            this->tabPage11->Controls->Add(this->tableLayoutPanel13);
            this->tabPage11->Location = System::Drawing::Point(4, 31);
            this->tabPage11->Name = L"tabPage11";
            this->tabPage11->Padding = System::Windows::Forms::Padding(3);
            this->tabPage11->Size = System::Drawing::Size(584, 457);
            this->tabPage11->TabIndex = 10;
            this->tabPage11->Text = L"Изменение расписания";
            // 
            // tableLayoutPanel13
            // 
            this->tableLayoutPanel13->BackColor = System::Drawing::Color::Transparent;
            this->tableLayoutPanel13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tableLayoutPanel13.BackgroundImage")));
            this->tableLayoutPanel13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->tableLayoutPanel13->ColumnCount = 4;
            this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                10)));
            this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                40)));
            this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                40)));
            this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                10)));
            this->tableLayoutPanel13->Controls->Add(this->pictureBox18, 1, 10);
            this->tableLayoutPanel13->Controls->Add(this->label32, 1, 5);
            this->tableLayoutPanel13->Controls->Add(this->label31, 1, 4);
            this->tableLayoutPanel13->Controls->Add(this->label30, 1, 3);
            this->tableLayoutPanel13->Controls->Add(this->label33, 1, 6);
            this->tableLayoutPanel13->Controls->Add(this->label34, 1, 7);
            this->tableLayoutPanel13->Controls->Add(this->label35, 1, 8);
            this->tableLayoutPanel13->Controls->Add(this->label36, 1, 1);
            this->tableLayoutPanel13->Controls->Add(this->textBox12, 2, 6);
            this->tableLayoutPanel13->Controls->Add(this->textBox13, 2, 7);
            this->tableLayoutPanel13->Controls->Add(this->textBox14, 2, 8);
            this->tableLayoutPanel13->Controls->Add(this->label37, 1, 9);
            this->tableLayoutPanel13->Controls->Add(this->pictureBox17, 1, 11);
            this->tableLayoutPanel13->Controls->Add(this->domainUpDown1, 2, 3);
            this->tableLayoutPanel13->Controls->Add(this->domainUpDown2, 2, 4);
            this->tableLayoutPanel13->Controls->Add(this->domainUpDown3, 2, 5);
            this->tableLayoutPanel13->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel13->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel13->Name = L"tableLayoutPanel13";
            this->tableLayoutPanel13->RowCount = 13;
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 7.692308F)));
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 7.692308F)));
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 7.692308F)));
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 7.692308F)));
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 7.692308F)));
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 7.692308F)));
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 7.692308F)));
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 7.692308F)));
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 7.692308F)));
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 7.692308F)));
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 7.692308F)));
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 7.692308F)));
            this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 7.692308F)));
            this->tableLayoutPanel13->Size = System::Drawing::Size(578, 451);
            this->tableLayoutPanel13->TabIndex = 0;
            // 
            // pictureBox18
            // 
            this->pictureBox18->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.BackgroundImage")));
            this->pictureBox18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox18->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox18->Location = System::Drawing::Point(67, 345);
            this->pictureBox18->Margin = System::Windows::Forms::Padding(10, 5, 190, 5);
            this->pictureBox18->MaximumSize = System::Drawing::Size(31, 24);
            this->pictureBox18->MinimumSize = System::Drawing::Size(31, 24);
            this->pictureBox18->Name = L"pictureBox18";
            this->pictureBox18->Size = System::Drawing::Size(31, 24);
            this->pictureBox18->TabIndex = 15;
            this->pictureBox18->TabStop = false;
            this->pictureBox18->Click += gcnew System::EventHandler(this, &MyForm::pictureBox18_Click);
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label32->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label32->Location = System::Drawing::Point(58, 171);
            this->label32->Margin = System::Windows::Forms::Padding(1);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(229, 32);
            this->label32->TabIndex = 2;
            this->label32->Text = L"Вид занятия:";
            this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label31->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label31->Location = System::Drawing::Point(58, 137);
            this->label31->Margin = System::Windows::Forms::Padding(1);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(229, 32);
            this->label31->TabIndex = 1;
            this->label31->Text = L"Номер пары:";
            this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label30
            // 
            this->label30->AutoSize = true;
            this->label30->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label30->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label30->Location = System::Drawing::Point(58, 103);
            this->label30->Margin = System::Windows::Forms::Padding(1);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(229, 32);
            this->label30->TabIndex = 0;
            this->label30->Text = L"День недели:";
            this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label33
            // 
            this->label33->AutoSize = true;
            this->label33->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label33->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label33->Location = System::Drawing::Point(58, 205);
            this->label33->Margin = System::Windows::Forms::Padding(1);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(229, 32);
            this->label33->TabIndex = 3;
            this->label33->Text = L"Предмет:";
            this->label33->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label34
            // 
            this->label34->AutoSize = true;
            this->label34->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label34->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label34->Location = System::Drawing::Point(58, 239);
            this->label34->Margin = System::Windows::Forms::Padding(1);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(229, 32);
            this->label34->TabIndex = 4;
            this->label34->Text = L"Преподаватель:";
            this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label35
            // 
            this->label35->AutoSize = true;
            this->label35->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label35->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label35->Location = System::Drawing::Point(58, 273);
            this->label35->Margin = System::Windows::Forms::Padding(1);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(229, 32);
            this->label35->TabIndex = 5;
            this->label35->Text = L"Аудитория:";
            this->label35->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label36
            // 
            this->label36->AutoSize = true;
            this->tableLayoutPanel13->SetColumnSpan(this->label36, 2);
            this->label36->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label36->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label36->Location = System::Drawing::Point(60, 34);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(456, 34);
            this->label36->TabIndex = 6;
            this->label36->Text = L"Внести изменения в расписание";
            this->label36->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // textBox12
            // 
            this->textBox12->BackColor = System::Drawing::Color::White;
            this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox12->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox12->Location = System::Drawing::Point(298, 208);
            this->textBox12->Margin = System::Windows::Forms::Padding(10, 4, 50, 1);
            this->textBox12->MaxLength = 100;
            this->textBox12->Name = L"textBox12";
            this->textBox12->Size = System::Drawing::Size(171, 27);
            this->textBox12->TabIndex = 10;
            // 
            // textBox13
            // 
            this->textBox13->BackColor = System::Drawing::Color::White;
            this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox13->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox13->Location = System::Drawing::Point(298, 242);
            this->textBox13->Margin = System::Windows::Forms::Padding(10, 4, 50, 1);
            this->textBox13->MaxLength = 100;
            this->textBox13->Name = L"textBox13";
            this->textBox13->Size = System::Drawing::Size(171, 27);
            this->textBox13->TabIndex = 11;
            // 
            // textBox14
            // 
            this->textBox14->BackColor = System::Drawing::Color::White;
            this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox14->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox14->Location = System::Drawing::Point(298, 276);
            this->textBox14->Margin = System::Windows::Forms::Padding(10, 4, 50, 1);
            this->textBox14->MaxLength = 4;
            this->textBox14->Name = L"textBox14";
            this->textBox14->Size = System::Drawing::Size(171, 27);
            this->textBox14->TabIndex = 12;
            // 
            // label37
            // 
            this->label37->AutoSize = true;
            this->tableLayoutPanel13->SetColumnSpan(this->label37, 2);
            this->label37->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label37->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label37->Location = System::Drawing::Point(62, 311);
            this->label37->Margin = System::Windows::Forms::Padding(5);
            this->label37->Name = L"label37";
            this->label37->Size = System::Drawing::Size(452, 24);
            this->label37->TabIndex = 13;
            this->label37->Text = L"Группа будет взята из профиля! *";
            this->label37->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // pictureBox17
            // 
            this->pictureBox17->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.BackgroundImage")));
            this->pictureBox17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->tableLayoutPanel13->SetColumnSpan(this->pictureBox17, 2);
            this->pictureBox17->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox17->Location = System::Drawing::Point(62, 379);
            this->pictureBox17->Margin = System::Windows::Forms::Padding(5, 5, 5, 30);
            this->pictureBox17->MaximumSize = System::Drawing::Size(452, 42);
            this->pictureBox17->MinimumSize = System::Drawing::Size(452, 42);
            this->pictureBox17->Name = L"pictureBox17";
            this->tableLayoutPanel13->SetRowSpan(this->pictureBox17, 2);
            this->pictureBox17->Size = System::Drawing::Size(452, 42);
            this->pictureBox17->TabIndex = 14;
            this->pictureBox17->TabStop = false;
            this->pictureBox17->Click += gcnew System::EventHandler(this, &MyForm::pictureBox17_Click);
            // 
            // domainUpDown1
            // 
            this->domainUpDown1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->domainUpDown1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->domainUpDown1->Items->Add(L"Понедельник");
            this->domainUpDown1->Items->Add(L"Вторник");
            this->domainUpDown1->Items->Add(L"Среда");
            this->domainUpDown1->Items->Add(L"Четверг");
            this->domainUpDown1->Items->Add(L"Пятница");
            this->domainUpDown1->Location = System::Drawing::Point(298, 106);
            this->domainUpDown1->Margin = System::Windows::Forms::Padding(10, 4, 50, 1);
            this->domainUpDown1->Name = L"domainUpDown1";
            this->domainUpDown1->Size = System::Drawing::Size(171, 27);
            this->domainUpDown1->TabIndex = 16;
            this->domainUpDown1->Text = L"Понедельник";
            this->domainUpDown1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_no);
            this->domainUpDown1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Text_no_2);
            // 
            // domainUpDown2
            // 
            this->domainUpDown2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->domainUpDown2->Items->Add(L"1");
            this->domainUpDown2->Items->Add(L"2");
            this->domainUpDown2->Items->Add(L"3");
            this->domainUpDown2->Items->Add(L"4");
            this->domainUpDown2->Items->Add(L"5");
            this->domainUpDown2->Items->Add(L"6");
            this->domainUpDown2->Items->Add(L"7");
            this->domainUpDown2->Items->Add(L"8");
            this->domainUpDown2->Items->Add(L"9");
            this->domainUpDown2->Items->Add(L"10");
            this->domainUpDown2->Location = System::Drawing::Point(298, 140);
            this->domainUpDown2->Margin = System::Windows::Forms::Padding(10, 4, 50, 1);
            this->domainUpDown2->Name = L"domainUpDown2";
            this->domainUpDown2->Size = System::Drawing::Size(171, 27);
            this->domainUpDown2->TabIndex = 17;
            this->domainUpDown2->Text = L"1";
            this->domainUpDown2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_no);
            this->domainUpDown2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Text_no_2);
            // 
            // domainUpDown3
            // 
            this->domainUpDown3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->domainUpDown3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->domainUpDown3->Items->Add(L"Лекция");
            this->domainUpDown3->Items->Add(L"Практика");
            this->domainUpDown3->Items->Add(L"Лабораторная");
            this->domainUpDown3->Items->Add(L"Семинар");
            this->domainUpDown3->Location = System::Drawing::Point(298, 174);
            this->domainUpDown3->Margin = System::Windows::Forms::Padding(10, 4, 50, 1);
            this->domainUpDown3->Name = L"domainUpDown3";
            this->domainUpDown3->Size = System::Drawing::Size(171, 27);
            this->domainUpDown3->TabIndex = 18;
            this->domainUpDown3->Text = L"Лекция";
            this->domainUpDown3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Text_no);
            this->domainUpDown3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Text_no_2);
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(121)),
                static_cast<System::Int32>(static_cast<System::Byte>(90)));
            this->tableLayoutPanel1->SetColumnSpan(this->panel2, 3);
            this->panel2->Controls->Add(this->tableLayoutPanel15);
            this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel2->Location = System::Drawing::Point(0, 0);
            this->panel2->Margin = System::Windows::Forms::Padding(0);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(863, 108);
            this->panel2->TabIndex = 12;
            // 
            // tableLayoutPanel15
            // 
            this->tableLayoutPanel15->ColumnCount = 3;
            this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel15->Controls->Add(this->logo, 0, 0);
            this->tableLayoutPanel15->Controls->Add(this->label5, 1, 0);
            this->tableLayoutPanel15->Controls->Add(this->tableLayoutPanel16, 2, 0);
            this->tableLayoutPanel15->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel15->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel15->Name = L"tableLayoutPanel15";
            this->tableLayoutPanel15->RowCount = 1;
            this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                108)));
            this->tableLayoutPanel15->Size = System::Drawing::Size(863, 108);
            this->tableLayoutPanel15->TabIndex = 11;
            // 
            // logo
            // 
            this->logo->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->logo->BackColor = System::Drawing::Color::Transparent;
            this->logo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logo.BackgroundImage")));
            this->logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->logo->Cursor = System::Windows::Forms::Cursors::Hand;
            this->logo->Location = System::Drawing::Point(20, 20);
            this->logo->Margin = System::Windows::Forms::Padding(20);
            this->logo->MaximumSize = System::Drawing::Size(100, 80);
            this->logo->MinimumSize = System::Drawing::Size(90, 70);
            this->logo->Name = L"logo";
            this->logo->Size = System::Drawing::Size(90, 70);
            this->logo->TabIndex = 5;
            this->logo->TabStop = false;
            this->logo->Click += gcnew System::EventHandler(this, &MyForm::logo_Click);
            // 
            // label5
            // 
            this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::Transparent;
            this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label5->ForeColor = System::Drawing::Color::White;
            this->label5->Location = System::Drawing::Point(139, 77);
            this->label5->Margin = System::Windows::Forms::Padding(10, 0, 0, 10);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(49, 21);
            this->label5->TabIndex = 6;
            this->label5->Text = L"Вход";
            // 
            // tableLayoutPanel16
            // 
            this->tableLayoutPanel16->ColumnCount = 2;
            this->tableLayoutPanel16->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel16->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel16->Controls->Add(this->pictureBox22, 0, 0);
            this->tableLayoutPanel16->Controls->Add(this->pictureBox20, 1, 1);
            this->tableLayoutPanel16->Controls->Add(this->pictureBox23, 0, 1);
            this->tableLayoutPanel16->Controls->Add(this->pictureBox21, 1, 0);
            this->tableLayoutPanel16->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel16->Location = System::Drawing::Point(736, 3);
            this->tableLayoutPanel16->Name = L"tableLayoutPanel16";
            this->tableLayoutPanel16->RowCount = 2;
            this->tableLayoutPanel16->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel16->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel16->Size = System::Drawing::Size(124, 102);
            this->tableLayoutPanel16->TabIndex = 7;
            // 
            // pictureBox22
            // 
            this->pictureBox22->Anchor = System::Windows::Forms::AnchorStyles::Right;
            this->pictureBox22->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.BackgroundImage")));
            this->pictureBox22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox22->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox22->Location = System::Drawing::Point(12, 10);
            this->pictureBox22->Margin = System::Windows::Forms::Padding(10);
            this->pictureBox22->MaximumSize = System::Drawing::Size(40, 30);
            this->pictureBox22->MinimumSize = System::Drawing::Size(40, 30);
            this->pictureBox22->Name = L"pictureBox22";
            this->pictureBox22->Size = System::Drawing::Size(40, 30);
            this->pictureBox22->TabIndex = 9;
            this->pictureBox22->TabStop = false;
            this->pictureBox22->Click += gcnew System::EventHandler(this, &MyForm::pictureBox22_Click);
            // 
            // pictureBox20
            // 
            this->pictureBox20->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox20->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.BackgroundImage")));
            this->pictureBox20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox20->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox20->Location = System::Drawing::Point(73, 61);
            this->pictureBox20->Margin = System::Windows::Forms::Padding(10);
            this->pictureBox20->MaximumSize = System::Drawing::Size(40, 30);
            this->pictureBox20->MinimumSize = System::Drawing::Size(40, 30);
            this->pictureBox20->Name = L"pictureBox20";
            this->pictureBox20->Size = System::Drawing::Size(40, 30);
            this->pictureBox20->TabIndex = 7;
            this->pictureBox20->TabStop = false;
            this->pictureBox20->Click += gcnew System::EventHandler(this, &MyForm::pictureBox20_Click);
            // 
            // pictureBox23
            // 
            this->pictureBox23->Anchor = System::Windows::Forms::AnchorStyles::Right;
            this->pictureBox23->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.BackgroundImage")));
            this->pictureBox23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox23->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox23->Location = System::Drawing::Point(12, 61);
            this->pictureBox23->Margin = System::Windows::Forms::Padding(10);
            this->pictureBox23->MaximumSize = System::Drawing::Size(40, 30);
            this->pictureBox23->MinimumSize = System::Drawing::Size(40, 30);
            this->pictureBox23->Name = L"pictureBox23";
            this->pictureBox23->Size = System::Drawing::Size(40, 30);
            this->pictureBox23->TabIndex = 10;
            this->pictureBox23->TabStop = false;
            this->pictureBox23->Click += gcnew System::EventHandler(this, &MyForm::pictureBox23_Click);
            // 
            // pictureBox21
            // 
            this->pictureBox21->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox21->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.BackgroundImage")));
            this->pictureBox21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox21->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox21->Location = System::Drawing::Point(73, 10);
            this->pictureBox21->Margin = System::Windows::Forms::Padding(10);
            this->pictureBox21->MaximumSize = System::Drawing::Size(40, 30);
            this->pictureBox21->MinimumSize = System::Drawing::Size(40, 30);
            this->pictureBox21->Name = L"pictureBox21";
            this->pictureBox21->Size = System::Drawing::Size(40, 30);
            this->pictureBox21->TabIndex = 8;
            this->pictureBox21->TabStop = false;
            this->pictureBox21->Click += gcnew System::EventHandler(this, &MyForm::pictureBox21_Click);
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label7->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label7->Location = System::Drawing::Point(743, 170);
            this->label7->Margin = System::Windows::Forms::Padding(10);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(110, 432);
            this->label7->TabIndex = 8;
            this->label7->Text = L"Ваша реклама";
            this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // listBox1
            // 
            this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->listBox1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->listBox1->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->listBox1->FormattingEnabled = true;
            this->listBox1->ItemHeight = 21;
            this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Вход", L"Регистрация", L"О колледже" });
            this->listBox1->Location = System::Drawing::Point(10, 162);
            this->listBox1->Margin = System::Windows::Forms::Padding(10, 2, 2, 250);
            this->listBox1->Name = L"listBox1";
            this->listBox1->Size = System::Drawing::Size(117, 200);
            this->listBox1->TabIndex = 9;
            this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
            // 
            // pictureBox6
            // 
            this->pictureBox6->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
            this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox6->Location = System::Drawing::Point(10, 119);
            this->pictureBox6->Margin = System::Windows::Forms::Padding(10, 10, 80, 10);
            this->pictureBox6->MaximumSize = System::Drawing::Size(40, 30);
            this->pictureBox6->MinimumSize = System::Drawing::Size(40, 30);
            this->pictureBox6->Name = L"pictureBox6";
            this->pictureBox6->Size = System::Drawing::Size(40, 30);
            this->pictureBox6->TabIndex = 13;
            this->pictureBox6->TabStop = false;
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
                static_cast<System::Int32>(static_cast<System::Byte>(32)));
            this->tableLayoutPanel1->SetColumnSpan(this->panel1, 3);
            this->panel1->Controls->Add(this->tableLayoutPanel14);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel1->Location = System::Drawing::Point(0, 612);
            this->panel1->Margin = System::Windows::Forms::Padding(0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(863, 109);
            this->panel1->TabIndex = 11;
            // 
            // tableLayoutPanel14
            // 
            this->tableLayoutPanel14->ColumnCount = 3;
            this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                70)));
            this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                15)));
            this->tableLayoutPanel14->Controls->Add(this->label6, 1, 0);
            this->tableLayoutPanel14->Controls->Add(this->pictureBox5, 2, 0);
            this->tableLayoutPanel14->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel14->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel14->Name = L"tableLayoutPanel14";
            this->tableLayoutPanel14->RowCount = 1;
            this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel14->Size = System::Drawing::Size(863, 109);
            this->tableLayoutPanel14->TabIndex = 3;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
                static_cast<System::Int32>(static_cast<System::Byte>(32)));
            this->label6->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label6->ForeColor = System::Drawing::Color::White;
            this->label6->Location = System::Drawing::Point(129, 0);
            this->label6->Margin = System::Windows::Forms::Padding(0);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(604, 109);
            this->label6->TabIndex = 2;
            this->label6->Text = resources->GetString(L"label6.Text");
            this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
            // 
            // pictureBox5
            // 
            this->pictureBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
            this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
            this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox5->Location = System::Drawing::Point(793, 49);
            this->pictureBox5->Margin = System::Windows::Forms::Padding(0, 0, 10, 10);
            this->pictureBox5->MaximumSize = System::Drawing::Size(60, 50);
            this->pictureBox5->MinimumSize = System::Drawing::Size(60, 50);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(60, 50);
            this->pictureBox5->TabIndex = 0;
            this->pictureBox5->TabStop = false;
            this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm::Theme_Color_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(11, 22);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(863, 721);
            this->Controls->Add(this->tableLayoutPanel1);
            this->Font = (gcnew System::Drawing::Font(L"Montserrat Alternates", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
            this->MaximizeBox = false;
            this->Name = L"MyForm";
            this->ShowIcon = false;
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"• Филиал БГТУ \"ВитГТК\" •";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->SizeChanged += gcnew System::EventHandler(this, &MyForm::MyForm_SizeChanged);
            this->tableLayoutPanel1->ResumeLayout(false);
            this->tableLayoutPanel1->PerformLayout();
            this->tabControl1->ResumeLayout(false);
            this->tabPage1->ResumeLayout(false);
            this->tableLayoutPanel2->ResumeLayout(false);
            this->tableLayoutPanel2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_eye))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_group))->EndInit();
            this->tabPage2->ResumeLayout(false);
            this->tableLayoutPanel3->ResumeLayout(false);
            this->tableLayoutPanel3->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->button_registration))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
            this->tabPage3->ResumeLayout(false);
            this->tableLayoutPanel4->ResumeLayout(false);
            this->tableLayoutPanel4->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
            this->tabPage4->ResumeLayout(false);
            this->tableLayoutPanel5->ResumeLayout(false);
            this->tableLayoutPanel5->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
            this->tabPage5->ResumeLayout(false);
            this->tableLayoutPanel11->ResumeLayout(false);
            this->tableLayoutPanel11->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
            this->tabPage6->ResumeLayout(false);
            this->tableLayoutPanel10->ResumeLayout(false);
            this->tableLayoutPanel10->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
            this->tabPage7->ResumeLayout(false);
            this->tableLayoutPanel6->ResumeLayout(false);
            this->tableLayoutPanel6->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->button_delete))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_edit))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->button_remove))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            this->tabPage8->ResumeLayout(false);
            this->tableLayoutPanel7->ResumeLayout(false);
            this->tableLayoutPanel7->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->button_edit))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
            this->tabPage9->ResumeLayout(false);
            this->tableLayoutPanel8->ResumeLayout(false);
            this->tableLayoutPanel8->PerformLayout();
            this->tabPage10->ResumeLayout(false);
            this->tableLayoutPanel9->ResumeLayout(false);
            this->tableLayoutPanel9->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
            this->panel3->ResumeLayout(false);
            this->tableLayoutPanel12->ResumeLayout(false);
            this->tableLayoutPanel12->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
            this->tabPage11->ResumeLayout(false);
            this->tableLayoutPanel13->ResumeLayout(false);
            this->tableLayoutPanel13->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
            this->panel2->ResumeLayout(false);
            this->tableLayoutPanel15->ResumeLayout(false);
            this->tableLayoutPanel15->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->EndInit();
            this->tableLayoutPanel16->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
            this->panel1->ResumeLayout(false);
            this->tableLayoutPanel14->ResumeLayout(false);
            this->tableLayoutPanel14->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);

private: System::Void button_no_password_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_vhod_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_vhod();
private: System::Void button_registration_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Text_no(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
private: System::Void Text_no_2(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox_group_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	
private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void pictureBox9_Click_1(System::Object^ sender, System::EventArgs^ e);
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void Theme_Color_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Theme_Color_Click_1();
private: System::Void Theme_black();
private: System::Void Theme_white();
private: System::Void Update_dannie();
private: System::Void button_remove_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_remove_Click_1();
private: System::Void button_delete_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void logo_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void pictureBox_edit_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void pictureBox12_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_edit_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void pictureBox_group_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void pictureBox16_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void pictureBox18_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void pictureBox19_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void pictureBox17_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void pictureBox22_Click(System::Object^ sender, System::EventArgs^ e) {
    System::Diagnostics::Process::Start("https://www.instagram.com/vitgtk.belstu_official/");
}
private: System::Void pictureBox21_Click(System::Object^ sender, System::EventArgs^ e) {
    System::Diagnostics::Process::Start("https://www.youtube.com/c/%D0%92%D0%B8%D1%82%D0%93%D0%A2%D0%9A%D0%9A%D0%BE%D0%BB%D0%BB%D0%B5%D0%B4%D0%B6");
}
private: System::Void pictureBox20_Click(System::Object^ sender, System::EventArgs^ e) {
    System::Diagnostics::Process::Start("https://vk.com/v_i_t_g_t_k");
}
private: System::Void pictureBox23_Click(System::Object^ sender, System::EventArgs^ e) {
    System::Diagnostics::Process::Start("https://vitgtk.belstu.by/");
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_SizeChanged(System::Object^ sender, System::EventArgs^ e);
};
}
