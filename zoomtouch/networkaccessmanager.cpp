#include "networkaccessmanager.h"
#include <QDebug>

NetworkAccessManager::NetworkAccessManager(QObject *parent) :
    QObject(parent),
    m_data(""),
    m_url("http://nfc.get2q.com/reply.php")
{
    initNetwork();
}

void NetworkAccessManager::initNetwork()
{
    qDebug() << endl<<"initnetwork()";
    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)),this, SLOT(replyFinished(QNetworkReply*)));

    qDebug() << "Network accessible " << manager->networkAccessible();
    manager->setNetworkAccessible(QNetworkAccessManager::Accessible);
    qDebug() << "Network accessible " << manager->networkAccessible();

    connect(this,SIGNAL(urlChanged()),this,SLOT(fetch()));

}

void NetworkAccessManager::fetch()
{
    qDebug() << endl<<"fetch()";

    QNetworkRequest request;    
    request.setUrl(QUrl(url()));
    request.setRawHeader("User-Agent", "ZoomTouch 1.0");

    reply = manager->get(request);
    connect(reply, SIGNAL(readyRead()), this, SLOT(slotReadyRead()));
    connect(reply, SIGNAL(error(QNetworkReply::NetworkError)),
            this, SLOT(slotError(QNetworkReply::NetworkError)));

}

void NetworkAccessManager::slotReadyRead()
{
    qDebug() << endl<<"reply ready read";
    QByteArray array = reply->readAll();
    setData( QString(array) );
    qDebug() << data();
    emit contentReady( QString(data()));

}


void NetworkAccessManager::slotError(QNetworkReply::NetworkError error)
{
    qDebug() << "slotError" << error;
}

void NetworkAccessManager::replyFinished(QNetworkReply* reply)
{

    qDebug() << endl<<"reply finished";

    if(reply->isFinished())
        qDebug() << "Reply finished";
    else if(reply->isRunning())
        qDebug() << "Reply in progress";
}

NetworkAccessManager::~NetworkAccessManager()
{
    delete manager;
    delete reply;
}
