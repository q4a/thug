/*****************************************************************************
**																			**
**					   	  Neversoft Entertainment							**
**																		   	**
**				   Copyright (C) 1999 - All Rights Reserved				   	**
**																			**
******************************************************************************
**																			**
**	Project:		SYS Library											    **
**																			**
**	Module:			System Header											**
**																			**
**	Created:		10/26/99	mjb											**
**																			**
**	File name:		sys/sys.h											    **
**																			**
*****************************************************************************/

#ifndef __SYS_SYS_H
#define __SYS_SYS_H


/*****************************************************************************
**							  	  Includes									**
*****************************************************************************/


#ifdef __PLAT_WN32__

#else
#ifdef __PLAT_NGPS__

#else
#ifdef __PLAT_XBOX__

#else
#ifdef __PLAT_NGC__

#else
#error Unsupported Platform
#endif
#endif
#endif
#endif


/*****************************************************************************
**								   Defines									**
*****************************************************************************/

namespace Sys
{
 
/*****************************************************************************
**							     Type Defines								**
*****************************************************************************/


/*****************************************************************************
**							 Private Declarations							**
*****************************************************************************/


/*****************************************************************************
**							  Private Prototypes							**
*****************************************************************************/


/*****************************************************************************
**							  Public Declarations							**
*****************************************************************************/


/*****************************************************************************
**							   Public Prototypes							**
*****************************************************************************/


/*****************************************************************************
**									Macros									**
*****************************************************************************/

} // namespace Sys

#endif	// __SYS_SYS_H