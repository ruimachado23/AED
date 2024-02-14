#include <stdio.h>

unsigned int CountNonLeafNodes(pointer root) {
    // Se o nó é nulo ou é uma folha, retorna 0
    if (root == NULL || (root->left == NULL && root->right == NULL))
        return 0;
    
    // Conta este nó + os nós dos subárvores esquerda e direita
    return 1 + CountNonLeafNodes(root->left) + CountNonLeafNodes(root->right);
}