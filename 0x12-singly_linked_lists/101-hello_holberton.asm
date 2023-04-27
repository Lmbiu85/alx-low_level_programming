section .data
    fmt db "Hello, Holberton", 0

section .text
    extern printf

    global main

main:
    push rbp
    mov rbp, rsp

    mov rdi, fmt
    xor eax, eax
    call printf

    mov eax, 0
    leave
    ret
