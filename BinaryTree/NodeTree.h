#pragma once

template<class T>
struct NodeTree
{
    T data;
    NodeTree<T> *left;
    NodeTree<T> *right;
};
