#include "lists.h"

/**add_node_end - adds a new node at the end of a linked list @head: double pointer to the list_t list,@str: string to put in the new node Return: address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newnode;
list_t *temp = *head;
unsigned int length =0;

while(str[length])
length++;
newnode = malloc(sizeof(list_t));
if (!newnode)
{
return(NULL);
}
newnode-> str =strdup(str);
newnode-> len = length;
newnode->next = NULL;
if (*head == NULL)
{
*head = newnode;
return (newnode);
}
while (temp->next != NULL)
temp = temp->next;
temp->next = newnode;
return (newnode);
}
