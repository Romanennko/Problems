%include "io.inc"

section .text
global main

main:
    mov eax, 0
    mov ebx, 0
    
    PRINT_STRING "Enter the first number"
    GET_DEC 4, eax
    NEWLINE
    
    PRINT_STRING "Enter the second number"
    GET_DEC 4, ebx
    NEWLINE
    
    CMP eax, ebx
    JE equality
    JG greater
    JL less


equality:
    PRINT_STRING "The numbers entered are equal to"
    
    ret
    
greater:
    PRINT_STRING "The first number ("
    PRINT_DEC 4, eax
    PRINT_STRING ") is greater than the second ("
    PRINT_DEC 4, ebx
    PRINT_CHAR ")"
    
    ret
    
less:
    PRINT_STRING "The first number ("
    PRINT_DEC 4, eax
    PRINT_STRING ") is less than the second ("
    PRINT_DEC 4, ebx
    PRINT_CHAR ")"
    
    ret
