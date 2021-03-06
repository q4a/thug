/*****************************************************************************
**																			**
**			              Neversoft Entertainment							**
**																		   	**
**				   Copyright (C) 1999 - All Rights Reserved				   	**
**																			**
******************************************************************************
**																			**
**	Project:		Core Library											**
**																			**
**	Module:			Debug (DBG)		 										**
**																			**
**	File name:		p_debug.cpp												**
**																			**
**	Created by:		05/27/99	-	mjb										**
**																			**
**	Description:	Platform specific debug code							**
**																			**
*****************************************************************************/

/*****************************************************************************
**							  	  Includes									**
*****************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <core/defines.h>

/*****************************************************************************
**								DBG Information								**
*****************************************************************************/



/*****************************************************************************
**								  Externals									**
*****************************************************************************/


/*****************************************************************************
**								   Defines									**
*****************************************************************************/

namespace Dbg
{

/*****************************************************************************
**								Private Types								**
*****************************************************************************/
	



/*****************************************************************************
**								 Private Data								**
*****************************************************************************/


/*****************************************************************************
**								 Public Data								**
*****************************************************************************/


/*****************************************************************************
**							  Private Prototypes							**
*****************************************************************************/


/*****************************************************************************
**							   Private Functions							**
*****************************************************************************/
#ifdef __NOPT_DEBUG__

void		set_up ( void )
{

}

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/

void		close_down ( void )
{

}
#endif // __NOPT_DEBUG__

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/

void	default_print ( char *text )
{

#ifdef __PLAT_WN32__
	
	OutputDebugString ( text );

#else

	printf ( text );

#endif // __CC_VISUALC__

}

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/

void	default_trap ( char* message )
{

#ifdef __CC_VISUALC__
#ifdef __ALLOW_CONTINUE__

	switch ( MessageBox ( GetActiveWindow(), message, "Assertion Failure - Trigger Debugger ?",
							MB_DEFBUTTON1 | MB_YESNO | MB_ICONEXCLAMATION ))
	{
		case IDYES:

			__asm int 3;		// trigger the debugger
			
			break;
	
	}

#else	// __ALLOW_CONTINUE__
	
	MessageBox ( GetActiveWindow(), message, "Assertion Failure",
							MB_DEFBUTTON1 | MB_ICONEXCLAMATION );

	__asm int 3;

#endif	// __ALLOW_CONTINUE__



#else	// __CC_VISUALC__

	exit(-10);

#endif	// __CC_VISUALC__
}

/*****************************************************************************
**							   Public Functions								**
*****************************************************************************/
}

