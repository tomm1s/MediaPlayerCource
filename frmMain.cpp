#include "frmMain.h"

using namespace OSmetod;
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main() {

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    frmMain frmmain;

    Application::Run(% frmmain);

}
