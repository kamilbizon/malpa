#include "MainFrame.h"

MainFrame::MainFrame( wxWindow* parent )
:
MainFrame1( parent )
{
	//drawpane = new BasicDrawPane(this);
	//wxBoxSizer *Sizer = new wxBoxSizer(wxHORIZONTAL);
	//Sizer->Add(drawpane, 1, wxEXPAND | wxALL, 5);
	Bind(wxEVT_PAINT, &MainFrame::OnPaint, this);
}

//wxBEGIN_EVENT_TABLE(MyFrame, wxFrame)
//    EVT_MENU(wxID_EXIT, MyFrame::OnExit)
//    EVT_MENU(DO_TEST, MyFrame::DoTest)
//    EVT_SIZE(MyFrame::OnSize)
//    EVT_BUTTON(BUTTON1, MyFrame::OnButton1)
//wxEND_EVENT_TABLE()

void MainFrame::kappa( wxPaintEvent& event )
{
	//w_dupe(event);
}

void MainFrame::w_dupe( wxPaintEvent& event )
{
wxClientDC *MyDC;
MyDC = new wxClientDC(m_panel_monkey);

wxSize size = m_panel_monkey->GetSize();
int b = size.GetHeight();
int a = size.GetWidth();
MyDC->DrawRectangle(-1,-1,a+2, b+2);
MyDC->DrawCircle(a/2 , b/2, 20);
MyDC->DrawEllipse(a / 2 - 12, b / 2 - 7, 10, 6);
MyDC->DrawEllipse(a / 2 + 4, b / 2 - 10, 6, 10);
MyDC->DrawSpline(a / 2 - 10, b / 2 + 10, a / 2, b / 2 + 5, a / 2 + 10, b / 2 + 10);
MyDC->DrawLine(wxPoint(a / 2, b / 2 + 20), wxPoint(a / 2, b / 2 + 90));
MyDC->DrawLine(wxPoint(a / 2, b / 2 + 25), wxPoint(a / 2 + 25, b / 2 + 45));
MyDC->DrawLine(wxPoint(a / 2, b / 2 + 90), wxPoint(a / 2 + 25, b / 2 + 120));
MyDC->DrawLine(wxPoint(a / 2, b / 2 + 90), wxPoint(a / 2 - 25, b / 2 + 120));
wxString const &text = m_textCtrl_show->GetValue();
//MyDC->DrawText("KAPPA:", a/2 - 25, b/2 + 100);

delete MyDC;
}

void MainFrame::mleczko( wxUpdateUIEvent& event )
{
	Bind(wxEVT_PAINT, &MainFrame::w_dupe, this);
}

void MainFrame::save_picture( wxCommandEvent& event )
{
// TODO: Implement save_picture
}

void MainFrame::give_monkey_banana( wxCommandEvent& event )
{
if(m_scrollBar_move_hand->IsEnabled() == false)
m_scrollBar_move_hand->Enable(true);
else
m_scrollBar_move_hand->Enable(false);
}


void MainFrame::Form_Paint(wxPaintEvent &e)
{

}