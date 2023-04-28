section .data
    hello_holbert db "Hello, Holberton", 0Ah, 0
section .text
    global main
    extern printf
    
main:
    push rbp                ; store base pointer
    mov rbp, rsp            ; declare base pointer
    
    lea rdi, [hello_holbert] ; bring up address of hello string into rdi
    xor eax, eax            ; tidy rax register
    call printf             ; call printf function to print hello string
    
    mov rsp, rbp            ; restore stack pointer
    pop rbp                 ; restore base pointer
    
    xor eax, eax            ; set exit status to 0
    ret                     ; return to operating system
