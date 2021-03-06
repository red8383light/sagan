/*
** Copyright (C) 2009-2016 Quadrant Information Security <quadrantsec.com>
** Copyright (C) 2009-2016 Champ Clark III <cclark@quadrantsec.com>
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License Version 2 as
** published by the Free Software Foundation.  You may not use, modify or
** distribute this program under any other version of the GNU General
** Public License.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
*/

#ifdef HAVE_CONFIG_H
#include "config.h"             /* From autoconf */
#endif

#include "parsers/sagan-strstr/sagan-strstr-hook.h"

char *Sagan_Parse_IP( char *, int );
int   Sagan_Parse_Src_Port( char * );
int   Sagan_Parse_Dst_Port( char * );
int   Sagan_Parse_Proto( char * );
int   Sagan_Parse_Proto_Program( char * );
char *Sagan_Parse_Hash(char *, int );
char *Sagan_Parse_Hash_Cleanup(char *);



