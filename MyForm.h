#pragma once
#include <iostream>

namespace Course {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::ListBox^ listBox1;


	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;


	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ алгоритмToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ анализToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label17;


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->алгоритмToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->анализToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 13);
			this->label2->TabIndex = 22;
			this->label2->Text = L"B";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 21;
			this->label1->Text = L"A";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(10, 64);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 19;
			this->textBox2->Text = L"3";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(10, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 18;
			this->textBox1->Text = L"5";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(9, 90);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 23);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-11, 297);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(394, 98);
			this->pictureBox1->TabIndex = 24;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-11, 211);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(357, 88);
			this->pictureBox2->TabIndex = 25;
			this->pictureBox2->TabStop = false;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(350, 47);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(173, 225);
			this->listBox1->TabIndex = 26;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(9, 147);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 29;
			this->textBox4->Text = L"7000";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(533, 316);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(161, 20);
			this->textBox3->TabIndex = 30;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(533, 348);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(161, 20);
			this->textBox5->TabIndex = 31;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(533, 374);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(161, 20);
			this->textBox6->TabIndex = 32;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(421, 323);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 13);
			this->label3->TabIndex = 33;
			this->label3->Text = L"Время сортировки";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(421, 351);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 13);
			this->label4->TabIndex = 34;
			this->label4->Text = L"Число сравнений";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(417, 377);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(113, 13);
			this->label5->TabIndex = 35;
			this->label5->Text = L"Число перестановок";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label20);
			this->panel1->Controls->Add(this->label19);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->chart1);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->textBox25);
			this->panel1->Controls->Add(this->textBox24);
			this->panel1->Controls->Add(this->textBox23);
			this->panel1->Controls->Add(this->textBox22);
			this->panel1->Controls->Add(this->textBox18);
			this->panel1->Controls->Add(this->textBox17);
			this->panel1->Controls->Add(this->textBox16);
			this->panel1->Controls->Add(this->textBox15);
			this->panel1->Controls->Add(this->textBox14);
			this->panel1->Controls->Add(this->textBox13);
			this->panel1->Controls->Add(this->textBox12);
			this->panel1->Controls->Add(this->textBox11);
			this->panel1->Controls->Add(this->textBox10);
			this->panel1->Controls->Add(this->textBox9);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->textBox7);
			this->panel1->Controls->Add(this->listView1);
			this->panel1->Enabled = false;
			this->panel1->Location = System::Drawing::Point(11, 28);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(697, 398);
			this->panel1->TabIndex = 36;
			this->panel1->Visible = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(7, 235);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(173, 13);
			this->label20->TabIndex = 36;
			this->label20->Text = L"Система нормальных уравнений";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(377, 54);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(153, 13);
			this->label19->TabIndex = 35;
			this->label19->Text = L"Коэффициент детерминации";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(377, 31);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(140, 13);
			this->label18->TabIndex = 34;
			this->label18->Text = L"Коэффициент корреляции";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(205, 316);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(25, 13);
			this->label16->TabIndex = 33;
			this->label16->Text = L"a1=";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(47, 316);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(25, 13);
			this->label15->TabIndex = 32;
			this->label15->Text = L"a0=";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(7, 361);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(149, 13);
			this->label14->TabIndex = 31;
			this->label14->Text = L"Уравнение связи y = _ + _*x";
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Location = System::Drawing::Point(388, 77);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(297, 230);
			this->chart1->TabIndex = 19;
			this->chart1->Text = L"chart1";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(3, 195);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(37, 13);
			this->label13->TabIndex = 30;
			this->label13->Text = L"Итого";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(263, 290);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(13, 13);
			this->label12->TabIndex = 29;
			this->label12->Text = L"=";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(263, 263);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(13, 13);
			this->label11->TabIndex = 28;
			this->label11->Text = L"=";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(133, 289);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(23, 13);
			this->label10->TabIndex = 27;
			this->label10->Text = L"a1*";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(133, 263);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(23, 13);
			this->label9->TabIndex = 26;
			this->label9->Text = L"a1*";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(4, 293);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(23, 13);
			this->label8->TabIndex = 25;
			this->label8->Text = L"a0*";
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(310, 192);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(61, 20);
			this->textBox25->TabIndex = 24;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(235, 192);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(69, 20);
			this->textBox24->TabIndex = 23;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(158, 192);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(70, 20);
			this->textBox23->TabIndex = 22;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(37, 192);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(115, 20);
			this->textBox22->TabIndex = 21;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(536, 51);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(100, 20);
			this->textBox18->TabIndex = 16;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(536, 24);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(100, 20);
			this->textBox17->TabIndex = 15;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(234, 313);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(100, 20);
			this->textBox16->TabIndex = 14;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(76, 313);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 20);
			this->textBox15->TabIndex = 13;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(282, 286);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 20);
			this->textBox14->TabIndex = 12;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(157, 286);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 20);
			this->textBox13->TabIndex = 11;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(27, 287);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 10;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(282, 260);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 9;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(158, 260);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 8;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(27, 260);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 7;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(3, 267);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(23, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"a0*";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(558, 316);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(127, 58);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Вычислить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(4, 4);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 13);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Объём выборки";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(99, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 1;
			this->textBox7->Text = L"10";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(3, 30);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(368, 156);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"№";
			this->columnHeader1->Width = 30;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Кол-во элементов ( Х )";
			this->columnHeader2->Width = 129;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Время ( Y )";
			this->columnHeader3->Width = 79;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Х^2";
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"X*Y";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->алгоритмToolStripMenuItem,
					this->анализToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(721, 24);
			this->menuStrip1->TabIndex = 37;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// алгоритмToolStripMenuItem
			// 
			this->алгоритмToolStripMenuItem->Name = L"алгоритмToolStripMenuItem";
			this->алгоритмToolStripMenuItem->Size = System::Drawing::Size(74, 20);
			this->алгоритмToolStripMenuItem->Text = L"Алгоритм";
			this->алгоритмToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::алгоритмToolStripMenuItem_Click);
			// 
			// анализToolStripMenuItem
			// 
			this->анализToolStripMenuItem->Name = L"анализToolStripMenuItem";
			this->анализToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->анализToolStripMenuItem->Text = L"Анализ";
			this->анализToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::анализToolStripMenuItem_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->listBox2);
			this->panel2->Controls->Add(this->label22);
			this->panel2->Controls->Add(this->label21);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->textBox6);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->listBox1);
			this->panel2->Location = System::Drawing::Point(11, 28);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(697, 398);
			this->panel2->TabIndex = 38;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(524, 47);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(173, 225);
			this->listBox2->TabIndex = 39;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(533, 18);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(140, 13);
			this->label22->TabIndex = 38;
			this->label22->Text = L"Отсортированный массив";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(365, 18);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(152, 13);
			this->label21->TabIndex = 37;
			this->label21->Text = L"Неотсортированный массив";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(10, 119);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(97, 13);
			this->label17->TabIndex = 36;
			this->label17->Text = L"Число элементов";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(721, 434);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Курсовая работа";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: double get_exponential(int A, int B) {
		int r_num; double root, right;
		r_num = rand(); /* получение случайного целого числа */
		right = (double)(r_num-1) / RAND_MAX; /* Проекция на интервал (0,1) */
		if (right == 1)
			right = right;
		root = Math::Round(A - B*log(1-right), 4); /* Вычисление значения обратной функции*/
		return root;
}

		   int s = 0, cmp = 0, mv = 0;
		   void coctail_sort(double* arr, int count) {
			   int h_limit = count - 1, l_limit = 0; double tmp;
			   while (h_limit - l_limit) {
				   for (int j = l_limit; j < h_limit; j++) {
					   if (arr[j] > arr[j + 1]) {
						   tmp = arr[j];
						   arr[j] = arr[j + 1];
						   arr[j + 1] = tmp;
						   s = j;
						   mv++;
					   }
					   cmp++;
				   }
				   h_limit = s;
				   for (int j = h_limit; j > l_limit; j--) {
					   if (arr[j - 1] > arr[j]) {
						   tmp = arr[j];
						   arr[j] = arr[j - 1];
						   arr[j - 1] = tmp;
						   s = j;
						   mv++;}
					   cmp++;}
				   l_limit = s;}}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();
		listBox2->Items->Clear();
		int A, B, count;
		Int32::TryParse(textBox1->Text, A);
		Int32::TryParse(textBox2->Text, B);
		Int32::TryParse(textBox4->Text, count);
		srand(time(NULL));
		//Создание и заполнение неотсортированного массива
		double* arr = new double[count];
		for (int i = 0; i < count; i++) {
			arr[i]= get_exponential(A, B);
			listBox1->Items->Add(arr[i]);
		}
		//Сортировка массива
		
		clock_t start = clock(), end;
		coctail_sort(arr, count);
		end = clock();
		
		
		textBox3->Text = Convert::ToString(end - start);
		textBox5->Text = Convert::ToString(cmp);
		textBox6->Text = Convert::ToString(mv);
		for (int i = 0; i < count; i++) {
			listBox2->Items->Add(arr[i]);
		}
		delete[] arr;
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	listView1->Items->Clear();
	chart1->Series[0]->Points->Clear();
	int m;
	Int32::TryParse(textBox7->Text, m);
	double count;
	double X=0, Y=0, X2=0, XY=0, Y2=0;
	for (int i = 0; i < m; i++) {
		count = (i + 1) * 1000;
		double* arr = new double[count];
		for (int i = 0; i < count; i++) {
			arr[i] = get_exponential(1, 2);
		}
		clock_t start = clock(), end;
		coctail_sort(arr, count);
		end = clock();
		listView1->Items->Add(Convert::ToString(i));
		
		listView1->Items[i]->SubItems->Add(Convert::ToString(count));
		X += count;
		listView1->Items[i]->SubItems->Add(Convert::ToString(end - start));
		Y += end - start;
		Y2 += Y * Y;
		listView1->Items[i]->SubItems->Add(Convert::ToString(count*count));
		X2 += count*count;
		listView1->Items[i]->SubItems->Add(Convert::ToString(count*(end-start)));
		XY += count * (end - start);
		chart1->Series[0]->Points->AddXY(count, end - start);
		delete[] arr;
	}
	textBox22->Text = Convert::ToString(X);
	textBox23->Text = Convert::ToString(Y);
	textBox24->Text = Convert::ToString(X2);
	textBox25->Text = Convert::ToString(XY);

	textBox9->Text = textBox7->Text;
	textBox10->Text = textBox22->Text;
	textBox11->Text = textBox23->Text;

	textBox12->Text = textBox22->Text;
	textBox13->Text = textBox24->Text;
	textBox14->Text = textBox25->Text;

	textBox15->Text = Convert::ToString(Math::Round(((XY*X/X2-Y)/(X*X/X2-m)),5));
	textBox16->Text = Convert::ToString(Math::Round((XY * m / X - Y) / (X2 * m / X - X),5));

	count = (m * XY - X * Y) / (sqrt((m*X2-X*X)*(m*Y2-Y*Y)));
	textBox17->Text = (Convert::ToString(Math::Round(count,5)));
	textBox18->Text = (Convert::ToString(Math::Round(count*count, 5)));
	label14->Text = "Уравнение связи y = "+ textBox15->Text +" + "+ textBox16->Text +"*x";
	
}
private: System::Void алгоритмToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (panel1->Visible) {
		panel2->Visible = true;
		panel2->Enabled = true;
		panel1->Visible = false;
		panel1->Enabled = false;
	}
}
private: System::Void анализToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (panel2->Visible) {
		panel1->Visible = true;
		panel1->Enabled = true;
		panel2->Visible = false;
		panel2->Enabled = false;
	}
}
};
}
