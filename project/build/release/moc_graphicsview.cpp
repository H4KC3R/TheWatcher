/****************************************************************************
** Meta object code from reading C++ file 'graphicsview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../external_source/widgets/graphicsview.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphicsview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
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
struct qt_meta_stringdata_dororo__GraphicsView_t {
    uint offsetsAndSizes[22];
    char stringdata0[21];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[19];
    char stringdata5[16];
    char stringdata6[16];
    char stringdata7[5];
    char stringdata8[12];
    char stringdata9[2];
    char stringdata10[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_dororo__GraphicsView_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_dororo__GraphicsView_t qt_meta_stringdata_dororo__GraphicsView = {
    {
        QT_MOC_LITERAL(0, 20),  // "dororo::GraphicsView"
        QT_MOC_LITERAL(21, 21),  // "mouseRightButtonClick"
        QT_MOC_LITERAL(43, 0),  // ""
        QT_MOC_LITERAL(44, 12),  // "QMouseEvent*"
        QT_MOC_LITERAL(57, 18),  // "mouseScenePosition"
        QT_MOC_LITERAL(76, 15),  // "viewportChanged"
        QT_MOC_LITERAL(92, 15),  // "setViewportRect"
        QT_MOC_LITERAL(108, 4),  // "rect"
        QT_MOC_LITERAL(113, 11),  // "scalingTime"
        QT_MOC_LITERAL(125, 1),  // "x"
        QT_MOC_LITERAL(127, 12)   // "animFinished"
    },
    "dororo::GraphicsView",
    "mouseRightButtonClick",
    "",
    "QMouseEvent*",
    "mouseScenePosition",
    "viewportChanged",
    "setViewportRect",
    "rect",
    "scalingTime",
    "x",
    "animFinished"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_dororo__GraphicsView[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,
       4,    1,   53,    2, 0x06,    3 /* Public */,
       5,    1,   56,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   59,    2, 0x0a,    7 /* Public */,
       8,    1,   62,    2, 0x08,    9 /* Private */,
      10,    0,   65,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QRectF,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QRectF,    7,
    QMetaType::Void, QMetaType::QReal,    9,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject dororo::GraphicsView::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_meta_stringdata_dororo__GraphicsView.offsetsAndSizes,
    qt_meta_data_dororo__GraphicsView,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_dororo__GraphicsView_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GraphicsView, std::true_type>,
        // method 'mouseRightButtonClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>,
        // method 'mouseScenePosition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPoint, std::false_type>,
        // method 'viewportChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QRectF, std::false_type>,
        // method 'setViewportRect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRectF &, std::false_type>,
        // method 'scalingTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'animFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void dororo::GraphicsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GraphicsView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mouseRightButtonClick((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 1: _t->mouseScenePosition((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 2: _t->viewportChanged((*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[1]))); break;
        case 3: _t->setViewportRect((*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[1]))); break;
        case 4: _t->scalingTime((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 5: _t->animFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GraphicsView::*)(QMouseEvent * );
            if (_t _q_method = &GraphicsView::mouseRightButtonClick; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GraphicsView::*)(QPoint );
            if (_t _q_method = &GraphicsView::mouseScenePosition; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GraphicsView::*)(QRectF );
            if (_t _q_method = &GraphicsView::viewportChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *dororo::GraphicsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dororo::GraphicsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dororo__GraphicsView.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int dororo::GraphicsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void dororo::GraphicsView::mouseRightButtonClick(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void dororo::GraphicsView::mouseScenePosition(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void dororo::GraphicsView::viewportChanged(QRectF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
