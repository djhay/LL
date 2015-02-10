//
//  LL.cpp
//  LinkedList
//
//  Created by Daniel Hay on 10/02/15.
//  Copyright (c) 2015 Daniel Hay. All rights reserved.
//

#include "LL.h"
/*
template <typename T>
LL<T>::LL() : count(0), head(NULL), tail(NULL)
{
    
}

template <typename T>
int LL<T>::size()
{
    return count;
}

template <typename T> void LL<T>::enqueue(T data)
{
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
    
}

template <typename T> T LL<T>::dequeue()
{
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
*/