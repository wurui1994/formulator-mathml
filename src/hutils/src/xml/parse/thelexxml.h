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

#ifndef __COMMON_XML_THELEXER_H__
#define __COMMON_XML_THELEXER_H__

/////////////////////////////////////////////////////////////////////////////

#include "HUtils/ibaselexer.h"
#include "HUtils/iautoheap.h"

#define TXML_Lex_MODE_INTAG		0
#define TXML_Lex_MODE_OUTTAG	1

class TXML_Lex : public Lex
{
protected:
	long mode;
	Lexem prev_lexem;
	HU_Heap2Free<QString> s_autoheap;
	HU_Heap2Free<double> d_autoheap;
  
public :
	TXML_Lex( Source& Src )
		: Lex( Src )
	{
		mode = TXML_Lex_MODE_OUTTAG;
	}
	virtual Lexem NextLexem( void );
	int RemTermination( Lexem& ret );
	~TXML_Lex()
	{}
};

/////////////////////////////////////////////////////////////////////////////

#endif
