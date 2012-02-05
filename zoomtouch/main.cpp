#include <QtGui/QApplication>
#include "qmlapplicationviewer.h"
#include "ndefmanager.h"
#include "networkaccessmanager.h"
#include "parser.h"
#include "appinfo.h"
#include <QtDeclarative>

Q_DECL_EXPORT int main(int argc, char *argv[])
{
    QApplication app(argc, argv);


    // Setup QML Viewer
    qmlRegisterType<NetworkAccessManager>("NW", 1, 0, "NetworkAccessManager");
    qmlRegisterType<Parser>("ParseXML", 1, 0, "Parser");
    qmlRegisterType<NdefManager>("Nfc", 1, 0, "Zoomtouch");
    qmlRegisterType<AppInfo>("ApplicationInfo", 1, 0, "AppInfo");

    QmlApplicationViewer viewer;
    viewer.setOrientation(QmlApplicationViewer::ScreenOrientationAuto );
    viewer.setMainQmlFile(QLatin1String("qml/zoomtouch/main.qml"));
    viewer.showExpanded();

    return app.exec();
}
