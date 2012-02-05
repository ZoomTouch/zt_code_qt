# Add more folders to ship with the application, here
folder_01.source = qml/zoomtouch
folder_01.target = qml
DEPLOYMENTFOLDERS = folder_01

# Additional import path used to resolve QML modules in Creator's code model
QML_IMPORT_PATH =

symbian {

    TARGET.UID3 = 0xE690E4F4

    # Allow network access on Symbian
    TARGET.CAPABILITY += NetworkServices LocalServices

    # Smart Installer package's UID
    # This UID is from the protected range and therefore the package will
    # fail to install if self-signed. By default qmake uses the unprotected
    # range value if unprotected UID is defined for the application and
    # 0x2002CCCF value if protected UID is given to the application
    #symbian:DEPLOYMENT.installer_header = 0x2002CCCF

    # add NfcSettings support
    include(nfcsettings/nfcsettings.pri)
}

# If your application uses the Qt Mobility libraries, uncomment the following
# lines and add the respective components to the MOBILITY variable.
CONFIG += mobility qmsystem2
CONFIG += link_pkgconfig
MOBILITY += sensors connectivity qmsystem2 account-qt systeminfo versit contacts

# Speed up launching on MeeGo/Harmattan when using applauncherd daemon
CONFIG += qdeclarative-boostable

# Lets include required libraries
QT += phonon xml

# Add dependency to Symbian components
# CONFIG += qt-components

# The .cpp file which was generated for your project. Feel free to hack it.
SOURCES += main.cpp \
    ndefmanager.cpp \
    ndefnfcmimevcardrecord.cpp \
    ndefnfcsprecord.cpp \
    ndefnfcmimeimagerecord.cpp \
    networkaccessmanager.cpp \
    parser.cpp

# Please do not modify the following two lines. Required for deployment.
include(qmlapplicationviewer/qmlapplicationviewer.pri)
qtcAddDeployment()

HEADERS += \
    ndefmanager.h \
    ndefnfcmimevcardrecord.h \
    ndefnfcmimeimagerecord.h \
    ndefnfcsprecord.h \
    appinfo.h \
    networkaccessmanager.h \
    parser.h

OTHER_FILES += \
    qml/zoomtouch/messagebox.qml





