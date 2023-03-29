#include "binary_trees.h"

/*
 * binary_tree_insert_left - function that inserts a node as the
 * left-child of another node.
 *@parent: is a pointer to the parent node of the node to create.
 *@value: is the value to put in the new node.
 * Return:Your function must return a pointer to the new node
 * or NULL if parent is null
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = NULL;

    if (!parent)
        return (NULL);

    new_node = malloc(sizeof(binary_tree_t));

    if (!new_node)
        return (NULL);
    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    if (parent->right)
    {
        new_node->right = parent->right;
        parent->right->parent = new_node;
        parent->right = new_node;
    }
    else
    {
        parent->right = new_node;
    }
    return (new_node);
}
