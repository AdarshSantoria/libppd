/* Copyright (C) 1989, 1995, 1996 Aladdin Enterprises.  All rights reserved.
  
  This file is part of GNU Ghostscript.
  
  GNU Ghostscript is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY.  No author or distributor accepts responsibility
  to anyone for the consequences of using it or for whether it serves any
  particular purpose or works at all, unless he says so in writing.  Refer
  to the GNU General Public License for full details.
  
  Everyone is granted permission to copy, modify and redistribute GNU
  Ghostscript, but only under the conditions described in the GNU General
  Public License.  A copy of this license is supposed to have been given
  to you along with GNU Ghostscript so you can know your rights and
  responsibilities.  It should be in a file named COPYING.  Among other
  things, the copyright notice and this notice must be preserved on all
  copies.
  
  Aladdin Enterprises supports the work of the GNU Project, but is not
  affiliated with the Free Software Foundation or the GNU Project.  GNU
  Ghostscript, as distributed by Aladdin Enterprises, does not require any
  GNU software to build or run it.
*/

/*$Id: gzline.h,v 1.2 2000/03/08 23:15:07 mike Exp $ */
/* Line parameter implementation */

#ifndef gzline_INCLUDED
#  define gzline_INCLUDED

#include "gxline.h"

#define private_st_line_params() /* in gsstate.c */\
  gs_private_st_ptrs1(st_line_params, gx_line_params, "line_params",\
    line_params_enum_ptrs, line_params_reloc_ptrs, dash.pattern)
#define st_line_params_num_ptrs 1

/* Internal accessor for line parameters in graphics state */
const gx_line_params *gs_currentlineparams(P1(const gs_imager_state *));

#endif /* gzline_INCLUDED */
