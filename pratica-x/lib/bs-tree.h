#ifndef __BS_TREE_H__
#define __BS_TREE_H__

#include <stdio.h>
#include <stdlib.h>
#include "node.h" 
#include "queue.h"

typedef struct {
  Node head;
} bs_tree_t;

typedef enum {pre_order, post_order, in_order} Order_print_t;

int bst_init(bs_tree_t *tree);
int bst_insert(Node *node, Node *node_insert, int (*compare_data)(Item*, Item*));
void bst_predecessor(Node q, Node *r);
Node* bst_search(Node *node, Item key, int (*compare_data)(Item*, Item*));
int bst_remove(Node *node, Item *key, int (*compare_data)(Item*, Item*));
int bst_print(bs_tree_t *tree, void (*to_string)(Item*), Order_print_t order_print); 
int bst_height(Node *node);
void bst_bfs(Node *node, void (*to_string)(Item*));
#endif