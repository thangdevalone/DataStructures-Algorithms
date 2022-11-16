#pragma once
#include <iostream>
#include "NodeTree.h"

using namespace std;

template <class T>
class BinaryTree
{
private:
    /* data */
    NodeTree<T> *root;
    void addToTree(T data, NodeTree<T>* &r)
    {
        if (r == 0)
        {
            NodeTree<T> *n = new NodeTree<T>;
            n->data = data;
            n->left = 0;
            n->right = 0;
            r = n;
        }
        else {
            if(r->data == data){
                return;
            }
            (r->data<data)?addToTree(data,r->left):addToTree(data,r->right);
        }
    };
    bool findData(T data, NodeTree<T>* r){
        if(r==0){
            return false;
        }
        if(r->data == data){
            return true;
        }
        return (r->data<data)?findData(data,r->left):findData(data,r->right);
    }
    void print(NodeTree<T> * r){
        if(r==0) return;
        else{
            cout <<r->data<< " ";
            print(r->left);
            print(r->right);
        }
    }
public:
    BinaryTree()
    {
        root = 0;
    }
    
    void add(T data)
    {
        addToTree(data, root);
    }
    bool find(T data){
        return findData(data, root);
    }
    void printTree(){
        print(root);
    }
};