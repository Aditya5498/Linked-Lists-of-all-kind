#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void push(struct node* l){
    struct node* last = (struct node*)malloc(sizeof(struct node));
    printf("Enter the element to be added after %d\n",l->data);
    scanf("%d",&last->data);
    l->next = last;
    last->next =NULL;
printf("You have successfully created a new node in the list and the pointer is pointing to %d\n",last->next);
}

void middle(int q,struct node* a){
int i,j;
struct node *k=(struct node*)malloc(sizeof(struct node));
struct node *current = a;
struct node *n=(struct node*)malloc(sizeof(struct node));

for(i=0;i<q-1;i++){
    current = current->next;
}
printf("You will be adding after %d element\n So, enter the element you want to add\n",current->data);
scanf("%d",&n->data);
k=current->next;
current->next=n;
n->next=k;
printf("Successfully added a new node after %d :-) \n\n",current->data);

}

void disp(struct node* head){
    struct node *current = head;

    if(head == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("Nodes of singly linked list: \n");
    while(current != NULL) {
        //Prints each node by incrementing pointer
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int count(struct node* head){
struct node *c =head;
int n=0;
while(c != NULL) {
        n++;
        c=c->next;
    }
    return n;
}


int main()
{
struct node* a;
struct node* b;
struct node* c;
struct node* last;

int i,j,k,n;
a = (struct node*)malloc(sizeof(struct node));
b = (struct node*)malloc(sizeof(struct node));
c = (struct node*)malloc(sizeof(struct node));
last = (struct node*)malloc(sizeof(struct node));
printf("Enter the 3 numbers\n");
scanf("%d",&i);
a->data=i;
a->next=b;
scanf("%d",&i);
b->data=i;
b->next=c;
scanf("%d",&i);
c->data=i;
c->next=NULL;
last=a;

while(1){
printf("Enter\n 0 to exit out of here\n 1 to add an element at the last\n 2 to add an element in the middle\n 3 to display all the elements\n 4 to know the number of elements\n");
scanf("%d",&j);
if(j==1){
    printf("Enter the element you would like to add at the last\n");
    while(last->next!=NULL){
        last=last->next;
        }
    printf("The last element is %d\n",last->data);

    push(last);
}
else if(j==2){
        int q,w,e;
printf("There are %d elements present in the  list\n",count(a));
printf("So in which position you would like to add the element?\n");
scanf("%d",&q);
    middle(q,a);
}
else if(j==3){
    disp(a);
}
else if(j==4){
    printf("There are %d elements present in the list\n",count(a));
}
else if(j==0){
    break;
}
else{
    printf("Enter the correct choice");
    scanf("%d",&j);
}

}
    return 0;
}
