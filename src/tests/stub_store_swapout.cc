/*
 * $Id: stub_store_swapout.cc,v 1.1 2005/01/03 16:08:27 robertc Exp $
 *
 * DEBUG: section 84    Helper process maintenance
 * AUTHOR: Robert Collins
 *
 * SQUID Web Proxy Cache          http://www.squid-cache.org/
 * ----------------------------------------------------------
 *
 *  Squid is the result of efforts by numerous individuals from
 *  the Internet community; see the CONTRIBUTORS file for full
 *  details.   Many organizations have provided support for Squid's
 *  development; see the SPONSORS file for full details.  Squid is
 *  Copyrighted (C) 2001 by the Regents of the University of
 *  California; see the COPYRIGHT file for full details.  Squid
 *  incorporates software developed and/or copyrighted by other
 *  sources; see the CREDITS file for full details.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *  
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111, USA.
 *
 */

#include "squid.h"

void
storeSwapOutFileClose(StoreEntry * e)
{
    fatal ("Not implemented");
}

int
storeSwapOutAble(const StoreEntry * e)
{
    fatal ("Not implemented");
    return -1;
}

/* wrong stub file... */
void
storeUnlink(StoreEntry * e)
{
    fatal ("Not implemented");
}


void
storeIOStats(StoreEntry *)
{
    fatal ("Not implemented");
}


#include "StoreMeta.h"

char *
storeSwapMetaPack(tlv * tlv_list, int *length)
{
    fatal ("Not implemented");
    return NULL;
}

tlv *
storeSwapMetaBuild(StoreEntry * e)
{
    fatal ("Not implemented");
    return NULL;
}

void
storeSwapTLVFree(tlv * n)
{
    fatal ("Not implemented");
}

