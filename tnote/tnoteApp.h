/***************************************************************
 * Name:      tnoteApp.h
 * Purpose:   Defines Application Class
 * Author:    macesdev foundation (contact@macesdev.net)
 * Created:   2021-09-29
 * Copyright: macesdev foundation (macesdev.github.io/tnote/,)
 * License:
 **************************************************************/

#ifndef TNOTEAPP_H
#define TNOTEAPP_H

#include <wx/app.h>

class tnoteApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // TNOTEAPP_H
