#ifndef DLL_KOLMAS_GLOBAL_H
#define DLL_KOLMAS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DLL_KOLMAS_LIBRARY)
#  define DLL_KOLMAS_EXPORT Q_DECL_EXPORT
#else
#  define DLL_KOLMAS_EXPORT Q_DECL_IMPORT
#endif

#endif // DLL_KOLMAS_GLOBAL_H
