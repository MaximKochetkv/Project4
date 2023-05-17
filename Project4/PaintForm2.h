#pragma once

namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	

	/// <summary>
	/// Ñâîäêà äëÿ PaintForm2
	/// </summary>
	public ref class PaintForm2 : public System::Windows::Forms::Form
	{
	public:
		PaintForm2(void);

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~PaintForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ äåéñòâèÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîçäàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõðàíèòüÊàêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïàíåëüÝëåìåíòîâToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îÏðîãðàììåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::GroupBox^ groupBoxToolbar;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownSize;
	private: System::Windows::Forms::Button^ buttonActiveTexture;
	private: System::Windows::Forms::Button^ buttonActiveCircle;
	private: System::Windows::Forms::Button^ buttonActiveSquare;
	private: System::Windows::Forms::Button^ buttonActiveLine;
	private: System::Windows::Forms::Button^ buttonApplySize;
	private: System::Windows::Forms::Button^ buttonClearCanvas;
	private: System::Windows::Forms::Button^ buttonColor;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBoxSettingsSquare;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownWidthSquare;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownHeightSquare;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBoxSettingsCircle;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownWidthCircle;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownHeightCircle;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::GroupBox^ groupBoxSettingsTexture;
	private: System::Windows::Forms::Button^ buttonChooseTexture;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownWidthTexture;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownHeightTexture;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ buttonApplyTexture;
	private: System::Windows::Forms::GroupBox^ groupBoxCreateProject;
	private: System::Windows::Forms::RadioButton^ radioButtonSetSize;
	private: System::Windows::Forms::RadioButton^ radioButtonOriginalSize;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownHeightForm;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownWidthForm;
	private: System::Windows::Forms::Button^ buttonOpenProject;
	private: System::Windows::Forms::Button^ buttonCreateNewProject;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::Button^ buttonCanvasColor;
	private: System::Windows::Forms::ColorDialog^ colorDialog2;


	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PaintForm2::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->äåéñòâèÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîçäàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõðàíèòüÊàêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïàíåëüÝëåìåíòîâToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÏðîãðàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBoxToolbar = (gcnew System::Windows::Forms::GroupBox());
			this->buttonCanvasColor = (gcnew System::Windows::Forms::Button());
			this->numericUpDownSize = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonActiveTexture = (gcnew System::Windows::Forms::Button());
			this->buttonActiveCircle = (gcnew System::Windows::Forms::Button());
			this->buttonActiveSquare = (gcnew System::Windows::Forms::Button());
			this->buttonActiveLine = (gcnew System::Windows::Forms::Button());
			this->buttonApplySize = (gcnew System::Windows::Forms::Button());
			this->buttonClearCanvas = (gcnew System::Windows::Forms::Button());
			this->buttonColor = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBoxSettingsSquare = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDownWidthSquare = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownHeightSquare = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBoxSettingsCircle = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDownWidthCircle = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownHeightCircle = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBoxSettingsTexture = (gcnew System::Windows::Forms::GroupBox());
			this->buttonChooseTexture = (gcnew System::Windows::Forms::Button());
			this->numericUpDownWidthTexture = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownHeightTexture = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->buttonApplyTexture = (gcnew System::Windows::Forms::Button());
			this->groupBoxCreateProject = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonSetSize = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonOriginalSize = (gcnew System::Windows::Forms::RadioButton());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownHeightForm = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownWidthForm = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonOpenProject = (gcnew System::Windows::Forms::Button());
			this->buttonCreateNewProject = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->colorDialog2 = (gcnew System::Windows::Forms::ColorDialog());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBoxToolbar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSize))->BeginInit();
			this->groupBoxSettingsSquare->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthSquare))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightSquare))->BeginInit();
			this->groupBoxSettingsCircle->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthCircle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightCircle))->BeginInit();
			this->groupBoxSettingsTexture->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthTexture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightTexture))->BeginInit();
			this->groupBoxCreateProject->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightForm))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthForm))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->äåéñòâèÿToolStripMenuItem,
					this->îÏðîãðàììåToolStripMenuItem, this->âûõîäToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1062, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// äåéñòâèÿToolStripMenuItem
			// 
			this->äåéñòâèÿToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->äåéñòâèÿToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ñîçäàòüToolStripMenuItem,
					this->ñîõðàíèòüÊàêToolStripMenuItem, this->ïàíåëüÝëåìåíòîâToolStripMenuItem
			});
			this->äåéñòâèÿToolStripMenuItem->Name = L"äåéñòâèÿToolStripMenuItem";
			this->äåéñòâèÿToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->äåéñòâèÿToolStripMenuItem->Text = L"Äåéñòâèÿ";
			// 
			// ñîçäàòüToolStripMenuItem
			// 
			this->ñîçäàòüToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ñîçäàòüToolStripMenuItem->Name = L"ñîçäàòüToolStripMenuItem";
			this->ñîçäàòüToolStripMenuItem->Size = System::Drawing::Size(178, 22);
			this->ñîçäàòüToolStripMenuItem->Text = L"Ñîçäàòü";
			this->ñîçäàòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm2::ñîçäàòüToolStripMenuItem_Click);
			// 
			// ñîõðàíèòüÊàêToolStripMenuItem
			// 
			this->ñîõðàíèòüÊàêToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ñîõðàíèòüÊàêToolStripMenuItem->Name = L"ñîõðàíèòüÊàêToolStripMenuItem";
			this->ñîõðàíèòüÊàêToolStripMenuItem->Size = System::Drawing::Size(178, 22);
			this->ñîõðàíèòüÊàêToolStripMenuItem->Text = L"Ñîõðàíèòü êàê";
			this->ñîõðàíèòüÊàêToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm2::ñîõðàíèòüÊàêToolStripMenuItem_Click);
			// 
			// ïàíåëüÝëåìåíòîâToolStripMenuItem
			// 
			this->ïàíåëüÝëåìåíòîâToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ïàíåëüÝëåìåíòîâToolStripMenuItem->Name = L"ïàíåëüÝëåìåíòîâToolStripMenuItem";
			this->ïàíåëüÝëåìåíòîâToolStripMenuItem->Size = System::Drawing::Size(178, 22);
			this->ïàíåëüÝëåìåíòîâToolStripMenuItem->Text = L"Ïàíåëü Ýëåìåíòîâ";
			this->ïàíåëüÝëåìåíòîâToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm2::ïàíåëüÝëåìåíòîâToolStripMenuItem_Click);
			// 
			// îÏðîãðàììåToolStripMenuItem
			// 
			this->îÏðîãðàììåToolStripMenuItem->Name = L"îÏðîãðàììåToolStripMenuItem";
			this->îÏðîãðàììåToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->îÏðîãðàììåToolStripMenuItem->Text = L"Î ïðîãðàììå";
			this->îÏðîãðàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm2::îÏðîãðàììåToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm2::âûõîäToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Cross;
			this->pictureBox1->Location = System::Drawing::Point(0, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1062, 541);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->SizeChanged += gcnew System::EventHandler(this, &PaintForm2::pictureBox1_SizeChanged);
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PaintForm2::pictureBox1_Paint);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &PaintForm2::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &PaintForm2::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &PaintForm2::pictureBox1_MouseUp);
			// 
			// groupBoxToolbar
			// 
			this->groupBoxToolbar->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->groupBoxToolbar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->groupBoxToolbar->Controls->Add(this->buttonCanvasColor);
			this->groupBoxToolbar->Controls->Add(this->numericUpDownSize);
			this->groupBoxToolbar->Controls->Add(this->buttonActiveTexture);
			this->groupBoxToolbar->Controls->Add(this->buttonActiveCircle);
			this->groupBoxToolbar->Controls->Add(this->buttonActiveSquare);
			this->groupBoxToolbar->Controls->Add(this->buttonActiveLine);
			this->groupBoxToolbar->Controls->Add(this->buttonApplySize);
			this->groupBoxToolbar->Controls->Add(this->buttonClearCanvas);
			this->groupBoxToolbar->Controls->Add(this->buttonColor);
			this->groupBoxToolbar->Controls->Add(this->label2);
			this->groupBoxToolbar->Controls->Add(this->label1);
			this->groupBoxToolbar->Location = System::Drawing::Point(0, 24);
			this->groupBoxToolbar->Name = L"groupBoxToolbar";
			this->groupBoxToolbar->Size = System::Drawing::Size(457, 116);
			this->groupBoxToolbar->TabIndex = 4;
			this->groupBoxToolbar->TabStop = false;
			this->groupBoxToolbar->Text = L"Ïàíåëü ýëåìåíòîâ";
			this->groupBoxToolbar->Visible = false;
			// 
			// buttonCanvasColor
			// 
			this->buttonCanvasColor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCanvasColor->Location = System::Drawing::Point(192, 44);
			this->buttonCanvasColor->Name = L"buttonCanvasColor";
			this->buttonCanvasColor->Size = System::Drawing::Size(84, 23);
			this->buttonCanvasColor->TabIndex = 10;
			this->buttonCanvasColor->Text = L"Öâåò Õîëñòà";
			this->buttonCanvasColor->UseVisualStyleBackColor = true;
			this->buttonCanvasColor->Click += gcnew System::EventHandler(this, &PaintForm2::buttonCanvasColor_Click);
			// 
			// numericUpDownSize
			// 
			this->numericUpDownSize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->numericUpDownSize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDownSize->Location = System::Drawing::Point(147, 74);
			this->numericUpDownSize->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownSize->Name = L"numericUpDownSize";
			this->numericUpDownSize->Size = System::Drawing::Size(46, 22);
			this->numericUpDownSize->TabIndex = 9;
			this->numericUpDownSize->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// buttonActiveTexture
			// 
			this->buttonActiveTexture->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonActiveTexture->Location = System::Drawing::Point(372, 73);
			this->buttonActiveTexture->Name = L"buttonActiveTexture";
			this->buttonActiveTexture->Size = System::Drawing::Size(75, 23);
			this->buttonActiveTexture->TabIndex = 8;
			this->buttonActiveTexture->Text = L"Òåêñòóðà";
			this->buttonActiveTexture->UseVisualStyleBackColor = true;
			this->buttonActiveTexture->Click += gcnew System::EventHandler(this, &PaintForm2::buttonActiveTexture_Click);
			// 
			// buttonActiveCircle
			// 
			this->buttonActiveCircle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonActiveCircle->Location = System::Drawing::Point(291, 74);
			this->buttonActiveCircle->Name = L"buttonActiveCircle";
			this->buttonActiveCircle->Size = System::Drawing::Size(75, 23);
			this->buttonActiveCircle->TabIndex = 7;
			this->buttonActiveCircle->Text = L"Êðóã";
			this->buttonActiveCircle->UseVisualStyleBackColor = true;
			this->buttonActiveCircle->Click += gcnew System::EventHandler(this, &PaintForm2::buttonActiveCircle_Click);
			// 
			// buttonActiveSquare
			// 
			this->buttonActiveSquare->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonActiveSquare->Location = System::Drawing::Point(372, 44);
			this->buttonActiveSquare->Name = L"buttonActiveSquare";
			this->buttonActiveSquare->Size = System::Drawing::Size(75, 23);
			this->buttonActiveSquare->TabIndex = 6;
			this->buttonActiveSquare->Text = L"Êâàäðàò";
			this->buttonActiveSquare->UseVisualStyleBackColor = true;
			this->buttonActiveSquare->Click += gcnew System::EventHandler(this, &PaintForm2::buttonActiveSquare_Click);
			// 
			// buttonActiveLine
			// 
			this->buttonActiveLine->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonActiveLine->Location = System::Drawing::Point(291, 44);
			this->buttonActiveLine->Name = L"buttonActiveLine";
			this->buttonActiveLine->Size = System::Drawing::Size(75, 23);
			this->buttonActiveLine->TabIndex = 5;
			this->buttonActiveLine->Text = L"Ëèíèÿ";
			this->buttonActiveLine->UseVisualStyleBackColor = true;
			this->buttonActiveLine->Click += gcnew System::EventHandler(this, &PaintForm2::buttonActiveLine_Click);
			// 
			// buttonApplySize
			// 
			this->buttonApplySize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->buttonApplySize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonApplySize->Location = System::Drawing::Point(21, 73);
			this->buttonApplySize->Name = L"buttonApplySize";
			this->buttonApplySize->Size = System::Drawing::Size(120, 23);
			this->buttonApplySize->TabIndex = 4;
			this->buttonApplySize->Text = L"Ïðèìåíèòü Ðàçìåð";
			this->buttonApplySize->UseVisualStyleBackColor = false;
			this->buttonApplySize->Click += gcnew System::EventHandler(this, &PaintForm2::buttonApplySize_Click);
			// 
			// buttonClearCanvas
			// 
			this->buttonClearCanvas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClearCanvas->Location = System::Drawing::Point(102, 44);
			this->buttonClearCanvas->Name = L"buttonClearCanvas";
			this->buttonClearCanvas->Size = System::Drawing::Size(75, 23);
			this->buttonClearCanvas->TabIndex = 3;
			this->buttonClearCanvas->Text = L"Î÷èñòèòü";
			this->buttonClearCanvas->UseVisualStyleBackColor = true;
			this->buttonClearCanvas->Click += gcnew System::EventHandler(this, &PaintForm2::buttonClearCanvas_Click);
			// 
			// buttonColor
			// 
			this->buttonColor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonColor->Location = System::Drawing::Point(21, 44);
			this->buttonColor->Name = L"buttonColor";
			this->buttonColor->Size = System::Drawing::Size(75, 23);
			this->buttonColor->TabIndex = 2;
			this->buttonColor->Text = L"Öâåò";
			this->buttonColor->UseVisualStyleBackColor = true;
			this->buttonColor->Click += gcnew System::EventHandler(this, &PaintForm2::buttonColor_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(318, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ôèãóðû";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(16, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(204, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ïàðàìåòðû êèñòè";
			// 
			// groupBoxSettingsSquare
			// 
			this->groupBoxSettingsSquare->AutoSize = true;
			this->groupBoxSettingsSquare->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBoxSettingsSquare->Controls->Add(this->numericUpDownWidthSquare);
			this->groupBoxSettingsSquare->Controls->Add(this->numericUpDownHeightSquare);
			this->groupBoxSettingsSquare->Controls->Add(this->label4);
			this->groupBoxSettingsSquare->Controls->Add(this->label3);
			this->groupBoxSettingsSquare->Location = System::Drawing::Point(825, 192);
			this->groupBoxSettingsSquare->Name = L"groupBoxSettingsSquare";
			this->groupBoxSettingsSquare->Size = System::Drawing::Size(210, 114);
			this->groupBoxSettingsSquare->TabIndex = 5;
			this->groupBoxSettingsSquare->TabStop = false;
			this->groupBoxSettingsSquare->Text = L"Íàñòðîéêè Êâàäðàòà";
			this->groupBoxSettingsSquare->Visible = false;
			// 
			// numericUpDownWidthSquare
			// 
			this->numericUpDownWidthSquare->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->numericUpDownWidthSquare->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDownWidthSquare->Location = System::Drawing::Point(28, 51);
			this->numericUpDownWidthSquare->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownWidthSquare->Name = L"numericUpDownWidthSquare";
			this->numericUpDownWidthSquare->Size = System::Drawing::Size(56, 22);
			this->numericUpDownWidthSquare->TabIndex = 4;
			this->numericUpDownWidthSquare->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDownHeightSquare
			// 
			this->numericUpDownHeightSquare->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->numericUpDownHeightSquare->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDownHeightSquare->Location = System::Drawing::Point(128, 51);
			this->numericUpDownHeightSquare->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownHeightSquare->Name = L"numericUpDownHeightSquare";
			this->numericUpDownHeightSquare->Size = System::Drawing::Size(51, 22);
			this->numericUpDownHeightSquare->TabIndex = 3;
			this->numericUpDownHeightSquare->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(124, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 20);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Âûñîòà";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(26, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 20);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Øèðèíà";
			// 
			// groupBoxSettingsCircle
			// 
			this->groupBoxSettingsCircle->AutoSize = true;
			this->groupBoxSettingsCircle->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->groupBoxSettingsCircle->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBoxSettingsCircle->Controls->Add(this->numericUpDownWidthCircle);
			this->groupBoxSettingsCircle->Controls->Add(this->numericUpDownHeightCircle);
			this->groupBoxSettingsCircle->Controls->Add(this->label7);
			this->groupBoxSettingsCircle->Controls->Add(this->label8);
			this->groupBoxSettingsCircle->Location = System::Drawing::Point(488, 38);
			this->groupBoxSettingsCircle->Name = L"groupBoxSettingsCircle";
			this->groupBoxSettingsCircle->Size = System::Drawing::Size(196, 92);
			this->groupBoxSettingsCircle->TabIndex = 7;
			this->groupBoxSettingsCircle->TabStop = false;
			this->groupBoxSettingsCircle->Text = L"Íàñòðîéêè êðóãà";
			this->groupBoxSettingsCircle->Visible = false;
			// 
			// numericUpDownWidthCircle
			// 
			this->numericUpDownWidthCircle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->numericUpDownWidthCircle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDownWidthCircle->Location = System::Drawing::Point(28, 51);
			this->numericUpDownWidthCircle->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownWidthCircle->Name = L"numericUpDownWidthCircle";
			this->numericUpDownWidthCircle->Size = System::Drawing::Size(56, 22);
			this->numericUpDownWidthCircle->TabIndex = 4;
			this->numericUpDownWidthCircle->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDownHeightCircle
			// 
			this->numericUpDownHeightCircle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->numericUpDownHeightCircle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDownHeightCircle->Location = System::Drawing::Point(128, 51);
			this->numericUpDownHeightCircle->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownHeightCircle->Name = L"numericUpDownHeightCircle";
			this->numericUpDownHeightCircle->Size = System::Drawing::Size(51, 22);
			this->numericUpDownHeightCircle->TabIndex = 3;
			this->numericUpDownHeightCircle->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(124, 20);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 20);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Âûñîòà";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(26, 20);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(67, 20);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Øèðèíà";
			// 
			// groupBoxSettingsTexture
			// 
			this->groupBoxSettingsTexture->AutoSize = true;
			this->groupBoxSettingsTexture->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBoxSettingsTexture->Controls->Add(this->buttonChooseTexture);
			this->groupBoxSettingsTexture->Controls->Add(this->numericUpDownWidthTexture);
			this->groupBoxSettingsTexture->Controls->Add(this->numericUpDownHeightTexture);
			this->groupBoxSettingsTexture->Controls->Add(this->label5);
			this->groupBoxSettingsTexture->Controls->Add(this->label6);
			this->groupBoxSettingsTexture->Controls->Add(this->buttonApplyTexture);
			this->groupBoxSettingsTexture->Location = System::Drawing::Point(825, 38);
			this->groupBoxSettingsTexture->Name = L"groupBoxSettingsTexture";
			this->groupBoxSettingsTexture->Size = System::Drawing::Size(210, 121);
			this->groupBoxSettingsTexture->TabIndex = 8;
			this->groupBoxSettingsTexture->TabStop = false;
			this->groupBoxSettingsTexture->Text = L"Íàñòðîéêè Òåêñòóðû";
			this->groupBoxSettingsTexture->Visible = false;
			// 
			// buttonChooseTexture
			// 
			this->buttonChooseTexture->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->buttonChooseTexture->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonChooseTexture->Location = System::Drawing::Point(16, 79);
			this->buttonChooseTexture->Name = L"buttonChooseTexture";
			this->buttonChooseTexture->Size = System::Drawing::Size(75, 23);
			this->buttonChooseTexture->TabIndex = 5;
			this->buttonChooseTexture->Text = L"Âûáðàòü";
			this->buttonChooseTexture->UseVisualStyleBackColor = false;
			this->buttonChooseTexture->Click += gcnew System::EventHandler(this, &PaintForm2::buttonChooseTexture_Click);
			// 
			// numericUpDownWidthTexture
			// 
			this->numericUpDownWidthTexture->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->numericUpDownWidthTexture->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDownWidthTexture->Location = System::Drawing::Point(28, 51);
			this->numericUpDownWidthTexture->Name = L"numericUpDownWidthTexture";
			this->numericUpDownWidthTexture->Size = System::Drawing::Size(56, 22);
			this->numericUpDownWidthTexture->TabIndex = 4;
			// 
			// numericUpDownHeightTexture
			// 
			this->numericUpDownHeightTexture->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->numericUpDownHeightTexture->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDownHeightTexture->Location = System::Drawing::Point(128, 51);
			this->numericUpDownHeightTexture->Name = L"numericUpDownHeightTexture";
			this->numericUpDownHeightTexture->Size = System::Drawing::Size(51, 22);
			this->numericUpDownHeightTexture->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(124, 20);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 20);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Âûñîòà";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(26, 20);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 20);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Øèðèíà";
			// 
			// buttonApplyTexture
			// 
			this->buttonApplyTexture->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->buttonApplyTexture->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonApplyTexture->Location = System::Drawing::Point(116, 79);
			this->buttonApplyTexture->Name = L"buttonApplyTexture";
			this->buttonApplyTexture->Size = System::Drawing::Size(75, 23);
			this->buttonApplyTexture->TabIndex = 0;
			this->buttonApplyTexture->Text = L"Ïðèìåíèòü";
			this->buttonApplyTexture->UseVisualStyleBackColor = false;
			this->buttonApplyTexture->Click += gcnew System::EventHandler(this, &PaintForm2::buttonApplyTexture_Click);
			// 
			// groupBoxCreateProject
			// 
			this->groupBoxCreateProject->AutoSize = true;
			this->groupBoxCreateProject->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->groupBoxCreateProject->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->groupBoxCreateProject->Controls->Add(this->radioButtonSetSize);
			this->groupBoxCreateProject->Controls->Add(this->radioButtonOriginalSize);
			this->groupBoxCreateProject->Controls->Add(this->label11);
			this->groupBoxCreateProject->Controls->Add(this->numericUpDownHeightForm);
			this->groupBoxCreateProject->Controls->Add(this->numericUpDownWidthForm);
			this->groupBoxCreateProject->Controls->Add(this->buttonOpenProject);
			this->groupBoxCreateProject->Controls->Add(this->buttonCreateNewProject);
			this->groupBoxCreateProject->Controls->Add(this->label9);
			this->groupBoxCreateProject->Controls->Add(this->label10);
			this->groupBoxCreateProject->Location = System::Drawing::Point(393, 212);
			this->groupBoxCreateProject->Name = L"groupBoxCreateProject";
			this->groupBoxCreateProject->Size = System::Drawing::Size(322, 154);
			this->groupBoxCreateProject->TabIndex = 9;
			this->groupBoxCreateProject->TabStop = false;
			this->groupBoxCreateProject->Text = L"Ñîçäàòü ïðîåêò";
			// 
			// radioButtonSetSize
			// 
			this->radioButtonSetSize->AutoSize = true;
			this->radioButtonSetSize->Location = System::Drawing::Point(240, 104);
			this->radioButtonSetSize->Name = L"radioButtonSetSize";
			this->radioButtonSetSize->Size = System::Drawing::Size(76, 17);
			this->radioButtonSetSize->TabIndex = 11;
			this->radioButtonSetSize->TabStop = true;
			this->radioButtonSetSize->Text = L"Çàäàííûé";
			this->radioButtonSetSize->UseVisualStyleBackColor = true;
			// 
			// radioButtonOriginalSize
			// 
			this->radioButtonOriginalSize->AutoSize = true;
			this->radioButtonOriginalSize->Location = System::Drawing::Point(135, 104);
			this->radioButtonOriginalSize->Name = L"radioButtonOriginalSize";
			this->radioButtonOriginalSize->Size = System::Drawing::Size(76, 17);
			this->radioButtonOriginalSize->TabIndex = 10;
			this->radioButtonOriginalSize->TabStop = true;
			this->radioButtonOriginalSize->Text = L"Èñõîäíûé";
			this->radioButtonOriginalSize->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(164, 81);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(111, 20);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Ðàçìåð ôîíà";
			// 
			// numericUpDownHeightForm
			// 
			this->numericUpDownHeightForm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->numericUpDownHeightForm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDownHeightForm->Location = System::Drawing::Point(240, 45);
			this->numericUpDownHeightForm->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownHeightForm->Name = L"numericUpDownHeightForm";
			this->numericUpDownHeightForm->Size = System::Drawing::Size(56, 22);
			this->numericUpDownHeightForm->TabIndex = 8;
			this->numericUpDownHeightForm->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDownWidthForm
			// 
			this->numericUpDownWidthForm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->numericUpDownWidthForm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDownWidthForm->Location = System::Drawing::Point(152, 45);
			this->numericUpDownWidthForm->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownWidthForm->Name = L"numericUpDownWidthForm";
			this->numericUpDownWidthForm->Size = System::Drawing::Size(56, 22);
			this->numericUpDownWidthForm->TabIndex = 7;
			this->numericUpDownWidthForm->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// buttonOpenProject
			// 
			this->buttonOpenProject->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->buttonOpenProject->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonOpenProject->Location = System::Drawing::Point(16, 88);
			this->buttonOpenProject->Name = L"buttonOpenProject";
			this->buttonOpenProject->Size = System::Drawing::Size(112, 47);
			this->buttonOpenProject->TabIndex = 6;
			this->buttonOpenProject->Text = L"Îòêðûòü";
			this->buttonOpenProject->UseVisualStyleBackColor = false;
			this->buttonOpenProject->Click += gcnew System::EventHandler(this, &PaintForm2::buttonOpenProject_Click);
			// 
			// buttonCreateNewProject
			// 
			this->buttonCreateNewProject->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->buttonCreateNewProject->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCreateNewProject->Location = System::Drawing::Point(16, 19);
			this->buttonCreateNewProject->Name = L"buttonCreateNewProject";
			this->buttonCreateNewProject->Size = System::Drawing::Size(112, 48);
			this->buttonCreateNewProject->TabIndex = 5;
			this->buttonCreateNewProject->Text = L"Ñîçäàòü";
			this->buttonCreateNewProject->UseVisualStyleBackColor = false;
			this->buttonCreateNewProject->Click += gcnew System::EventHandler(this, &PaintForm2::buttonCreateNewProject_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(236, 16);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(66, 20);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Âûñîòà";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(148, 16);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 20);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Øèðèíà";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// PaintForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1062, 565);
			this->Controls->Add(this->groupBoxCreateProject);
			this->Controls->Add(this->groupBoxSettingsTexture);
			this->Controls->Add(this->groupBoxSettingsCircle);
			this->Controls->Add(this->groupBoxSettingsSquare);
			this->Controls->Add(this->groupBoxToolbar);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"PaintForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Graphika";
			this->Load += gcnew System::EventHandler(this, &PaintForm2::PaintForm2_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBoxToolbar->ResumeLayout(false);
			this->groupBoxToolbar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSize))->EndInit();
			this->groupBoxSettingsSquare->ResumeLayout(false);
			this->groupBoxSettingsSquare->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthSquare))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightSquare))->EndInit();
			this->groupBoxSettingsCircle->ResumeLayout(false);
			this->groupBoxSettingsCircle->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthCircle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightCircle))->EndInit();
			this->groupBoxSettingsTexture->ResumeLayout(false);
			this->groupBoxSettingsTexture->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthTexture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightTexture))->EndInit();
			this->groupBoxCreateProject->ResumeLayout(false);
			this->groupBoxCreateProject->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightForm))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthForm))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			Graphics^ canvas;//ïîëîòíî
			Graphics^ Container;
			List <Point>^ points;//òî÷êè
			Pen^ pen;//ïåðî
			bool draw;//ïðîâåðêà
			Bitmap^ background;//ôîí
			Color color;
			Color backcolor;
			Bitmap^ texture;
			float size;
			bool clearAll, Remove;
			String^ filename;
			int statePen;
			// 1 ëèíèÿ 2- êâàäðàò 3- êðóã 4- òåêñòóðà





private: System::Void ñîçäàòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ñîõðàíèòüÊàêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ïàíåëüÝëåìåíòîâToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void îÏðîãðàììåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonColor_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonClearCanvas_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonApplySize_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonActiveLine_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonActiveSquare_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonActiveCircle_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonActiveTexture_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonChooseTexture_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonApplyTexture_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonCreateNewProject_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonOpenProject_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void pictureBox1_SizeChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void PaintForm2_Load(System::Object^ sender, System::EventArgs^ e);
private:Void DrawBackground();
private: System::Void buttonCanvasColor_Click(System::Object^ sender, System::EventArgs^ e);
//private: System::Void buttonRemove_Click(System::Object^ sender, System::EventArgs^ e);

};
}
