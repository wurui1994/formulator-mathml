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

#if !defined( __MATHLANG_LIMAUTO_LA_DIGIT_H__ )
#define __MATHLANG_LIMAUTO_LA_DIGIT_H__

#include "../limauto.h"

#define LDigitStates   8
#define LDigitAlphabet 6

// class LDigit
// ~~~~~ ~~~~~~
class HUTILS_EXPORT LDigit : public LAuto
{

public :

	enum LDigitTypes
	{
		Integer   = 1,
		Float     = 2,
		FloatIEEE = 3
	};

	LDigit( void );
	int	isBig( void );

	double			mnt_float;	// 
	unsigned long	pre_int;	// 
	unsigned long	mnt_int;	// 
	short int		power;		// 
	short int		powerE;		// 
	short int		sign;		// 
	short int		is_big;		// 
	short int		decimal;	// decimal

protected:

	virtual void Deeds( void );
	virtual long What( const QChar S );

};

inline
int LDigit::isBig( void )
{
	return is_big;
}

#endif
