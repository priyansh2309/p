#include <stdio.h>
struct node
{
 int data;
 struct Node* next;
};
struct Node* createNode(int data){
 struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
 newNode->data = data;
 newNode->next = Null;
 return newNode;
}
struct Node* append(struct Node* head,int data )
{
 struct Node* newNode = createNode(data;)
 
 if(head == NULL){
  return newNode;
 }
}
struct Nodenew* temp = head;
while (temp->next != NULL)
{
 temp = temp->next;
 
}

temp->next = newNode;
return head;

void display (struct Node* head) {
 if (head==Null) {
  print("Linked list is empty.\n");
  return;
}
printf("Linked List:");
while (head != NULL)
{
 printf("%d ->", head->data);
 head = head->next;
}
printf("NULL\n");
}
int main() {
 struct Node* head =NULL;
 
 head = append(head, 10);
 head = append(head, 20);
 head = append(head, 30);=
 display(head);
 
 return 0;
}




