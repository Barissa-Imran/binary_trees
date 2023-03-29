#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the
 * left-child of another node.
 *@parent: is a pointer to the parent node of the node to create.
 *@value: is the value to put in the new node.
 * Return:Your function must return a pointer to the new node
 * or NULL if parent is null
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (!parent)
    {
        return (NULL);
    }
    binary_tree_t *new_node = binary_tree_node(parent, value);

    if (!new_node)
    {
        return (NULL);
    }
    if (parent->left)
    {
        parent->left->parent = new_node;
        new_node->left = parent->left;
    }
    parent->left = new_node;
    return (new_node);
}
