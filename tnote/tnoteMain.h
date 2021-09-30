/***************************************************************
 * Name:      tnoteMain.h
 * Purpose:   Defines Application Frame
 * Author:    macesdev foundation (contact@macesdev.net)
 * Created:   2021-09-29
 * Copyright: macesdev foundation (macesdev.github.io/tnote/,)
 * License:
 **************************************************************/

#ifndef TNOTEMAIN_H
#define TNOTEMAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "tnoteApp.h"

class tnoteFrame: public wxFrame
{
    public:
        tnoteFrame(wxFrame *frame, const wxString& title);
        ~tnoteFrame();
    private:
        enum
        {
            idMenuQuit = 1000,
            idMenuAbout
        };
        void OnClose(wxCloseEvent& event);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        DECLARE_EVENT_TABLE()
};


#endif // TNOTEMAIN_H
