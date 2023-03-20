#ifndef __OBJECT_PRIVATE_INCLUDE_HEADER__
#define __OBJECT_PRIVATE_INCLUDE_HEADER__

#include "Object.h"
#include "Error.h"

/* OBJECT */
typedef struct _Object {
    OBJECTTYPE type;
} _Object;
ErrorCode ObjectInitialize(Object obj); // オブジェクト初期化
ErrorCode ObjectDestroy(Object obj); // オブジェクト消去
Object ObjectCreate(void); // オブジェクト作成
Object ObjectTypeEnchantment(Object obj, OBJECTTYPE type); // オブジェクトタイプ付与

/* INTEGER */
typedef struct _Integer {
    int value;
    Object object;
    void (*Print)(Integer obj);
} _Integer;
ErrorCode IntegerInitialize(Integer obj);
ErrorCode IntegerDestroy(Integer obj);
Integer IntegerCreate(void);

/* UInteger */
typedef struct _UInteger {
    unsigned int value;
    Object object;
} _UInteger;
ErrorCode UIntegerInitialize(UInteger obj);
ErrorCode UIntegerDestroy(UInteger obj);

/* FLOAT */
typedef struct _Float {
    float value;
    Object object;
} _Float;
ErrorCode FloatInitialize(Float obj);
ErrorCode FloatDestroy(Float obj);

/* DOUBLE */
typedef struct _Double {
    double value;
    Object object;
} _Double;
ErrorCode DoubleInitialize(Double obj);
ErrorCode DoubleDestroy(Double obj);

/* STRING */
typedef struct _String {
    char *value;
    Object object;
} _String;
ErrorCode StringInitialize(String obj);
ErrorCode StringDestroy(String obj);

/* ARRAY */
typedef struct _Array {
    Object array;
} _Array;
ErrorCode ArrayInitialize(Array obj);
ErrorCode ArrayDestroy(Array obj);

/* LIST */
typedef struct _List {
    Object list;
} _List;
ErrorCode ListInitialize(List obj);
ErrorCode ListDestroy(List obj);

#endif 