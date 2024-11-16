%include "io.inc"

section .data
    number1 dd 0.69
    number2 dd 8.12
    
    result1 dd 0.0
    result2 dd 0.0
    
section .text
global main
main:   
    fld dword [number1]
    fld dword [number2]
    
    fadd
    
    fistp dword [result1]

    PRINT_DEC 4, [result1]
    NEWLINE
    
    fld dword [number1]
    fld dword [number2]
    
    fmul
    
    fistp dword [result2]
    
    PRINT_DEC 4, [result2]
    
    ret 
