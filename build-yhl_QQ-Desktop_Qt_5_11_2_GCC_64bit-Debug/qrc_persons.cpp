/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.11.2
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // /home/yhl/C++/QQ/myQQ/yhl_QQ/qrc/database/persons.txt
  0x0,0x0,0x0,0x7b,
  0x36,
  0xa,0x32,0x39,0x33,0x35,0x32,0x34,0x36,0x32,0x34,0x30,0x20,0x66,0x6c,0x75,0x65,
  0x6e,0x63,0x65,0x31,0x32,0xa,0x33,0x31,0x36,0x31,0x33,0x39,0x39,0x35,0x32,0x39,
  0x20,0x31,0x33,0x30,0x37,0x33,0x31,0x33,0x34,0x37,0x31,0x30,0x33,0x33,0x34,0x61,
  0x62,0xa,0x32,0x30,0x31,0x36,0x32,0x31,0x31,0x36,0x35,0x30,0x20,0x66,0x6c,0x75,
  0x65,0x6e,0x63,0x65,0xa,0x32,0x30,0x31,0x36,0x32,0x31,0x31,0x36,0x35,0x31,0x20,
  0x31,0x32,0x33,0x34,0x35,0xa,0x32,0x30,0x31,0x36,0x32,0x31,0x31,0x36,0x35,0x33,
  0x20,0x66,0x6c,0x75,0x65,0x6e,0x63,0x65,0xa,0x32,0x30,0x31,0x36,0x32,0x31,0x31,
  0x36,0x35,0x34,0x20,0x31,0x32,0x33,0x34,0x35,0xa,
  
};

static const unsigned char qt_resource_name[] = {
  // .
  0x0,0x1,
  0x0,0x0,0x0,0x2e,
  0x0,0x2e,
  
    // database
  0x0,0x8,
  0x8,0xa7,0x85,0xd5,
  0x0,0x64,
  0x0,0x61,0x0,0x74,0x0,0x61,0x0,0x62,0x0,0x61,0x0,0x73,0x0,0x65,
    // persons.txt
  0x0,0xb,
  0x6,0xbb,0xc8,0xb4,
  0x0,0x70,
  0x0,0x65,0x0,0x72,0x0,0x73,0x0,0x6f,0x0,0x6e,0x0,0x73,0x0,0x2e,0x0,0x74,0x0,0x78,0x0,0x74,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/.
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/./database
  0x0,0x0,0x0,0x8,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x3,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/./database/persons.txt
  0x0,0x0,0x0,0x1e,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x66,0x68,0x90,0x82,0xe3,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_persons)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_persons)()
{
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x2, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_persons)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_persons)()
{
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x2, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_persons)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_persons)(); }
   } dummy;
}