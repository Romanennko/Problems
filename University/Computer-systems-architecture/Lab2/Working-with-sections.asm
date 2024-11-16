%include "io.inc"

section .data
    num1 db 10
    num2 db 20
    msg db "Wynik: %d", 0

section .bss
    result resb 1

section .text
    global main

main:
    mov al, [num1]
    add al, [num2]
    mov [result], al
    
    PRINT_DEC 4, [result]

    ret
