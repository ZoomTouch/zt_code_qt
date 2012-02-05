/*
*/

#include "nfcsettings_p.h"

NfcSettingsPrivate::NfcSettingsPrivate(NfcSettings *q) :
    QObject(0),
    q_ptr(q)
{
    // Empty implementation.
}

NfcSettingsPrivate::~NfcSettingsPrivate()
{
    // Empty implementation.
}

NfcSettings::NfcFeature NfcSettingsPrivate::nfcFeature() const
{
    return NfcSettings::NfcFeatureNotSupported;
}

NfcSettings::NfcMode NfcSettingsPrivate::nfcMode() const
{
    return NfcSettings::NfcModeNotSupported;
}

NfcSettings::NfcError NfcSettingsPrivate::nfcError() const
{
    return NfcSettings::NfcErrorNone;
}

void NfcSettingsPrivate::reset()
{
    // Empty implementation.
}
