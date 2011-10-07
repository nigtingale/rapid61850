/**
 * Rapid-prototyping protection schemes with IEC 61850
 *
 * Copyright (c) 2011 Steven Blair
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef IED_H
#define IED_H

#ifdef __cplusplus /* If this is a C++ compiler, use C linkage */
extern "C" {
#endif

#include "datatypes.h"

struct E1Q1SB1 {
	struct {
		struct {
			struct LN0 LLN0;
			struct exampleRMXU RMXU_1;
			struct LPHDa LPHD_1;
			struct CSWIa CSWI_1;
			struct CSWIa CSWI_2;
			struct MMXUa MMXU_1;
			struct TVTRa TVTR_1;
		} C1;
	} S1;
};

struct E1Q1BP2 {
	struct {
	} S1;
};

struct E1Q1BP3 {
	struct {
	} S1;
};

struct E1Q2SB1 {
	struct {
	} S1;
};

struct E1Q3SB1 {
	struct {
	} S1;
};

struct E1Q3KA1 {
	struct {
	} S1;
};

struct E1Q3KA2 {
	struct {
	} S1;
};

struct E1Q3KA3 {
	struct {
	} S1;
};

struct D1Q1SB1 {
	struct {
	} S1;
};

struct D1Q1BP2 {
	struct {
	} S1;
};

struct D1Q1BP3 {
	struct {
	} S1;
};

struct D1Q1SB4 {
	struct {
		struct {
			struct LN0 LLN0;
			struct exampleMMXU MMXU_1;
			struct LPHDa LPHD_1;
			struct RSYNa RSYN_1;
		} C1;
	} S1;
};




extern struct E1Q1SB1 E1Q1SB1;
extern struct E1Q1BP2 E1Q1BP2;
extern struct E1Q1BP3 E1Q1BP3;
extern struct E1Q2SB1 E1Q2SB1;
extern struct E1Q3SB1 E1Q3SB1;
extern struct E1Q3KA1 E1Q3KA1;
extern struct E1Q3KA2 E1Q3KA2;
extern struct E1Q3KA3 E1Q3KA3;
extern struct D1Q1SB1 D1Q1SB1;
extern struct D1Q1BP2 D1Q1BP2;
extern struct D1Q1BP3 D1Q1BP3;
extern struct D1Q1SB4 D1Q1SB4;


#ifdef __cplusplus /* If this is a C++ compiler, end C linkage */
}
#endif

#endif