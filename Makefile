out:
	nasm -f elf64 -g -l my_printf_asm.lst -o my_printf_asm.o my_printf.asm
	gcc -c my_printf.cpp -o my_printf_cpp.o
	gcc -no-pie -o my_printf my_printf_cpp.o my_printf_asm.o
	./my_printf