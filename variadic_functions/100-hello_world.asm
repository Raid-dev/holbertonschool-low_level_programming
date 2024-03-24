section .data
    hello db 'Hello, World', 0Ah    ; The string to print, 0Ah is the newline character

section .text
    global _start

_start:
    ; write syscall
    mov eax, 4                      ; The syscall number for sys_write
    mov ebx, 1                      ; File descriptor 1 is stdout
    mov ecx, hello                  ; Pointer to the message
    mov edx, 13                     ; Length of the message string
    int 0x80                        ; Call the kernel

    ; exit syscall
    mov eax, 1                      ; The syscall number for sys_exit
    xor ebx, ebx                    ; Exit code 0
    int 0x80                        ; Call the kernel

