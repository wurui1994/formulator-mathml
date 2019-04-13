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

#include <QtWidgets/QApplication>
#include <QtCore/QTextStream>
#include <QtCore/QThread>
#include "HUtils/idrawing.h"
#include "HMathML/itest.h"

int main( int argc, char *argv[] )
{
	QApplication a(argc, argv, true);
	QStringList argList = QCoreApplication::arguments();
	QTextStream out(stdout);

	if( argList.size() < 2 )
	{
		out << "Usage: fmltest <options-list>" << endl;
		return 0;
	}

	if( argList.size() > 3 && argList.at(1).compare("-dir2html") == 0 )
	{
		out << "Searching for MathML files...\n" << endl;
		::StartUpFDE( FmlDrawEngine_Qt );
		QFmlTestDir2Html testRunner(argList.at(2), argList.at(3), "*.mml", "png" );
		testRunner.run();
		out << "Searching done\n" << endl;
	}

	return 1;//a.exec();
}