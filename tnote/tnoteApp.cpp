/***************************************************************
 * Name:      tnoteApp.cpp
 * Purpose:   Code for Application Class
 * Author:    macesdev foundation (contact@macesdev.net)
 * Created:   2021-09-29
 * Copyright: macesdev foundation (macesdev.github.io/tnote/,)
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "tnoteApp.h"
#include "tnoteMain.h"

IMPLEMENT_APP(tnoteApp);

bool tnoteApp::OnInit()
{
    tnoteFrame* frame = new tnoteFrame(0L, _("wxWidgets Application Template"));
    
    frame->Show();
    
    return true;
}
