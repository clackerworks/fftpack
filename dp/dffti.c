/* dffti.f -- translated by f2c (version 20240504).
   You must link the resulting object file with libf2c:
	on Microsoft Windows system, link with libf2c.lib;
	on Linux or Unix systems, link with .../path/to/libf2c.a -lm
	or, if you install libf2c.a in a standard place, with -lf2c -lm
	-- in that order, at the end of the command line, as in
		cc *.o -lf2c -lm
	Source for libf2c is in /netlib/f2c/libf2c.zip, e.g.,

		http://www.netlib.org/f2c/libf2c.zip
*/

#include "f2c.h"

/* Subroutine */ int dffti_(integer *n, doublereal *wsave)
{
    extern /* Subroutine */ int rffti1_(integer *, doublereal *, doublereal *)
	    ;

    /* Parameter adjustments */
    --wsave;

    /* Function Body */
    if (*n == 1) {
	return 0;
    }
    rffti1_(n, &wsave[*n + 1], &wsave[(*n << 1) + 1]);
    return 0;
} /* dffti_ */

