// hash_table.c
#include "bst.h"

#define HASH_SIZE 100
Student* hash_table[HASH_SIZE]; // 哈希表全局定义

// 哈希函数（基于学号后三位）
int hash(const char* id) {
    return atoi(id + 6) % HASH_SIZE; // 示例：学号格式为260421020，取后三位020
}

// 构建哈希表（基于BST数据）
void build_hash_table(Student* root) {
    if (root) {
        int idx = hash(root->id);
        // 链地址法处理冲突
        root->next = hash_table[idx]; // 需在Student结构体中增加`Student* next`字段
        hash_table[idx] = root;
        build_hash_table(root->left);
        build_hash_table(root->right);
    }
}

// 哈希表查询（O(1)时间复杂度）
Student* hash_search(const char* id) {
    int idx = hash(id);
    Student* current = hash_table[idx];
    while (current) {
        if (strcmp(current->id, id) == 0) return current;
        current = current->next;
    }
    return NULL;
}
