%include "io.inc"

section .data
    num1 dd 10
    num2 dd 20
    array dd 10, 20, 30, 40, 50

section .text
    global main

main:
    mov eax, [num1] ; Direct addressing
    PRINT_DEC 4, eax
    NEWLINE
    
    lea ebx, [num2]
    mov eax, [ebx] ; Indirect addressing
    PRINT_DEC 4, eax
    NEWLINE
    
    mov ecx, 2
    mov eax, array[ecx * 4] ; Indexed addressing
    PRINT_DEC 4, eax
    NEWLINE
    
    lea ebx, array
    mov eax, [ebx + 12] ; Base addressing
    PRINT_DEC 4, eax
    
    ret
