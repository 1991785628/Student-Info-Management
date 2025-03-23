// bst.c
void free_tree(Student* root) {
    if (root) {
        free_tree(root->left);
        free_tree(root->right);
        free(root);
    }
}
