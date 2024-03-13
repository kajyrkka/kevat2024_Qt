#ifndef DLL_QUI_GLOBAL_H
#define DLL_QUI_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DLL_QUI_LIBRARY)
#  define DLL_QUI_EXPORT Q_DECL_EXPORT
#else
#  define DLL_QUI_EXPORT Q_DECL_IMPORT
#endif

#endif // DLL_QUI_GLOBAL_H
