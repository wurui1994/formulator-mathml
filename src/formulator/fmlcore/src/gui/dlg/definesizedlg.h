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

#ifndef __FMLCORE_DLG_DEFINESIZEDLG_H__
#define __FMLCORE_DLG_DEFINESIZEDLG_H__

#include <QtWidgets/QMainWindow>
#include <QtCore/QString>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE
class QSpinBox;
class QToolButton;
class QLabel;
QT_END_NAMESPACE

#include "../../fmlcore_global.h"

class __HERMITECH_FORMULIB__ CDefineSizeDialog : public QDialog
{
    Q_OBJECT

protected:
	QSpinBox *largeEdit, *regularEdit, *subEdit, *subsubEdit;

public:
    CDefineSizeDialog( QWidget *parent =  0 );
    ~CDefineSizeDialog();

public slots:
	void factorySettings();
	virtual void accept();
};

#endif
