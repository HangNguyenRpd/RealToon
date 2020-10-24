/****************************************************************************
** Meta object code from reading C++ file 'ToonScene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../include/ToonScene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ToonScene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ToonScene_t {
    QByteArrayData data[26];
    char stringdata0[270];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToonScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToonScene_t qt_meta_stringdata_ToonScene = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ToonScene"
QT_MOC_LITERAL(1, 10, 6), // "setFOV"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 5), // "m_FOV"
QT_MOC_LITERAL(4, 24, 9), // "setNearCp"
QT_MOC_LITERAL(5, 34, 8), // "m_NearCp"
QT_MOC_LITERAL(6, 43, 8), // "setFarCp"
QT_MOC_LITERAL(7, 52, 7), // "m_FarCp"
QT_MOC_LITERAL(8, 60, 10), // "setRotateX"
QT_MOC_LITERAL(9, 71, 10), // "ui_RotateX"
QT_MOC_LITERAL(10, 82, 10), // "setRotateY"
QT_MOC_LITERAL(11, 93, 10), // "ui_RotateY"
QT_MOC_LITERAL(12, 104, 10), // "setRotateZ"
QT_MOC_LITERAL(13, 115, 10), // "ui_RotateZ"
QT_MOC_LITERAL(14, 126, 13), // "setTranslateX"
QT_MOC_LITERAL(15, 140, 13), // "ui_TranslateX"
QT_MOC_LITERAL(16, 154, 13), // "setTranslateY"
QT_MOC_LITERAL(17, 168, 13), // "ui_TranslateY"
QT_MOC_LITERAL(18, 182, 13), // "setTranslateZ"
QT_MOC_LITERAL(19, 196, 13), // "ui_TranslateZ"
QT_MOC_LITERAL(20, 210, 9), // "setScaleX"
QT_MOC_LITERAL(21, 220, 9), // "ui_ScaleX"
QT_MOC_LITERAL(22, 230, 9), // "setScaleY"
QT_MOC_LITERAL(23, 240, 9), // "ui_ScaleY"
QT_MOC_LITERAL(24, 250, 9), // "setScaleZ"
QT_MOC_LITERAL(25, 260, 9) // "ui_ScaleZ"

    },
    "ToonScene\0setFOV\0\0m_FOV\0setNearCp\0"
    "m_NearCp\0setFarCp\0m_FarCp\0setRotateX\0"
    "ui_RotateX\0setRotateY\0ui_RotateY\0"
    "setRotateZ\0ui_RotateZ\0setTranslateX\0"
    "ui_TranslateX\0setTranslateY\0ui_TranslateY\0"
    "setTranslateZ\0ui_TranslateZ\0setScaleX\0"
    "ui_ScaleX\0setScaleY\0ui_ScaleY\0setScaleZ\0"
    "ui_ScaleZ"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToonScene[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x0a /* Public */,
       4,    1,   77,    2, 0x0a /* Public */,
       6,    1,   80,    2, 0x0a /* Public */,
       8,    1,   83,    2, 0x0a /* Public */,
      10,    1,   86,    2, 0x0a /* Public */,
      12,    1,   89,    2, 0x0a /* Public */,
      14,    1,   92,    2, 0x0a /* Public */,
      16,    1,   95,    2, 0x0a /* Public */,
      18,    1,   98,    2, 0x0a /* Public */,
      20,    1,  101,    2, 0x0a /* Public */,
      22,    1,  104,    2, 0x0a /* Public */,
      24,    1,  107,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::Double,   19,
    QMetaType::Void, QMetaType::Double,   21,
    QMetaType::Void, QMetaType::Double,   23,
    QMetaType::Void, QMetaType::Double,   25,

       0        // eod
};

void ToonScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ToonScene *_t = static_cast<ToonScene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setFOV((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setNearCp((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setFarCp((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setRotateX((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setRotateY((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setRotateZ((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setTranslateX((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->setTranslateY((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->setTranslateZ((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->setScaleX((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->setScaleY((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->setScaleZ((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ToonScene::staticMetaObject = {
    { &QOpenGLWidget::staticMetaObject, qt_meta_stringdata_ToonScene.data,
      qt_meta_data_ToonScene,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ToonScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToonScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToonScene.stringdata0))
        return static_cast<void*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int ToonScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
