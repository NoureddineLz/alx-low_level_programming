    global main
     extern printf

main:
		push rbp
		mov rdi, format
		mov rsi, hello
		call printf
		pop rbp
		ret
format: db `Hello, Holberton\n`,0
