/*
** EPITECH PROJECT, 2022
** list
** File description:
** macro.h
*/

#ifndef LIST_MACRO_H
    #define LIST_MACRO_H

    #define FOREACH(list, node) \
        for (node = list->head ; node ; node = node->next)

#endif /* !LIST_MACRO_H */
