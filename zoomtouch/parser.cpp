#include "parser.h"

#include <QFile>
#include <QDebug>
#include <QList>

Parser::Parser( QObject *parent) :
    QObject(parent),
    m_content( QString::fromAscii(""))
{
    m_doc = new QDomDocument;
    connect( this , SIGNAL(contentChanged()),this, SLOT(parse()));
}

Parser::~Parser()
{
    delete m_doc;
}
void Parser::parse()
{       
    m_doc->setContent(content());
    QDomElement root = m_doc->documentElement();
    if( root.tagName() != "service" )
        qDebug() << "XML Error : service root not found";
    doParse(root);
}

void Parser::doParse( QDomNode node )
{
    qDebug() << "doParse";
    QDomNode child = node.firstChild();
    while(!child.isNull())
    {
        QDomElement element = child.toElement();
        if( element.tagName() == "name"){ setName(element.text());
        qDebug()<<endl <<"Service name" <<element.text();}
        if( element.tagName() == "phone") {setPhone(element.text());
        qDebug()<<endl <<"Service phone" <<element.text();}
        if( element.tagName() == "info") {
            setInfo(element.text());
            qDebug()<<endl <<"Service information" <<element.text();
            emit infoChanged();
        }
        child = child.nextSibling();
    }

}

