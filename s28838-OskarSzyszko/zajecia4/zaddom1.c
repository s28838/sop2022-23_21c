#include <stdio.h>
#include <stdlib.h>

// Struktura węzła listy
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Funkcja do wstawiania nowego węzła na początek listy
void insertAtBeginning(Node** head, int data) {
    // Tworzenie nowego węzła
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = *head;

    // Aktualizowanie głowy listy
    *head = newNode;
}

// Funkcja do wyświetlania listy
void displayList(Node* head) {
    Node* current = head;
    printf("Lista: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    Node* head = NULL;

    // Dodawanie elementów na początek listy
    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 15);

    // Wyświetlanie listy
    displayList(head);

    return 0;
}
