#include "MainFrame.h"
#include <wx/wx.h>

class MyApp : public wxApp
{
public:
	virtual bool OnInit();
};

bool MyApp::OnInit()
{
	MainFrame *frame = new MainFrame(NULL);
	frame->Show(true);
	return true;
}

wxIMPLEMENT_APP(MyApp);
