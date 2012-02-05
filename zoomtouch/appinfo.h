/****************************************************************************
**
****************************************************************************************/

#ifndef APPINFO_H
#define APPINFO_H

/*!
 * INCLUDES
 */

#include <QObject>
#include <QApplication>

/*!
 * CLASS DECLARATION
 */

/*!
 *  @class AppInfo appinfo.h main/appinfo.h
 *  @brief Class inherited from QObject provides methods to
 *  ApplicationName, ApplicationVersion and OrganizationName
 */

class AppInfo : public QObject {
    Q_OBJECT

public slots:

    /*!
     * @brief Slot
     *
     * Function to return the name of the application
     * @return QString
     */
    Q_INVOKABLE QString getApplicationName() { return QApplication::applicationName(); }

    /*!
     * @brief Slot
     *
     * Function to return the version number of the application
     * @return QString
     */
    Q_INVOKABLE QString getApplicationVersion() { return QApplication::applicationVersion(); }

    /*!
     * @brief Slot
     *
     * Function to return the name of the Organization
     * @return QString
     */
    Q_INVOKABLE QString getOrganizationName() { return QApplication::organizationName(); }
};

#endif

//! APPINFO_H
