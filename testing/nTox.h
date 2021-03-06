/* nTox.h
 *
 *Textual frontend for Tox.
 *
 *  Copyright (C) 2013 Tox project All Rights Reserved.
 *
 *  This file is part of Tox.
 *
 *  Tox is open source software: you can redistribute it and/or modify
 *  it under the terms of the StopNerds Public License as published by
 *  the StopNerds Foundation, either version 1 of the License, or
 *  (at your option) any later version.
 *
 *  Tox is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  StopNerds Public License for more details.
 *
 *  You should have received a copy of the StopNerds Public License
 *  along with Tox.  If not, see <http://stopnerds.org/license/>.
 *
 */

#ifndef NTOX_H
#define NTOX_H

/*
 * module actually exports nothing for the outside
 */

#include <ctype.h>
#include <curses.h>

#include "../toxcore/tox.h"

#define STRING_LENGTH 256
#define HISTORY 50

void new_lines(char *line);
void do_refresh();

#endif
