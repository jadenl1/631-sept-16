# C Programs

Requires a C compiler and `make`. Start each section from the project root.
If you're inside a program folder, run `cd ..` first.

## Arithmetic

Build all three programs:

```sh
cd arithmetic
make
```

| Program | What it does | Run |
| --- | --- | --- |
| Add | Adds two numbers. | `./Add` |
| Sub | Subtracts the second number from the first. | `./Sub` |
| Mult | Multiplies two numbers. | `./Mult` |

Enter each number when prompted, then press **Enter**.

## SQL Generator

Generates `people.sql` with a `people` table containing `id`, `firstname`,
and `lastname`, plus five sample rows.

```sh
cd sql-generator
make
./generate_sql
```

View the generated SQL with `cat people.sql`.
To create and view an actual database using SQLite (import once into a new database):

```sh
sqlite3 people.db < people.sql
sqlite3 -header -column people.db 'SELECT * FROM people;'
```

`make` builds programs; `./program_name` runs them. "Up to date" means the
program is already built. Run `make` again after editing C files.
