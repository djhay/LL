//
//  LLNode.h
//  LinkedList
//
//  Created by Daniel Hay on 10/02/15.
//  Copyright (c) 2015 Daniel Hay. All rights reserved.
//

#ifndef LinkedList_LLNode_h
#define LinkedList_LLNode_h
template <typename T> struct LLNode
{
    T data;
    LLNode* next;
    LLNode* prev;
    
};
#endif
