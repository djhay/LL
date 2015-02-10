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
    LL() : count(0), head(NULL), tail(NULL){};
    int size()
    {
        return count;
    };
    void enqueue(T data) {
        
    if (head == NULL)
    {
        head = new LLNode<T>();
        head->data = data;
        tail = head;
    } else {
        LLNode<T>* curr = new LLNode<T>();
        curr->data = data;
        curr->next = head;
        head = curr;
    }
    ++count;
    };
    T dequeue(){
        
    if (size() == 0)
    {
        return T();
    }
    T ret = tail->data;
    if (head == tail)
    {
        head = NULL;
        delete tail;
        tail = NULL;
    } else {
        LLNode<T>*  tmp = tail->prev;
        if (tmp != NULL)
            tmp->next = NULL;
        delete tail;
        tail = tmp;
        
    }
    --count;
    return ret;
}

};
#endif /* defined(__LinkedList__LL__) */
