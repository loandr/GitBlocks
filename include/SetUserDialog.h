#ifndef SETUSERDIALOG_H
#define SETUSERDIALOG_H

//(*Headers(SetUserDialog)
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class SetUserDialog: public wxDialog
{
	public:

		SetUserDialog(wxWindow* parent,wxWindowID id=wxID_ANY);
		virtual ~SetUserDialog();

		//(*Declarations(SetUserDialog)
		wxStaticText* StaticText1;
		wxTextCtrl* TextCtrl1;
		wxStaticText* StaticText2;
		wxTextCtrl* TextCtrl2;
		//*)

	protected:

		//(*Identifiers(SetUserDialog)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL2;
		//*)

	private:

		//(*Handlers(SetUserDialog)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
