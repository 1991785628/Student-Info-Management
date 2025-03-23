#include "bst.h"
#include "hash_table.h"

int main() {
    Student* root = build_balanced_bst(0, 27);
    build_hash_table(root); // 构建哈希表

    // 示例查询
    Student* target = hash_search("260421015");
    if (target) printf("Found: %s\n", target->name);
    else printf("Not found\n");

    free_tree(root);
    return 0;
}
