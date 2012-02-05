#ifndef PARSER_H
#define PARSER_H

#include <QObject>


#include <QObject>
#include <QFile>
#include <QtXml/qdom.h>

class Parser : public QObject
{
    Q_OBJECT
    Q_PROPERTY( QString name READ name WRITE setName )
    Q_PROPERTY( QString logo READ logo WRITE setLogo )
    Q_PROPERTY( QString phone READ phone WRITE setPhone )
    Q_PROPERTY( QString url READ url WRITE setUrl )
    Q_PROPERTY( QString info READ info WRITE setInfo NOTIFY infoChanged)
    Q_PROPERTY( QString content READ content WRITE setContent NOTIFY contentChanged )

public:
    explicit Parser(QObject *parent = 0);
    virtual ~Parser();
public:

signals:
    void contentChanged();
    void infoChanged();

public slots:
    void parse();

    QString content() { return m_content ; }
    void setContent( QString val ) { m_content = val ; emit contentChanged(); }

    QString name() { return m_name; }
    void setName(QString val){m_name = val;}

    QString logo() { return m_logo; }
    void setLogo(QString val) { m_logo = val ;}

    QString phone() { return m_phone; }
    void setPhone(QString val){ m_phone = val; }

    QString url() { return m_url;}
    void setUrl(QString val){m_url = val ; }

    QString info() { return m_info;}
    void setInfo(QString val) { m_info = val ;}

    void doParse(QDomNode node);
private:

    QDomDocument* m_doc;
    QString m_name;
    QString m_logo;
    QString m_phone;
    QString m_url;
    QString m_info;
    QString m_content;
};

#endif
