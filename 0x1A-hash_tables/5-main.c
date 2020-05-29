#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(10);
    hash_table_print(ht);
    printf("-----------end------------\n");
    hash_table_set(ht, "a", "holberton");
    hash_table_set(ht, "b", "holby");
    hash_table_set(ht, "c", "hol");
    hash_table_set(ht, "d", "ho");
    hash_table_set(ht, "e", "hola");
    hash_table_set(ht, "f", "como");
    hash_table_set(ht, "h", "estas");
    hash_table_set(ht, "i", "muy");
    hash_table_set(ht, "j", "bien");
    hash_table_set(ht, "k", "ppfff");
    hash_table_set(ht, "l", "mal");
    hash_table_set(ht, "m", "bentiras");
    hash_table_set(ht, "n", "bien");
    hash_table_set(ht, "o", "super");
    hash_table_set(ht, "p", "superrrr");
    hash_table_set(ht, "q", "superrrrrrr");
    hash_table_set(ht, "r", "superrrrrrrrr");
    hash_table_set(ht, "s", "superrrrrrrr");
    hash_table_set(ht, "t", "superrrrrrrr");
    hash_table_set(ht, "u", "superrrrrrrr");
    hash_table_set(ht, "v", "superrrrrrrr");
    hash_table_set(ht, "a", "superrrrrrrr");
    hash_table_set(ht, "a", "totalmente renovado");
    hash_table_set(ht, "l", "cambie de mal a bien");
    hash_table_set(ht, "v", "100");
     hash_table_set(ht, "w", "100");
    hash_table_print(ht);
    printf("-----------end------------\n");
    ht = hash_table_create(1024);
    hash_table_print(ht);
    printf("-----------end------------\n");
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Jennie", "and Jay love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Holberton");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_print(ht);
    return (EXIT_SUCCESS);
}