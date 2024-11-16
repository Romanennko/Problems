%include "io.inc"

section .data
    array db 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
    array_size equ $ - array

section .text
global main
main:
    mov ecx, array_size
    mov esi, 0

loop_start:
    cmp esi, ecx                ; Compare the index with the number of elements
    jge end_loop                ; If index >= number of elements, exit the loop

    mov al, [array + esi]
    PRINT_DEC 4, al
    NEWLINE
    inc esi
    jmp loop_start

end_loop:
    ret
