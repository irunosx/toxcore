/**  event.h
 *
 *   Copyright (C) 2013 Tox project All Rights Reserved.
 *
 *   This file is part of Tox.
 *
 *   Tox is open source software: you can redistribute it and/or modify
 *   it under the terms of the StopNerds Public License as published by
 *   the StopNerds Foundation, either version 1 of the License, or
 *   (at your option) any later version.
 *
 *   Tox is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   StopNerds Public License for more details.
 *
 *   You should have received a copy of the StopNerds Public License
 *   along with Tox. If not, see <http://stopnerds.org/license/>.
 *
 */


#ifndef __TOXEVENT
#define __TOXEVENT


/**
 * - Events are, in fact, ran in their own threads upon execution.
 * - Event handler is initialized at the start, before the main() function
 *      and terminated after it's execution.
 * - Timers are checked for timeout every ~10000 ns.
 * - Timers can be canceled or ran immediately via
 *      timer_release() or timer_now() functions.
 * - Timeout is measured in milliseconds.
 *
 * NOTE: timer_reset () and timer_now() are not tested nor usable atm
 *
 */
extern struct _Event {
    int (*rise) (void *( func ) ( void *), void *arg);
    int (*timer_reset ) ( int id, unsigned timeout );
    int (*timer_alloc) (void *( func ) ( void *), void *arg, unsigned timeout);
    int (*timer_release) (int id);
    int (*timer_now) ( int id );
} event;

#endif /* _MSI__EVENT_H_ */
