//
//  Curses-Bridging-Header.h
//  TermKit
//
//  Created by Miguel de Icaza on 4/29/19.
//  Copyright © 2019 Miguel de Icaza. All rights reserved.
//

#ifndef Curses_Bridging_Header_h
#define Curses_Bridging_Header_h
#include <wchar.h>

// #define NCURSES_WIDECHAR 1
// #include <ncursesw/curses.h>
// #include <cursesw.h>

#define _XOPEN_SOURCE_EXTENDED 1
#include <curses.h>

typedef struct
{
    int      attr;
    wchar_t     chars[5];
} m_cchar_t;
#endif /* Curses_Bridging_Header_h */
