#include "MainFrame.h"

MainFrame::MainFrame( wxWindow* parent )
:
MainFrame1( parent )
{
	m_scrollBar_move_hand->SetRange(100);
	m_scrollBar_move_hand->SetThumbSize(1);
	wxInitAllImageHandlers();
}

void MainFrame::update( wxUpdateUIEvent& event )
{
	Bind(wxEVT_PAINT, &MainFrame::draw, this);
	m_textCtrl_show->Bind(wxEVT_COMMAND_TEXT_UPDATED, &MainFrame::drawt, this);
}

void MainFrame::draw(wxPaintEvent& event) {
	draw();
}

void MainFrame::drawt(wxCommandEvent& event) {
	draw();
}

void MainFrame::draw()
{
wxClientDC *MyDC1;
MyDC1 = new wxClientDC(m_panel_monkey);
wxBufferedDC* MyDC = new wxBufferedDC(MyDC1);

wxSize size = m_panel_monkey->GetSize();
int b = size.GetHeight();
int a = size.GetWidth();
MyDC->DrawRectangle(-1, -1, a + 2, b + 2);
MyDC->DrawCircle(a / 2, b / 2, 20);
MyDC->DrawEllipse(a / 2 - 12, b / 2 - 7, 10, 6);
MyDC->DrawEllipse(a / 2 + 4, b / 2 - 10, 6, 10);
MyDC->DrawSpline(a / 2 - 10, b / 2 + 10, a / 2, b / 2 + 5, a / 2 + 10, b / 2 + 10);
MyDC->DrawLine(wxPoint(a / 2, b / 2 + 20), wxPoint(a / 2, b / 2 + 90));
MyDC->DrawLine(wxPoint(a / 2, b / 2 + 25), wxPoint(a / 2 + 25, b / 2 + 45));
MyDC->DrawLine(wxPoint(a / 2, b / 2 + 90), wxPoint(a / 2 + 25, b / 2 + 120));
MyDC->DrawLine(wxPoint(a / 2, b / 2 + 90), wxPoint(a / 2 - 25, b / 2 + 120));
wxString const &text = m_textCtrl_show->GetValue();
MyDC->DrawText(text, a / 2 - 85, b / 2 + 120);
MyDC->SetFont(wxFont(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, "Segoe Script"));
MyDC->DrawRotatedText(text, a / 2 + 85, b / 2 + 120, 90);

if (save)
{
wxBitmap savebitmap(a, b);
wxMemoryDC memDC;
memDC.SelectObject(savebitmap);
memDC.Blit(0, 0, a, b, MyDC, 0, 0);
savebitmap.SaveFile("malpa.bmp", wxBITMAP_TYPE_BMP);
}

delete MyDC;
delete MyDC1;
}

void MainFrame::save_picture( wxCommandEvent& event )
{
save = true;
draw();
save = false;
}

void MainFrame::give_monkey_banana( wxCommandEvent& event )
{
if(m_scrollBar_move_hand->IsEnabled() == false)
m_scrollBar_move_hand->Enable(true);
else
m_scrollBar_move_hand->Enable(false);
}

void MainFrame::scrollbar_changed( wxScrollEvent& event )
{
int srcrollposition = m_scrollBar_move_hand->GetThumbPosition();
int gaugerange = m_gauge_move_hand->GetRange();
m_gauge_move_hand->SetValue(srcrollposition);
}

void MainFrame::text_updated( wxCommandEvent& event )
{
	Bind(wxEVT_UPDATE_UI, &MainFrame::update, this);
}
