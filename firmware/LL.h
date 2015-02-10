//
//  LL.h
//  LinkedList
//
//  Created by Daniel Hay on 10/02/15.
//  Copyright (c) 2015 Daniel Hay. All rights reserved.
//

#ifndef __LinkedList__LL__
#define __LinkedList__LL__

#include <stdio.h>
#include "LLNode.h"
template <typename T>
class LL
{
private:
    LLNode<T>* head;
    LLNode<T>* tail;
    int count;
public:
    LL();
    int size();
    void enqueue(T data);
    T dequeue();
    
};
#endif /* defined(__LinkedList__LL__) */
