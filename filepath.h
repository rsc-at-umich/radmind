/*
 * Copyright (c) 2013 Regents of the University of Michigan.
 * All Rights Reserved.   See COPYRIGHT.
 */

#if !defined(_RADMIND_FILEPATH_H)
#  define _RADMIND_FILEPATH_H "$Id"

#  include <string.h>

#define _GCC_UNUSED __attribute__((unused))
typedef unsigned char filepath_t;

/* Give a reasonably smart compiler a chance to optimize these trivial functions. */

static _GCC_UNUSED size_t      filepath_len (const filepath_t *name);
static _GCC_UNUSED filepath_t *filepath_dup (const filepath_t *name);
static _GCC_UNUSED int         filepath_cmp (const filepath_t *p1, const filepath_t *p2);
static _GCC_UNUSED int         filepath_casecmp (const filepath_t *p1, const filepath_t *p2);
static _GCC_UNUSED int         filepath_ncmp (const filepath_t *p1, const filepath_t *p2, size_t len);
static _GCC_UNUSED int         filepath_ncasecmp (const filepath_t *p1, const filepath_t *p2, size_t len);
static _GCC_UNUSED filepath_t *filepath_cpy (filepath_t *dest, const filepath_t *src);
static _GCC_UNUSED filepath_t *filepath_ncpy (filepath_t *dest, const filepath_t *src, size_t len);

static _GCC_UNUSED size_t      filepath_len (const filepath_t *name)                          {return  strlen ((const char *) name);}
static _GCC_UNUSED filepath_t *filepath_dup (const filepath_t *name)                          {return (filepath_t *) strdup ((const char *) name);}
static _GCC_UNUSED int         filepath_cmp (const filepath_t *p1, const filepath_t *p2)      {return  strcmp((const char *) p1, (const char *)p2);}
static _GCC_UNUSED int         filepath_casecmp (const filepath_t *p1, const filepath_t *p2)  {return  strcasecmp((const char *) p1, (const char *)p2);}
static _GCC_UNUSED int         filepath_ncmp (const filepath_t *p1, const filepath_t *p2, size_t len)     {return  strncmp((const char *) p1, (const char *)p2, len);}
static _GCC_UNUSED int         filepath_ncasecmp (const filepath_t *p1, const filepath_t *p2, size_t len) {return  strncasecmp((const char *) p1, (const char *)p2, len);}
static _GCC_UNUSED filepath_t *filepath_cpy (filepath_t *dest, const filepath_t *src)        {return (filepath_t *) strcpy ((char *) dest, (const char *) src);}
static _GCC_UNUSED filepath_t *filepath_ncpy (filepath_t *dest, const filepath_t *src, size_t len)        {return (filepath_t *) strncpy ((char *) dest, (const char *) src, len);}


#endif /* defined (_RADMIND_FILE_PATH_H) */
