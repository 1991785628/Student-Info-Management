// bst.h
typedef struct Student {
    char id[20];
    char name[50];
    struct Student *left, *right;
} Student;

Student* build_balanced_bst(int start, int end);  // 构建平衡BST
void inorder_traversal(Student* root);            // 中序遍历
void free_tree(Student* root);                    // 内存释放
int search_student(Student* root, const char* id); // 学号查询
