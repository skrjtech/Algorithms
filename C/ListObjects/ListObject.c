#include "ListObjectP.h"
#include <stdlib.h>

// Node
ErrorCode NodeInitialize(Node node) {
    ErrorCode ret = ERROR_NONE;
    node->node = NULL;
    node->Object = NULL;
    return (ret);
}

ErrorCode NodeDestroy(Node node) {
    ErrorCode ret = ERROR_NONE;
    free(node);
    retrurn (ret);
}

Node NodeCreate(void) {
    Node node = (Node)malloc(sizeof(__node));
    NodeInitialize(node);
    return node;
}

Node NodeCreateWithSetObject(void *Object) {
    Node node = NodeCreate();
    node->Object = Object;
    return node;
}

ErrorCode ListObjectInitialize(ListObject list) {
    ErrorCode ret = ERROR_NONE;
    list->Head = list->Tail = NULL;
    list->Prev = list->Curr = list->Next = NULL;
    return (ret);
}

ErrorCode ListObjectDestroy(ListObject list) {
    ErrorCode ret = ERROR_NONE;
    ListObject plist = list->Head;
    while (plist != NULL) {
        list->Head = list->Head->
    }
    

}

ListObject ListObjectCreate(void) {
    ListObject list = (ListObject)malloc(sizeof(_ListObject));
    ListObjectInitialize(list);
    return (list);
}

ListObject ListObjectCreateWithSetObject(void *Object) {
    ListObject list = ListObjectCreate();
    Node node = NodeCreateWithSetObject(Object);
    list->Head = list->Tail = node;
    list->Prev = list->Curr = list->Next = node;
    return (list);
}