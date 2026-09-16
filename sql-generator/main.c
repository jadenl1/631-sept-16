#include <stdio.h>

int main(void)
{
    FILE *file = fopen("people.sql", "w");
    if (file == NULL) {
        perror("Could not create people.sql");
        return 1;
    }

    const char *sql =
        "CREATE TABLE people (\n"
        "    id INTEGER PRIMARY KEY,\n"
        "    firstname VARCHAR(50) NOT NULL,\n"
        "    lastname VARCHAR(50) NOT NULL\n"
        ");\n\n"
        "INSERT INTO people (id, firstname, lastname) VALUES\n"
        "    (1, 'Emma', 'Johnson'),\n"
        "    (2, 'Liam', 'Smith'),\n"
        "    (3, 'Olivia', 'Garcia'),\n"
        "    (4, 'Noah', 'Williams'),\n"
        "    (5, 'Ava', 'Brown');\n";

    int write_failed = fputs(sql, file) == EOF;
    int close_failed = fclose(file) == EOF;
    if (write_failed || close_failed) {
        fprintf(stderr, "Could not finish writing people.sql.\n");
        return 1;
    }

    printf("Created people.sql with a people table and 5 sample rows.\n");
    return 0;
}
