%include "io.inc"
section .text
global main

main:
    mov eax, 1
    push eax
    
    mov eax, 2
    push eax
    
    mov eax, 3
    push eax
    
    mov eax, 4
    
    PRINT_DEC 4, eax
    NEWLINE
    
    pop eax
    PRINT_DEC 4, eax
    NEWLINE
    
    pop eax
    PRINT_DEC 4, eax
    NEWLINE
    
    pop eax
    PRINT_DEC 4, eax
    NEWLINE
    
    ret
    
