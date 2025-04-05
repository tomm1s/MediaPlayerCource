#pragma once


namespace OSmetod {
    using namespace System;
    using namespace System::Windows::Forms;
    using namespace AxWMPLib;

    public ref class MediaPlayer {
    private:
        AxWindowsMediaPlayer^ mediaPlayer;
    public:
        // Constructor: Takes an existing AxWindowsMediaPlayer control
        MediaPlayer(AxWindowsMediaPlayer^ player) {
            mediaPlayer = player;
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
    };
}

