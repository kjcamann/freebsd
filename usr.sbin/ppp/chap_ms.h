/*
 * chap.h - Cryptographic Handshake Authentication Protocol definitions.
 *
 * Copyright (c) 1995 Eric Rosenquist, Strata Software Limited.
 * http://www.strataware.com/
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that the above copyright notice and this paragraph are
 * duplicated in all such forms and that any documentation,
 * advertising materials, and other materials related to such
 * distribution and use acknowledge that the software was developed
 * by Eric Rosenquist.  The name of the author may not be used to
 * endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 * $Id$
 */

#ifndef _CHAPMS_H_

#define MAX_NT_PASSWORD	256   /* Max # of (Unicode) chars in an NT password */
#define MS_CHAP_RESPONSE_LEN 49 /* Don't rely on sizeof(MS_ChapResponse) in case of struct padding */  

extern void ChapMS(char*, char*, int);

#define _CHAPMS_H_
#endif /* _CHAPMS_H_ */
