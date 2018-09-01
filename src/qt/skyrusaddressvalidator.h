// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SKYRUS_QT_SKYRUSADDRESSVALIDATOR_H
#define SKYRUS_QT_SKYRUSADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class SkyrusAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit SkyrusAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Skyrus address widget validator, checks for a valid skyrus address.
 */
class SkyrusAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit SkyrusAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // SKYRUS_QT_SKYRUSADDRESSVALIDATOR_H
