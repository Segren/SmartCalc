/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SmartCalc/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
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
    "signal",
    "",
    "digits_numbers",
    "on_pushButton_dot_clicked",
    "operations",
    "on_pushButton_AC_clicked",
    "on_pushButton_equal_clicked",
    "on_pushButton_brackets_clicked",
    "on_pushButton_percent_clicked",
    "on_pushButton_X_clicked",
    "createGraph",
    "createCredit",
    "createDeposit"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[11];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[26];
    char stringdata5[11];
    char stringdata6[25];
    char stringdata7[28];
    char stringdata8[31];
    char stringdata9[30];
    char stringdata10[24];
    char stringdata11[12];
    char stringdata12[13];
    char stringdata13[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 6),  // "signal"
        QT_MOC_LITERAL(18, 0),  // ""
        QT_MOC_LITERAL(19, 14),  // "digits_numbers"
        QT_MOC_LITERAL(34, 25),  // "on_pushButton_dot_clicked"
        QT_MOC_LITERAL(60, 10),  // "operations"
        QT_MOC_LITERAL(71, 24),  // "on_pushButton_AC_clicked"
        QT_MOC_LITERAL(96, 27),  // "on_pushButton_equal_clicked"
        QT_MOC_LITERAL(124, 30),  // "on_pushButton_brackets_clicked"
        QT_MOC_LITERAL(155, 29),  // "on_pushButton_percent_clicked"
        QT_MOC_LITERAL(185, 23),  // "on_pushButton_X_clicked"
        QT_MOC_LITERAL(209, 11),  // "createGraph"
        QT_MOC_LITERAL(221, 12),  // "createCredit"
        QT_MOC_LITERAL(234, 13)   // "createDeposit"
    },
    "MainWindow",
    "signal",
    "",
    "digits_numbers",
    "on_pushButton_dot_clicked",
    "operations",
    "on_pushButton_AC_clicked",
    "on_pushButton_equal_clicked",
    "on_pushButton_brackets_clicked",
    "on_pushButton_percent_clicked",
    "on_pushButton_X_clicked",
    "createGraph",
    "createCredit",
    "createDeposit"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   89,    2, 0x08,    3 /* Private */,
       4,    0,   90,    2, 0x08,    4 /* Private */,
       5,    0,   91,    2, 0x08,    5 /* Private */,
       6,    0,   92,    2, 0x08,    6 /* Private */,
       7,    0,   93,    2, 0x08,    7 /* Private */,
       8,    0,   94,    2, 0x08,    8 /* Private */,
       9,    0,   95,    2, 0x08,    9 /* Private */,
      10,    0,   96,    2, 0x08,   10 /* Private */,
      11,    0,   97,    2, 0x0a,   11 /* Public */,
      12,    0,   98,    2, 0x0a,   12 /* Public */,
      13,    0,   99,    2, 0x0a,   13 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
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
        // method 'signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'digits_numbers'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_dot_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'operations'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_AC_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_equal_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_brackets_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_percent_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_X_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createGraph'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createCredit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createDeposit'
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
        case 0: _t->signal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->digits_numbers(); break;
        case 2: _t->on_pushButton_dot_clicked(); break;
        case 3: _t->operations(); break;
        case 4: _t->on_pushButton_AC_clicked(); break;
        case 5: _t->on_pushButton_equal_clicked(); break;
        case 6: _t->on_pushButton_brackets_clicked(); break;
        case 7: _t->on_pushButton_percent_clicked(); break;
        case 8: _t->on_pushButton_X_clicked(); break;
        case 9: _t->createGraph(); break;
        case 10: _t->createCredit(); break;
        case 11: _t->createDeposit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(QString );
            if (_t _q_method = &MainWindow::signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
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
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::signal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
