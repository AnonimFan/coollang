# coollang

concatanative programming language inspired by [Porth](https://gitlab.com/tsoding/porth) and [Forth](https://en.wikipedia.org/wiki/Forth)

## quick start

```console
$ ./nobuild run

$ coollan ./hello.clan

$ ./hello
```

## data types

- `int` integer

- `str` string

- `intp` integer pointer

- `bool` boolean

- `none` void types

- `null` void(0)

## syntax

```
inc "std.clan"

main(): {
    "Hello, World\n" printf
    ret
}
```

**compiles to assembly**
