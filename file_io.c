// file_io.c
void save_to_file(Student* root, const char* filename) {
    FILE* fp = fopen(filename, "w");
    if (fp) {
        // 使用前序遍历保存（便于重建树结构）
        _serialize(root, fp);
        fclose(fp);
    }
}
