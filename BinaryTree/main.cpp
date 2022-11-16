#include<iostream>
#include "BinaryTree.h"

using namespace std;

int main(){
    BinaryTree<int> tree;
    tree.add(10);
    tree.add(9);
    tree.add(8);
    tree.add(12);
    tree.add(14);
    tree.printTree();
}