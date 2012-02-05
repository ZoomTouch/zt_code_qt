/****************************************************************************
**
****************************************************************************/

#ifndef NDEFMANAGER_H
#define NDEFMANAGER_H

#include <QObject>
#include <QDebug>
#include <QUrl>

#ifdef MEEGO_EDITION_HARMATTAN
#include <QDeclarativeView>
#endif

#include <qnearfieldmanager.h>
#include <qndeffilter.h>
#include <qnearfieldtarget.h>
#include <qndefmessage.h>
#include <qndefrecord.h>
#include <qndefnfcurirecord.h>
#include <qndefnfctextrecord.h>
#include "ndefnfcmimeimagerecord.h"
#include "ndefnfcsprecord.h"
#include "ndefnfcmimevcardrecord.h"

#include <QContact>
#include <QContactDisplayLabel>
#include <QContactEmailAddress>
#include <QContactPhoneNumber>

QTM_USE_NAMESPACE

#ifdef Q_OS_SYMBIAN
#include "nfcsettings.h"
#endif

class NdefManager : public QObject
{
    Q_OBJECT
public:
    explicit NdefManager(QObject *parent = 0);

signals:
    void nfcStatusUpdate(const QString& nfcStatusText);
    void nfcStatusError(const QString& nfcStatusErrorText);
    void nfcReadTagUri(const QUrl& nfcTagUri);
    void nfcReadTagText(const QString& nfcTagText);
    void nfcReadTagSp(const QUrl& nfcTagUri, const QString& nfcTagTitle);
    void nfcReadTagVcard(const QString& nfcTagName, const QString& nfcTagEmail, const QUrl& nfcTagPhone);
    void nfcReadTagAutostart(const QByteArray& nfcTagPayload);
    void nfcReadTagUnknown(const QByteArray& nfcTagType, const QByteArray& nfcTagPayload);
    void nfcReadTagError(const QString& nfcTagError);

public slots:
    void checkNfcStatus();
    void initAndStartNfc();
    void nfcWriteTag(const QString& nfcTagText);

#ifdef MEEGO_EDITION_HARMATTAN
public:
    void setDeclarativeView(QDeclarativeView& view);
#endif

private slots:
    void targetMessageDetected(const QNdefMessage &message, QNearFieldTarget *target);
    void targetDetected(QNearFieldTarget *target);
    void ndefMessageRead(const QNdefMessage &message);
    void requestCompleted(const QNearFieldTarget::RequestId & id);
    void targetError(QNearFieldTarget::Error error, const QNearFieldTarget::RequestId &id);

    void targetLost(QNearFieldTarget *target);

private:
    void writeCachedNdefMessage();
    QString convertTargetErrorToString(QNearFieldTarget::Error error);

#ifdef Q_OS_SYMBIAN
private slots:
    // Check for NFC Support
    void handleNfcError(NfcSettings::NfcError nfcError, int error);
    void handleNfcModeChange(NfcSettings::NfcMode nfcMode);
private:
    NfcSettings* nfcSettings;
#endif

private:
    QNearFieldManager *nfcManager;
    QNearFieldTarget *cachedTarget;
    bool pendingWriteNdef;
    QNdefMessage cachedNdefMessage;
    QNearFieldTarget::RequestId writeRequestId;

#ifdef MEEGO_EDITION_HARMATTAN
    QDeclarativeView* declarativeView;
#endif
};

#endif // NDEFMANAGER_H
