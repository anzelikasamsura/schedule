#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;

[STAThreadAttribute]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Raspisanie::MyForm form;
	Application::Run(% form);
}


int THEME = 0;
int VHOD = 0;
int ADMIN = 0;

System::Void Raspisanie::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	tabControl1->ItemSize = System::Drawing::Size(0, 1);
	tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;

	listBox1->SelectedIndex = 0;
	Update_dannie();

	return System::Void();
}
System::Void Raspisanie::MyForm::Update_dannie()
{
	OleDbConnection^ conDataBase = gcnew OleDbConnection("provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database1.accdb");
	conDataBase->Open();

	OleDbCommand^ dbComand = gcnew OleDbCommand("SELECT * FROM [group]", conDataBase);
	OleDbDataReader^ reader = dbComand->ExecuteReader();
	while (reader->Read())
	{
		comboBox_group->Items->Add(reader["group"]);
		listBox3->Items->Add(reader["group"]);
	}
	reader->Close();

	OleDbCommand^ dbComand1 = gcnew OleDbCommand("SELECT * FROM [teacher]", conDataBase);
	OleDbDataReader^ reader1 = dbComand1->ExecuteReader();
	while (reader1->Read())
	{
		listBox2->Items->Add(reader1["teacher"]->ToString());
	}
	reader1->Close();

	OleDbCommand^ dbComand2 = gcnew OleDbCommand("SELECT * FROM [predmet]", conDataBase);
	OleDbDataReader^ reader2 = dbComand2->ExecuteReader();
	while (reader2->Read())
	{
		listBox4->Items->Add(reader2["predmet"]->ToString());
	}
	reader2->Close();

	conDataBase->Close();

	return System::Void();
}

System::Void Raspisanie::MyForm::MyForm_SizeChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (this->Width > 879 && this->Height > 760) 
	{
		this->tableLayoutPanel2->ColumnStyles[0]->Width = this->tableLayoutPanel1->Parent->Width * 35 / 100;
		this->tableLayoutPanel2->ColumnStyles[1]->Width = this->tableLayoutPanel1->Parent->Width * 30 / 100;
		this->tableLayoutPanel2->ColumnStyles[2]->Width = this->tableLayoutPanel1->Parent->Width * 35 / 100;
		
		this->tableLayoutPanel3->ColumnStyles[0]->Width = this->tableLayoutPanel1->Parent->Width * 20 / 100;
		this->tableLayoutPanel3->ColumnStyles[1]->Width = this->tableLayoutPanel1->Parent->Width * 20 / 100;
		this->tableLayoutPanel3->ColumnStyles[2]->Width = this->tableLayoutPanel1->Parent->Width * 30 / 100;
		this->tableLayoutPanel3->ColumnStyles[3]->Width = this->tableLayoutPanel1->Parent->Width * 10 / 100;
		this->tableLayoutPanel3->ColumnStyles[4]->Width = this->tableLayoutPanel1->Parent->Width * 20 / 100;
	
		this->tableLayoutPanel9->ColumnStyles[0]->Width = this->tableLayoutPanel1->Parent->Width * 30 / 100;
		this->tableLayoutPanel9->ColumnStyles[1]->Width = this->tableLayoutPanel1->Parent->Width * 60 / 100;
		this->tableLayoutPanel9->ColumnStyles[2]->Width = this->tableLayoutPanel1->Parent->Width * 30 / 100;

		this->tableLayoutPanel7->ColumnStyles[0]->Width = this->tableLayoutPanel1->Parent->Width * 25 / 100;
		this->tableLayoutPanel7->ColumnStyles[1]->Width = this->tableLayoutPanel1->Parent->Width * 15 / 100;
		this->tableLayoutPanel7->ColumnStyles[2]->Width = this->tableLayoutPanel1->Parent->Width * 30 / 100;
		this->tableLayoutPanel7->ColumnStyles[3]->Width = this->tableLayoutPanel1->Parent->Width * 5 / 100;
		this->tableLayoutPanel7->ColumnStyles[4]->Width = this->tableLayoutPanel1->Parent->Width * 25 / 100;

		this->tableLayoutPanel11->ColumnStyles[0]->Width = this->tableLayoutPanel1->Parent->Width * 25 / 100;
		this->tableLayoutPanel11->ColumnStyles[1]->Width = this->tableLayoutPanel1->Parent->Width * 20 / 100;
		this->tableLayoutPanel11->ColumnStyles[2]->Width = this->tableLayoutPanel1->Parent->Width * 30 / 100;
		this->tableLayoutPanel11->ColumnStyles[3]->Width = this->tableLayoutPanel1->Parent->Width * 25 / 100;

		this->tableLayoutPanel10->ColumnStyles[0]->Width = this->tableLayoutPanel1->Parent->Width * 25 / 100;
		this->tableLayoutPanel10->ColumnStyles[1]->Width = this->tableLayoutPanel1->Parent->Width * 15 / 100;
		this->tableLayoutPanel10->ColumnStyles[2]->Width = this->tableLayoutPanel1->Parent->Width * 60 / 100;

		this->tableLayoutPanel13->ColumnStyles[0]->Width = this->tableLayoutPanel1->Parent->Width * 20 / 100;
		this->tableLayoutPanel13->ColumnStyles[1]->Width = this->tableLayoutPanel1->Parent->Width * 30 / 100;
		this->tableLayoutPanel13->ColumnStyles[2]->Width = this->tableLayoutPanel1->Parent->Width * 30 / 100;
		this->tableLayoutPanel13->ColumnStyles[3]->Width = this->tableLayoutPanel1->Parent->Width * 20 / 100;

		this->label1->Font = gcnew System::Drawing::Font(this->label1->Font->FontFamily, 16, this->label1->Font->Style);
		this->label2->Font = gcnew System::Drawing::Font(this->label2->Font->FontFamily, 16, this->label2->Font->Style);
		this->label14->Font = gcnew System::Drawing::Font(this->label14->Font->FontFamily, 16);
		this->label22->Font = gcnew System::Drawing::Font(this->label22->Font->FontFamily, 16, this->label22->Font->Style);
		this->label24->Font = gcnew System::Drawing::Font(this->label24->Font->FontFamily, 16, this->label24->Font->Style);
		this->label26->Font = gcnew System::Drawing::Font(this->label26->Font->FontFamily, 16, this->label26->Font->Style);
		this->label27->Font = gcnew System::Drawing::Font(this->label27->Font->FontFamily, 16, this->label27->Font->Style);
		this->label28->Font = gcnew System::Drawing::Font(this->label28->Font->FontFamily, 16, this->label28->Font->Style);
		this->label29->Font = gcnew System::Drawing::Font(this->label29->Font->FontFamily, 16, this->label29->Font->Style);
		this->label36->Font = gcnew System::Drawing::Font(this->label36->Font->FontFamily, 16, this->label36->Font->Style);
		
		this->label5->Font = gcnew System::Drawing::Font(this->label5->Font->FontFamily, 14);
		/*this->label3->Font = gcnew System::Drawing::Font(this->label3->Font->FontFamily, 14);
		this->label4->Font = gcnew System::Drawing::Font(this->label4->Font->FontFamily, 14);
		this->label9->Font = gcnew System::Drawing::Font(this->label9->Font->FontFamily, 14);
		this->label10->Font = gcnew System::Drawing::Font(this->label10->Font->FontFamily, 14);
		this->label11->Font = gcnew System::Drawing::Font(this->label11->Font->FontFamily, 14);*/

		this->label6->Font = gcnew System::Drawing::Font(this->label6->Font->FontFamily, 10);
		this->label12->Font = gcnew System::Drawing::Font(this->label12->Font->FontFamily, 14);
		
		this->listBox1->Font = gcnew System::Drawing::Font(this->listBox1->Font->FontFamily, 14);
		this->dataGridView1->Font = gcnew System::Drawing::Font(this->dataGridView1->Font->FontFamily, 14);

	}

	if (this->Width == 879 && this->Height == 760)
	{
		this->tableLayoutPanel2->ColumnStyles[0]->Width = this->tableLayoutPanel1->Parent->Width * 15 / 100;
		this->tableLayoutPanel2->ColumnStyles[1]->Width = this->tableLayoutPanel1->Parent->Width * 70 / 100;
		this->tableLayoutPanel2->ColumnStyles[2]->Width = this->tableLayoutPanel1->Parent->Width * 15 / 100;
	
		this->tableLayoutPanel3->ColumnStyles[0]->Width = this->tableLayoutPanel1->Parent->Width * 10 / 100;
		this->tableLayoutPanel3->ColumnStyles[1]->Width = this->tableLayoutPanel1->Parent->Width * 20 / 100;
		this->tableLayoutPanel3->ColumnStyles[2]->Width = this->tableLayoutPanel1->Parent->Width * 50 / 100;
		this->tableLayoutPanel3->ColumnStyles[3]->Width = this->tableLayoutPanel1->Parent->Width * 10 / 100;
		this->tableLayoutPanel3->ColumnStyles[4]->Width = this->tableLayoutPanel1->Parent->Width * 10 / 100;

		this->tableLayoutPanel9->ColumnStyles[0]->Width = this->tableLayoutPanel1->Parent->Width * 10 / 100;
		this->tableLayoutPanel9->ColumnStyles[1]->Width = this->tableLayoutPanel1->Parent->Width * 80 / 100;
		this->tableLayoutPanel9->ColumnStyles[2]->Width = this->tableLayoutPanel1->Parent->Width * 10 / 100;

		this->tableLayoutPanel7->ColumnStyles[0]->Width = this->tableLayoutPanel1->Parent->Width * 8 / 100;
		this->tableLayoutPanel7->ColumnStyles[1]->Width = this->tableLayoutPanel1->Parent->Width * 15 / 100;
		this->tableLayoutPanel7->ColumnStyles[2]->Width = this->tableLayoutPanel1->Parent->Width * 52 / 100;
		this->tableLayoutPanel7->ColumnStyles[3]->Width = this->tableLayoutPanel1->Parent->Width * 5 / 100;
		this->tableLayoutPanel7->ColumnStyles[4]->Width = this->tableLayoutPanel1->Parent->Width * 20 / 100;

		this->tableLayoutPanel11->ColumnStyles[0]->Width = this->tableLayoutPanel1->Parent->Width * 15 / 100;
		this->tableLayoutPanel11->ColumnStyles[1]->Width = this->tableLayoutPanel1->Parent->Width * 30 / 100;
		this->tableLayoutPanel11->ColumnStyles[2]->Width = this->tableLayoutPanel1->Parent->Width * 40 / 100;
		this->tableLayoutPanel11->ColumnStyles[3]->Width = this->tableLayoutPanel1->Parent->Width * 15 / 100;
	
		this->tableLayoutPanel10->ColumnStyles[0]->Width = this->tableLayoutPanel1->Parent->Width * 10 / 100;
		this->tableLayoutPanel10->ColumnStyles[1]->Width = this->tableLayoutPanel1->Parent->Width * 45 / 100;
		this->tableLayoutPanel10->ColumnStyles[2]->Width = this->tableLayoutPanel1->Parent->Width * 45 / 100;

		this->tableLayoutPanel13->ColumnStyles[0]->Width = this->tableLayoutPanel1->Parent->Width * 10 / 100;
		this->tableLayoutPanel13->ColumnStyles[1]->Width = this->tableLayoutPanel1->Parent->Width * 40 / 100;
		this->tableLayoutPanel13->ColumnStyles[2]->Width = this->tableLayoutPanel1->Parent->Width * 40 / 100;
		this->tableLayoutPanel13->ColumnStyles[3]->Width = this->tableLayoutPanel1->Parent->Width * 10 / 100;
		
		this->label1->Font = gcnew System::Drawing::Font(this->label1->Font->FontFamily, 12, this->label1->Font->Style);
		this->label2->Font = gcnew System::Drawing::Font(this->label2->Font->FontFamily, 12, this->label2->Font->Style);
		this->label14->Font = gcnew System::Drawing::Font(this->label14->Font->FontFamily, 12);
		this->label22->Font = gcnew System::Drawing::Font(this->label22->Font->FontFamily, 12, this->label22->Font->Style);
		this->label24->Font = gcnew System::Drawing::Font(this->label24->Font->FontFamily, 12, this->label24->Font->Style);
		this->label26->Font = gcnew System::Drawing::Font(this->label26->Font->FontFamily, 12, this->label26->Font->Style);
		this->label27->Font = gcnew System::Drawing::Font(this->label27->Font->FontFamily, 12, this->label27->Font->Style);
		this->label28->Font = gcnew System::Drawing::Font(this->label28->Font->FontFamily, 12, this->label28->Font->Style);
		this->label29->Font = gcnew System::Drawing::Font(this->label29->Font->FontFamily, 12, this->label29->Font->Style);
		this->label36->Font = gcnew System::Drawing::Font(this->label36->Font->FontFamily, 12, this->label36->Font->Style);

		this->label5->Font = gcnew System::Drawing::Font(this->label5->Font->FontFamily, 11);
		/*this->label3->Font = gcnew System::Drawing::Font(this->label3->Font->FontFamily, 11);
		this->label4->Font = gcnew System::Drawing::Font(this->label4->Font->FontFamily, 11);
		this->label9->Font = gcnew System::Drawing::Font(this->label9->Font->FontFamily, 11);
		this->label10->Font = gcnew System::Drawing::Font(this->label10->Font->FontFamily, 11);
		this->label11->Font = gcnew System::Drawing::Font(this->label11->Font->FontFamily, 11);*/

		this->label6->Font = gcnew System::Drawing::Font(this->label6->Font->FontFamily, 8);
		this->label12->Font = gcnew System::Drawing::Font(this->label12->Font->FontFamily, 10);
	
		this->listBox1->Font = gcnew System::Drawing::Font(this->listBox1->Font->FontFamily, 11);
		this->dataGridView1->Font = gcnew System::Drawing::Font(this->dataGridView1->Font->FontFamily, 12);

	}

	return System::Void();
}

System::Void Raspisanie::MyForm::comboBox_group_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	dataGridView1->Rows->Clear();

	OleDbConnection^ conDataBase = gcnew OleDbConnection("provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database1.accdb");

	conDataBase->Open();
	OleDbCommand^ dbComand = gcnew OleDbCommand("SELECT * FROM [" + comboBox_group->Text + "]", conDataBase);

	array<String^>^ row = gcnew array<String^>(5);
	OleDbDataReader^ reader = dbComand->ExecuteReader();
	while (reader->Read())
	{
	row[0] = reader["пн"]->ToString();
	row[1] = reader["вт"]->ToString();
	row[2] = reader["ср"]->ToString();
	row[3] = reader["чт"]->ToString();
	row[4] = reader["пт"]->ToString();

	dataGridView1->Rows->Add(row);
	}
	reader->Close();
	conDataBase->Close();

	return System::Void();
}
System::Void Raspisanie::MyForm::listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (listBox1->Text == tabPage1->Text) { tabControl1->SelectedTab = tabPage1; label5->Text = listBox1->Text; }
	if (listBox1->Text == tabPage2->Text) { tabControl1->SelectedTab = tabPage2; label5->Text = listBox1->Text; }
	if (listBox1->Text == tabPage3->Text) { tabControl1->SelectedTab = tabPage3; label5->Text = listBox1->Text; }
	if (listBox1->Text == tabPage4->Text) { tabControl1->SelectedTab = tabPage4; label5->Text = listBox1->Text; }
	if (listBox1->Text == tabPage5->Text) { tabControl1->SelectedTab = tabPage5; label5->Text = listBox1->Text; }
	if (listBox1->Text == tabPage6->Text) { tabControl1->SelectedTab = tabPage6; label5->Text = listBox1->Text; }
	if (listBox1->Text == tabPage7->Text) { tabControl1->SelectedTab = tabPage7; label5->Text = listBox1->Text; }
	if (listBox1->Text == tabPage8->Text) { tabControl1->SelectedTab = tabPage8; label5->Text = listBox1->Text; }
	if (listBox1->Text == tabPage9->Text) { tabControl1->SelectedTab = tabPage9; label5->Text = listBox1->Text; }

	return System::Void();
}

////////////////////////////////////////////////////////////////////////////////////////////////////////

System::Void Raspisanie::MyForm::button_vhod_Click(System::Object^ sender, System::EventArgs^ e)
{
	button_vhod();
	return System::Void();
}

System::Void Raspisanie::MyForm::button_vhod()
{
	if (VHOD == 1)
	{
		MessageBox::Show("Перед тем, как зайти в новый аккаунт, выйдите со старого!", "Внимание!"); return;
	}

	if (textbox_login->Text == "" || textbox_password->Text == "")
	{
		MessageBox::Show("Введите все данные для входа!");
		return;
	}

	OleDbConnection^ conDataBase = gcnew OleDbConnection("provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database1.accdb");

	conDataBase->Open();
	OleDbCommand^ dbComand = gcnew OleDbCommand("SELECT * FROM Users", conDataBase);

	int count = 0;

	OleDbDataReader^ reader = dbComand->ExecuteReader();
	while (reader->Read())
	{
		if (reader["login"]->ToString() == textbox_login->Text->ToString()
			&& reader["password"]->ToString() == textbox_password->Text->ToString())
		{

			count++;
			label14->Text = "Вы:\n" + reader["name"] + "\n" + reader["surname"] +
				".\nУчащийся " + reader["group"] + "\nгруппы.";

			if (Convert::ToInt32(reader["admin"]) == 1)
			{
				ADMIN = 1;
				label14->Text = "Вы:\n" + reader["name"] + "\n" + reader["surname"] +
					".\nУчащийся " + reader["group"] + "\nгруппы.\nДолжность - Администратор";
			}

			textBox1->Text = reader["login"]->ToString();
			textBox2->Text = reader["password"]->ToString();
			textBox3->Text = reader["name"]->ToString();
			textBox4->Text = reader["surname"]->ToString();
			textBox5->Text = reader["group"]->ToString();

			THEME = Convert::ToInt32(reader["theme"]);
			break;
		}
	}
	reader->Close();
	conDataBase->Close();

	if (count == 0) { MessageBox::Show("Аккаунт не найден!", "Внимание!"); return; }

	Theme_Color_Click_1();
	VHOD++;

	listBox1->Items->Clear();
	listBox1->Items->Add("О колледже");
	listBox1->Items->Add("Расписание");
	listBox1->Items->Add("Для групп");
	listBox1->Items->Add("Учителя");
	listBox1->Items->Add("Профиль");
	if (ADMIN == 1) listBox1->Items->Add("Админ панель");

	listBox1->SelectedIndex = 4;

	return System::Void();
}
System::Void Raspisanie::MyForm::button_registration_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (VHOD == 1) return;

	if (textBox_login_2->Text == "" || textBox_password_2->Text == "") { MessageBox::Show("Введите логин / пароль!"); return; }
	if (textBox_name->Text == "") { textBox_name->Text = "-"; }
	if (textBox_surname->Text == "") { textBox_surname->Text = "-"; }
	if (textBox_group->Text == "") { MessageBox::Show("Введите группу!"); return; }

	OleDbConnection^ conDataBase = gcnew OleDbConnection("provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database1.accdb");

	conDataBase->Open();
	OleDbCommand^ dbComand = gcnew OleDbCommand("SELECT * FROM [group]", conDataBase);
	OleDbCommand^ dbComand1 = gcnew OleDbCommand("SELECT * FROM [Users]", conDataBase);

	int count = 0;

	OleDbDataReader^ reader = dbComand->ExecuteReader();
	OleDbDataReader^ reader1 = dbComand1->ExecuteReader();
	while (reader->Read()) 
	{ 
		if (reader["group"]->ToString() == textBox_group->Text->ToString()) 
		{ count++; } 
	}
	while (reader1->Read()) 
	{
		if (reader1["login"]->ToString() == textBox_login_2->Text->ToString()) 
		{
			MessageBox::Show("Пользователь с таким логином уже зарегестрирован!", "Внимание!");
			reader->Close(); reader1->Close(); conDataBase->Close(); return;
		}
	}
	reader->Close();
	reader1->Close();

	if (count == 0) { MessageBox::Show("Такой группы нет!"); conDataBase->Close(); return; }

	///////////////////////////////////////////////////////////////////////////////

	String^ query = "INSERT INTO [Users] VALUES ('" + textBox_login_2->Text + "','" +
		textBox_password_2->Text + "','" + textBox_name->Text + "','" +
		textBox_surname->Text + "','" + textBox_group->Text + "','" + THEME + "','0')";
	OleDbCommand^ dbComand2 = gcnew OleDbCommand(query, conDataBase);

	if (dbComand2->ExecuteNonQuery() != 1) 
	{ MessageBox::Show("Не удалось зарегестрировать аккаунт!", "Ошибка!"); conDataBase->Close(); return; }

	conDataBase->Close();

	textbox_login->Text = textBox_login_2->Text;
	textbox_password->Text = textBox_password_2->Text;

	textBox_login_2->Text = ""; textBox_password_2->Text = "";
	textBox_name->Text = ""; textBox_surname->Text = "";
	textBox_group->Text = "";

	button_vhod();

	/*listBox1->Items->Clear();
	listBox1->Items->Add("Вход");
	listBox1->Items->Add("Регистрация");
	listBox1->Items->Add("О колледже");*/

	//MessageBox::Show("Регистрация прошла успешно! Попробуйте войти в свой аккаунт.", "Внимание!");

	return System::Void();
}
System::Void Raspisanie::MyForm::pictureBox1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox7->Text == "")
	{
		MessageBox::Show("Введите все данные для входа!");
		return;
	}

	OleDbConnection^ conDataBase = gcnew OleDbConnection("provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database1.accdb");

	conDataBase->Open();
	OleDbCommand^ dbComand = gcnew OleDbCommand("SELECT * FROM [group]", conDataBase);

	int count = 0;

	OleDbDataReader^ reader = dbComand->ExecuteReader();
	while (reader->Read())
	{
		if (reader["group"]->ToString() == textBox7->Text->ToString())
		{
			count++;
		}
	}
	reader->Close();

	if (count == 0) { MessageBox::Show("Такой группы нет!", "Внимание!"); return; }

	listBox1->Items->Clear();
	listBox1->Items->Add("Регистрация");
	listBox1->Items->Add("Расписание");
	listBox1->Items->Add("Для групп");
	listBox1->Items->Add("Профиль");
	listBox1->Items->Add("О колледже");

	label14->Text = "Пользователь\n" + textBox7->Text + "\nгруппы";

	listBox1->SelectedIndex = 3;
	VHOD = 0;

	return System::Void();
}

System::Void Raspisanie::MyForm::pictureBox_group_Click(System::Object^ sender, System::EventArgs^ e)
{
	tabControl1->SelectedTab = tabPage10;
	label5->Text = "Вход -> Вход по группе";
	return System::Void();
}
System::Void Raspisanie::MyForm::pictureBox16_Click(System::Object^ sender, System::EventArgs^ e)
{
	label5->Text = "Вход";
	tabControl1->SelectedTab = tabPage1;
	return System::Void();
}
System::Void Raspisanie::MyForm::pictureBox18_Click(System::Object^ sender, System::EventArgs^ e)
{
	label5->Text = "Расписание";
	tabControl1->SelectedTab = tabPage4;
	return System::Void();
}
System::Void Raspisanie::MyForm::pictureBox19_Click(System::Object^ sender, System::EventArgs^ e)
{
	label5->Text = "Расписание -> Редактор расписания";
	tabControl1->SelectedTab = tabPage11;
	return System::Void();
}

System::Void Raspisanie::MyForm::button_remove_Click(System::Object^ sender, System::EventArgs^ e)
{
	button_remove_Click_1();
	return System::Void();
}
System::Void Raspisanie::MyForm::button_remove_Click_1()
{
	//if (VHOD == 0) return;
	label14->Text = ". . .";
	THEME = 0;

	Theme_Color_Click_1();
	textbox_login->Text = ""; textbox_password->Text = "";

	listBox1->Items->Clear();
	if (ADMIN == 1) listBox1->Items->Remove("Админ панель");

	listBox1->Items->Add("Вход");
	listBox1->Items->Add("Регистрация");
	listBox1->Items->Add("О колледже");
	listBox1->SelectedIndex = 0;

	VHOD = 0;
	return System::Void();
}
System::Void Raspisanie::MyForm::button_delete_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (VHOD == 0) return;
	OleDbConnection^ conDataBase = gcnew OleDbConnection("provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database1.accdb");

	conDataBase->Open();

	String^ query = "DELETE FROM [Users] WHERE login = '" + textbox_login->Text + "'";
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, conDataBase);

	if (dbComand->ExecuteNonQuery() != 1) 
	{ MessageBox::Show("Не удалось удалить аккаунт!", "Ошибка!"); conDataBase->Close(); return; }
	
	conDataBase->Close();

	button_remove_Click_1();
	MessageBox::Show("Удаление произошло успешно!", "Внимание!");
	VHOD = 0;

	return System::Void();
}

System::Void Raspisanie::MyForm::pictureBox_edit_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (VHOD == 0) return;
	tabControl1->SelectedTab = tabPage8;
	label5->Text = "Профиль -> Редактор профиля";
	return System::Void();
}
System::Void Raspisanie::MyForm::pictureBox12_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (VHOD == 0) return;
	tabControl1->SelectedTab = tabPage7;
	label5->Text = "Профиль";
	return System::Void();
}
System::Void Raspisanie::MyForm::button_edit_Click(System::Object^ sender, System::EventArgs^ e)
{
	if( textBox1->Text == "" ||
		textBox2->Text == "" ||
		textBox3->Text == "" ||
		textBox4->Text == "" ||
		textBox5->Text == "") {
		MessageBox::Show("Одно или несколько значений пустые!", "Внимание!"); return;
	}

	OleDbConnection^ conDataBase = gcnew OleDbConnection("provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database1.accdb");

	conDataBase->Open();
	OleDbCommand^ dbComand = gcnew OleDbCommand("SELECT * FROM [group]", conDataBase);
	OleDbCommand^ dbComand1 = gcnew OleDbCommand("SELECT * FROM [Users]", conDataBase);

	int count = 0;

	OleDbDataReader^ reader = dbComand->ExecuteReader();
	OleDbDataReader^ reader1 = dbComand1->ExecuteReader();
	while (reader->Read())
	{
		if (reader["group"]->ToString() == textBox5->Text->ToString())
		{
			count++;
		}
	}
	while (reader1->Read())
	{
		if (reader1["login"]->ToString() == textBox1->Text->ToString())
		{
			if (textbox_login->Text == reader1["login"]->ToString()) break;
			MessageBox::Show("Пользователь с таким логином уже зарегестрирован!", "Внимание!");
			reader->Close(); reader1->Close(); conDataBase->Close(); return;
		}
	}
	reader->Close();
	reader1->Close();

	if (count == 0) { MessageBox::Show("Такой группы нет!"); conDataBase->Close(); return; }

	String^ query = "DELETE FROM [Users] WHERE login = '" + textbox_login->Text + "'";

	OleDbCommand^ dbComand3 = gcnew OleDbCommand(query, conDataBase);
	if (dbComand3->ExecuteNonQuery() != 1)
	{
		MessageBox::Show("Не удалось изменить данные аккаунта!", "Ошибка!"); conDataBase->Close(); return;
	}

	query = "INSERT INTO [Users] VALUES ('" + textBox1->Text + "','" +
		textBox2->Text + "','" + textBox3->Text + "','" +
		textBox4->Text + "','" + textBox5->Text + "','" + THEME + "','" + ADMIN + "')";

	OleDbCommand^ dbComand4 = gcnew OleDbCommand(query, conDataBase);
	if (dbComand4->ExecuteNonQuery() != 1)
	{
		MessageBox::Show("Не удалось изменить данные аккаунта! 1", "Ошибка!"); conDataBase->Close(); return;
	}

	MessageBox::Show("Ваши данные изменены!", "Внимание!");
	conDataBase->Close();

	label14->Text = "Вы:\n" + textBox3->Text + "\n" + textBox4->Text +
		".\nУчащийся " + textBox5->Text + "\nгруппы.";

	tabControl1->SelectedTab = tabPage7;
	label5->Text = "Профиль";

	return System::Void();
}
System::Void Raspisanie::MyForm::pictureBox17_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox12->Text == "" ||
		textBox13->Text == "" ||
		textBox14->Text == "") 
	{
		MessageBox::Show("Не все данны введены!", "Внимание!"); return;
	}

	MessageBox::Show("Ваши изменения пойдут на гравный сервер, и будут рассмотрены в ближайшее время!", "Внимание!");
	
	textBox12->Text = "";
	textBox13->Text = ""; textBox14->Text = "";

	return System::Void();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////

System::Void Raspisanie::MyForm::Theme_black()
{
	THEME = 1;

	pictureBox5->BackgroundImage = Image::FromFile("pictures\\mon.png");
	pictureBox6->BackgroundImage = Image::FromFile("pictures\\menu_white.png");
	pictureBox10->BackgroundImage = Image::FromFile("pictures\\user_white.png");
	pictureBox12->BackgroundImage = Image::FromFile("pictures\\next_white.png");
	pictureBox16->BackgroundImage = Image::FromFile("pictures\\next_white.png");
	pictureBox18->BackgroundImage = Image::FromFile("pictures\\next_white.png");
	button_remove->BackgroundImage = Image::FromFile("pictures\\remove_white.png");
	button_delete->BackgroundImage = Image::FromFile("pictures\\del_white.png");
	pictureBox_edit->BackgroundImage = Image::FromFile("pictures\\edit_white.png");
	pictureBox19->BackgroundImage = Image::FromFile("pictures\\edit_white.png");
	panel2->BackColor = Color::FromArgb(31, 33, 32);

	if (textbox_password->PasswordChar == '*') { pictureBox_eye->BackgroundImage = Image::FromFile("pictures\\no_eye_white.png"); }
	else { pictureBox_eye->BackgroundImage = Image::FromFile("pictures\\eye_white.png"); }

	if (textBox_password_2->PasswordChar == '*') { pictureBox9->BackgroundImage = Image::FromFile("pictures\\no_eye_white.png"); }
	else { pictureBox9->BackgroundImage = Image::FromFile("pictures\\eye_white.png"); }

	if (textBox2->PasswordChar == '*') { pictureBox7->BackgroundImage = Image::FromFile("pictures\\no_eye_white.png"); }
	else { pictureBox7->BackgroundImage = Image::FromFile("pictures\\eye_white.png"); }

	//pictureBox4->BackColor = Color::FromArgb(31, 33, 32);
	//label6->BackColor = Color::FromArgb(31, 33, 32);
	//panel1->BackColor = Color::FromArgb(31, 33, 32);

	tableLayoutPanel1->BackColor = Color::FromArgb(103, 121, 90);
	listBox1->BackColor = Color::FromArgb(103, 121, 90);
	listBox2->BackColor = Color::FromArgb(167, 185, 157);
	listBox3->BackColor = Color::FromArgb(167, 185, 157);
	listBox4->BackColor = Color::FromArgb(167, 185, 157);
	tabPage1->BackColor = Color::FromArgb(103, 121, 90);
	tabPage2->BackColor = Color::FromArgb(103, 121, 90);
	tabPage3->BackColor = Color::FromArgb(103, 121, 90);
	tabPage4->BackColor = Color::FromArgb(103, 121, 90);
	tabPage5->BackColor = Color::FromArgb(103, 121, 90);
	tabPage6->BackColor = Color::FromArgb(103, 121, 90);
	tabPage7->BackColor = Color::FromArgb(103, 121, 90);
	tabPage8->BackColor = Color::FromArgb(103, 121, 90);
	tabPage10->BackColor = Color::FromArgb(103, 121, 90);
	tabPage11->BackColor = Color::FromArgb(103, 121, 90);

	label37->ForeColor = Color::FromArgb(255, 255, 255);
	label36->ForeColor = Color::FromArgb(255, 255, 255);
	label35->ForeColor = Color::FromArgb(255, 255, 255);
	label34->ForeColor = Color::FromArgb(255, 255, 255);
	label33->ForeColor = Color::FromArgb(255, 255, 255);
	label32->ForeColor = Color::FromArgb(255, 255, 255);
	label31->ForeColor = Color::FromArgb(255, 255, 255);
	label30->ForeColor = Color::FromArgb(255, 255, 255);
	label29->ForeColor = Color::FromArgb(255, 255, 255);
	label28->ForeColor = Color::FromArgb(255, 255, 255);
	label27->ForeColor = Color::FromArgb(255, 255, 255);
	label26->ForeColor = Color::FromArgb(255, 255, 255);
	label25->ForeColor = Color::FromArgb(255, 255, 255);
	label24->ForeColor = Color::FromArgb(255, 255, 255);
	label23->ForeColor = Color::FromArgb(255, 255, 255);
	label22->ForeColor = Color::FromArgb(255, 255, 255);
	label21->ForeColor = Color::FromArgb(255, 255, 255);
	label20->ForeColor = Color::FromArgb(255, 255, 255);
	label19->ForeColor = Color::FromArgb(255, 255, 255);
	label18->ForeColor = Color::FromArgb(255, 255, 255);
	label17->ForeColor = Color::FromArgb(255, 255, 255);
	label16->ForeColor = Color::FromArgb(255, 255, 255);
	label15->ForeColor = Color::FromArgb(255, 255, 255);
	label14->ForeColor = Color::FromArgb(255, 255, 255);
	label13->ForeColor = Color::FromArgb(255, 255, 255);
	label12->ForeColor = Color::FromArgb(255, 255, 255);
	label11->ForeColor = Color::FromArgb(255, 255, 255);
	label10->ForeColor = Color::FromArgb(255, 255, 255);
	label9->ForeColor = Color::FromArgb(255, 255, 255);
	label8->ForeColor = Color::FromArgb(255, 255, 255);
	label7->ForeColor = Color::FromArgb(255, 255, 255);
	label4->ForeColor = Color::FromArgb(255, 255, 255);
	label3->ForeColor = Color::FromArgb(255, 255, 255);
	label2->ForeColor = Color::FromArgb(255, 255, 255);
	label1->ForeColor = Color::FromArgb(255, 255, 255);
	listBox1->ForeColor = Color::FromArgb(255, 255, 255);
	listBox2->ForeColor = Color::FromArgb(255, 255, 255);
	listBox3->ForeColor = Color::FromArgb(255, 255, 255);
	listBox4->ForeColor = Color::FromArgb(255, 255, 255);


	dataGridView1->BackgroundColor = Color::FromArgb(183, 204, 181);

	tableLayoutPanel2->BackgroundImage = Image::FromFile("pictures\\registration_dark.png");
	tableLayoutPanel3->BackgroundImage = Image::FromFile("pictures\\registration_dark.png");
	tableLayoutPanel7->BackgroundImage = Image::FromFile("pictures\\registration_dark.png");
	tableLayoutPanel8->BackColor = Color::FromArgb(182, 204, 181);
	tableLayoutPanel9->BackgroundImage = Image::FromFile("pictures\\registration_dark.png");
	tableLayoutPanel10->BackgroundImage = Image::FromFile("pictures\\registration_dark.png");
	tableLayoutPanel11->BackgroundImage = Image::FromFile("pictures\\registration_dark.png");
	tableLayoutPanel13->BackgroundImage = Image::FromFile("pictures\\registration_dark.png");
	//tabPage5->BackgroundImage = Image::FromFile("pictures\\registration_dark.png");
}
System::Void Raspisanie::MyForm::Theme_white()
{
	THEME = 0;

	pictureBox5->BackgroundImage = Image::FromFile("pictures\\sun.png");
	pictureBox6->BackgroundImage = Image::FromFile("pictures\\menu.png");
	pictureBox10->BackgroundImage = Image::FromFile("pictures\\user.png");
	pictureBox12->BackgroundImage = Image::FromFile("pictures\\next.png");
	pictureBox16->BackgroundImage = Image::FromFile("pictures\\next.png");
	pictureBox18->BackgroundImage = Image::FromFile("pictures\\next.png");
	button_remove->BackgroundImage = Image::FromFile("pictures\\remove.png");
	button_delete->BackgroundImage = Image::FromFile("pictures\\del.png");
	pictureBox_edit->BackgroundImage = Image::FromFile("pictures\\edit.png");
	pictureBox19->BackgroundImage = Image::FromFile("pictures\\edit.png");
	panel2->BackColor = Color::FromArgb(103, 121, 90);


	if (textbox_password->PasswordChar == '*') { pictureBox_eye->BackgroundImage = Image::FromFile("pictures\\no_eye.png"); }
	else { pictureBox_eye->BackgroundImage = Image::FromFile("pictures\\eye.png"); }

	if (textBox_password_2->PasswordChar == '*') { pictureBox9->BackgroundImage = Image::FromFile("pictures\\no_eye.png"); }
	else { pictureBox9->BackgroundImage = Image::FromFile("pictures\\eye.png"); }
	
	if (textBox2->PasswordChar == '*') { pictureBox7->BackgroundImage = Image::FromFile("pictures\\no_eye.png"); }
	else { pictureBox7->BackgroundImage = Image::FromFile("pictures\\eye.png"); }

	//pictureBox4->BackColor = Color::FromArgb(31,33,32);
	//label6->BackColor = Color::FromArgb(31, 33, 32);
	//panel1->BackColor = Color::FromArgb(31, 33, 32);

	tableLayoutPanel1->BackColor = Color::FromArgb(255, 255, 255);
	listBox1->BackColor = Color::FromArgb(255, 255, 255);
	listBox2->BackColor = Color::FromArgb(231, 224, 218);
	listBox3->BackColor = Color::FromArgb(231, 224, 218);
	listBox4->BackColor = Color::FromArgb(231, 224, 218);
	tabPage1->BackColor = Color::FromArgb(255, 255, 255);
	tabPage2->BackColor = Color::FromArgb(255, 255, 255);
	tabPage3->BackColor = Color::FromArgb(255, 255, 255);
	tabPage4->BackColor = Color::FromArgb(255, 255, 255);
	tabPage5->BackColor = Color::FromArgb(255, 255, 255);
	tabPage6->BackColor = Color::FromArgb(255, 255, 255);
	tabPage7->BackColor = Color::FromArgb(255, 255, 255);
	tabPage8->BackColor = Color::FromArgb(255, 255, 255);
	tabPage10->BackColor = Color::FromArgb(255, 255, 255);
	tabPage11->BackColor = Color::FromArgb(255, 255, 255);

	label37->ForeColor = Color::FromArgb(0, 0, 0);
	label36->ForeColor = Color::FromArgb(0, 0, 0);
	label35->ForeColor = Color::FromArgb(0, 0, 0);
	label34->ForeColor = Color::FromArgb(0, 0, 0);
	label33->ForeColor = Color::FromArgb(0, 0, 0);
	label32->ForeColor = Color::FromArgb(0, 0, 0);
	label31->ForeColor = Color::FromArgb(0, 0, 0);
	label30->ForeColor = Color::FromArgb(0, 0, 0);
	label29->ForeColor = Color::FromArgb(0, 0, 0);
	label28->ForeColor = Color::FromArgb(0, 0, 0);
	label27->ForeColor = Color::FromArgb(0, 0, 0);
	label26->ForeColor = Color::FromArgb(0, 0, 0);
	label25->ForeColor = Color::FromArgb(0, 0, 0);
	label24->ForeColor = Color::FromArgb(0, 0, 0);
	label23->ForeColor = Color::FromArgb(0, 0, 0);
	label22->ForeColor = Color::FromArgb(0, 0, 0);
	label21->ForeColor = Color::FromArgb(0, 0, 0);
	label20->ForeColor = Color::FromArgb(0, 0, 0);
	label19->ForeColor = Color::FromArgb(0, 0, 0);
	label18->ForeColor = Color::FromArgb(0, 0, 0);
	label17->ForeColor = Color::FromArgb(0, 0, 0);
	label16->ForeColor = Color::FromArgb(0, 0, 0);
	label15->ForeColor = Color::FromArgb(0, 0, 0);
	label14->ForeColor = Color::FromArgb(0, 0, 0);
	label13->ForeColor = Color::FromArgb(0, 0, 0);
	label12->ForeColor = Color::FromArgb(0, 0, 0);
	label11->ForeColor = Color::FromArgb(0, 0, 0);
	label10->ForeColor = Color::FromArgb(0, 0, 0);
	label9->ForeColor = Color::FromArgb(0, 0, 0);
	label8->ForeColor = Color::FromArgb(0, 0, 0);
	label7->ForeColor = Color::FromArgb(0, 0, 0);
	label4->ForeColor = Color::FromArgb(0, 0, 0);
	label3->ForeColor = Color::FromArgb(0, 0, 0);
	label2->ForeColor = Color::FromArgb(0, 0, 0);
	label1->ForeColor = Color::FromArgb(0, 0, 0);
	listBox1->ForeColor = Color::FromArgb(0, 0, 0);
	listBox2->ForeColor = Color::FromArgb(0, 0, 0);
	listBox3->ForeColor = Color::FromArgb(0, 0, 0);
	listBox4->ForeColor = Color::FromArgb(0, 0, 0);


	dataGridView1->BackgroundColor = Color::FromArgb(231, 224, 218);

	tableLayoutPanel2->BackgroundImage = Image::FromFile("pictures\\registration.png");
	tableLayoutPanel3->BackgroundImage = Image::FromFile("pictures\\registration.png");
	tableLayoutPanel7->BackgroundImage = Image::FromFile("pictures\\registration.png");
	tableLayoutPanel8->BackColor = Color::FromArgb(231, 224, 218);
	tableLayoutPanel9->BackgroundImage = Image::FromFile("pictures\\registration.png");
	tableLayoutPanel10->BackgroundImage = Image::FromFile("pictures\\registration.png");
	tableLayoutPanel11->BackgroundImage = Image::FromFile("pictures\\registration.png");
	//tabPage5->BackgroundImage = Image::FromFile("pictures\\registration.png");

	return System::Void();
}

System::Void Raspisanie::MyForm::Theme_Color_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (THEME == 0) { Theme_black(); }
	else if (THEME == 1) { Theme_white(); }
	else { MessageBox::Show("Что-то пошло не так с цветовой темой . . .", "Ошибка!"); }

	return System::Void();
}
System::Void Raspisanie::MyForm::Theme_Color_Click_1()
{
	if (THEME == 1) { Theme_black(); }
	if (THEME == 0) { Theme_white(); }

	return System::Void();
}

System::Void Raspisanie::MyForm::logo_Click(System::Object^ sender, System::EventArgs^ e)
{
	tabControl1->SelectedTab = tabPage3;
	label5->Text = "О коллежде";
	return System::Void();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////

System::Void Raspisanie::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox6->Text == "") { MessageBox::Show("Введите логин!", "Внимание!"); return; }
	if (textBox6->Text == textbox_login->Text) { MessageBox::Show("Вы ввели свой логин!", "Внимание!"); return; }

	OleDbConnection^ conDataBase = gcnew OleDbConnection("provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database1.accdb");

	conDataBase->Open();
	OleDbCommand^ dbComand1 = gcnew OleDbCommand("SELECT * FROM [Users]", conDataBase);

	String^ login = "";
	String^ password = "";
	String^ name = "";
	String^ surname = "";
	String^ group = "";
	String^ theme = "";
	int x = 0;

	OleDbDataReader^ reader1 = dbComand1->ExecuteReader();
	while (reader1->Read())
	{
		if (reader1["login"]->ToString() == textBox6->Text->ToString())
		{
			x++;
			login = textBox6->Text->ToString();
			password = reader1["password"]->ToString();
			name = reader1["name"]->ToString();
			surname = reader1["surname"]->ToString();
			group = reader1["group"]->ToString();
			theme = reader1["theme"]->ToString();

			String^ query = "DELETE FROM [Users] WHERE login = '" + login +"'";
			OleDbCommand^ dbComand3 = gcnew OleDbCommand(query, conDataBase);

			if (dbComand3->ExecuteNonQuery() != 1)
			{
				MessageBox::Show("Не удалось изменить данные аккаунта!", "Ошибка!"); conDataBase->Close(); return;
			}

			query = "INSERT INTO [Users] VALUES ('" + login + "','" +
				password + "','" + name + "','" +
				surname + "','" + group + "','" + theme + "','1')";

			OleDbCommand^ dbComand4 = gcnew OleDbCommand(query, conDataBase);

			if (dbComand4->ExecuteNonQuery() != 1)
			{
				MessageBox::Show("Не удалось изменить данные аккаунта!", "Ошибка!"); conDataBase->Close(); return;
			}

			MessageBox::Show("Ожидайте!"); textBox6->Text = ""; conDataBase->Close(); return;
		}
	}
	reader1->Close();
	conDataBase->Close();

	if (x == 0) MessageBox::Show("Пользователя с таким логином нет!", "Внимание!");
	textBox6->Text = "";

	return System::Void();
}
System::Void Raspisanie::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox6->Text == "") { MessageBox::Show("Введите логин!", "Внимание!"); return; }
	if (textBox6->Text == textbox_login->Text) { MessageBox::Show("Вы ввели свой логин!", "Внимание!"); return; }

	OleDbConnection^ conDataBase = gcnew OleDbConnection("provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database1.accdb");

	conDataBase->Open();
	OleDbCommand^ dbComand1 = gcnew OleDbCommand("SELECT * FROM [Users]", conDataBase);

	String^ login = "";
	String^ password = "";
	String^ name = "";
	String^ surname = "";
	String^ group = "";
	String^ theme = "";
	int x = 0;

	OleDbDataReader^ reader1 = dbComand1->ExecuteReader();
	while (reader1->Read())
	{
		if (reader1["login"]->ToString() == textBox6->Text->ToString())
		{
			x++;
			login = textBox6->Text->ToString();
			password = reader1["password"]->ToString();
			name = reader1["name"]->ToString();
			surname = reader1["surname"]->ToString();
			group = reader1["group"]->ToString();
			theme = reader1["theme"]->ToString();

			String^ query = "DELETE FROM [Users] WHERE login = '" + login + "'";
			OleDbCommand^ dbComand3 = gcnew OleDbCommand(query, conDataBase);

			if (dbComand3->ExecuteNonQuery() != 1)
			{
				MessageBox::Show("Не удалось изменить данные аккаунта!", "Ошибка!"); conDataBase->Close(); return;
			}

			query = "INSERT INTO [Users] VALUES ('" + login + "','" +
				password + "','" + name + "','" +
				surname + "','" + group + "','" + theme + "','0')";

			OleDbCommand^ dbComand4 = gcnew OleDbCommand(query, conDataBase);

			if (dbComand4->ExecuteNonQuery() != 1)
			{
				MessageBox::Show("Не удалось изменить данные аккаунта!", "Ошибка!"); conDataBase->Close(); return;
			}

			MessageBox::Show("Ожидайте!"); textBox6->Text = ""; break;
		}
	}
	reader1->Close();
	conDataBase->Close();

	if(x == 0) MessageBox::Show("Пользователя с таким логином нет!", "Внимание!");
	textBox6->Text = "";

	return System::Void();
}
System::Void Raspisanie::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox8->Text == "") { MessageBox::Show("Введите данные!", "Внимание!"); return; }

	OleDbConnection^ conDataBase = gcnew OleDbConnection("provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database1.accdb");
	String^ Infa = "";
	if (comboBox1->Text == "Учителя") Infa = "teacher";
	if (comboBox1->Text == "Предмет") Infa = "predmet";
	if (comboBox1->Text == "Группа") Infa = "group";

	conDataBase->Open();
	OleDbCommand^ dbComand = gcnew OleDbCommand("SELECT * FROM [" + Infa + "]", conDataBase);

	int count = 0;

	OleDbDataReader^ reader = dbComand->ExecuteReader();
	while (reader->Read())
	{
		if (reader[Infa]->ToString() == textBox8->Text->ToString())
		{
			count++;
		}
	}
	reader->Close();

	if (count != 0) { MessageBox::Show("Данные уже существуют в БД!"); conDataBase->Close(); return; }

	String^ query = "INSERT INTO [" + Infa + "] VALUES ('" + textBox8->Text + "')";

	OleDbCommand^ dbComand4 = gcnew OleDbCommand(query, conDataBase);
	if (dbComand4->ExecuteNonQuery() != 1)
	{
		MessageBox::Show("Не удалось добавить данные в БД!", "Ошибка!"); conDataBase->Close(); return;
	}

	MessageBox::Show("Данные добавлены!", "Внимание!");
	conDataBase->Close();
	textBox8->Text = "";
	Update_dannie();

	return System::Void();
}
System::Void Raspisanie::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox8->Text == "") { MessageBox::Show("Введите данные!", "Внимание!"); return; }

	OleDbConnection^ conDataBase = gcnew OleDbConnection("provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database1.accdb");
	String^ Infa = "";
	if (comboBox1->Text == "Учителя") Infa = "teacher";
	if (comboBox1->Text == "Предмет") Infa = "predmet";
	if (comboBox1->Text == "Группа") Infa = "group";

	conDataBase->Open();
	OleDbCommand^ dbComand = gcnew OleDbCommand("SELECT * FROM [" + Infa + "]", conDataBase);

	int count = 0;

	OleDbDataReader^ reader = dbComand->ExecuteReader();
	while (reader->Read())
	{
		if (reader[Infa]->ToString() == textBox8->Text->ToString())
		{
			count++;
		}
	}
	reader->Close();

	if (count == 0) { MessageBox::Show("Таких данных не существуют в БД!"); conDataBase->Close(); return; }
	

	//////////////////////////////////////////////////////////////////////////////////////////////////

	if (Infa == "Группа") { MessageBox::Show("Что-то пошло не так :<"); return; }

	String^ query = "DELETE FROM [" + Infa + "] WHERE " + Infa + " = '" + textBox8->Text->ToString() + "'";

	OleDbCommand^ dbComand3 = gcnew OleDbCommand(query, conDataBase);
	if (dbComand3->ExecuteNonQuery() != 1)
	{
		MessageBox::Show("Не удалось удалить данные!", "Ошибка!"); conDataBase->Close(); return;
	}

	MessageBox::Show("Данные удалены!", "Внимание!");
	conDataBase->Close();
	textBox8->Text = "";
	Update_dannie();

	return System::Void();
}

//////////////////////////////////////////////////////////////////////////////////////////////////////

System::Void Raspisanie::MyForm::pictureBox9_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (THEME == 0) {
		if (textbox_password->PasswordChar == '*') {
			textbox_password->PasswordChar = false;
			pictureBox_eye->BackgroundImage = Image::FromFile("pictures\\no_eye.png");
		}
		else {
			textbox_password->PasswordChar = '*';
			pictureBox_eye->BackgroundImage = Image::FromFile("pictures\\eye.png");
		}
	}
	else {
		if (textbox_password->PasswordChar == '*') {
			textbox_password->PasswordChar = false;
			pictureBox_eye->BackgroundImage = Image::FromFile("pictures\\no_eye_white.png");
		}
		else {
			textbox_password->PasswordChar = '*';
			pictureBox_eye->BackgroundImage = Image::FromFile("pictures\\eye_white.png");
		}
	}

	return System::Void();
}
System::Void Raspisanie::MyForm::pictureBox9_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	if (THEME == 0) {
		if (textBox_password_2->PasswordChar == '*') {
			textBox_password_2->PasswordChar = false;
			pictureBox9->BackgroundImage = Image::FromFile("pictures\\no_eye.png");
		}
		else {
			textBox_password_2->PasswordChar = '*';
			pictureBox9->BackgroundImage = Image::FromFile("pictures\\eye.png");
		}
	}
	else {
		if (textBox_password_2->PasswordChar == '*') {
			textBox_password_2->PasswordChar = false;
			pictureBox9->BackgroundImage = Image::FromFile("pictures\\no_eye_white.png");
		}
		else {
			textBox_password_2->PasswordChar = '*';
			pictureBox9->BackgroundImage = Image::FromFile("pictures\\eye_white.png");
		}
	}

	return System::Void();
}
System::Void Raspisanie::MyForm::pictureBox7_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (THEME == 0) {
		if (textBox2->PasswordChar == '*') {
			textBox2->PasswordChar = false;
			pictureBox7->BackgroundImage = Image::FromFile("pictures\\no_eye.png");
		}
		else {
			textBox2->PasswordChar = '*';
			pictureBox7->BackgroundImage = Image::FromFile("pictures\\eye.png");
		}
	}
	else {
		if (textBox2->PasswordChar == '*') {
			textBox2->PasswordChar = false;
			pictureBox7->BackgroundImage = Image::FromFile("pictures\\no_eye_white.png");
		}
		else {
			textBox2->PasswordChar = '*';
			pictureBox7->BackgroundImage = Image::FromFile("pictures\\eye_white.png");
		}
	}
	return System::Void();
}

System::Void Raspisanie::MyForm::button_no_password_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Попытайся вспомнить, солнышко! ^^", "Не помнишь пароль?");
	return System::Void();
}

System::Void Raspisanie::MyForm::Text_no(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	e->Handled = true;
	return System::Void();
}
System::Void Raspisanie::MyForm::Text_no_2(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	e->Handled = true;
	return System::Void();
}

