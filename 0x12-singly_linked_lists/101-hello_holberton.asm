section .data

	message db "Hello, Holberton", 10
	.size equ $ - message

section .text
global main
main:
	mov rdi, 1		;write
	mov rsi, message	;msg
	mov rdx, message.size	;msg size
	mov rax, 1
	syscall			;write
	mov rax, 60		;exit call
	mov rdi, 0		;exit code
	syscall			;exit
