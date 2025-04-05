#pragma once

#include "frmAbout.h"
#include "CalendarPicker.h"
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
	using namespace OSmetod;

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
			mediaPlayer = gcnew MediaPlayer(this->axWindowsMediaPlayer1,this->trackBar1);
			mediaPlayer->SetVolumeBasedOnTime();
//			axWindowsMediaPlayer1->PositionChange += gcnew AxWMPLib::_WMPOCXEvents_PositionChangeEventHandler(this, &frmMain::domediaposchange);
			this->KeyPreview = true;
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &frmMain::frmMain_KeyDown);
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

	private: System::Windows::Forms::ToolStripMenuItem^ tsmiLoad;

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
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;

	private: String^ selectedFolderPath;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton3;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton4;
	private: System::Windows::Forms::ToolStripMenuItem^ ‚ËÏÍÌÛÚË”‚≥ÍÌÛÚË«‚ÛÍToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÔÓ‚ÌÓÂÍ‡ÌËÈ–ÂÊËÏToolStripMenuItem;
	private: DateTime^ targetDateTime;

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
			this->tsmiLoad = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tsmiClose = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiProcess = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiStart = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiStop = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tmsiParams = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‚ËÏÍÌÛÚË”‚≥ÍÌÛÚË«‚ÛÍToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÔÓ‚ÌÓÂÍ‡ÌËÈ–ÂÊËÏToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tmsiInfo = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tmsiHelp = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tmsiAbout = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsMain = (gcnew System::Windows::Forms::ToolStrip());
			this->tsbOpen = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbSave = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tsbExecute = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbCancel = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
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
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
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
			this->tsmiFile->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->tsmiLoad, this->toolStripMenuItem1,
					this->tsmiClose
			});
			this->tsmiFile->Name = L"tsmiFile";
			this->tsmiFile->Size = System::Drawing::Size(48, 20);
			this->tsmiFile->Text = L"‘‡ÈÎ";
			// 
			// tsmiLoad
			// 
			this->tsmiLoad->Name = L"tsmiLoad";
			this->tsmiLoad->Size = System::Drawing::Size(124, 22);
			this->tsmiLoad->Text = L"¬≥‰ÍËÚË";
			this->tsmiLoad->Click += gcnew System::EventHandler(this, &frmMain::tsmiLoad_Click);
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
			this->tsmiClose->Text = L"«‡ÍËÚË";
			this->tsmiClose->Click += gcnew System::EventHandler(this, &frmMain::tsbexit_Click);
			// 
			// tsmiProcess
			// 
			this->tsmiProcess->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->tsmiStart,
					this->tsmiStop, this->tmsiParams, this->‚ËÏÍÌÛÚË”‚≥ÍÌÛÚË«‚ÛÍToolStripMenuItem, this->ÔÓ‚ÌÓÂÍ‡ÌËÈ–ÂÊËÏToolStripMenuItem
			});
			this->tsmiProcess->Name = L"tsmiProcess";
			this->tsmiProcess->Size = System::Drawing::Size(72, 20);
			this->tsmiProcess->Text = L" ÓÌÚÓÎ¸";
			// 
			// tsmiStart
			// 
			this->tsmiStart->Name = L"tsmiStart";
			this->tsmiStart->Size = System::Drawing::Size(206, 22);
			this->tsmiStart->Text = L"—Ú‡Ú";
			this->tsmiStart->Click += gcnew System::EventHandler(this, &frmMain::tsmiStart_Click);
			// 
			// tsmiStop
			// 
			this->tsmiStop->Name = L"tsmiStop";
			this->tsmiStop->Size = System::Drawing::Size(206, 22);
			this->tsmiStop->Text = L"«ÛÔËÌËÚË";
			this->tsmiStop->Click += gcnew System::EventHandler(this, &frmMain::tsmiStop_Click);
			// 
			// tmsiParams
			// 
			this->tmsiParams->Name = L"tmsiParams";
			this->tmsiParams->Size = System::Drawing::Size(206, 22);
			this->tmsiParams->Text = L"œ‡ÛÁ‡";
			this->tmsiParams->Click += gcnew System::EventHandler(this, &frmMain::tmsiParams_Click);
			// 
			// ‚ËÏÍÌÛÚË”‚≥ÍÌÛÚË«‚ÛÍToolStripMenuItem
			// 
			this->‚ËÏÍÌÛÚË”‚≥ÍÌÛÚË«‚ÛÍToolStripMenuItem->Name = L"‚ËÏÍÌÛÚË”‚≥ÍÌÛÚË«‚ÛÍToolStripMenuItem";
			this->‚ËÏÍÌÛÚË”‚≥ÍÌÛÚË«‚ÛÍToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->‚ËÏÍÌÛÚË”‚≥ÍÌÛÚË«‚ÛÍToolStripMenuItem->Text = L"¬ËÏÍÌÛÚË\\”‚≥ÍÌÛÚË Á‚ÛÍ";
			this->‚ËÏÍÌÛÚË”‚≥ÍÌÛÚË«‚ÛÍToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::‚ËÏÍÌÛÚË”‚≥ÍÌÛÚË«‚ÛÍToolStripMenuItem_Click);
			// 
			// ÔÓ‚ÌÓÂÍ‡ÌËÈ–ÂÊËÏToolStripMenuItem
			// 
			this->ÔÓ‚ÌÓÂÍ‡ÌËÈ–ÂÊËÏToolStripMenuItem->Name = L"ÔÓ‚ÌÓÂÍ‡ÌËÈ–ÂÊËÏToolStripMenuItem";
			this->ÔÓ‚ÌÓÂÍ‡ÌËÈ–ÂÊËÏToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->ÔÓ‚ÌÓÂÍ‡ÌËÈ–ÂÊËÏToolStripMenuItem->Text = L"œÓ‚ÌÓÂÍ‡ÌËÈ ÂÊËÏ";
			this->ÔÓ‚ÌÓÂÍ‡ÌËÈ–ÂÊËÏToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::ÔÓ‚ÌÓÂÍ‡ÌËÈ–ÂÊËÏToolStripMenuItem_Click);
			// 
			// tmsiInfo
			// 
			this->tmsiInfo->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->tmsiHelp, this->tmsiAbout });
			this->tmsiInfo->Name = L"tmsiInfo";
			this->tmsiInfo->Size = System::Drawing::Size(83, 20);
			this->tmsiInfo->Text = L"≤ÌÙÓÏ‡ˆ≥ˇ";
			// 
			// tmsiHelp
			// 
			this->tmsiHelp->Name = L"tmsiHelp";
			this->tmsiHelp->Size = System::Drawing::Size(180, 22);
			this->tmsiHelp->Text = L"ƒÓÔÓÏÓ„‡";
			this->tmsiHelp->Click += gcnew System::EventHandler(this, &frmMain::tmsiHelp_Click);
			// 
			// tmsiAbout
			// 
			this->tmsiAbout->Name = L"tmsiAbout";
			this->tmsiAbout->Size = System::Drawing::Size(180, 22);
			this->tmsiAbout->Text = L"œÓ ÔÓ„‡ÏÛ";
			this->tmsiAbout->Click += gcnew System::EventHandler(this, &frmMain::tmsiAbout_Click);
			// 
			// tsMain
			// 
			this->tsMain->ImageScalingSize = System::Drawing::Size(32, 32);
			this->tsMain->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(13) {
				this->tsbOpen, this->tsbSave,
					this->toolStripButton1, this->toolStripSeparator1, this->tsbExecute, this->tsbCancel, this->toolStripButton2, this->toolStripButton3,
					this->toolStripButton4, this->toolStripSeparator2, this->tsbAbout, this->tsbexit, this->tsbInfo
			});
			this->tsMain->Location = System::Drawing::Point(0, 24);
			this->tsMain->Name = L"tsMain";
			this->tsMain->Size = System::Drawing::Size(768, 39);
			this->tsMain->TabIndex = 1;
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
			this->tsbSave->Click += gcnew System::EventHandler(this, &frmMain::tsbSave_Click);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(36, 36);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &frmMain::toolStripButton1_Click);
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
			this->tsbCancel->Click += gcnew System::EventHandler(this, &frmMain::tsbCancel_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(36, 36);
			this->toolStripButton2->Text = L"toolStripButton2";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &frmMain::toolStripButton2_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(36, 36);
			this->toolStripButton3->Text = L"toolStripButton3";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &frmMain::toolStripButton3_Click);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(36, 36);
			this->toolStripButton4->Text = L"toolStripButton4";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &frmMain::toolStripButton4_Click);
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
			this->tslInfo->Text = L"¬≥‰Ú‚ÓÂÌÌˇ ‚≥‰ÂÓ";
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
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
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
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->Location = System::Drawing::Point(200, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMain::button4_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->Location = System::Drawing::Point(281, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 5;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmMain::button5_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->AutoSize = false;
			this->trackBar1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->trackBar1->Location = System::Drawing::Point(362, 3);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(104, 23);
			this->trackBar1->TabIndex = 6;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &frmMain::volumeBar_Scroll);
			// 
			// trackBar2
			// 
			this->trackBar2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->trackBar2->Location = System::Drawing::Point(472, 3);
			this->trackBar2->Maximum = 100;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(104, 23);
			this->trackBar2->TabIndex = 7;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &frmMain::seekBar_Scroll);
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
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &frmMain::timer2_Tick);
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
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->mnsMain;
			this->Name = L"frmMain";
			this->Text = L"MediaPlayer";
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
	mediaPlayer->Play();
}
private: System::Void tsbNew_Click(System::Object^ sender, System::EventArgs^ e) {
	CalendarPicker^ calendar = gcnew CalendarPicker();
	
	calendar->ShowDialog(this);
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
		mediaPlayer->Play();
}
private: System::Void tsmiLoad_Click(System::Object^ sender, System::EventArgs^ e) {
	mediaPlayer->OpenAndPlayVideo();
}
private: System::Void tsbOpen_Click(System::Object^ sender, System::EventArgs^ e) {
		mediaPlayer->OpenAndPlayVideo();

}
private: System::Void tspMain_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		mediaPlayer->Stop();

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mediaPlayer != nullptr) {
		mediaPlayer->ToggleMute();
		// Update button appearance based on mute state
		if (mediaPlayer->IsMuted()) {
			button4->BackgroundImage = Image::FromFile("sound_off.png");
			button4->BackgroundImageLayout = ImageLayout::Zoom;
		}
		else {
			button4->BackgroundImage = Image::FromFile("sound_on.png");
			button4->BackgroundImageLayout = ImageLayout::Zoom;
		}
	}
}



private: System::Void volumeBar_Scroll(System::Object^ sender, System::EventArgs^ e) {
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
			progress = Math::Max(0, Math::Min(100, progress));

			// ŒÌÓ‚Î˛∫ÏÓ ÔÓ„ÂÒ-·‡
			tspMain->Minimum = 0;
			tspMain->Maximum = 100;
			tspMain->Value = progress;

			// ŒÌÓ‚Î˛∫ÏÓ trackBar2 Ú≥Î¸ÍË ˇÍ˘Ó ÍÓËÒÚÛ‚‡˜ ÌÂ ÔÂÂÒÛ‚‡∫ ÈÓ„Ó
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
private: System::Void seekBar_Scroll(System::Object^ sender, System::EventArgs^ e) {
	if (axWindowsMediaPlayer1->currentMedia != nullptr) {
			isTrackBar2Scrolling = true; // œÓ˜ËÌ‡∫ÏÓ ÔÂÂÏÓÚÛ‚‡ÌÌˇ
			double newPosition = (trackBar2->Value / 100.0) * duration;
			axWindowsMediaPlayer1->Ctlcontrols->currentPosition = newPosition;

			// ŒÌÓ‚Î˛∫ÏÓ tspMain ‚Û˜ÌÛ, ˘Ó· ‚≥‰Ó·‡ÁËÚË ÌÓ‚Û ÔÓÁËˆ≥˛
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
private: System::Void tsbSave_Click(System::Object^ sender, System::EventArgs^ e) {
	FolderBrowserDialog^ dialog = gcnew FolderBrowserDialog();
	if (dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		selectedFolderPath = dialog->SelectedPath;
		MessageBox::Show("œ‡ÔÍ‡ ‚Ë·‡Ì‡: " + selectedFolderPath);
	}
}
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (DateTime::Now >= *targetDateTime)
	{
		timer2->Stop();
		if (!String::IsNullOrEmpty(selectedFolderPath))
		{
			mediaPlayer->PlayFolder(selectedFolderPath);
			MessageBox::Show("œÎÂÈÎËÒÚ Á‡ÔÛ˘ÂÌÓ!");
		}
		else
		{
			MessageBox::Show("œÓÚ≥·ÌÓ ‚Ë·‡ÚË Ô‡ÔÍÛ Á ‚≥‰ÂÓ!");
		}

	}
}
private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	CalendarPicker^ picker = gcnew CalendarPicker();
	if (picker->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		targetDateTime = picker->SelectedDateTime;
		MessageBox::Show("◊‡Ò ‚ÒÚ‡ÌÓ‚ÎÂÌÓ: " + targetDateTime->ToString());
		timer2->Start();

	}
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->FormBorderStyle == System::Windows::Forms::FormBorderStyle::None) {
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Sizable;
		this->WindowState = System::Windows::Forms::FormWindowState::Normal;
		this->TopMost = false;
	}
	else
	{
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
		this->TopMost = true;
	}
}
private: System::Void frmMain_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyCode == System::Windows::Forms::Keys::Escape)
	{
		if (this->FormBorderStyle == System::Windows::Forms::FormBorderStyle::None)
		{
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Sizable;
			this->WindowState = System::Windows::Forms::FormWindowState::Normal;
			this->TopMost = true;
		}
	}
}
private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	mediaPlayer->Pause();
}
private: System::Void tsbCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	mediaPlayer->Stop();
}
private: System::Void toolStripButton3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mediaPlayer != nullptr) {
		mediaPlayer->ToggleMute();
		// Update button appearance based on mute state
		if (mediaPlayer->IsMuted()) {
			button4->BackgroundImage = Image::FromFile("sound_off.png");
			button4->BackgroundImageLayout = ImageLayout::Zoom;
		}
		else {
			button4->BackgroundImage = Image::FromFile("sound_on.png");
			button4->BackgroundImageLayout = ImageLayout::Zoom;
		}
	}
}
private: System::Void toolStripButton4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->FormBorderStyle == System::Windows::Forms::FormBorderStyle::None) {
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Sizable;
		this->WindowState = System::Windows::Forms::FormWindowState::Normal;
		this->TopMost = false;
	}
	else
	{
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
		this->TopMost = true;
	}
}
private: System::Void tsmiStart_Click(System::Object^ sender, System::EventArgs^ e) {
	mediaPlayer->Play();
}
private: System::Void tsmiStop_Click(System::Object^ sender, System::EventArgs^ e) {
	mediaPlayer->Stop();
}
private: System::Void tmsiParams_Click(System::Object^ sender, System::EventArgs^ e) {
	mediaPlayer->Pause();
}
private: System::Void ‚ËÏÍÌÛÚË”‚≥ÍÌÛÚË«‚ÛÍToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mediaPlayer != nullptr) {
		mediaPlayer->ToggleMute();
		// Update button appearance based on mute state
		if (mediaPlayer->IsMuted()) {
			button4->BackgroundImage = Image::FromFile("sound_off.png");
			button4->BackgroundImageLayout = ImageLayout::Zoom;
		}
		else {
			button4->BackgroundImage = Image::FromFile("sound_on.png");
			button4->BackgroundImageLayout = ImageLayout::Zoom;
		}
	}
}
private: System::Void ÔÓ‚ÌÓÂÍ‡ÌËÈ–ÂÊËÏToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->FormBorderStyle == System::Windows::Forms::FormBorderStyle::None) {
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Sizable;
		this->WindowState = System::Windows::Forms::FormWindowState::Normal;
		this->TopMost = false;
	}
	else
	{
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
		this->TopMost = true;
	}
}
private: System::Void tmsiHelp_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
