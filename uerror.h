/*
 *	Compiler error handler
 *	Copyright
 *		(C) 1992 Joseph H. Allen
 *
 *	This file is part of JOE (Joe's Own Editor)
 */
#ifndef _JOE_UERROR_H
#define _JOE_UERROR_H 1

int unxterr PARAMS((BW *bw));
int uprverr PARAMS((BW *bw));
void parserrb PARAMS((B *b));
int uparserr PARAMS((BW *bw));
int uthiserrbuf PARAMS((BW *bw));
int ujump PARAMS((BW *bw));
void inserr PARAMS((unsigned char *name, long int where, long int n, int bol));
void delerr PARAMS((unsigned char *name, long int where, long int n));
void abrerr PARAMS((unsigned char *name));
void saverr PARAMS((unsigned char *name));
B *beafter PARAMS((B *));
extern B *errbuf; /* Buffer which has error messages. */
extern P *errp;  /* Current error line in errbuf. */
void parseone_grep PARAMS((struct charmap *map, unsigned char *s, unsigned char **rtn_name, long *rtn_line));
int ucurrent_msg PARAMS((BW *bw));
/* Return the current error line number in errbuf, or -1. */
P *get_error_srcp PARAMS((void));

#endif
