/*
** EPITECH PROJECT, 2023
** Linked List
** File description:
** Linked list structure
*/

#ifndef LINKED_LIST
    #define LINKED_LIST
typedef struct linked_list {
    void *data;
    struct linked_list *next;
} linked_list_t;

#endif
