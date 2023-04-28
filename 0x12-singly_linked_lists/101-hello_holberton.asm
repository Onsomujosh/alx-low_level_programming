	SECTION .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 0, 10

	SECTION .text
	extern printf
	global main
main:
	lea rsi, [msg]
	lea rdi, [fmt]
	xor eax, eax
	call printf

	xor eax, eax
	ret
