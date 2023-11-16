section .data
    hello_msg db "Hello, Holberton", 10 ; 10 is the ASCII code for newline

section .text
    global main
    extern printf

main:
    sub rsp, 8 ; align stack (16-byte alignment)
    
    ; Format string pointer
    mov rdi, hello_msg

    ; Call printf
    call printf

    add rsp, 8 ; restore stack pointer
    mov eax, 0 ; return 0
    ret
