/******************************************************************************\
** set_time.h                                                                 **
** Interface file for the time set routine                                    **
\******************************************************************************/

#ifndef __SET_TIME_H__
#define __SET_TIME_H__

#include "libttwatch.h"

/*****************************************************************************/
#define TT_MANIFEST_ENTRY_UTC_OFFSET    (169)

/******************************************************************************/
void do_set_time(TTWATCH *watch);

#endif  /* __SET_TIME_H__ */
