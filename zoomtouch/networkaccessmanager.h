#ifndef NETWORKACCESSMANAGER_H
#define NETWORKACCESSMANAGER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QDebug>

class NetworkAccessManager : public QObject
{
    Q_OBJECT

    Q_PROPERTY( QString data READ data WRITE setData )
    Q_PROPERTY( QString url READ url WRITE setUrl NOTIFY urlChanged )
public:
    explicit NetworkAccessManager(QObject *parent = 0);
    ~NetworkAccessManager();



signals:
    void readyRead();
    void error(QNetworkReply::NetworkError);
    void finished(QNetworkReply*);
    void urlChanged();

    void contentReady( QString content);

public slots:
    void slotError(QNetworkReply::NetworkError);
    void slotReadyRead();
    void replyFinished(QNetworkReply* reply);
    void fetch();

    QString data() { return m_data; }
    void setData(QString val) { m_data = val ; }

    QString url() { return m_url; }
    void setUrl(QString val){ qDebug() << "Url set \n"; m_url = val ; emit urlChanged();}

private:
    void initNetwork();


private:
    QNetworkAccessManager *manager;
    QNetworkReply *reply;

private:
    QString m_data;
    QString m_url;

};

#endif // NETWORKACCESSMANAGER_H
