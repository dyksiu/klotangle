#pragma once

namespace Klotangle {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;

	private: System::Windows::Forms::PictureBox^ pictureBox36;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::PictureBox^ pictureBox19;
	private: System::Windows::Forms::PictureBox^ pictureBox20;
	private: System::Windows::Forms::PictureBox^ pictureBox21;
	private: System::Windows::Forms::PictureBox^ pictureBox22;
	private: System::Windows::Forms::PictureBox^ pictureBox23;
	private: System::Windows::Forms::PictureBox^ pictureBox24;
	private: System::Windows::Forms::PictureBox^ pictureBox25;
	private: System::Windows::Forms::PictureBox^ pictureBox26;
	private: System::Windows::Forms::PictureBox^ pictureBox27;
	private: System::Windows::Forms::PictureBox^ pictureBox28;
	private: System::Windows::Forms::PictureBox^ pictureBox29;
	private: System::Windows::Forms::PictureBox^ pictureBox30;
	private: System::Windows::Forms::PictureBox^ pictureBox31;
	private: System::Windows::Forms::PictureBox^ pictureBox32;
	private: System::Windows::Forms::PictureBox^ pictureBox33;
	private: System::Windows::Forms::PictureBox^ pictureBox34;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;






	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(432, 518);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(25, 25);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(377, 545);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(112, 31);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(624, 26);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(25, 26);
			this->label1->TabIndex = 3;
			this->label1->Text = L"0";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(843, 26);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 26);
			this->label2->TabIndex = 4;
			this->label2->Text = L"2";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(203, 457);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(149, 50);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// pictureBox36
			// 
			this->pictureBox36->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(532, 457);
			this->pictureBox36->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(150, 50);
			this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox36->TabIndex = 34;
			this->pictureBox36->TabStop = false;
			this->pictureBox36->Visible = false;
			this->pictureBox36->Click += gcnew System::EventHandler(this, &MyForm::pictureBox36_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"czerwony.png");
			this->imageList1->Images->SetKeyName(1, L"fioletowy.png");
			this->imageList1->Images->SetKeyName(2, L"niebieski.png");
			this->imageList1->Images->SetKeyName(3, L"szary.png");
			this->imageList1->Images->SetKeyName(4, L"szarypekniety.png");
			this->imageList1->Images->SetKeyName(5, L"zielony.png");
			this->imageList1->Images->SetKeyName(6, L"zolty.png");
			this->imageList1->Images->SetKeyName(7, L"Screenshot_1.png");
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(16, 313);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(96, 33);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 35;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Tag = L"a";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(16, 217);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(96, 33);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 36;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Tag = L"a";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(16, 169);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(96, 33);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox6->TabIndex = 37;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Tag = L"a";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(16, 265);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(96, 33);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox7->TabIndex = 38;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Tag = L"b";
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(16, 121);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(96, 33);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox8->TabIndex = 39;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Tag = L"b";
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(227, 169);
			this->pictureBox9->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(367, 134);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox9->TabIndex = 40;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Visible = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &MyForm::pictureBox9_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(168, 121);
			this->pictureBox10->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(96, 33);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox10->TabIndex = 45;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Tag = L"b";
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(168, 265);
			this->pictureBox11->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(96, 33);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox11->TabIndex = 44;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Tag = L"b";
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(168, 169);
			this->pictureBox12->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(96, 33);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox12->TabIndex = 43;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Tag = L"a";
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(168, 217);
			this->pictureBox13->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(96, 33);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox13->TabIndex = 42;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Tag = L"a";
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(168, 313);
			this->pictureBox14->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(96, 33);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox14->TabIndex = 41;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Tag = L"a";
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(324, 121);
			this->pictureBox15->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(96, 33);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox15->TabIndex = 50;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Tag = L"b";
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(324, 265);
			this->pictureBox16->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(96, 33);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox16->TabIndex = 49;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Tag = L"b";
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(324, 169);
			this->pictureBox17->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(96, 33);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox17->TabIndex = 48;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Tag = L"a";
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(324, 217);
			this->pictureBox18->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(96, 33);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox18->TabIndex = 47;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Tag = L"a";
			// 
			// pictureBox19
			// 
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(324, 313);
			this->pictureBox19->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(96, 33);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox19->TabIndex = 46;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Tag = L"a";
			// 
			// pictureBox20
			// 
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(477, 121);
			this->pictureBox20->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(96, 33);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox20->TabIndex = 55;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Tag = L"b";
			// 
			// pictureBox21
			// 
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(477, 265);
			this->pictureBox21->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(96, 33);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox21->TabIndex = 54;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Tag = L"b";
			// 
			// pictureBox22
			// 
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(477, 169);
			this->pictureBox22->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(96, 33);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox22->TabIndex = 53;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Tag = L"a";
			// 
			// pictureBox23
			// 
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(477, 217);
			this->pictureBox23->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(96, 33);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox23->TabIndex = 52;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Tag = L"a";
			// 
			// pictureBox24
			// 
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(477, 313);
			this->pictureBox24->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(96, 33);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox24->TabIndex = 51;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Tag = L"a";
			// 
			// pictureBox25
			// 
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(629, 121);
			this->pictureBox25->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(96, 33);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox25->TabIndex = 60;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Tag = L"b";
			// 
			// pictureBox26
			// 
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(629, 265);
			this->pictureBox26->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(96, 33);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox26->TabIndex = 59;
			this->pictureBox26->TabStop = false;
			this->pictureBox26->Tag = L"b";
			// 
			// pictureBox27
			// 
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(629, 169);
			this->pictureBox27->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(96, 33);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox27->TabIndex = 58;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->Tag = L"a";
			// 
			// pictureBox28
			// 
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(629, 217);
			this->pictureBox28->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(96, 33);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox28->TabIndex = 57;
			this->pictureBox28->TabStop = false;
			this->pictureBox28->Tag = L"a";
			// 
			// pictureBox29
			// 
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(629, 313);
			this->pictureBox29->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(96, 33);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox29->TabIndex = 56;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->Tag = L"a";
			// 
			// pictureBox30
			// 
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(777, 121);
			this->pictureBox30->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(96, 33);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox30->TabIndex = 65;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->Tag = L"b";
			// 
			// pictureBox31
			// 
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(777, 265);
			this->pictureBox31->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(96, 33);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox31->TabIndex = 64;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Tag = L"b";
			// 
			// pictureBox32
			// 
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(777, 169);
			this->pictureBox32->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(96, 33);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox32->TabIndex = 63;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Tag = L"a";
			// 
			// pictureBox33
			// 
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(777, 217);
			this->pictureBox33->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(96, 33);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox33->TabIndex = 62;
			this->pictureBox33->TabStop = false;
			this->pictureBox33->Tag = L"a";
			// 
			// pictureBox34
			// 
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(777, 313);
			this->pictureBox34->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(96, 33);
			this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox34->TabIndex = 61;
			this->pictureBox34->TabStop = false;
			this->pictureBox34->Tag = L"a";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(553, 26);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 26);
			this->label3->TabIndex = 66;
			this->label3->Text = L"0";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(565, 265);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 26);
			this->label4->TabIndex = 68;
			this->label4->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(939, 617);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox30);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->pictureBox32);
			this->Controls->Add(this->pictureBox33);
			this->Controls->Add(this->pictureBox34);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox26);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->pictureBox28);
			this->Controls->Add(this->pictureBox29);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox36);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Tag = L"a";
			this->Text = L"Klotangle";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::paletka);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		int x = 0;
		int y = 0;
		int proby = 2;
		int punktacja;
		int cegielki = 0;
		char kierunek;
		bool spacja;
#pragma endregion

	private: System::Void dzwieki(String^ dzwiek)
	{
		try {
			System::Media::SoundPlayer^ wlacz = gcnew System::Media::SoundPlayer();
			wlacz->SoundLocation = dzwiek;
			wlacz->Load();
			wlacz->Play();
		}
		catch (...)
		{
			MessageBox::Show("BRAK DWIEKU!", "Klotangle", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		   

	private: System::Void klocki(System::Windows::Forms::Control^ klocek)
	{
		
		if ((pictureBox1->Top + pictureBox1->Height > klocek->Top) &&
			(pictureBox1->Top < klocek->Top + klocek->Height) &&
			(pictureBox1->Left + pictureBox1->Width > klocek->Left) &&
			(pictureBox1->Left < klocek->Left + klocek->Width) &&
			(klocek->Visible == true))
		{
			y = -y;

			if (klocek->Tag != "b")
			{
				klocek->Visible = false;
				punktacja += 10;
				//rozbite cegly
				cegielki += 1;
				dzwieki("../dzwiek/zbicieklocka.wav");
				label3->Text = "" +punktacja;
			}
			else
			{
				
				PictureBox^ mocnyszary = (PictureBox^)klocek;
				mocnyszary->Image = imageList1->Images[4];
				klocek->Tag = "bb";
				dzwieki("../dzwiek/zbicieklocka.wav");
				punktacja += 15;
			}
			
		}
		
		try {
			System::String^ tekst;
			System::String^ punkt;
			StreamReader^ zapisane = gcnew StreamReader("Wyniki.txt", System::Text::Encoding::ASCII);
			tekst = zapisane->ReadLine();;
			label1->Text = tekst;
			zapisane->Close();

		}
		catch (...)
		{
			MessageBox::Show("Nie znaleziono pliku wyników!", "Klotangle", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
		if (cegielki == 30)
		{
			timer1->Enabled = false;
			pictureBox3->Visible = true;
			pictureBox36->Visible = true;
			pictureBox9->Visible = true;
			pictureBox1->Visible = false;
			pictureBox2->Visible = false;
			
			cegielki = 0;
			
			//StreamWriter^ wyniki = gcnew StreamWriter("Koniec.txt");
			//wyniki->WriteLine(label1->Text, true);
			//wyniki->Close();
			///////////odczyt z pliku dla wynikow z drugiego poziomu
			//System::String^ tekst;
			//StreamReader^ odczytaj = gcnew StreamReader("Koniec.txt", System::Text::Encoding::ASCII);
			//tekst = odczytaj->ReadLine();
			//textBox1->Text = tekst;
		}
		
	}



	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

		for each (Control ^ element in this->Controls)
		{
			if (element->Tag == "a" || element->Tag == "b" || element->Tag == "bb")//tag a to zwykle kolorowe cegielki a tag b to szara cegla ktora jest mocniejsza
			{//tag bb to nowy klocek 
				klocki(element);
			}
		}


		//animacja pileczki
		pictureBox1->Left += x;
		pictureBox1->Top += y;
		//odbijanie sie pileczki
		if (pictureBox1->Left >= MyForm::Width - pictureBox1->Width)
		{
			x = -x;
		}
		if (pictureBox1->Top <= 75)
		{
			y = -y;
		}
		if (pictureBox1->Left <= 5)
		{
			x = -x;
		}
		//animacja paletki
		if ((kierunek == 'R')&&(pictureBox2->Left < MyForm::Width - pictureBox2->Width - 15))//prawo
		{
			pictureBox2->Left += 10;
			if (x == 0 && y == 0)
			{
				pictureBox1->Left += 10;
			}
		}
		if ((kierunek == 'L')&&(pictureBox2->Left > 0))//lewo
		{
			pictureBox2->Left -= 10;
			if (x == 0 && y == 0)
			{
				pictureBox1->Left -= 10;
			}
		}
		//odbijanie od paletki
		if ((pictureBox1->Left > pictureBox2->Left)&&(pictureBox1->Left < pictureBox2->Left + pictureBox2->Width)&&(pictureBox1->Top + pictureBox1->Height > pictureBox2->Top))
		{
			y = -y;
		}
		else if (pictureBox1->Top +pictureBox1->Height >= pictureBox2->Top + 5)
		{

			timer1->Enabled = false;
			pictureBox1->Enabled = false;
			proby -= 1;
			if (proby > 0)
			{
				MessageBox::Show("Pi³eczka spad³a", "Klotangle", MessageBoxButtons::OK, MessageBoxIcon::Information);

				pictureBox1->Top = pictureBox2->Top - pictureBox1->Height - 5;
				pictureBox1->Left = pictureBox2->Left + pictureBox2->Width / 2;
				x = 0;
				y = 0;

				timer1->Enabled = true;
				pictureBox1->Visible = true;

				label2->Text = "" + proby;

				spacja = false;
			}
			else
			{
				label2->Text = "Koniec:(";
				pictureBox3->Visible = true;
				pictureBox36->Visible = true;
			}
		}

		

	}
		 
	private: System::Void paletka(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
	{
		if (e->KeyCode == Keys::Left)
		{
			kierunek = 'L';
	    }
		if (e->KeyCode == Keys::Right)
		{
			kierunek = 'R';
		}
		if ((e->KeyCode == Keys::Space) && (spacja == false))
		{
			x = -5;
			y = -5;
			spacja = true;
		}
	}
	private: System::Void MyForm_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		kierunek = 'STOP';
		
		
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox35_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void pictureBox36_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		StreamWriter^ pliki2 = gcnew StreamWriter("Zapisane.txt",true);
		pliki2->WriteLine("PUNKTY POZIOM 2: " + punktacja, true);
		pliki2->Close();
	}
	catch (...)
	{
		MessageBox::Show("B³¹d zapisu! Nie mo¿na zapisaæ pliku.", "Klotangle", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void pictureBox35_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void pictureBox35_Click_2(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
