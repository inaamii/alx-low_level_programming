	extern	printf
	global	main
main:
	mov	edi, message
	xor	eax, eax

	mov	eax, 0
	call	printf
	ret
message: db `Hello, holberton\n`, 0xa,0
