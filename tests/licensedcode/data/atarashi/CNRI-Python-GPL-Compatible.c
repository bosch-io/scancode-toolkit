
/* SPDX-License-Identifier: CNRI-Python-GPL-Compatible */
/*
CNRI OPEN SOURCE GPL-COMPATIBLE LICENSE AGREEMENT

IMPORTANT: PLEASE
READ THE FOLLOWING AGREEMENT CAREFULLY.

BY CLICKING ON "ACCEPT" WHERE
INDICATED BELOW, OR BY COPYING, INSTALLING OR OTHERWISE USING PYTHON
1.6.1 SOFTWARE, YOU ARE DEEMED TO HAVE AGREED TO THE TERMS AND
CONDITIONS OF THIS LICENSE AGREEMENT.

   1. This LICENSE AGREEMENT is
between the Corporation for National Research Initiatives, having an
office at 1895 Preston White Drive, Reston, VA 20191 ("CNRI"), and the
Individual or Organization ("Licensee") accessing and otherwise using
Python 1.6.1 software in source or binary form and its associated
documentation.

   2. Subject to the terms and conditions of this
License Agreement, CNRI hereby grants Licensee a nonexclusive,
royalty-free, world-wide license to reproduce, analyze, test, perform
and/or display publicly, prepare derivative works, distribute, and
otherwise use Python 1.6.1 alone or in any derivative version,
provided, however, that CNRI's License Agreement and CNRI's notice of
copyright, i.e., "Copyright © 1995-2001 Corporation for National
Research Initiatives; All Rights Reserved" are retained in Python
1.6.1 alone or in any derivative version prepared by Licensee.
Alternately, in lieu of CNRI's License Agreement, Licensee may
substitute the following text (omitting the quotes): "Python 1.6.1 is
made available subject to the terms and conditions in CNRI's License
Agreement. This Agreement together with Python 1.6.1 may be located on
the Internet using the following unique, persistent identifier (known
as a handle): 1895.22/1013. This Agreement may also be obtained from a
proxy server on the Internet using the following URL:
http://hdl.handle.net/1895.22/1013".

   3. In the event Licensee
prepares a derivative work that is based on or incorporates Python
1.6.1 or any part thereof, and wants to make the derivative work
available to others as provided herein, then Licensee hereby agrees to
include in any such work a brief summary of the changes made to Python
1.6.1.

   4. CNRI is making Python 1.6.1 available to Licensee on an
"AS IS" basis. CNRI MAKES NO REPRESENTATIONS OR WARRANTIES, EXPRESS OR
IMPLIED. BY WAY OF EXAMPLE, BUT NOT LIMITATION, CNRI MAKES NO AND
DISCLAIMS ANY REPRESENTATION OR WARRANTY OF MERCHANTABILITY OR FITNESS
FOR ANY PARTICULAR PURPOSE OR THAT THE USE OF PYTHON 1.6.1 WILL NOT
INFRINGE ANY THIRD PARTY RIGHTS.

   5. CNRI SHALL NOT BE LIABLE TO
LICENSEE OR ANY OTHER USERS OF PYTHON 1.6.1 FOR ANY INCIDENTAL,
SPECIAL, OR CONSEQUENTIAL DAMAGES OR LOSS AS A RESULT OF MODIFYING,
DISTRIBUTING, OR OTHERWISE USING PYTHON 1.6.1, OR ANY DERIVATIVE
THEREOF, EVEN IF ADVISED OF THE POSSIBILITY THEREOF.

   6. This
License Agreement will automatically terminate upon a material breach
of its terms and conditions.

   7. This License Agreement shall be
governed by the federal intellectual property law of the United
States, including without limitation the federal copyright law, and,
to the extent such U.S. federal law does not apply, by the law of the
Commonwealth of Virginia, excluding Virginia's conflict of law
provisions. Notwithstanding the foregoing, with regard to derivative
works based on Python 1.6.1 that incorporate non-separable material
that was previously distributed under the GNU General Public License
(GPL), the law of the Commonwealth of Virginia shall govern this
License Agreement only as to issues arising under or with respect to
Paragraphs 4, 5, and 7 of this License Agreement. Nothing in this
License Agreement shall be deemed to create any relationship of
agency, partnership, or joint venture between CNRI and Licensee. This
License Agreement does not grant permission to use CNRI trademarks or
trade name in a trademark sense to endorse or promote products or
services of Licensee, or any third party.

   8. By clicking on the
"ACCEPT" button where indicated, or by copying, installing or
otherwise using Python 1.6.1, Licensee agrees to be bound by the terms
and conditions of this License Agreement. ACCEPT
*/

/*
** Fake code so we have something.
*/
#include <nothing.h>


int
noop_fun(int arg1)
{
	short retval;

	recalculatearg(&arg1);

	switch (arg1)
	{
		case 0:
			if (arg1) {
					retval = 1;
			} else {
			retval = 2;
			}
		case 1:
			retval = 2;
		case 2:
			retval = morpharg(arg1);
		case 3:
			if (arg1) {
				retval = 6;
			} else {
				retval = 7;
			}
		case 4:
			retval = upscalearg(arg1);
		default:
			retval = 0;
	}

	return retval;
}

