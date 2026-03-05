# Assembly + C Integration

## Overview

This project demonstrates interoperability between C and x86_64 Assembly using the System V ABI on Linux.

The goal is to expose how high-level languages communicate with low-level machine instructions.

---

## Architecture

C Layer:
- Program entry point
- Function declaration (extern)
- Output formatting

Assembly Layer:
- Direct register manipulation
- System V calling convention
- Return value via RAX

---

## Calling Convention (System V ABI)

Argument Registers:
- RDI → first argument
- RSI → second argument

Return Register:
- RAX → return value

---

## Build Instructions

```bash
nasm -f elf64 src/func.asm -o src/func.o
gcc src/main.c src/func.o -o main
./main
```

---

## Project Structure

- main.c → C entry point
- func.asm → Assembly routine
- Makefile → Build automation

---

## Educational Goals

- Understand ABI mechanics
- Observe register-level data flow
- Integrate multi-language compilation
- Explore low-level debugging tools

---

## Future Extensions

- SIMD optimization
- Memory manipulation routines
- Inline assembly version
- Disassembly analysis with objdump
	$(ASM) -f elf64 src/func.asm -o src/func.o
	$(CC) src/main.c src/func.o -o main

clean:
	rm -f src/*.o main
