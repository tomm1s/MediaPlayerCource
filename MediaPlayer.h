#pragma once


namespace OSmetod {
    using namespace System;
    using namespace System::Windows::Forms;
    using namespace AxWMPLib;

    public ref class MediaPlayer {
    private:
        AxWindowsMediaPlayer^ mediaPlayer;
        TrackBar^ trackBar1;
        int currentVideoIndex;
        WMPLib::IWMPPlaylist^ playlist;
    public:
        // Constructor: Takes an existing AxWindowsMediaPlayer control
        MediaPlayer(AxWindowsMediaPlayer^ player,TrackBar^ trackbar) {
            mediaPlayer = player;
            trackBar1 = trackbar;
            playlist = nullptr;
        }

        // Method to open and play a video file from a directory
        void OpenAndPlayVideo() {
            OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
            openFileDialog->Filter = "Video Files (*.mp4;*.avi;*.wmv)|*.mp4;*.avi;*.wmv|All Files (*.*)|*.*";
            openFileDialog->Title = "Select a Video File";

            if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
                String^ filePath = openFileDialog->FileName;
                try {
                    mediaPlayer->URL = filePath;
                   // mediaPlayer->Ctlcontrols->play();
                }
                catch (Exception^ ex) {
                    MessageBox::Show("Error playing video: " + ex->Message);
                }
            }
        }

        // Optional: Additional control methods
        void Play() {
            mediaPlayer->Ctlcontrols->play();
            
        }

        void Pause() {
            mediaPlayer->Ctlcontrols->pause();
        }

        void Stop() {
            mediaPlayer->Ctlcontrols->stop();
        }
        void ToggleMute() {
            if (mediaPlayer != nullptr) {
                mediaPlayer->settings->mute = !mediaPlayer->settings->mute;
            }
        }
        bool IsMuted() {
            return mediaPlayer != nullptr && mediaPlayer->settings->mute;
        }

        property int Volume{
        int get() { return mediaPlayer->settings->volume; }
        void set(int value) {
            if (value >= 0 && value <= 100)
                mediaPlayer->settings->volume = value;
        }
        }
        void PlayFolder(String^ folderPath)
        {
            auto files = System::IO::Directory::GetFiles(folderPath, "*.mp4");

            auto playlist = mediaPlayer->newPlaylist("MyPlaylist", "");

            for each (String ^ file in files)
            {
                auto mediaItem = mediaPlayer->newMedia(file);
                playlist->appendItem(mediaItem);
            }

            mediaPlayer->currentPlaylist = playlist;
            mediaPlayer->Ctlcontrols->play();

        }
        void PlayNextVideo()
        {
            MessageBox::Show("Кількість відео у плейлисті: " + playlist->count.ToString());
            if (playlist != nullptr && currentVideoIndex<playlist->count)
            {
                currentVideoIndex++;
                if (currentVideoIndex < playlist->count)
                {
                    auto mediaItem = playlist->Item[currentVideoIndex];
                    mediaPlayer->currentMedia = mediaItem;
                    mediaPlayer->Ctlcontrols->play();
                }
                else {
                    MessageBox::Show("Кінець плейлисту");
                }
            }
            else
            {
                MessageBox::Show("Немає відео у плейлисті");
            }
        }
        void OnPlayStateChange(Object^ sender, _WMPOCXEvents_PlayStateChangeEvent^ e)
        {
            if (e->newState == 8)
            {
                PlayNextVideo();
            }
        }
        void SetVolumeBasedOnTime() {
            DateTime currentTime = DateTime::Now;

            if (currentTime.Hour >= 22) {
                trackBar1->Maximum = 25;
                MessageBox::Show("Поточний час: " + currentTime.ToString() + ". Максимальна гучність обмежена до 25%.");
            }
            else
            {
                trackBar1->Maximum = 100;
                MessageBox::Show("Поточний час: " + currentTime.ToString() + ". Максимальна гучність: 100%.");
            }
        }
    };
}

