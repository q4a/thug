/*****************************************************************************
**																			**
**					   	  Neversoft Entertainment							**
**																		   	**
**				   Copyright (C) 1999 - All Rights Reserved				   	**
**																			**
******************************************************************************
**																			**
**	Project:		GFX (Graphics Library)									**
**																			**
**	Module:			Graphics  (GFX)											**
**																			**
**	File name:		gfx/bbox.h												**
**																			**
**	Created: 		06/22/00	-	mjb										**
**																			**
*****************************************************************************/

#ifndef __GFX_BBOX_H
#define __GFX_BBOX_H

/*****************************************************************************
**							  	  Includes									**
*****************************************************************************/


#ifndef __CORE_DEFINES_H
#include <core/defines.h>
#endif
#include <core/support.h>
#include <core/math/vector.h>

#ifdef __PLAT_NGC__
#include "sys/ngc/p_camera.h"
#endif

/*****************************************************************************
**								   Defines									**
*****************************************************************************/

namespace Gfx
{



/*****************************************************************************
**							Class Definitions								**
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
bool PointInsideBox( const Mth::Vector &point, const Mth::Vector &boxMax, const Mth::Vector &boxMin );
bool LineCollidesWithBox( const Mth::Vector &pStart, const Mth::Vector &pEnd, const Mth::Vector &pMax, const Mth::Vector &pMin );


/*****************************************************************************
**								Inline Functions							**
*****************************************************************************/

} // namespace Gfx

#endif	// __GFX_BBOX_H
