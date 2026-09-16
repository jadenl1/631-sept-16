# Arithmetic programs

From the repository folder:

```sh
cd arithmetic
make
./Add
```

If already in the arithmetic folder, skip `cd arithmetic`.
Use `./Sub` for subtraction or `./Mult` for multiplication.
Enter each number at its prompt and press Enter.

`make` builds the programs; `./Add` runs one. An "up to date" message
means it is already built. After editing the source, run `make` again.
Use `make clean` to remove the compiled programs.

## File roles

Each program has three files, using Add as an example:

- `AddMain.c` contains `main()`, where execution starts. It reads input,
  calls `add()`, and prints the result.
- `Add.h` declares `add()` with its parameter and return types so the
  compiler can check calls to the function.
- `Add.c` defines `add()`, which performs the addition.

Sub and Mult follow the same structure. The Makefile compiles each main file
and its matching arithmetic file into a separate executable with one `main()`.
The filename does not have to be `main.c`; the function name `main` matters to C.
