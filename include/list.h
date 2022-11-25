/*
** EPITECH PROJECT, 2022
** list
** File description:
** list.h
*/

#ifndef LIST_H
    #define LIST_H

    #include "list/struct.h"

    list_t *list_create(void);

    unsigned int list_add(list_t *list, void *value);

#endif /* !LIST_H */
