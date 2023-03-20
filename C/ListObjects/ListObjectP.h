#ifndef __LIST_OBJECT_PRIVATE_HEADER_INCLUDE
#define __LIST_OBJECT_PRIVATE_HEADER_INCLUDE

#include "Errors.h"
#include "ListObject.h"

typedef struct __node {
    struct __node *node;
    void *Object;
} __node;

typedef struct _ListObject {
    Node Head;
    Node Curr;
    Node Prev;
    Node Next;
    Node Tail;
} _ListObject;

ErrorCode ListObjectInitialize(ListObject list);
ErrorCode ListObjectDestroy(ListObject list);
ErrorCode NodeInitialize(Node node);
ErrorCode NodeDestroy(Node node);

// Node
ErrorCode NodeInitialize(Node node);
ErrorCode NodeDestroy(Node node);
Node NodeCreate(void);
Node NodeCreateWithSetObject(void *Obejct);

#endif 