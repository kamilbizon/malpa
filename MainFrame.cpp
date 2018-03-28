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

if (m_checkBox_banana->IsChecked())
{
	MyDC->DrawCircle(a / 2 - 12, b / 2 - 7, 8);
	MyDC->DrawCircle(a / 2 + 4, b / 2 - 10, 8);
	MyDC->DrawSpline(a / 2 - 10, b / 2 + 10, a / 2, b / 2 + 15, a / 2 + 10, b / 2 + 10);
}
else
{
	MyDC->DrawSpline(a / 2 - 10, b / 2 + 10, a / 2, b / 2 + 5, a / 2 + 10, b / 2 + 10);
	MyDC->DrawEllipse(a / 2 - 12, b / 2 - 7, 10, 6);
	MyDC->DrawEllipse(a / 2 + 4, b / 2 - 10, 6, 10);
}
MyDC->DrawLine(wxPoint(a / 2, b / 2 + 20), wxPoint(a / 2, b / 2 + 90));// cialo
MyDC->DrawLine(wxPoint(a / 2, b / 2 + 25), wxPoint(a / 2 + 25, b / 2 + 45));// reka
MyDC->DrawLine(wxPoint(a / 2, b / 2 + 90), wxPoint(a / 2 + 25, b / 2 + 120));// noga
MyDC->DrawLine(wxPoint(a / 2, b / 2 + 90), wxPoint(a / 2 - 25, b / 2 + 120));// noga

if (m_choice_picture->GetSelection() == 0)
{
	MyDC->SetBrush(wxColor(255, 200, 0));
	wxPoint star[10];
	star[0] = wxPoint(120, 120);
	star[1] = wxPoint(125, 125);
	star[2] = wxPoint(130, 125);
	star[3] = wxPoint(126, 130);
	star[4] = wxPoint(127, 140);
	star[5] = wxPoint(122, 130);
	star[6] = wxPoint(118, 140);
	star[7] = wxPoint(118, 130);
	star[8] = wxPoint(113, 125);
	star[9] = wxPoint(120, 125);
	MyDC->DrawPolygon(10, star, 30, 30);
}

wxString const &text = m_textCtrl_show->GetValue();
MyDC->DrawText(text, a / 2 - 85, b / 2 + 120);
MyDC->SetFont(wxFont(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, "Segoe Script"));
MyDC->DrawRotatedText(text, a / 2 + 85, b / 2 + 120, 90);

MyDC->SetDeviceOrigin(a / 2, b / 2 + 25);
double move = (m_scrollBar_move_hand->GetThumbPosition() / 100.0) * 32;
MyDC->DrawLine(wxPoint(0, 0), wxPoint(-25 , 25 - move));

if (m_checkBox_banana->IsChecked())
{
	wxBitmap banana(30, 30);
	if (banana.LoadFile("banan.png", wxBITMAP_TYPE_PNG))
		MyDC->DrawBitmap(banana, -70, 15 - move, true);
}


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

draw();
}

void MainFrame::scrollbar_changed( wxScrollEvent& event )
{
int srcrollposition = m_scrollBar_move_hand->GetThumbPosition();
m_gauge_move_hand->SetValue(srcrollposition);
draw();
}

void MainFrame::text_updated( wxCommandEvent& event )
{
	Bind(wxEVT_UPDATE_UI, &MainFrame::update, this);
}
