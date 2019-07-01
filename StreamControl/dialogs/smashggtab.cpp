/**********************************************************************************

Copyright (c) 2015, Antony Clarke
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

**********************************************************************************/

#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>

#include "smashggtab.h"

SmashggTab::SmashggTab(QMap<QString, QString>& settings, QWidget *parent) :
    QWidget(parent), settings(settings)
{
    QLabel *smashggOwnerIdLabel = new QLabel(tr("Owner Id:"));
    smashggOwnerIdEdit = new QLineEdit();

    QLabel *smashggAuthenticationTokenLabel = new QLabel(tr("Authentication Token:"));
    smashggAuthenticationTokenEdit = new QLineEdit();
    smashggAuthenticationTokenEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);

    QLabel *smashggStreamNameLabel = new QLabel(tr("Stream Name:"));
    smashggStreamNameEdit = new QLineEdit();

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(smashggOwnerIdLabel);
    mainLayout->addWidget(smashggOwnerIdEdit);
    mainLayout->addWidget(smashggStreamNameLabel);
    mainLayout->addWidget(smashggStreamNameEdit);
    mainLayout->addWidget(smashggAuthenticationTokenLabel);
    mainLayout->addWidget(smashggAuthenticationTokenEdit);
    mainLayout->addStretch(1);
    setLayout(mainLayout);
}
