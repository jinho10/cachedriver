/******************************************************************************
 * tools/mcd/mcd.h
 *
 * Xen domain mortar.
 *
 * Copyright (c) 2012 The George Washington University (Jinho Hwang)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */


#ifndef __XEN_MCD_H__
#define __XEN_MCD_H__


#include "spinlock.h"
#include "xc.h"
#include <xc_private.h>

#include <xen/event_channel.h>
#include <xen/mcd.h>

#include "mcd_event.h"


typedef struct mcd {
    xc_interface *xc_handle;

    xc_platform_info_t *platform_info;
    xc_domaininfo_t    *domain_info;

    unsigned long  bitmap_size;
    unsigned long *bitmap;

    mcd_event_t mcd_event;
    int policy_mru_size;
} mcd_t;


typedef struct mcd_victim {
    /* the gfn of the page to evict */
    unsigned long gfn;
} mcd_victim_t;


#endif // __XEN_MCD_H__


/*
 * Local variables:
 * mode: C
 * c-set-style: "BSD"
 * c-basic-offset: 4
 * tab-width: 4
 * indent-tabs-mode: nil
 * End:
 */
