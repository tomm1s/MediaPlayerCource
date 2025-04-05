#pragma once

#include "frmAbout.h"
#include <Windows.h>
#include "MediaPlayer.h"

namespace OSmetod {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace AxWMPLib;

	/// <summary>
	/// Summary for frmMain
	/// </summary>
	public ref class frmMain : public System::Windows::Forms::Form
	{
	public:
		frmMain(void)
		{
			InitializeComponent();
			
			//
			//TODO: Add the constructor code here
			//
			mediaPlayer = gcnew MediaPlayer(this->axWindowsMediaPlayer1);
//			axWindowsMediaPlayer1->PositionChange += gcnew AxWMPLib::_WMPOCXEvents_PositionChangeEventHandler(this, &frmMain::domediaposchange);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: bool isTrackBar2Scrolling = false;
	private: System::Windows::Forms::MenuStrip^ mnsMain;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiFile;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiNew;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiLoad;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiSave;
	protected:

	protected:
	private: System::Windows::Forms::ToolStripSeparator^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiClose;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiProcess;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiStart;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiStop;
	private: System::Windows::Forms::ToolStripMenuItem^ tmsiParams;
	private: System::Windows::Forms::ToolStripMenuItem^ tmsiInfo;
	private: System::Windows::Forms::ToolStripMenuItem^ tmsiHelp;
	private: System::Windows::Forms::ToolStripMenuItem^ tmsiAbout;



	private: System::Windows::Forms::ToolStrip^ tsMain;
	private: System::Windows::Forms::ToolStripButton^ tsbNew;
	private: System::Windows::Forms::ToolStripButton^ tsbOpen;
	private: System::Windows::Forms::ToolStripButton^ tsbSave;




	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^ tsbExecute;
	private: System::Windows::Forms::ToolStripButton^ tsbCancel;


	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripButton^ tsbAbout;

	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::StatusStrip^ stMain;
	private: System::Windows::Forms::ToolStripStatusLabel^ tslInfo;
	private: System::Windows::Forms::ToolStripProgressBar^ tspMain;

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripButton^ tsbexit;
	private: System::Windows::Forms::ToolStripButton^ tsbInfo;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip3;
	private: AxWMPLib::AxWindowsMediaPlayer^ axWindowsMediaPlayer1;
	private: MediaPlayer^ mediaPlayer;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ Play_button;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::TrackBar^ trackBar2;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMain::typeid));
			this->mnsMain = (gcnew System::Windows::Forms::MenuStrip());
			this->tsmiFile = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiNew = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiLoad = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiSave = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tsmiClose = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiProcess = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiStart = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiStop = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tmsiParams = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tmsiInfo = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tmsiHelp = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tmsiAbout = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsMain = (gcnew System::Windows::Forms::ToolStrip());
			this->tsbNew = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbOpen = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbSave = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tsbExecute = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbCancel = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tsbAbout = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbexit = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbInfo = (gcnew System::Windows::Forms::ToolStripButton());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->stMain = (gcnew System::Windows::Forms::StatusStrip());
			this->tslInfo = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->tspMain = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStrip3 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Play_button = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->mnsMain->SuspendLayout();
			this->tsMain->SuspendLayout();
			this->stMain->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// mnsMain
			// 
			this->mnsMain->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->tsmiFile, this->tsmiProcess,
					this->tmsiInfo
			});
			this->mnsMain->Location = System::Drawing::Point(0, 0);
			this->mnsMain->Name = L"mnsMain";
			this->mnsMain->Size = System::Drawing::Size(768, 24);
			this->mnsMain->TabIndex = 0;
			this->mnsMain->Text = L"menuStrip1";
			// 
			// tsmiFile
			// 
			this->tsmiFile->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->tsmiNew, this->tsmiLoad,
					this->tsmiSave, this->toolStripMenuItem1, this->tsmiClose
			});
			this->tsmiFile->Name = L"tsmiFile";
			this->tsmiFile->Size = System::Drawing::Size(48, 20);
			this->tsmiFile->Text = L"Файл";
			// 
			// tsmiNew
			// 
			this->tsmiNew->Name = L"tsmiNew";
			this->tsmiNew->Size = System::Drawing::Size(124, 22);
			this->tsmiNew->Text = L"Новий";
			this->tsmiNew->Click += gcnew System::EventHandler(this, &frmMain::tsbNew_Click);
			// 
			// tsmiLoad
			// 
			this->tsmiLoad->Name = L"tsmiLoad";
			this->tsmiLoad->Size = System::Drawing::Size(124, 22);
			this->tsmiLoad->Text = L"Відкрити";
			this->tsmiLoad->Click += gcnew System::EventHandler(this, &frmMain::tsmiLoad_Click);
			// 
			// tsmiSave
			// 
			this->tsmiSave->Name = L"tsmiSave";
			this->tsmiSave->Size = System::Drawing::Size(124, 22);
			this->tsmiSave->Text = L"Зберегти";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(121, 6);
			// 
			// tsmiClose
			// 
			this->tsmiClose->Name = L"tsmiClose";
			this->tsmiClose->Size = System::Drawing::Size(124, 22);
			this->tsmiClose->Text = L"Закрити";
			this->tsmiClose->Click += gcnew System::EventHandler(this, &frmMain::tsbexit_Click);
			// 
			// tsmiProcess
			// 
			this->tsmiProcess->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->tsmiStart,
					this->tsmiStop, this->tmsiParams
			});
			this->tsmiProcess->Name = L"tsmiProcess";
			this->tsmiProcess->Size = System::Drawing::Size(61, 20);
			this->tsmiProcess->Text = L"Процес";
			// 
			// tsmiStart
			// 
			this->tsmiStart->Name = L"tsmiStart";
			this->tsmiStart->Size = System::Drawing::Size(136, 22);
			this->tsmiStart->Text = L"Почати";
			// 
			// tsmiStop
			// 
			this->tsmiStop->Name = L"tsmiStop";
			this->tsmiStop->Size = System::Drawing::Size(136, 22);
			this->tsmiStop->Text = L"Зупинити";
			// 
			// tmsiParams
			// 
			this->tmsiParams->Name = L"tmsiParams";
			this->tmsiParams->Size = System::Drawing::Size(136, 22);
			this->tmsiParams->Text = L"Параметри";
			// 
			// tmsiInfo
			// 
			this->tmsiInfo->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->tmsiHelp, this->tmsiAbout });
			this->tmsiInfo->Name = L"tmsiInfo";
			this->tmsiInfo->Size = System::Drawing::Size(83, 20);
			this->tmsiInfo->Text = L"Інформація";
			// 
			// tmsiHelp
			// 
			this->tmsiHelp->Name = L"tmsiHelp";
			this->tmsiHelp->Size = System::Drawing::Size(154, 22);
			this->tmsiHelp->Text = L"Допомога";
			// 
			// tmsiAbout
			// 
			this->tmsiAbout->Name = L"tmsiAbout";
			this->tmsiAbout->Size = System::Drawing::Size(154, 22);
			this->tmsiAbout->Text = L"Про програму";
			this->tmsiAbout->Click += gcnew System::EventHandler(this, &frmMain::tmsiAbout_Click);
			// 
			// tsMain
			// 
			this->tsMain->ImageScalingSize = System::Drawing::Size(32, 32);
			this->tsMain->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->tsbNew, this->tsbOpen,
					this->tsbSave, this->toolStripSeparator1, this->tsbExecute, this->tsbCancel, this->toolStripSeparator2, this->tsbAbout, this->tsbexit,
					this->tsbInfo
			});
			this->tsMain->Location = System::Drawing::Point(0, 24);
			this->tsMain->Name = L"tsMain";
			this->tsMain->Size = System::Drawing::Size(768, 39);
			this->tsMain->TabIndex = 1;
			// 
			// tsbNew
			// 
			this->tsbNew->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbNew->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbNew.Image")));
			this->tsbNew->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbNew->Name = L"tsbNew";
			this->tsbNew->Size = System::Drawing::Size(36, 36);
			this->tsbNew->Text = L"Новий";
			this->tsbNew->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->tsbNew->Click += gcnew System::EventHandler(this, &frmMain::tsbNew_Click);
			// 
			// tsbOpen
			// 
			this->tsbOpen->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbOpen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbOpen.Image")));
			this->tsbOpen->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbOpen->Name = L"tsbOpen";
			this->tsbOpen->Size = System::Drawing::Size(36, 36);
			this->tsbOpen->Text = L"toolStripButton4";
			this->tsbOpen->Click += gcnew System::EventHandler(this, &frmMain::tsbOpen_Click);
			// 
			// tsbSave
			// 
			this->tsbSave->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbSave->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbSave.Image")));
			this->tsbSave->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbSave->Name = L"tsbSave";
			this->tsbSave->Size = System::Drawing::Size(36, 36);
			this->tsbSave->Text = L"toolStripButton3";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 39);
			// 
			// tsbExecute
			// 
			this->tsbExecute->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbExecute->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbExecute.Image")));
			this->tsbExecute->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbExecute->Name = L"tsbExecute";
			this->tsbExecute->Size = System::Drawing::Size(36, 36);
			this->tsbExecute->Text = L"toolStripButton5";
			this->tsbExecute->Click += gcnew System::EventHandler(this, &frmMain::tsbExecute_Click);
			// 
			// tsbCancel
			// 
			this->tsbCancel->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbCancel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbCancel.Image")));
			this->tsbCancel->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbCancel->Name = L"tsbCancel";
			this->tsbCancel->Size = System::Drawing::Size(36, 36);
			this->tsbCancel->Text = L"toolStripButton6";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 39);
			// 
			// tsbAbout
			// 
			this->tsbAbout->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbAbout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbAbout.Image")));
			this->tsbAbout->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->tsbAbout->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbAbout->Name = L"tsbAbout";
			this->tsbAbout->Size = System::Drawing::Size(36, 36);
			this->tsbAbout->Text = L"toolStripButton1";
			this->tsbAbout->Click += gcnew System::EventHandler(this, &frmMain::tmsiAbout_Click);
			// 
			// tsbexit
			// 
			this->tsbexit->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbexit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbexit.Image")));
			this->tsbexit->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbexit->Name = L"tsbexit";
			this->tsbexit->Size = System::Drawing::Size(36, 36);
			this->tsbexit->Text = L"Start";
			this->tsbexit->ToolTipText = L"Example";
			this->tsbexit->Click += gcnew System::EventHandler(this, &frmMain::tsbexit_Click);
			// 
			// tsbInfo
			// 
			this->tsbInfo->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbInfo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbInfo.Image")));
			this->tsbInfo->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbInfo->Name = L"tsbInfo";
			this->tsbInfo->Size = System::Drawing::Size(36, 36);
			this->tsbInfo->Text = L"Info";
			this->tsbInfo->Click += gcnew System::EventHandler(this, &frmMain::tsbInfo_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"document_empty.png");
			this->imageList1->Images->SetKeyName(1, L"folder.png");
			this->imageList1->Images->SetKeyName(2, L"disk.png");
			this->imageList1->Images->SetKeyName(3, L"control_play_blue.png");
			this->imageList1->Images->SetKeyName(4, L"control_stop_blue.png");
			this->imageList1->Images->SetKeyName(5, L"information.png");
			// 
			// stMain
			// 
			this->stMain->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->tslInfo, this->tspMain });
			this->stMain->Location = System::Drawing::Point(0, 481);
			this->stMain->Name = L"stMain";
			this->stMain->Size = System::Drawing::Size(768, 22);
			this->stMain->TabIndex = 2;
			this->stMain->Text = L"statusStrip1";
			// 
			// tslInfo
			// 
			this->tslInfo->AutoSize = false;
			this->tslInfo->Name = L"tslInfo";
			this->tslInfo->Size = System::Drawing::Size(120, 17);
			this->tslInfo->Text = L"Інформація";
			this->tslInfo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tspMain
			// 
			this->tspMain->Name = L"tspMain";
			this->tspMain->Size = System::Drawing::Size(100, 16);
			this->tspMain->Click += gcnew System::EventHandler(this, &frmMain::tspMain_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(61, 4);
			// 
			// contextMenuStrip3
			// 
			this->contextMenuStrip3->Name = L"contextMenuStrip3";
			this->contextMenuStrip3->Size = System::Drawing::Size(61, 4);
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(0, 0);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(768, 418);
			this->axWindowsMediaPlayer1->TabIndex = 0;
			this->axWindowsMediaPlayer1->OpenStateChange += gcnew AxWMPLib::_WMPOCXEvents_OpenStateChangeEventHandler(this, &frmMain::axWindowsMediaPlayer1_OpenStateChange);
			this->axWindowsMediaPlayer1->PositionChange += gcnew AxWMPLib::_WMPOCXEvents_PositionChangeEventHandler(this, &frmMain::domediaposchange);
			this->axWindowsMediaPlayer1->MediaChange += gcnew AxWMPLib::_WMPOCXEvents_MediaChangeEventHandler(this, &frmMain::axWindowsMediaPlayer1_MediaChange);
			this->axWindowsMediaPlayer1->Enter += gcnew System::EventHandler(this, &frmMain::axWindowsMediaPlayer1_Enter_1);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->flowLayoutPanel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->flowLayoutPanel1->Controls->Add(this->Play_button);
			this->flowLayoutPanel1->Controls->Add(this->button2);
			this->flowLayoutPanel1->Controls->Add(this->button3);
			this->flowLayoutPanel1->Controls->Add(this->button4);
			this->flowLayoutPanel1->Controls->Add(this->button5);
			this->flowLayoutPanel1->Controls->Add(this->trackBar1);
			this->flowLayoutPanel1->Controls->Add(this->trackBar2);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 386);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(768, 32);
			this->flowLayoutPanel1->TabIndex = 6;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmMain::flowLayoutPanel1_Paint);
			// 
			// Play_button
			// 
			this->Play_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Play_button.BackgroundImage")));
			this->Play_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Play_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Play_button->Location = System::Drawing::Point(3, 3);
			this->Play_button->Name = L"Play_button";
			this->Play_button->Size = System::Drawing::Size(48, 23);
			this->Play_button->TabIndex = 1;
			this->Play_button->UseVisualStyleBackColor = true;
			this->Play_button->Click += gcnew System::EventHandler(this, &frmMain::Play_button_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->Location = System::Drawing::Point(57, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 23);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMain::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(119, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Stop";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMain::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(200, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Mute";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMain::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(281, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// trackBar1
			// 
			this->trackBar1->AutoSize = false;
			this->trackBar1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->trackBar1->Location = System::Drawing::Point(362, 3);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(104, 23);
			this->trackBar1->TabIndex = 6;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &frmMain::trackBar1_Scroll);
			// 
			// trackBar2
			// 
			this->trackBar2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->trackBar2->Location = System::Drawing::Point(472, 3);
			this->trackBar2->Maximum = 100;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(104, 23);
			this->trackBar2->TabIndex = 7;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &frmMain::trackBar2_Scroll);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->flowLayoutPanel1);
			this->panel1->Controls->Add(this->axWindowsMediaPlayer1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 63);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(768, 418);
			this->panel1->TabIndex = 3;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &frmMain::timer1_Tick);
			// 
			// frmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(768, 503);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->stMain);
			this->Controls->Add(this->tsMain);
			this->Controls->Add(this->mnsMain);
			this->MainMenuStrip = this->mnsMain;
			this->Name = L"frmMain";
			this->Text = L"Головна форма";
			this->Load += gcnew System::EventHandler(this, &frmMain::frmMain_Load);
			this->mnsMain->ResumeLayout(false);
			this->mnsMain->PerformLayout();
			this->tsMain->ResumeLayout(false);
			this->tsMain->PerformLayout();
			this->stMain->ResumeLayout(false);
			this->stMain->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->EndInit();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: frmAbout^ frmabout;
			   double duration = 0.0;

	private: System::Void tmsiAbout_Click(System::Object^ sender, System::EventArgs^ e) {
		frmabout->ShowDialog();
	}
private: System::Void tsbExecute_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void tsbNew_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("New document!");
}
private: System::Void tsbexit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void tsbInfo_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Information");
}
private: System::Void frmMain_Load(System::Object^ sender, System::EventArgs^ e) {
	frmabout = gcnew frmAbout();
}
private: System::Void axWindowsMediaPlayer1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	mediaPlayer->Pause();
}
private: System::Void axWindowsMediaPlayer1_Enter_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Play_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mediaPlayer != nullptr) {
		timer1->Interval = 1000; // На вся випадок явно задаємо інтервал
		timer1->Enabled = true;
		mediaPlayer->Play();
	}
}
private: System::Void tsmiLoad_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mediaPlayer != nullptr) {
		timer1->Interval = 1000; // На вся випадок явно задаємо інтервал
		timer1->Enabled = true;
		mediaPlayer->Play();
	}
}
private: System::Void tsbOpen_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mediaPlayer != nullptr) {
		mediaPlayer->OpenAndPlayVideo();
	}

}
private: System::Void tspMain_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mediaPlayer != nullptr) {
		timer1->Stop();
		mediaPlayer->Stop();
		tspMain->Value = 0;
		trackBar2->Value = 0;
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mediaPlayer != nullptr) {
		mediaPlayer->ToggleMute();
		// Update button appearance based on mute state
		if (mediaPlayer->IsMuted()) {
			button4->Text = L"Unmute";
		}
		else {
			button4->Text = L"Mute";
		}
	}
}



private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
	mediaPlayer->Volume = trackBar1->Value;
}
	   void domediaposchange(System::Object^ sender, AxWMPLib::_WMPOCXEvents_PositionChangeEvent^ e) {
		   if (trackBar2->Focused==false)
			trackBar2->Value = e->newPosition;
	   }

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (axWindowsMediaPlayer1->currentMedia != nullptr &&
		axWindowsMediaPlayer1->playState == WMPLib::WMPPlayState::wmppsPlaying) {
		if ((int)duration == 0) return;
		double currentPosition = axWindowsMediaPlayer1->Ctlcontrols->currentPosition;
		if (currentPosition >= 0) {
			int progress = (int)((currentPosition / duration) * 100);
			//progress = Math::Max(0, Math::Min(100, progress));

			// Оновлюємо прогрес-бар
			tspMain->Minimum = 0;
			tspMain->Maximum = 100;
			tspMain->Value = progress;

			// Оновлюємо trackBar2 тільки якщо користувач не пересуває його
				trackBar2->Minimum = 0;
				trackBar2->Maximum = 100;
				trackBar2->Value = progress;

		}
		else {
			tspMain->Value = 0;
			trackBar2->Value = 0;
		}
	}
	else {
		tspMain->Value = 0;
		trackBar2->Value = 0;
	}
}
private: System::Void trackBar2_Scroll(System::Object^ sender, System::EventArgs^ e) {
	if (axWindowsMediaPlayer1->currentMedia != nullptr) {
			isTrackBar2Scrolling = true; // Починаємо перемотування
			double newPosition = (trackBar2->Value / 100.0) * duration;
			axWindowsMediaPlayer1->Ctlcontrols->currentPosition = newPosition;

			// Оновлюємо tspMain вручну, щоб відобразити нову позицію
			int progress = (int)((newPosition / duration) * 100);
			tspMain->Value = progress;
		

	}
}

private: System::Void axWindowsMediaPlayer1_MediaChange(System::Object^ sender, AxWMPLib::_WMPOCXEvents_MediaChangeEvent^ e) {
}
private: System::Void axWindowsMediaPlayer1_OpenStateChange(System::Object^ sender, AxWMPLib::_WMPOCXEvents_OpenStateChangeEvent^ e) {
	WMPLib::WMPOpenState state = axWindowsMediaPlayer1->openState;
	if (state == WMPLib::WMPOpenState::wmposMediaOpen) {
		duration = axWindowsMediaPlayer1->currentMedia->duration;
		timer1->Start();
	}
}
};
}
