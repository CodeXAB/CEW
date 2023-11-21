// Question 1
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// // Structure to store contact information
// struct Contact {
//     char name[50];
//     char email[50];
//     char phone[15];
// };

// int main() {
//     struct Contact *addressBook = NULL;
//     int numContacts = 0; // it is used to keep track of number of contacts.
//     int maxContacts = 0; // represents the maximum number of contacts the address book can hold.

//     while (1) {
//         //These are the instructions given to the user repeatedly.
//         printf("\nAddress Book Menu\n");
//         printf("1. Add Contact\n");
//         printf("2. Delete Contact\n");
//         printf("3. View Contacts\n");
//         printf("4. Exit\n");
//         printf("Enter your choice: ");

//         int choice;
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1: {
//                 // Add Contact
//                 struct Contact newContact;
//                 
//                 printf("\nEnter Name: ");
//                 scanf(" %[^\n]", newContact.name);
//                 // \n is a newline character. So, [^\n] will match any character except newline.

//                 printf("Enter Email: ");
//                 scanf(" %[^\n]", newContact.email);

//                 printf("Enter Phone Number: ");
//                 scanf(" %[^\n]", newContact.phone);

//                 // Increase the size of the address book using realloc
//                 if (numContacts == maxContacts) {
//                     maxContacts += 2; // Increase the size by 2
//                     addressBook = realloc(addressBook, maxContacts * sizeof(struct Contact));
//                 }

//                 // Add the new contact to the address book
//                 addressBook[numContacts] = newContact;
//                 numContacts++;

//                 printf("Contact added successfully!\n");
//                 break;
//             }
//             case 2: {
//                 // Delete Contact
//                 if (numContacts == 0) {
//                     printf("\nNo contacts to delete.\n");
//                     break;
//                 }

//                 printf("\nEnter the index of the contact to delete (0-%d): ", numContacts - 1);
//                 int index;
//                 scanf("%d", &index);

//                 if (index < 0 || index >= numContacts) {
//                     printf("Invalid index.\n");
//                     break;
//                 }

//                 // Shift the remaining contacts to fill the gap
//                 for (int i = index; i < numContacts - 1; i++) {
//                     addressBook[i] = addressBook[i + 1];
//                 }

//                 numContacts--;

//                 printf("Contact deleted successfully!\n");
//                 break;
//             }
//             case 3: {
//                 // View Contacts
//                 if (numContacts == 0) {
//                     printf("\nNo contacts to display.\n");
//                     break;
//                 }

//                 printf("\nAddress Book:\n");
//                 for (int i = 0; i < numContacts; i++) {
//                     printf("Contact %d:\n", i + 1);
//                     printf("Name: %s\n", addressBook[i].name);
//                     printf("Email: %s\n", addressBook[i].email);
//                     printf("Phone: %s\n", addressBook[i].phone);
//                     printf("\n");
//                 }
//                 break;
//             }
//             case 4: {
//                 // Exit
//                 // Free the dynamically allocated memory before exiting
//                 free(addressBook);
//                 printf("Exiting...\n");
//                 return 0;
//             }
//             default:
//                 printf("Invalid choice. Please try again.\n");
//         }
//     }
// }

// Question 2
// #include <stdio.h>
// #include <stdlib.h>

// // Structure for a node in the linked list
// struct Node {
//     int data;
//     struct Node* next;
// };

// // Function to insert a node at the beginning of a linked list
// void insert(struct Node** head, int data) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->next = *head;
//     *head = newNode;
// }

// // Function to merge two sorted linked lists into a single sorted linked list
// struct Node* mergeLists(struct Node* list1, struct Node* list2) {
//     if (list1 == NULL)
//         return list2;
//     if (list2 == NULL)
//         return list1;

//     struct Node* mergedList = NULL;

//     if (list1->data <= list2->data) {
//         mergedList = list1;
//         mergedList->next = mergeLists(list1->next, list2);
//     } else {
//         mergedList = list2;
//         mergedList->next = mergeLists(list1, list2->next);
//     }

//     return mergedList;
// }

// // Function to print the linked list
// void printList(struct Node* head) {
//     struct Node* temp = head;
//     while (temp != NULL) {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     }
//     printf("\n");
// }

// int main() {
//     struct Node* list1 = NULL;
//     struct Node* list2 = NULL;

//     // Create the first sorted linked list
//     insert(&list1, 9);
//     insert(&list1, 7);
//     insert(&list1, 5);
//     insert(&list1, 3);
//     insert(&list1, 1);

//     // Create the second sorted linked list
//     insert(&list2, 8);
//     insert(&list2, 6);
//     insert(&list2, 4);
//     insert(&list2, 2);

//     printf("List 1: ");
//     printList(list1);

//     printf("List 2: ");
//     printList(list2);

//     // Merge the two sorted linked lists
//     struct Node* mergedList = mergeLists(list1, list2);

//     printf("Merged List: ");
//     printList(mergedList);

//     return 0;
// }

// Question 3
// #include <stdio.h>
// #include <stdlib.h>

// // Structure for a node in the linked list
// struct Node {
//     int data;
//     struct Node* next;
// };

// // Function to insert a node at the beginning of a linked list
// void insert(struct Node** head, int data) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->next = *head;
//     *head = newNode;
// }

// // Function to convert a linked list to an array
// int* convertLinkedListToArray(struct Node* head, int* size) {
//     // Count the number of nodes in the linked list
//     *size = 0;
//     struct Node* temp = head;
//     while (temp != NULL) {
//         (*size)++;
//         temp = temp->next;
//     }

//     // Create an array of the same size as the linked list
//     int* array = (int*)malloc(*size * sizeof(int));

//     // Copy the elements of the linked list to the array
//     temp = head;
//     int index = 0;
//     while (temp != NULL) {
//         array[index++] = temp->data;
//         temp = temp->next;
//     }

//     return array;
// }

// int main() {
//     struct Node* head = NULL;

//     // Create a linked list
//     insert(&head, 4);
//     insert(&head, 3);
//     insert(&head, 2);
//     insert(&head, 1);

//     // Convert the linked list to an array
//     int size;
//     int* array = convertLinkedListToArray(head, &size);

//     // Print the array
//     printf("Array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");

//     // Free the dynamically allocated memory for the array
//     free(array);

//     return 0;
// }

// Question 4
//  Write a C program that removes elements with odd indices from a singly linked list.
#include <stdio.h>
#include <stdlib.h>

// Structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the beginning of a linked list
void insert(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

// Function to remove elements with odd indices from a linked list
void removeOddIndices(struct Node** head) {
    if (*head == NULL)
        return;

    struct Node* prev = *head;
    struct Node* current = prev->next;

    while (prev != NULL && current != NULL) {
        prev->next = current->next;
        free(current);
        prev = prev->next;
        if (prev != NULL)
            current = prev->next;
    }
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    // Create a linked list
    insert(&head, 6);
    insert(&head, 5);
    insert(&head, 4);
    insert(&head, 3);
    insert(&head, 2);
    insert(&head, 1);

    printf("Original List: ");
    printList(head);

    // Remove elements with odd indices
    removeOddIndices(&head);

    printf("List after removing elements with odd indices: ");
    printList(head);

    // Free the memory allocated for the linked list
    struct Node* current = head;
    struct Node* next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    return 0;
}


