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
			mediaPlayer = gcnew MediaPlayer(this->WindowsMediaPlayer, this->flpVolumeBar);
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
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiControl;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiPlay;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiStop;
	private: System::Windows::Forms::ToolStripMenuItem^ tmsiPause;
	private: System::Windows::Forms::ToolStripMenuItem^ tmsiInfo;
	private: System::Windows::Forms::ToolStripMenuItem^ tmsiHelp;
	private: System::Windows::Forms::ToolStripMenuItem^ tmsiAbout;



	private: System::Windows::Forms::ToolStrip^ tsMain;

	private: System::Windows::Forms::ToolStripButton^ tsbLoad;
	private: System::Windows::Forms::ToolStripButton^ tsbPlaylist;

	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^ tsbPlay;
	private: System::Windows::Forms::ToolStripButton^ tsbStop;

	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripButton^ tsbAbout;

	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::StatusStrip^ stMain;
	private: System::Windows::Forms::ToolStripStatusLabel^ tslInfo;
	private: System::Windows::Forms::ToolStripProgressBar^ tspMain;

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripButton^ tsbExit;

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip3;
	private: AxWMPLib::AxWindowsMediaPlayer^ WindowsMediaPlayer;
	private: MediaPlayer^ mediaPlayer;
	private: System::Windows::Forms::FlowLayoutPanel^ flpMain;
	private: System::Windows::Forms::Button^ flpPlay;

	private: System::Windows::Forms::Button^ flpPause;
	private: System::Windows::Forms::Button^ flpStop;
	private: System::Windows::Forms::Button^ flpMuteUnMute;
	private: System::Windows::Forms::Button^ flpFullScreen;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TrackBar^ flpVolumeBar;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::TrackBar^ flpSeekBar;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::ToolStripButton^ tsbTime;

	private: String^ selectedFolderPath;
	private: System::Windows::Forms::ToolStripButton^ tsbPause;
	private: System::Windows::Forms::ToolStripButton^ tsbMuteUnMute;
	private: System::Windows::Forms::ToolStripButton^ tsbFullScreen;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiMuteUnMute;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiFullScreen;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiPlaylist;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiTime;
	private: System::Windows::Forms::Splitter^ splitter1;
	private: System::Windows::Forms::ListBox^ listBox1;
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
			this->tsmiPlaylist = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tsmiClose = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiControl = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiPlay = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiStop = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tmsiPause = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiMuteUnMute = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiFullScreen = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiTime = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tmsiInfo = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tmsiHelp = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tmsiAbout = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsMain = (gcnew System::Windows::Forms::ToolStrip());
			this->tsbLoad = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbPlaylist = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbTime = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tsbPlay = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbStop = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbPause = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbMuteUnMute = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbFullScreen = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tsbAbout = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbExit = (gcnew System::Windows::Forms::ToolStripButton());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->stMain = (gcnew System::Windows::Forms::StatusStrip());
			this->tslInfo = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->tspMain = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStrip3 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->WindowsMediaPlayer = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->flpMain = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flpPlay = (gcnew System::Windows::Forms::Button());
			this->flpPause = (gcnew System::Windows::Forms::Button());
			this->flpStop = (gcnew System::Windows::Forms::Button());
			this->flpMuteUnMute = (gcnew System::Windows::Forms::Button());
			this->flpFullScreen = (gcnew System::Windows::Forms::Button());
			this->flpVolumeBar = (gcnew System::Windows::Forms::TrackBar());
			this->flpSeekBar = (gcnew System::Windows::Forms::TrackBar());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->mnsMain->SuspendLayout();
			this->tsMain->SuspendLayout();
			this->stMain->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WindowsMediaPlayer))->BeginInit();
			this->flpMain->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flpVolumeBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flpSeekBar))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// mnsMain
			// 
			this->mnsMain->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->mnsMain->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->tsmiFile, this->tsmiControl,
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
			this->tsmiFile->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->tsmiLoad, this->tsmiPlaylist,
					this->toolStripMenuItem1, this->tsmiClose
			});
			this->tsmiFile->Name = L"tsmiFile";
			this->tsmiFile->Size = System::Drawing::Size(48, 20);
			this->tsmiFile->Text = L"Файл";
			// 
			// tsmiLoad
			// 
			this->tsmiLoad->Name = L"tsmiLoad";
			this->tsmiLoad->Size = System::Drawing::Size(177, 22);
			this->tsmiLoad->Text = L"Відкрити";
			this->tsmiLoad->Click += gcnew System::EventHandler(this, &frmMain::tsmiLoad_Click);
			// 
			// tsmiPlaylist
			// 
			this->tsmiPlaylist->Name = L"tsmiPlaylist";
			this->tsmiPlaylist->Size = System::Drawing::Size(177, 22);
			this->tsmiPlaylist->Text = L"Відкрити плейлист";
			this->tsmiPlaylist->Click += gcnew System::EventHandler(this, &frmMain::tsmiPlaylist_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(174, 6);
			// 
			// tsmiClose
			// 
			this->tsmiClose->Name = L"tsmiClose";
			this->tsmiClose->Size = System::Drawing::Size(177, 22);
			this->tsmiClose->Text = L"Закрити";
			this->tsmiClose->Click += gcnew System::EventHandler(this, &frmMain::tsbClose_Click);
			// 
			// tsmiControl
			// 
			this->tsmiControl->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->tsmiPlay,
					this->tsmiStop, this->tmsiPause, this->tsmiMuteUnMute, this->tsmiFullScreen, this->tsmiTime
			});
			this->tsmiControl->Name = L"tsmiControl";
			this->tsmiControl->Size = System::Drawing::Size(72, 20);
			this->tsmiControl->Text = L"Контроль";
			// 
			// tsmiPlay
			// 
			this->tsmiPlay->Name = L"tsmiPlay";
			this->tsmiPlay->Size = System::Drawing::Size(228, 22);
			this->tsmiPlay->Text = L"Старт";
			this->tsmiPlay->Click += gcnew System::EventHandler(this, &frmMain::tsmiPlay_Click);
			// 
			// tsmiStop
			// 
			this->tsmiStop->Name = L"tsmiStop";
			this->tsmiStop->Size = System::Drawing::Size(228, 22);
			this->tsmiStop->Text = L"Зупинити";
			this->tsmiStop->Click += gcnew System::EventHandler(this, &frmMain::tsmiStop_Click);
			// 
			// tmsiPause
			// 
			this->tmsiPause->Name = L"tmsiPause";
			this->tmsiPause->Size = System::Drawing::Size(228, 22);
			this->tmsiPause->Text = L"Пауза";
			this->tmsiPause->Click += gcnew System::EventHandler(this, &frmMain::tmsiParams_Click);
			// 
			// tsmiMuteUnMute
			// 
			this->tsmiMuteUnMute->Name = L"tsmiMuteUnMute";
			this->tsmiMuteUnMute->Size = System::Drawing::Size(228, 22);
			this->tsmiMuteUnMute->Text = L"Вимкнути\\Увікнути звук";
			this->tsmiMuteUnMute->Click += gcnew System::EventHandler(this, &frmMain::tsmiMuteUnMute_Click);
			// 
			// tsmiFullScreen
			// 
			this->tsmiFullScreen->Name = L"tsmiFullScreen";
			this->tsmiFullScreen->Size = System::Drawing::Size(228, 22);
			this->tsmiFullScreen->Text = L"Повноекраний режим";
			this->tsmiFullScreen->Click += gcnew System::EventHandler(this, &frmMain::tsmiFullScreen_Click);
			// 
			// tsmiTime
			// 
			this->tsmiTime->Name = L"tsmiTime";
			this->tsmiTime->Size = System::Drawing::Size(228, 22);
			this->tsmiTime->Text = L"Встановити час відтворення";
			this->tsmiTime->Click += gcnew System::EventHandler(this, &frmMain::tsmiTime_Click);
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
			this->tmsiHelp->Click += gcnew System::EventHandler(this, &frmMain::tmsiHelp_Click);
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
			this->tsMain->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(12) {
				this->tsbLoad, this->tsbPlaylist,
					this->tsbTime, this->toolStripSeparator1, this->tsbPlay, this->tsbStop, this->tsbPause, this->tsbMuteUnMute, this->tsbFullScreen,
					this->toolStripSeparator2, this->tsbAbout, this->tsbExit
			});
			this->tsMain->Location = System::Drawing::Point(0, 24);
			this->tsMain->Name = L"tsMain";
			this->tsMain->Size = System::Drawing::Size(768, 39);
			this->tsMain->TabIndex = 1;
			// 
			// tsbLoad
			// 
			this->tsbLoad->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbLoad->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbLoad.Image")));
			this->tsbLoad->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbLoad->Name = L"tsbLoad";
			this->tsbLoad->Size = System::Drawing::Size(36, 36);
			this->tsbLoad->Text = L"toolStripButton4";
			this->tsbLoad->ToolTipText = L"Open";
			this->tsbLoad->Click += gcnew System::EventHandler(this, &frmMain::tsbLoad_Click);
			// 
			// tsbPlaylist
			// 
			this->tsbPlaylist->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbPlaylist->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbPlaylist.Image")));
			this->tsbPlaylist->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbPlaylist->Name = L"tsbPlaylist";
			this->tsbPlaylist->Size = System::Drawing::Size(36, 36);
			this->tsbPlaylist->Text = L"toolStripButton3";
			this->tsbPlaylist->ToolTipText = L"Playlist";
			this->tsbPlaylist->Click += gcnew System::EventHandler(this, &frmMain::tsbPlaylist_Click);
			// 
			// tsbTime
			// 
			this->tsbTime->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbTime->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbTime.Image")));
			this->tsbTime->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbTime->Name = L"tsbTime";
			this->tsbTime->Size = System::Drawing::Size(36, 36);
			this->tsbTime->Text = L"toolStripButton1";
			this->tsbTime->ToolTipText = L"Time";
			this->tsbTime->Click += gcnew System::EventHandler(this, &frmMain::tsbTime_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 39);
			// 
			// tsbPlay
			// 
			this->tsbPlay->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbPlay->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbPlay.Image")));
			this->tsbPlay->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbPlay->Name = L"tsbPlay";
			this->tsbPlay->Size = System::Drawing::Size(36, 36);
			this->tsbPlay->Text = L"toolStripButton5";
			this->tsbPlay->ToolTipText = L"Play";
			this->tsbPlay->Click += gcnew System::EventHandler(this, &frmMain::tsbPlay_Click);
			// 
			// tsbStop
			// 
			this->tsbStop->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbStop->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbStop.Image")));
			this->tsbStop->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbStop->Name = L"tsbStop";
			this->tsbStop->Size = System::Drawing::Size(36, 36);
			this->tsbStop->Text = L"toolStripButton6";
			this->tsbStop->ToolTipText = L"Stop";
			this->tsbStop->Click += gcnew System::EventHandler(this, &frmMain::tsbStop_Click);
			// 
			// tsbPause
			// 
			this->tsbPause->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->tsbPause->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbPause->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbPause.Image")));
			this->tsbPause->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbPause->Name = L"tsbPause";
			this->tsbPause->Size = System::Drawing::Size(36, 36);
			this->tsbPause->Text = L"toolStripButton2";
			this->tsbPause->ToolTipText = L"Pause";
			this->tsbPause->Click += gcnew System::EventHandler(this, &frmMain::tsbPause_Click);
			// 
			// tsbMuteUnMute
			// 
			this->tsbMuteUnMute->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbMuteUnMute->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbMuteUnMute.Image")));
			this->tsbMuteUnMute->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbMuteUnMute->Name = L"tsbMuteUnMute";
			this->tsbMuteUnMute->Size = System::Drawing::Size(36, 36);
			this->tsbMuteUnMute->Text = L"toolStripButton3";
			this->tsbMuteUnMute->ToolTipText = L"Mute\\unMute";
			this->tsbMuteUnMute->Click += gcnew System::EventHandler(this, &frmMain::tsbMuteUnMute_Click);
			// 
			// tsbFullScreen
			// 
			this->tsbFullScreen->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbFullScreen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbFullScreen.Image")));
			this->tsbFullScreen->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbFullScreen->Name = L"tsbFullScreen";
			this->tsbFullScreen->Size = System::Drawing::Size(36, 36);
			this->tsbFullScreen->Text = L"toolStripButton4";
			this->tsbFullScreen->ToolTipText = L"FullScreen";
			this->tsbFullScreen->Click += gcnew System::EventHandler(this, &frmMain::tsbFullScreen_Click);
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
			this->tsbAbout->ToolTipText = L"Info";
			this->tsbAbout->Click += gcnew System::EventHandler(this, &frmMain::tsbAbout_Click);
			// 
			// tsbExit
			// 
			this->tsbExit->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbExit->DoubleClickEnabled = true;
			this->tsbExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbExit.Image")));
			this->tsbExit->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbExit->Name = L"tsbExit";
			this->tsbExit->Size = System::Drawing::Size(36, 36);
			this->tsbExit->Text = L"Exit";
			this->tsbExit->ToolTipText = L"Exit";
			this->tsbExit->Click += gcnew System::EventHandler(this, &frmMain::tsbClose_Click);
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
			this->tslInfo->Text = L"Відтворення відео";
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
			// WindowsMediaPlayer
			// 
			this->WindowsMediaPlayer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->WindowsMediaPlayer->Enabled = true;
			this->WindowsMediaPlayer->Location = System::Drawing::Point(120, 0);
			this->WindowsMediaPlayer->Name = L"WindowsMediaPlayer";
			this->WindowsMediaPlayer->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"WindowsMediaPlayer.OcxState")));
			this->WindowsMediaPlayer->Size = System::Drawing::Size(648, 418);
			this->WindowsMediaPlayer->TabIndex = 0;
			this->WindowsMediaPlayer->OpenStateChange += gcnew AxWMPLib::_WMPOCXEvents_OpenStateChangeEventHandler(this, &frmMain::axWindowsMediaPlayer1_OpenStateChange);
			this->WindowsMediaPlayer->PositionChange += gcnew AxWMPLib::_WMPOCXEvents_PositionChangeEventHandler(this, &frmMain::domediaposchange);
			this->WindowsMediaPlayer->MediaChange += gcnew AxWMPLib::_WMPOCXEvents_MediaChangeEventHandler(this, &frmMain::axWindowsMediaPlayer1_MediaChange);
			this->WindowsMediaPlayer->Enter += gcnew System::EventHandler(this, &frmMain::axWindowsMediaPlayer1_Enter_1);
			// 
			// flpMain
			// 
			this->flpMain->BackColor = System::Drawing::Color::Transparent;
			this->flpMain->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->flpMain->Controls->Add(this->flpPlay);
			this->flpMain->Controls->Add(this->flpPause);
			this->flpMain->Controls->Add(this->flpStop);
			this->flpMain->Controls->Add(this->flpMuteUnMute);
			this->flpMain->Controls->Add(this->flpFullScreen);
			this->flpMain->Controls->Add(this->flpVolumeBar);
			this->flpMain->Controls->Add(this->flpSeekBar);
			this->flpMain->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->flpMain->Location = System::Drawing::Point(120, 386);
			this->flpMain->Name = L"flpMain";
			this->flpMain->Size = System::Drawing::Size(648, 32);
			this->flpMain->TabIndex = 6;
			this->flpMain->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmMain::flowLayoutPanel1_Paint);
			// 
			// flpPlay
			// 
			this->flpPlay->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flpPlay.BackgroundImage")));
			this->flpPlay->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->flpPlay->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flpPlay->Location = System::Drawing::Point(3, 3);
			this->flpPlay->Name = L"flpPlay";
			this->flpPlay->Size = System::Drawing::Size(48, 23);
			this->flpPlay->TabIndex = 1;
			this->flpPlay->UseVisualStyleBackColor = true;
			this->flpPlay->Click += gcnew System::EventHandler(this, &frmMain::Play_button_Click);
			// 
			// flpPause
			// 
			this->flpPause->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flpPause.BackgroundImage")));
			this->flpPause->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->flpPause->Location = System::Drawing::Point(57, 3);
			this->flpPause->Name = L"flpPause";
			this->flpPause->Size = System::Drawing::Size(56, 23);
			this->flpPause->TabIndex = 2;
			this->flpPause->UseVisualStyleBackColor = true;
			this->flpPause->Click += gcnew System::EventHandler(this, &frmMain::btnPause_Click);
			// 
			// flpStop
			// 
			this->flpStop->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flpStop.BackgroundImage")));
			this->flpStop->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->flpStop->Location = System::Drawing::Point(119, 3);
			this->flpStop->Name = L"flpStop";
			this->flpStop->Size = System::Drawing::Size(75, 23);
			this->flpStop->TabIndex = 3;
			this->flpStop->Text = L"Stop";
			this->flpStop->UseVisualStyleBackColor = true;
			this->flpStop->Click += gcnew System::EventHandler(this, &frmMain::btnStop_Click);
			// 
			// flpMuteUnMute
			// 
			this->flpMuteUnMute->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flpMuteUnMute.BackgroundImage")));
			this->flpMuteUnMute->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->flpMuteUnMute->Location = System::Drawing::Point(200, 3);
			this->flpMuteUnMute->Name = L"flpMuteUnMute";
			this->flpMuteUnMute->Size = System::Drawing::Size(75, 23);
			this->flpMuteUnMute->TabIndex = 4;
			this->flpMuteUnMute->UseVisualStyleBackColor = true;
			this->flpMuteUnMute->Click += gcnew System::EventHandler(this, &frmMain::btnMuteUnMute_Click);
			// 
			// flpFullScreen
			// 
			this->flpFullScreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flpFullScreen.BackgroundImage")));
			this->flpFullScreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->flpFullScreen->Location = System::Drawing::Point(281, 3);
			this->flpFullScreen->Name = L"flpFullScreen";
			this->flpFullScreen->Size = System::Drawing::Size(75, 23);
			this->flpFullScreen->TabIndex = 5;
			this->flpFullScreen->UseVisualStyleBackColor = true;
			this->flpFullScreen->Click += gcnew System::EventHandler(this, &frmMain::FullScreenbtn_Click);
			// 
			// flpVolumeBar
			// 
			this->flpVolumeBar->AutoSize = false;
			this->flpVolumeBar->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flpVolumeBar->Location = System::Drawing::Point(362, 3);
			this->flpVolumeBar->Name = L"flpVolumeBar";
			this->flpVolumeBar->Size = System::Drawing::Size(104, 23);
			this->flpVolumeBar->TabIndex = 6;
			this->flpVolumeBar->Scroll += gcnew System::EventHandler(this, &frmMain::volumeBar_Scroll);
			// 
			// flpSeekBar
			// 
			this->flpSeekBar->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flpSeekBar->Location = System::Drawing::Point(472, 3);
			this->flpSeekBar->Maximum = 100;
			this->flpSeekBar->Name = L"flpSeekBar";
			this->flpSeekBar->Size = System::Drawing::Size(104, 23);
			this->flpSeekBar->TabIndex = 7;
			this->flpSeekBar->Scroll += gcnew System::EventHandler(this, &frmMain::seekBar_Scroll);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->splitter1);
			this->panel1->Controls->Add(this->flpMain);
			this->panel1->Controls->Add(this->WindowsMediaPlayer);
			this->panel1->Controls->Add(this->listBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 63);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(768, 418);
			this->panel1->TabIndex = 3;
			// 
			// splitter1
			// 
			this->splitter1->Location = System::Drawing::Point(120, 0);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(3, 386);
			this->splitter1->TabIndex = 8;
			this->splitter1->TabStop = false;
			// 
			// listBox1
			// 
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(0, 0);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 418);
			this->listBox1->TabIndex = 7;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmMain::listBox1_SelectedIndexChanged);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WindowsMediaPlayer))->EndInit();
			this->flpMain->ResumeLayout(false);
			this->flpMain->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flpVolumeBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->flpSeekBar))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: frmAbout^ frmabout;
		   double duration = 0.0;
		   String^ selctedFolderPath;
		   System::Collections::Generic::List<String^>^ videoFiles;

	private: System::Void tmsiAbout_Click(System::Object^ sender, System::EventArgs^ e) {
		frmabout->ShowDialog();
	}
	private: System::Void tsbAbout_Click(System::Object^ sender, System::EventArgs^ e) {
		frmabout->ShowDialog();
	}
	private: System::Void tsbPlay_Click(System::Object^ sender, System::EventArgs^ e) {
		mediaPlayer->Play();
	}
	private: System::Void tsbNew_Click(System::Object^ sender, System::EventArgs^ e) {
		CalendarPicker^ calendar = gcnew CalendarPicker();

		calendar->ShowDialog(this);
	}
	private: System::Void tsbClose_Click(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void btnPause_Click(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void tsbLoad_Click(System::Object^ sender, System::EventArgs^ e) {
		mediaPlayer->OpenAndPlayVideo();

	}
	private: System::Void tspMain_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void btnStop_Click(System::Object^ sender, System::EventArgs^ e) {
		mediaPlayer->Stop();

	}
	private: System::Void btnMuteUnMute_Click(System::Object^ sender, System::EventArgs^ e) {
		if (mediaPlayer != nullptr) {
			mediaPlayer->ToggleMute();
			// Update button appearance based on mute state
			if (mediaPlayer->IsMuted()) {
				flpMuteUnMute->BackgroundImage = Image::FromFile("sound_off.png");
				flpMuteUnMute->BackgroundImageLayout = ImageLayout::Zoom;
			}
			else {
				flpMuteUnMute->BackgroundImage = Image::FromFile("sound_on.png");
				flpMuteUnMute->BackgroundImageLayout = ImageLayout::Zoom;
			}
		}
	}



	private: System::Void volumeBar_Scroll(System::Object^ sender, System::EventArgs^ e) {
		mediaPlayer->Volume = flpVolumeBar->Value;
	}
		   void domediaposchange(System::Object^ sender, AxWMPLib::_WMPOCXEvents_PositionChangeEvent^ e) {
			   if (flpSeekBar->Focused == false)
				   flpSeekBar->Value = e->newPosition;
		   }

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (WindowsMediaPlayer->currentMedia != nullptr &&
			WindowsMediaPlayer->playState == WMPLib::WMPPlayState::wmppsPlaying) {
			if ((int)duration == 0) return;
			double currentPosition = WindowsMediaPlayer->Ctlcontrols->currentPosition;
			if (currentPosition >= 0) {
				int progress = (int)((currentPosition / duration) * 100);
				progress = Math::Max(0, Math::Min(100, progress));

				// Оновлюємо прогрес-бар
				tspMain->Minimum = 0;
				tspMain->Maximum = 100;
				tspMain->Value = progress;

				// Оновлюємо trackBar2 тільки якщо користувач не пересуває його
				flpSeekBar->Minimum = 0;
				flpSeekBar->Maximum = 100;
				flpSeekBar->Value = progress;

			}
			else {
				tspMain->Value = 0;
				flpSeekBar->Value = 0;
			}
		}
		else {
			tspMain->Value = 0;
			flpSeekBar->Value = 0;
		}
	}
	private: System::Void seekBar_Scroll(System::Object^ sender, System::EventArgs^ e) {
		if (WindowsMediaPlayer->currentMedia != nullptr) {
			isTrackBar2Scrolling = true; // Починаємо перемотування
			double newPosition = (flpSeekBar->Value / 100.0) * duration;
			WindowsMediaPlayer->Ctlcontrols->currentPosition = newPosition;

			// Оновлюємо tspMain вручну, щоб відобразити нову позицію
			int progress = (int)((newPosition / duration) * 100);
			tspMain->Value = progress;


		}
	}

	private: System::Void axWindowsMediaPlayer1_MediaChange(System::Object^ sender, AxWMPLib::_WMPOCXEvents_MediaChangeEvent^ e) {
	}
	private: System::Void axWindowsMediaPlayer1_OpenStateChange(System::Object^ sender, AxWMPLib::_WMPOCXEvents_OpenStateChangeEvent^ e) {
		WMPLib::WMPOpenState state = WindowsMediaPlayer->openState;
		if (state == WMPLib::WMPOpenState::wmposMediaOpen) {
			duration = WindowsMediaPlayer->currentMedia->duration;
			timer1->Start();
		}
	}
	private: System::Void tsbPlaylist_Click(System::Object^ sender, System::EventArgs^ e) {
		FolderBrowserDialog^ dialog = gcnew FolderBrowserDialog();
		if (dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			selectedFolderPath = dialog->SelectedPath;

			array<String^>^ files = System::IO::Directory::GetFiles(selectedFolderPath);
			videoFiles = gcnew System::Collections::Generic::List<String^>();

			listBox1->Items->Clear();

			for each(String ^ file in files) {
				for each(String ^ file in files) {
					if (file->EndsWith(".mp4") || file->EndsWith(".avi") || file->EndsWith(".mkv") || file->EndsWith(".wmv")) {
						videoFiles->Add(file);
						listBox1->Items->Add(System::IO::Path::GetFileName(file));
					}
				}
			}
			MessageBox::Show("Завантажено " + videoFiles->Count + " відео(файл/ів).");
		}
		MessageBox::Show("Папка вибрана: " + selectedFolderPath);
	}

private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (DateTime::Now >= *targetDateTime)
	{
		timer2->Stop();
		if (!String::IsNullOrEmpty(selectedFolderPath))
		{
			mediaPlayer->PlayFolder(selectedFolderPath);
			MessageBox::Show("Плейлист запущено!");
		}
		else
		{
			MessageBox::Show("Потрібно вибрати папку з відео!");
		}

	}
}
private: System::Void tsbTime_Click(System::Object^ sender, System::EventArgs^ e) {
	CalendarPicker^ picker = gcnew CalendarPicker();
	if (picker->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		targetDateTime = picker->SelectedDateTime;
		MessageBox::Show("Час встановлено: " + targetDateTime->ToString());
		timer2->Start();

	}
}

private: System::Void FullScreenbtn_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void tsbPause_Click(System::Object^ sender, System::EventArgs^ e) {
	mediaPlayer->Pause();
}
private: System::Void tsbStop_Click(System::Object^ sender, System::EventArgs^ e) {
	mediaPlayer->Stop();
}
private: System::Void tsbMuteUnMute_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mediaPlayer != nullptr) {
		mediaPlayer->ToggleMute();
		// Update button appearance based on mute state
		if (mediaPlayer->IsMuted()) {
			flpMuteUnMute->BackgroundImage = Image::FromFile("sound_off.png");
			flpMuteUnMute->BackgroundImageLayout = ImageLayout::Zoom;
		}
		else {
			flpMuteUnMute->BackgroundImage = Image::FromFile("sound_on.png");
			flpMuteUnMute->BackgroundImageLayout = ImageLayout::Zoom;
		}
	}
}
private: System::Void tsbFullScreen_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void tsmiPlay_Click(System::Object^ sender, System::EventArgs^ e) {
	mediaPlayer->Play();
}
private: System::Void tsmiStop_Click(System::Object^ sender, System::EventArgs^ e) {
	mediaPlayer->Stop();
}
private: System::Void tmsiParams_Click(System::Object^ sender, System::EventArgs^ e) {
	mediaPlayer->Pause();
}
private: System::Void tsmiMuteUnMute_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mediaPlayer != nullptr) {
		mediaPlayer->ToggleMute();
		// Update button appearance based on mute state
		if (mediaPlayer->IsMuted()) {
			flpMuteUnMute->BackgroundImage = Image::FromFile("sound_off.png");
			flpMuteUnMute->BackgroundImageLayout = ImageLayout::Zoom;
		}
		else {
			flpMuteUnMute->BackgroundImage = Image::FromFile("sound_on.png");
			flpMuteUnMute->BackgroundImageLayout = ImageLayout::Zoom;
		}
	}
}
private: System::Void tsmiFullScreen_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void tsmiPlaylist_Click(System::Object^ sender, System::EventArgs^ e) {
	FolderBrowserDialog^ dialog = gcnew FolderBrowserDialog();
	if (dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		selectedFolderPath = dialog->SelectedPath;
		MessageBox::Show("Папка вибрана: " + selectedFolderPath);
	}
}
private: System::Void tsmiTime_Click(System::Object^ sender, System::EventArgs^ e) {
	CalendarPicker^ picker = gcnew CalendarPicker();
	if (picker->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		targetDateTime = picker->SelectedDateTime;
		MessageBox::Show("Час встановлено: " + targetDateTime->ToString());
		timer2->Start();

	}
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedIndex != -1 && videoFiles != nullptr) {
		String^ filepath = videoFiles[listBox1->SelectedIndex];
		WindowsMediaPlayer->URL = filepath;
		WindowsMediaPlayer->Ctlcontrols->play();
	}
}
};
}
