///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "MainWindow.h"

///////////////////////////////////////////////////////////////////////////

MainFrame1::MainFrame1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 590,390 ), wxDefaultSize );
	
	wxBoxSizer* bSizerMainWindow;
	bSizerMainWindow = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizerLeft;
	bSizerLeft = new wxBoxSizer( wxVERTICAL );
	
	m_panel_monkey = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel_monkey->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_panel_monkey->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );
	
	bSizerLeft->Add( m_panel_monkey, 1, wxEXPAND|wxALL, 5 );
	
	
	bSizerMainWindow->Add( bSizerLeft, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerRight;
	bSizerRight = new wxBoxSizer( wxVERTICAL );
	
	m_button_save_to_file = new wxButton( this, wxID_ANY, wxT("Zapis do pliku"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerRight->Add( m_button_save_to_file, 0, wxALIGN_CENTER|wxALL, 5 );
	
	m_checkBox_banana = new wxCheckBox( this, wxID_ANY, wxT("banan"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerRight->Add( m_checkBox_banana, 0, wxALIGN_CENTER|wxALL, 5 );
	
	m_scrollBar_move_hand = new wxScrollBar( this, wxID_ANY, wxDefaultPosition, wxSize( 185,-1 ), wxSB_HORIZONTAL );
	bSizerRight->Add( m_scrollBar_move_hand, 0, wxALIGN_CENTER|wxALL, 5 );
	
	m_gauge_move_hand = new wxGauge( this, wxID_ANY, 100, wxDefaultPosition, wxDefaultSize, wxGA_HORIZONTAL );
	m_gauge_move_hand->SetValue( 0 ); 
	bSizerRight->Add( m_gauge_move_hand, 0, wxALIGN_CENTER|wxALL, 5 );
	
	m_button_change_star_color = new wxButton( this, wxID_ANY, wxT("kolor gwiazdki"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerRight->Add( m_button_change_star_color, 0, wxALIGN_CENTER|wxALL, 5 );
	
	m_textCtrl_show = new wxTextCtrl( this, wxID_ANY, wxT("tekst"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerRight->Add( m_textCtrl_show, 0, wxALIGN_CENTER|wxALL, 5 );
	
	wxString m_choice_pictureChoices[] = { wxT("gwiazdka"), wxT("księżyc"), wxT("słonko") };
	int m_choice_pictureNChoices = sizeof( m_choice_pictureChoices ) / sizeof( wxString );
	m_choice_picture = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_pictureNChoices, m_choice_pictureChoices, 0 );
	m_choice_picture->SetSelection( 0 );
	bSizerRight->Add( m_choice_picture, 0, wxALIGN_CENTER|wxALL, 5 );
	
	
	bSizerMainWindow->Add( bSizerRight, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizerMainWindow );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_PAINT, wxPaintEventHandler( MainFrame1::kappa ) );
	m_panel_monkey->Connect( wxEVT_PAINT, wxPaintEventHandler( MainFrame1::w_dupe ), NULL, this );
	m_panel_monkey->Connect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MainFrame1::mleczko ), NULL, this );
	m_button_save_to_file->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame1::save_picture ), NULL, this );
	m_checkBox_banana->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MainFrame1::give_monkey_banana ), NULL, this );
	m_scrollBar_move_hand->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MainFrame1::scrollbar_changed ), NULL, this );
	m_scrollBar_move_hand->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MainFrame1::scrollbar_changed ), NULL, this );
	m_scrollBar_move_hand->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MainFrame1::scrollbar_changed ), NULL, this );
	m_scrollBar_move_hand->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MainFrame1::scrollbar_changed ), NULL, this );
	m_scrollBar_move_hand->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MainFrame1::scrollbar_changed ), NULL, this );
	m_scrollBar_move_hand->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MainFrame1::scrollbar_changed ), NULL, this );
	m_scrollBar_move_hand->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MainFrame1::scrollbar_changed ), NULL, this );
	m_scrollBar_move_hand->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MainFrame1::scrollbar_changed ), NULL, this );
	m_scrollBar_move_hand->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MainFrame1::scrollbar_changed ), NULL, this );
}

MainFrame1::~MainFrame1()
{
	// Disconnect Events
	this->Disconnect( wxEVT_PAINT, wxPaintEventHandler( MainFrame1::kappa ) );
	m_panel_monkey->Disconnect( wxEVT_PAINT, wxPaintEventHandler( MainFrame1::w_dupe ), NULL, this );
	m_panel_monkey->Disconnect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MainFrame1::mleczko ), NULL, this );
	m_button_save_to_file->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame1::save_picture ), NULL, this );
	m_checkBox_banana->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MainFrame1::give_monkey_banana ), NULL, this );
	m_scrollBar_move_hand->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MainFrame1::scrollbar_changed ), NULL, this );
	m_scrollBar_move_hand->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MainFrame1::scrollbar_changed ), NULL, this );
	m_scrollBar_move_hand->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MainFrame1::scrollbar_changed ), NULL, this );
	m_scrollBar_move_hand->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MainFrame1::scrollbar_changed ), NULL, this );
	m_scrollBar_move_hand->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MainFrame1::scrollbar_changed ), NULL, this );
	m_scrollBar_move_hand->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MainFrame1::scrollbar_changed ), NULL, this );
	m_scrollBar_move_hand->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MainFrame1::scrollbar_changed ), NULL, this );
	m_scrollBar_move_hand->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MainFrame1::scrollbar_changed ), NULL, this );
	m_scrollBar_move_hand->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MainFrame1::scrollbar_changed ), NULL, this );
	
}
