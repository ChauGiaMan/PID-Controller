/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "txMessage",
    "",
    "showMess",
    "mess",
    "init_window",
    "receive_data_from_STM32",
    "on_clear_but_clicked",
    "on_connect_but_clicked",
    "on_position_but_clicked",
    "on_refesh_but_clicked",
    "on_run_but_clicked",
    "on_send_but_clicked",
    "on_velocity_but_clicked",
    "saveFile",
    "on_plot_but_clicked",
    "on_clearGraph_clicked",
    "on_saveGraph_clicked",
    "Graph",
    "plotResponse"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  116,    2, 0x08,    1 /* Private */,
       3,    1,  117,    2, 0x08,    2 /* Private */,
       5,    0,  120,    2, 0x08,    4 /* Private */,
       6,    0,  121,    2, 0x08,    5 /* Private */,
       7,    0,  122,    2, 0x08,    6 /* Private */,
       8,    0,  123,    2, 0x08,    7 /* Private */,
       9,    0,  124,    2, 0x08,    8 /* Private */,
      10,    0,  125,    2, 0x08,    9 /* Private */,
      11,    0,  126,    2, 0x08,   10 /* Private */,
      12,    0,  127,    2, 0x08,   11 /* Private */,
      13,    0,  128,    2, 0x08,   12 /* Private */,
      14,    0,  129,    2, 0x08,   13 /* Private */,
      15,    0,  130,    2, 0x08,   14 /* Private */,
      16,    0,  131,    2, 0x08,   15 /* Private */,
      17,    0,  132,    2, 0x08,   16 /* Private */,
      18,    0,  133,    2, 0x08,   17 /* Private */,
      19,    0,  134,    2, 0x08,   18 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'txMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showMess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString, std::false_type>,
        // method 'init_window'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receive_data_from_STM32'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clear_but_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_connect_but_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_position_but_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_refesh_but_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_run_but_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_send_but_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_velocity_but_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_plot_but_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clearGraph_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_saveGraph_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Graph'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'plotResponse'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->txMessage(); break;
        case 1: _t->showMess((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->init_window(); break;
        case 3: _t->receive_data_from_STM32(); break;
        case 4: _t->on_clear_but_clicked(); break;
        case 5: _t->on_connect_but_clicked(); break;
        case 6: _t->on_position_but_clicked(); break;
        case 7: _t->on_refesh_but_clicked(); break;
        case 8: _t->on_run_but_clicked(); break;
        case 9: _t->on_send_but_clicked(); break;
        case 10: _t->on_velocity_but_clicked(); break;
        case 11: _t->saveFile(); break;
        case 12: _t->on_plot_but_clicked(); break;
        case 13: _t->on_clearGraph_clicked(); break;
        case 14: _t->on_saveGraph_clicked(); break;
        case 15: _t->Graph(); break;
        case 16: _t->plotResponse(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
