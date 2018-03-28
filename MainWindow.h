///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __MAINWINDOW_H__
#define __MAINWINDOW_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/panel.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/checkbox.h>
#include <wx/scrolbar.h>
#include <wx/gauge.h>
#include <wx/textctrl.h>
#include <wx/choice.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame1
///////////////////////////////////////////////////////////////////////////////
class MainFrame1 : public wxFrame 
{
	private:
	
	protected:
		wxPanel* m_panel_monkey;
		wxButton* m_button_save_to_file;
		wxCheckBox* m_checkBox_banana;
		wxScrollBar* m_scrollBar_move_hand;
		wxGauge* m_gauge_move_hand;
		wxButton* m_button_change_star_color;
		wxTextCtrl* m_textCtrl_show;
		wxChoice* m_choice_picture;
		
		// Virtual event handlers, overide them in your derived class
		virtual void kappa( wxPaintEvent& event ) { event.Skip(); }
		virtual void w_dupe( wxPaintEvent& event ) { event.Skip(); }
		virtual void mleczko( wxUpdateUIEvent& event ) { event.Skip(); }
		virtual void save_picture( wxCommandEvent& event ) { event.Skip(); }
		virtual void give_monkey_banana( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		MainFrame1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("GFK Lab 03 małpa"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 590,390 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~MainFrame1();
	
};

#endif //__MAINWINDOW_H__
