/****************************************************************************
** Meta object code from reading C++ file 'lujiazui.h'
**
** Created: Mon Nov 23 15:08:57 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../lujiazui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lujiazui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_lujiazui[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      27,    9,    9,    9, 0x0a,
      51,    9,    9,    9, 0x0a,
      77,    9,    9,    9, 0x0a,
     104,    9,    9,    9, 0x0a,
     136,  130,    9,    9, 0x0a,
     169,  130,    9,    9, 0x0a,
     218,  201,    9,    9, 0x0a,
     269,  257,    9,    9, 0x0a,
     299,  130,    9,    9, 0x0a,
     330,  130,    9,    9, 0x0a,
     365,    9,    9,    9, 0x0a,
     384,    9,    9,    9, 0x0a,
     400,    9,    9,    9, 0x0a,
     424,    9,    9,    9, 0x0a,
     445,  438,    9,    9, 0x0a,
     502,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_lujiazui[] = {
    "lujiazui\0\0linponeIterate()\0"
    "on_sipcallBtn_clicked()\0"
    "on_siphungupBtn_clicked()\0"
    "on_listUpdateBtn_clicked()\0"
    "on_serviceCsBtn_clicked()\0reply\0"
    "replyDocFinished(QNetworkReply*)\0"
    "replyCSFinished(QNetworkReply*)\0"
    "current,previous\0"
    "changeCurrent(QModelIndex,QModelIndex)\0"
    "currentText\0comboBoxValueChanged(QString)\0"
    "sendIFFinished(QNetworkReply*)\0"
    "pushClientFinished(QNetworkReply*)\0"
    "updateAppoitment()\0scollTimerOut()\0"
    "on_signoutBtn_clicked()\0showWindows()\0"
    "reason\0on_trayIcon_activated(QSystemTrayIcon::ActivationReason)\0"
    "closeApp()\0"
};

const QMetaObject lujiazui::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_lujiazui,
      qt_meta_data_lujiazui, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &lujiazui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *lujiazui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *lujiazui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_lujiazui))
        return static_cast<void*>(const_cast< lujiazui*>(this));
    return QDialog::qt_metacast(_clname);
}

int lujiazui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: linponeIterate(); break;
        case 1: on_sipcallBtn_clicked(); break;
        case 2: on_siphungupBtn_clicked(); break;
        case 3: on_listUpdateBtn_clicked(); break;
        case 4: on_serviceCsBtn_clicked(); break;
        case 5: replyDocFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: replyCSFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 7: changeCurrent((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 8: comboBoxValueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: sendIFFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 10: pushClientFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 11: updateAppoitment(); break;
        case 12: scollTimerOut(); break;
        case 13: on_signoutBtn_clicked(); break;
        case 14: showWindows(); break;
        case 15: on_trayIcon_activated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 16: closeApp(); break;
        default: ;
        }
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
