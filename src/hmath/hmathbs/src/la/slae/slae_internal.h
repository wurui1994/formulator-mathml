/****************************************************************************
**
** Copyright (C) 2010 Andriy Kovalchuk, Vyacheslav Levytskyy,
** Igor Samolyuk, Valentyn Yanchuk (aka "Hermitech Laboratory")
**
** All rights reserved.
** Contact: Hermitech Laboratory (info@mmlsoft.com)
**
** This file is a part of the Formulator MathML Editor project
** (http://www.mmlsoft.com).
**
** Commercial Usage
** Licensees holding valid Formulator Commercial licenses may use this 
** file in accordance with the Formulator Commercial License Agreement 
** provided with the Software or, alternatively, in accordance with the 
** terms contained in a written agreement between you and 
** Hermitech Laboratory.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
** If you have questions regarding the use of this file, please contact
** Hermitech Laboratory at info@mmlsoft.com.
**
****************************************************************************/

#ifndef __ALMASLAE_INTERNAL_INDEX_H__
#define __ALMASLAE_INTERNAL_INDEX_H__

#include "../../hmathbs_global.h"
#include "../../cdsrnumbers/number.h"
#include "../../cdsrnumbers/mathconst.h"
#include "../../cdsrarrays/cdsrmvector.h"
#include "../../cdsrarrays/cdsrmmatrix.h"

//////////////////////////////////////////////////////////////////////

void _IndexCR( long i, CDSRMMatrix<CDSRReal> *pMatrix, CDSRMVector<long> *pRow, CDSRMVector<long> *pCol );
void _IndexR( long i, CDSRMMatrix<CDSRReal> *pMatrix, CDSRMVector<long> *pRow );
void _IndexC( long i, CDSRMMatrix<CDSRReal> *pMatrix, CDSRMVector<long> *pCol );

//////////////////////////////////////////////////////////////////////

inline 
bool IsNull( const CDSRReal& value )
{
	return ( fabs( value ) < MATH_REAL_EPSILON );
}

inline 
bool IsOne( const CDSRReal& value )
{
	return ( fabs( value - 1.0 ) < MATH_REAL_EPSILON );
}

inline 
bool IsNotNull( const CDSRReal& value )
{
	return ( fabs( value ) > MATH_REAL_EPSILON );
}

inline 
bool IsNotOne( const CDSRReal& value )
{
	return ( fabs( value - 1.0 ) > MATH_REAL_EPSILON );
}

//////////////////////////////////////////////////////////////////////
#endif // __ALMASLAE_INTERNAL_INDEX_H__
