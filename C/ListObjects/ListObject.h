#ifndef __LIST_OBJECT_HEADER_INCLUDE
#define __LIST_OBJECT_HEADER_INCLUDE

typedef unsigned int Index;
typedef struct _ListObject *ListObject;
typedef struct __node *Node;

// ListObject
// Create
ListObject ListObjectCreate(void);
ListObject ListObjectCreateWithSetObject(void *Object);
// ADD
ListObject ListObjectAdd(ListObject list);
ListObject ListObjectCurrentAdd(ListObject list, void *Object);
ListObject ListObjectPreviousAdd(ListObject list, void *Object);
ListObject ListObjectNextAdd(ListObject list, void *Object);
// Remove
ListObject ListObjectRemove(ListObject list);
// Search
ListObject ListObjectSearch(ListObject list, void *Target);

#endif