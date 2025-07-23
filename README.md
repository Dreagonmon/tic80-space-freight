# TIC80 Space Freight

## Space Freight Game

...
### Pallete

* [Computer Chip y Palette](https://lospec.com/palette-list/computer-chip-y)
* [T-Lollipop Palette](https://lospec.com/palette-list/t-lollipop)
* [PurpleDawn Palette](https://lospec.com/palette-list/purpledawn)
* [FunkyFuture 8 Palette](https://lospec.com/palette-list/funkyfuture-8)

## Compile

This repo **doesn't** require `wasi-sdk`.
All your need is `clang`(C language family frontend for LLVM),
`lld`(wasm-ld from the LLVM project), `llvm`(llvm-ar tools from the LLVM project)
and `tic80` packages.

* Compile only the wasm part: `make clean && make wasm`
* Compile and make the cart: `make clean && make cart`
* Compile and run the cart: `make clean && DEBUG=1 make run`
* In order to speed up compiling, static linked library is used.
  clean the static library cache: `make cleanlib`

## Limitation

printf function have several limitation:

* Not support float and double (%f and %lf).
* Max text length is 80 ascii characters.

math library only have a subset of math functions.

## Recommanded VSCode extensions

* ms-vscode.cpptools
* ms-vscode.makefile-tools
