#ifndef __OBJECT_INCLUDE_HEADER__
#define __OBJECT_INCLUDE_HEADER__

typedef enum {
    
    OBJECT_TYPE,
    INTEGER_TYPE,
    UINTEGER_TYPE,
    FLOAT_TYPE,
    DOUBLE_TYPE,
    STRING_TYPE,
    ARRAY_TYPE,
    LIST_TYPE

} OBJECTTYPE;

typedef struct _Object *Object;
typedef struct _Integer *Integer;
typedef struct _UInteger *UInteger;
typedef struct _Float *Float;
typedef struct _Double *Double;
typedef struct _String *String;
typedef struct _Array *Array;
typedef struct _List *List;

Object OBJECT(void);
Integer INTEGER(int val);
UInteger UINTEGER(unsigned int val);
Float FLOAT(float val);
Double DOUBLE(double val);
String STRING(char *string);
Array ARRAY(Object array);
List LIST(Object list);

void Print(Object obj); // オブジェクトの表示
void ObjectDone(Object obj);

#endif 