%include "io.inc"
section .text
global main

main:
    mov ecx, 10
    mov eax, 0
    
    call l1
    
    ret
    
l1:
    add eax, 1
    
    PRINT_DEC 4, eax
    
    loop l1
    
    ret
    
