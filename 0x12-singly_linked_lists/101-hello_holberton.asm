segment .data
hello db "Hello, Holberton", 0xa, 0

segment .text
extern printf
extern exit

global main
main:
	mov rax, 0
	mov rdi, hello
	call printf

	mov rax, 0
	mov rdi, 0
	call exit
