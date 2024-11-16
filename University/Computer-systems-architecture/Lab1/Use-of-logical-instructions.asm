%include "io.inc"
section .text
global main

main:
    mov ebp, esp; for correct debugging
    mov eax, 0
    mov ebx, 10
    
    PRINT_STRING "Enter a number: "
    GET_DEC 4, eax
    NEWLINE
    
    mov ecx, eax
    and ecx, ebx
    
    PRINT_STRING "AND: "
    PRINT_DEC 4, ecx
    NEWLINE
    
    mov ecx, eax
    or ecx, ebx
    
    PRINT_STRING "OR: "
    PRINT_DEC 4, ecx
    NEWLINE
    
    mov ecx, eax
    xor ecx, ebx
    
    PRINT_STRING "XOR: "
    PRINT_DEC 4, ecx
    NEWLINE
    
    ret
