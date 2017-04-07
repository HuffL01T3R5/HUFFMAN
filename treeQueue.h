#ifndef HUFFMAN_TREEQUEUE_H
#define HUFFMAN_TREEQUEUE_H

typedef struct treeQueue treeQueue;
treeQueue* treeQueue_createNode(unsigned char byte, long long int frequence);
void treeQueue_enqueue(treeQueue **tree, unsigned char byte, long long int frequence);
void treeQueue_printQueue(treeQueue *tree);
char* treeQueue_printTreePreorder(treeQueue *tree);
void treeQueue_formTree(treeQueue **tree);

#endif //HUFFMAN_TREEQUEUE_H
