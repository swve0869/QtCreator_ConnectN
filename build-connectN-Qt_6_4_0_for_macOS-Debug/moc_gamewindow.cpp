/****************************************************************************
** Meta object code from reading C++ file 'gamewindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../connectN/gamewindow.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_gameWindow_t {
    uint offsetsAndSizes[28];
    char stringdata0[11];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[2];
    char stringdata4[9];
    char stringdata5[17];
    char stringdata6[6];
    char stringdata7[2];
    char stringdata8[18];
    char stringdata9[26];
    char stringdata10[26];
    char stringdata11[29];
    char stringdata12[29];
    char stringdata13[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_gameWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_gameWindow_t qt_meta_stringdata_gameWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "gameWindow"
        QT_MOC_LITERAL(11, 13),  // "startGameSlot"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 1),  // "n"
        QT_MOC_LITERAL(28, 8),  // "newRound"
        QT_MOC_LITERAL(37, 16),  // "tileSelectedSlot"
        QT_MOC_LITERAL(54, 5),  // "Tile*"
        QT_MOC_LITERAL(60, 1),  // "t"
        QT_MOC_LITERAL(62, 17),  // "updateSecondsSlot"
        QT_MOC_LITERAL(80, 25),  // "on_clearRowButton_clicked"
        QT_MOC_LITERAL(106, 25),  // "on_clearColButton_clicked"
        QT_MOC_LITERAL(132, 28),  // "on_convertDiskButton_clicked"
        QT_MOC_LITERAL(161, 28),  // "on_leaderBoardButton_clicked"
        QT_MOC_LITERAL(190, 21)   // "on_pushButton_clicked"
    },
    "gameWindow",
    "startGameSlot",
    "",
    "n",
    "newRound",
    "tileSelectedSlot",
    "Tile*",
    "t",
    "updateSecondsSlot",
    "on_clearRowButton_clicked",
    "on_clearColButton_clicked",
    "on_convertDiskButton_clicked",
    "on_leaderBoardButton_clicked",
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_gameWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x08,    1 /* Private */,
       4,    0,   71,    2, 0x08,    3 /* Private */,
       5,    1,   72,    2, 0x08,    4 /* Private */,
       8,    0,   75,    2, 0x08,    6 /* Private */,
       9,    0,   76,    2, 0x08,    7 /* Private */,
      10,    0,   77,    2, 0x08,    8 /* Private */,
      11,    0,   78,    2, 0x08,    9 /* Private */,
      12,    0,   79,    2, 0x08,   10 /* Private */,
      13,    0,   80,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject gameWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_gameWindow.offsetsAndSizes,
    qt_meta_data_gameWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_gameWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<gameWindow, std::true_type>,
        // method 'startGameSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'newRound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tileSelectedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Tile *, std::false_type>,
        // method 'updateSecondsSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clearRowButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clearColButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_convertDiskButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_leaderBoardButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void gameWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<gameWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->startGameSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->newRound(); break;
        case 2: _t->tileSelectedSlot((*reinterpret_cast< std::add_pointer_t<Tile*>>(_a[1]))); break;
        case 3: _t->updateSecondsSlot(); break;
        case 4: _t->on_clearRowButton_clicked(); break;
        case 5: _t->on_clearColButton_clicked(); break;
        case 6: _t->on_convertDiskButton_clicked(); break;
        case 7: _t->on_leaderBoardButton_clicked(); break;
        case 8: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Tile* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *gameWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gameWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gameWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int gameWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
