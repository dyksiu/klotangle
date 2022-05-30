#pragma once

#include "MyForm.h"

namespace Klotangle {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Podsumowanie informacji o poziom1
	/// </summary>
	public ref class poziom1 : public System::Windows::Forms::Form
	{
	public:
		poziom1(void)
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
		~poziom1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::ImageList^ imageList1;
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

	private: System::Windows::Forms::PictureBox^ pictureBox31;
	private: System::Windows::Forms::PictureBox^ pictureBox32;
	private: System::Windows::Forms::PictureBox^ pictureBox33;
	private: System::Windows::Forms::PictureBox^ pictureBox34;
	private: System::Windows::Forms::PictureBox^ pictureBox35;
	private: System::Windows::Forms::PictureBox^ pictureBox36;
	private: System::Windows::Forms::PictureBox^ pictureBox30;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(poziom1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
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
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(320, 436);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(25, 25);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &poziom1::pictureBox1_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &poziom1::timer1_Tick);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(276, 458);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(112, 31);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &poziom1::pictureBox2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(417, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"0";
			this->label1->Click += gcnew System::EventHandler(this, &poziom1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(642, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"2";
			this->label2->Click += gcnew System::EventHandler(this, &poziom1::label2_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(347, 303);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(149, 50);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 5;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &poziom1::pictureBox4_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(175, 303);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(149, 50);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &poziom1::pictureBox3_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"czerwony.png");
			this->imageList1->Images->SetKeyName(1, L"fioletowy.png");
			this->imageList1->Images->SetKeyName(2, L"niebieski.png");
			this->imageList1->Images->SetKeyName(3, L"zolty.png");
			// 
			// pictureBox5
			// 
			this->pictureBox5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(25, 130);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(96, 33);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 7;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Tag = L"a";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox6->BackColor = System::Drawing::Color::Black;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(25, 96);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(96, 33);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox6->TabIndex = 8;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Tag = L"a";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(25, 165);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(96, 33);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox7->TabIndex = 9;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Tag = L"a";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(25, 200);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(96, 33);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox8->TabIndex = 10;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Tag = L"a";
			// 
			// pictureBox9
			// 
			this->pictureBox9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(25, 234);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(96, 33);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox9->TabIndex = 11;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Tag = L"a";
			// 
			// pictureBox10
			// 
			this->pictureBox10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(136, 234);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(96, 33);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox10->TabIndex = 16;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Tag = L"a";
			// 
			// pictureBox11
			// 
			this->pictureBox11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(136, 200);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(96, 33);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox11->TabIndex = 15;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Tag = L"a";
			// 
			// pictureBox12
			// 
			this->pictureBox12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox12->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(136, 165);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(96, 33);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox12->TabIndex = 14;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Tag = L"a";
			// 
			// pictureBox13
			// 
			this->pictureBox13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox13->BackColor = System::Drawing::Color::Black;
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(136, 96);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(96, 33);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox13->TabIndex = 13;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Tag = L"a";
			// 
			// pictureBox14
			// 
			this->pictureBox14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox14->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(136, 130);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(96, 33);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox14->TabIndex = 12;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Tag = L"a";
			// 
			// pictureBox15
			// 
			this->pictureBox15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox15->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(249, 130);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(96, 33);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox15->TabIndex = 12;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Tag = L"a";
			// 
			// pictureBox16
			// 
			this->pictureBox16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox16->BackColor = System::Drawing::Color::Black;
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(249, 96);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(96, 33);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox16->TabIndex = 13;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Tag = L"a";
			// 
			// pictureBox17
			// 
			this->pictureBox17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox17->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(249, 165);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(96, 33);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox17->TabIndex = 14;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Tag = L"a";
			// 
			// pictureBox18
			// 
			this->pictureBox18->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox18->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(249, 200);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(96, 33);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox18->TabIndex = 15;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Tag = L"a";
			// 
			// pictureBox19
			// 
			this->pictureBox19->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox19->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(249, 234);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(96, 33);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox19->TabIndex = 16;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Tag = L"a";
			// 
			// pictureBox20
			// 
			this->pictureBox20->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox20->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(359, 234);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(96, 33);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox20->TabIndex = 21;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Tag = L"a";
			// 
			// pictureBox21
			// 
			this->pictureBox21->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox21->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(359, 200);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(96, 33);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox21->TabIndex = 20;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Tag = L"a";
			// 
			// pictureBox22
			// 
			this->pictureBox22->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox22->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(359, 165);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(96, 33);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox22->TabIndex = 19;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Tag = L"a";
			// 
			// pictureBox23
			// 
			this->pictureBox23->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox23->BackColor = System::Drawing::Color::Black;
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(359, 96);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(96, 33);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox23->TabIndex = 18;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Tag = L"a";
			// 
			// pictureBox24
			// 
			this->pictureBox24->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox24->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(359, 130);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(96, 33);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox24->TabIndex = 17;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Tag = L"a";
			// 
			// pictureBox25
			// 
			this->pictureBox25->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox25->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(473, 234);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(96, 33);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox25->TabIndex = 26;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Tag = L"a";
			// 
			// pictureBox26
			// 
			this->pictureBox26->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox26->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(473, 200);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(96, 33);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox26->TabIndex = 25;
			this->pictureBox26->TabStop = false;
			this->pictureBox26->Tag = L"a";
			// 
			// pictureBox27
			// 
			this->pictureBox27->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox27->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(473, 165);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(96, 33);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox27->TabIndex = 24;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->Tag = L"a";
			// 
			// pictureBox28
			// 
			this->pictureBox28->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox28->BackColor = System::Drawing::Color::Black;
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(473, 96);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(96, 33);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox28->TabIndex = 23;
			this->pictureBox28->TabStop = false;
			this->pictureBox28->Tag = L"a";
			// 
			// pictureBox29
			// 
			this->pictureBox29->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox29->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(473, 130);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(96, 33);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox29->TabIndex = 22;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->Tag = L"a";
			// 
			// pictureBox31
			// 
			this->pictureBox31->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox31->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(586, 234);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(96, 33);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox31->TabIndex = 32;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Tag = L"a";
			// 
			// pictureBox32
			// 
			this->pictureBox32->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox32->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(586, 200);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(96, 33);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox32->TabIndex = 31;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Tag = L"a";
			// 
			// pictureBox33
			// 
			this->pictureBox33->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox33->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(586, 165);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(96, 33);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox33->TabIndex = 30;
			this->pictureBox33->TabStop = false;
			this->pictureBox33->Tag = L"a";
			// 
			// pictureBox34
			// 
			this->pictureBox34->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox34->BackColor = System::Drawing::Color::Black;
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(586, 96);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(96, 33);
			this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox34->TabIndex = 29;
			this->pictureBox34->TabStop = false;
			this->pictureBox34->Tag = L"a";
			// 
			// pictureBox35
			// 
			this->pictureBox35->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox35->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(586, 130);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(96, 33);
			this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox35->TabIndex = 28;
			this->pictureBox35->TabStop = false;
			this->pictureBox35->Tag = L"a";
			// 
			// pictureBox36
			// 
			this->pictureBox36->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(256, 366);
			this->pictureBox36->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(150, 50);
			this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox36->TabIndex = 33;
			this->pictureBox36->TabStop = false;
			this->pictureBox36->Visible = false;
			this->pictureBox36->Click += gcnew System::EventHandler(this, &poziom1::pictureBox36_Click);
			// 
			// pictureBox30
			// 
			this->pictureBox30->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(161, 133);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(367, 134);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox30->TabIndex = 27;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->Visible = false;
			this->pictureBox30->Click += gcnew System::EventHandler(this, &poziom1::pictureBox30_Click);
			// 
			// poziom1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(704, 501);
			this->Controls->Add(this->pictureBox36);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->pictureBox32);
			this->Controls->Add(this->pictureBox33);
			this->Controls->Add(this->pictureBox34);
			this->Controls->Add(this->pictureBox35);
			this->Controls->Add(this->pictureBox30);
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
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"poziom1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Klotangle";
			this->Load += gcnew System::EventHandler(this, &poziom1::poziom1_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &poziom1::paletka);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &poziom1::poziom1_KeyUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		int x = 0;
		int y = 0;
		int punktacja = 0;//domyslnie przypisuje 0 pkt na start
		int proby = 2;//domyslnie przypisuje 2 proby na start (zawsze mozna zmienic)
		int cegielki= 0;//zmienna ktora odpowiada za zbijanie cegiel i ich zliczanie
#pragma endregion
		private: Void dzwiek(String^ muzyka)//funkcja odpowiedzialna za dzwiek przy rozbiciu klocka
		{
			try {
				System::Media::SoundPlayer^ wlacz = gcnew System::Media::SoundPlayer();
				wlacz->SoundLocation = muzyka;
				wlacz->Load();
				wlacz->Play();
			}
			catch (...)
			{
				MessageBox::Show("BRAK DWIEKU!", "Klotangle", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}


		}
		 private: Void klocki(System::Windows::Forms::Control^ klocek)//funkcja do zbijania cegie³
		 {
			 if ((pictureBox1->Top + pictureBox1->Height > klocek->Top)&&//uderzenie pileczki z gory
				 (pictureBox1->Top < klocek->Top + klocek->Height)&&//uderzenie pileczki z dolu
				 (pictureBox1->Left + pictureBox1->Width > klocek->Left)&&//uderzenie pileczki od lewej
				 (pictureBox1->Left < klocek->Left + klocek->Width)&&//uderzenie pileczki z prawej
				 (klocek->Visible == true))
			 {
				 y = -y;

				 klocek->Visible = false; //po trafieniu klocek znika
				 punktacja += 10;
				 cegielki++;
				 dzwiek("../dzwiek/zbicieklocka.wav");
			 }
			 label1->Text = "" + punktacja;
			 //warunek na rozbite cegly aby skonczyc gre
			 if (cegielki == 30)
			 {
				 timer1->Enabled = false;
				 pictureBox3->Visible = true;//przycisk restartu gry
				 pictureBox4->Visible = true;//przycisk nowej gry
				 pictureBox30->Visible = true;
				 pictureBox36->Visible = true;
				 pictureBox1->Visible = false;
				 pictureBox2->Visible = false;
				 cegielki = 0;//zerujemy wynik punktow w przypadku nowej gry po rozpoczeciu
			 }
		 }
   
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {


		for each (Control^ element in this->Controls)//zbijanie cegie³
		{
         
			if (element->Tag == "a")
			{
				klocki(element);
		    } 
		}

		pictureBox1->Left += x; //ruch pi³eczki w poziomie
		pictureBox1->Top += y; //ruch pi³eczki w pionie 
		//animacja odbicia od œcianek
		if (pictureBox1->Left >= poziom1::Width - pictureBox1->Width) //pi³eczka odbija siê od prawej œciany za spraw¹ u¿ycia w³aœciwoœci width(szerokoœæ)
		{
			x = -x;
		}
		if (pictureBox1->Top <= 75)//pi³eczka odbija siê od góry, 
		{
			y = -y;
		}
		if (pictureBox1->Left <=5)//pi³eczka siê odbija od lewej strony
		{
			x = -x;
		}
		//animacja paletki w prawo i lewo
		if ((kierunek == 'R') && (pictureBox2->Left < poziom1::Width-pictureBox2->Width-15))//tu jest ruch w prawo
		{
			pictureBox2->Left += 10;
			if (x == 0 && y == 0)
			{
				pictureBox1->Left += 10;
			}
		}
		if ((kierunek == 'L') && (pictureBox2->Left > 0 ))//tu jest ruch w lewo i warunek dla paletki > 0 powoduje ze forma nie wychodzi poza œcianki
		{
			pictureBox2->Left -= 10;
			if (x == 0 && y == 0)
			{
				pictureBox1->Left -= 10;
			}
		}
		//tutaj zakodowalem kolizje paletki
		if ((pictureBox1->Left > pictureBox2->Left) && (pictureBox1->Left < pictureBox2->Left + pictureBox2->Width) && (pictureBox1->Top + pictureBox1->Height > pictureBox2->Top))
		{
			y = -y;
		}//pi³eczka dzieki temu wykrywa paletke i moze siê od niej odbiæ 
		else if(pictureBox1->Top +pictureBox1->Height >= pictureBox2->Top + 5) //komunikat kiedy pileczka spadnie w dol pod paletke
		{
			timer1->Enabled = false;//wylaczamy zegar zeby program nie wybuch³
			pictureBox1->Enabled = false;
			proby -= 1;
			if (proby > 0)
			{
				MessageBox::Show("Pi³eczka spad³a", "Klotangle", MessageBoxButtons::OK, MessageBoxIcon::Information);

				pictureBox1->Top = pictureBox2->Top - pictureBox1->Height;
				pictureBox1->Left = pictureBox2->Left + pictureBox2->Width / 2;
				x = 0;
				y = 0;

				timer1->Enabled = true;
				pictureBox1->Enabled = true;
				
				label2->Text = "" + proby;
				spacja == false;
			}
			else
			{
				label2->Text = "Koniec:(";
				pictureBox3->Visible = true;
				pictureBox4->Visible = true;
				pictureBox36->Visible = true;
				pictureBox1->Visible = false;
				pictureBox2->Visible = false;
			}

		}
	}
//tutaj opisuje dzia³anie paletki za pomoc¹ klawiszy strza³ek w boki i spacji
		   char kierunek;
		   bool spacja = false;
private: System::Void paletka(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Left) 
	{
		kierunek = 'L';
	}	
	if (e->KeyCode == Keys::Right)
	{
		kierunek = 'R';
	}
	if ((e->KeyCode == Keys::Space)&&(spacja == false))//spacj¹ zaczynamy ruch pi³eczki
	{
		x = -5;//startuje w górê dlatego przypisa³em wartoœci ujemne, poniewa¿ wysokosc i szerokosc mierzymy od lewej i od gory w pixelach
		y = -5;
		spacja == true; //nie mozna kliknac spacji po rozpoczeciu gry
	}

}
	   //je¿eli nacisniemy klawisz strza³ki to paletka poruszy siê o podan¹ wartoœæ a nie bedzie poruszac siê ci¹gle
private: System::Void poziom1_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	kierunek = 'STOP'; //podalem tu przykladowy napis
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) { //restart gry
	proby = 2;
	punktacja = 0;

	label1->Text = "" + punktacja;
	label2->Text = "" + proby;
	pictureBox3->Visible = false;
	pictureBox4->Visible = false;
	pictureBox30->Visible = false;
	pictureBox36->Visible = false;

	pictureBox1->Top = pictureBox2->Top - pictureBox1->Height;
	pictureBox1->Left = pictureBox2->Left + pictureBox2->Width / 2;

	pictureBox1->Visible = true;
	pictureBox2->Visible = true;
	timer1->Enabled = true;

	x = 0;
	y = 0;

	spacja = false;

	for each (Control ^ elementy in this->Controls)
	{
		if (elementy->Tag == "a")
		{
			elementy->Visible = true;
		}
	}

}
private: System::Void pictureBox36_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		StreamWriter^ pliki1 = gcnew StreamWriter("Zapisane.txt",true);
		pliki1->WriteLine("PUNKTY POZIOM 1: " + punktacja, true);
		pliki1->Close();
	}
	catch (...)
	{
		MessageBox::Show("B³¹d zapisu! Nie mo¿na zapisaæ pliku.", "Klotangle", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void pictureBox30_Click(System::Object^ sender, System::EventArgs^ e) {
	//zapisanie wyniku z pierwszego poziomu w pliku
	//zabezpieczone na wypadek gdyby cos sie stalo z plikiem
	try {
		StreamWriter^ wynik = gcnew StreamWriter("Wyniki.txt");
		wynik->WriteLine("" +punktacja, true);
		wynik->Close();
		
	}
	catch (...)
	{
		MessageBox::Show("B³¹d pliku! Nie mo¿na znaleŸæ pliku!", "Klotangle", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	//wywolanie drugiej formatki z poziomem drugim
	//zabezpieczone przed bledem wywolania
	try {
		MyForm^ forma = gcnew MyForm;
		forma->Show();
		this->Close();
	}
	catch (...)
	{
		MessageBox::Show("B³¹d! Nie mo¿na wywo³aæ drugiego poziomu!", "Klotangle", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	

}
private: System::Void poziom1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
