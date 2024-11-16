%include "io.inc"

section .text
global main

main:
    mov eax, 10
    mov ebx, 10
        
    rol eax, 1
    
    ror ebx, 1
    
    
    PRINT_STRING "Eax register (10) after shift 1 bit to the left: "
    PRINT_DEC 4, eax
    
    NEWLINE
    
    PRINT_STRING "Ebx register (10) after shift 1 bit to the right: "
    PRINT_DEC 4, ebx
    
    ret
