//#include <stdio.h>
//#include <stdlib.h>
//#include "tree.h"
//#include <platform/android/jni/JniHelper.h>
//
//void  init_tree(Tree *tree) {
//    tree = (Tree *)malloc(sizeof(Tree));
//    tree->root = NULL;
//
//}
//void add(Tree *tree,elem data) {
//    Node *new_node= (Node *)malloc(sizeof(Node));
//    new_node->data = data;
//    new_node->left = NULL;
//    new_node->right = NULL;
//    if (tree->root == NULL) {
//        tree->root = new_node;
//        tree->size++;
//        return;
//    }
//
//    Node *parent_node = tree->root;//将要存放的位置的父元素
//    Node *pos = tree->root; //将要存放的位置
//    double direction = 0;//存放的方向，左边或右边
//    while (pos != NULL) {
//        direction = compare(data, pos->data);
//        Node *tmp = pos;
//        if (direction > 0) {
//            pos = pos->right;
//        } else if(direction < 0){
//            pos = pos->left;
//        }
//        parent_node = tmp;
//    }
//    if(direction > 0) {
//        parent_node->right = new_node;
//    } else if (direction < 0) {
//        parent_node->left = new_node;
//    }
//    tree->size++;
//
//
//}
//double compare(elem d1,elem d2) {
//    return d1 - d2;
//}
//void LevelOrderTraversal(Tree *tree) {
//    Queue queue;
//    initQueue(&queue);
//    queue.
//}