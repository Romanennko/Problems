%include "io.inc"

section .bss
    num resd 1

section .text
global main

main:
    mov ebp, esp; for correct debugging  
    mov eax, 1
    mov ebx, 1
    
    PRINT_STRING "Enter num for factorial: "
    GET_DEC 4, num
    NEWLINE
    
    mov ecx, 1
    call factorial
    
    PRINT_STRING "Factorial: "
    PRINT_DEC 4, ebx
    NEWLINE
    
    ret
    
factorial:
    inc ecx
    
    inc eax
    imul ebx, eax
    
    cmp ecx, [num]
    jl factorial    
    
    ret
    
