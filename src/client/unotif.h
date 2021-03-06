/*
 *    unotif.h
 *
 *    gtmess - MSN Messenger client
 *    Copyright (C) 2002-2007  George M. Tzoumas
 *
 *    This program is free software; you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation; either version 2 of the License, or
 *    (at your option) any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program; if not, write to the Free Software
 *    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _UNOTIF_H_
#define _UNOTIF_H_

#include "sound.h"

void unotif_init(int asound, int apopup);
void unotif_done();
void playsound(char snd);
void unotify(char *mesg, char effect);
int  need_beep(char *nick);
int can_notif(char *login);

#endif
