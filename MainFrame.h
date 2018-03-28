#ifndef __MainFrame__
#define __MainFrame__

/**
@file
Subclass of MainFrame1, which is generated by wxFormBuilder.
*/

#include "MainWindow.h"

//// end generated include
#include <wx\wxprec.h>


/** Implementing MainFrame1 */
class MainFrame : public MainFrame1
{
	protected:
		// Handlers for MainFrame1 events.
		void kappa( wxPaintEvent& event );
		void w_dupe( wxPaintEvent& event );
		void mleczko( wxUpdateUIEvent& event );
		void save_picture( wxCommandEvent& event );
		void give_monkey_banana( wxCommandEvent& event );
		void scrollbar_changed( wxScrollEvent& event );
	public:
		/** Constructor */
		MainFrame( wxWindow* parent );
	//// end generated class members
		void Form_Paint(wxPaintEvent &e);
		//BasicDrawPane* drawpane;






};

#endif // __MainFrame__
