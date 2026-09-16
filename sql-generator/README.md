# SQL generator in C

This program writes `people.sql` in your current directory. The SQL creates
a table named `people` with `id`, `firstname`, and `lastname`, then inserts
five sample rows. Running the generator again replaces `people.sql`.

If your terminal is in the `arithmetic` folder:

```sh
cd ../sql-generator
make
./generate_sql
cat people.sql
```

From the repository root, use `cd sql-generator` instead.

The C program generates the SQL file. To execute that SQL and create an actual
SQLite database, run the following with SQLite installed:

```sh
sqlite3 people.db < people.sql
sqlite3 -header -column people.db 'SELECT * FROM people;'
```

Import into a new database once; importing again will report that the table
and IDs already exist.

`main.c` contains `main()`, which opens the output file, writes the SQL,
and closes the file. Change the names in `main.c`, run `make`, and run
`./generate_sql` again to generate different sample data.
