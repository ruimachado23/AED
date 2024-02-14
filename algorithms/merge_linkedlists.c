typedef struct node {
    int value;
    struct node* next;
} Node;

typedef struct {
    Node* head;
    int count;
} header_pointer;

header_pointer Merge(header_pointer seq_1, header_pointer seq_2) {
    header_pointer merged_seq = {NULL, 0};
    Node *current_1 = seq_1.head, *current_2 = seq_2.head, *current_merged = NULL;
    
    // Inicializa a nova lista com um nó cabeçalho falso para facilitar as inserções
    Node dummy = {0, NULL};
    current_merged = &dummy;

    while (current_1 != NULL && current_2 != NULL) {
        if (current_1->value <= current_2->value) {
            current_merged->next = current_1;
            current_1 = current_1->next;
        } else {
            current_merged->next = current_2;
            current_2 = current_2->next;
        }
        current_merged = current_merged->next;
        merged_seq.count++;
    }

    // Anexa o restante da lista que ainda tem elementos
    current_merged->next = (current_1 == NULL) ? current_2 : current_1;
    
    // Atualiza o contador para a nova lista
    while (current_merged->next != NULL) {
        current_merged = current_merged->next;
        merged_seq.count++;
    }

    // Define a cabeça da nova lista para o primeiro elemento após o nó cabeçalho falso
    merged_seq.head = dummy.next;

    return merged_seq;
}
