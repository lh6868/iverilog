/*
 * Copyright (c) 2010-2018 Stephen Williams (steve@icarus.com)
 *
 *    This source code is free software; you can redistribute it
 *    and/or modify it in source code form under the terms of the GNU
 *    General Public License as published by the Free Software
 *    Foundation; either version 2 of the License, or (at your option)
 *    any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program; if not, write to the Free Software
 *    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

extern void v2009_array_register(void);
extern void v2009_bitvec_register(void);
extern void v2009_enum_register(void);
extern void v2009_string_register(void);

void (*vlog_startup_routines[])(void) = {
      v2009_array_register,
      v2009_sys_bitvec_register,
      v2009_enum_register,
      v2009_string_register,
      0
};
