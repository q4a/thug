/*****************************************************************************
**																			**
**			              Neversoft Entertainment			                **
**																		   	**
**				   Copyright (C) 1999 - All Rights Reserved				   	**
**																			**
******************************************************************************
**																			**
**	Project:																**
**																			**
**	Module:						 		 									**
**																			**
**	File name:		gfx/Ngc/p_nxfontman.cpp								**
**																			**
**	Created:		01/16/2002	-	dc										**
**																			**
**	Description:	Ngc platform specific interface to the Font Manager	**
**																			**
*****************************************************************************/


/*****************************************************************************
**							  	  Includes									**
*****************************************************************************/

#include	"gfx\nx.h"
#include	"gfx\NxFontMan.h"
#include	"gfx\Ngc\p_NxFont.h"
#include 	"gfx\Ngc\nx\chars.h"

/*****************************************************************************
**								DBG Information								**
*****************************************************************************/

/*****************************************************************************
**								  Externals									**
*****************************************************************************/

/*****************************************************************************
**								   Defines									**
*****************************************************************************/

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


/*****************************************************************************
**							   Public Functions								**
*****************************************************************************/


/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/

namespace Nx
{
	
/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
CFont* CFontManager::s_plat_load_font( const char* pName )
{
	CNgcFont *p_new_font = new CNgcFont;
	p_new_font->Load( pName );
	return p_new_font;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CFontManager::s_plat_unload_font( CFont* pFont )
{
	pFont->Unload();
}

} // namespace Nx
 
