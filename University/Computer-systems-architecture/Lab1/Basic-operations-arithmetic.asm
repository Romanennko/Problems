%include "io.inc"
section .text
global main

main:
    mov ebp, esp ; for correct debugging
    mov eax, 0
    mov ebx, 0
    
    PRINT_STRING "Enter the first number: "
    GET_DEC 4, eax
    NEWLINE
    
    PRINT_STRING "Enter the second number: "
    GET_DEC 4, ebx
    NEWLINE

    mov ecx, eax
    add ecx, ebx
    PRINT_STRING "The result of adding: "
    PRINT_DEC 4, ecx
    NEWLINE

    mov ecx, eax
    sub ecx, ebx
    PRINT_STRING "The result of subtraction: "
    PRINT_DEC 4, ecx
    NEWLINE

    mov ecx, eax
    imul ecx, ebx
    PRINT_STRING "The result of multiplication: "
    PRINT_DEC 4, ecx
    NEWLINE

    cmp ebx, 0
    je division_error
    
    mov ecx, eax
    xor edx, edx
    idiv ebx
    PRINT_STRING "The result of division: "
    PRINT_DEC 4, eax
    NEWLINE
    
    ret

division_error:
    PRINT_STRING "Error: Division by zero!"
    NEWLINE 
    
    ret
