#include "ObjectP.h"
#include <stdlib.h>

/* OBJECT */
ErrorCode ObjectInitialize(Object obj) {
    obj->type = OBJECT_TYPE;
    return 0;
}
ErrorCode ObjectDestroy(Object obj) {
    free(obj);
    return 0;
}
Object ObjectTypeEnchantment(Object obj, OBJECTTYPE type){
    obj->type = type;
    return obj;
}
Object ObjectCreate(void) {
    int ret;
    Object obj = (Object)malloc(sizeof(_Object));
    if ((ret = ObjectInitialize(obj)) != 0) return NULL;
    return (obj);
}
Object OBJECT(void) {
    Object obj = (Object)malloc(sizeof(_Object));
    ObjectInitialize(obj);
}

/* INTEGER */
void PrintInteger(Integer obj) {
    print("Integer: %d\n", obj->value);
}
ErrorCode IntegerInitialize(Integer obj) {
    ObjectTypeEnchantment((Object)obj, INTEGER_TYPE);
    return 0;
}
ErrorCode IntegerDestroy(Integer obj) {
    free(obj);
    return 0;
}
Integer IntegerCreate(void) {
    Integer obj = (Integer)malloc(sizeof(_Integer));
    IntegerInitialize(obj);
    return obj;
}
Integer INTEGER(int val) {
    Integer obj = IntegerCreate();
    obj->value = val;
    return obj;
}