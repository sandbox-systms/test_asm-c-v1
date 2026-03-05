global soma 

section .text

soma: 
    mov rax, rdi
    add rax, rsi
    ret 

; ==================================================================================================
;  O código acima define uma função chamada "soma" que recebe dois argumentos (rdi e rsi), 
; realiza a soma desses argumentos e retorna o resultado em rax. A função é simples e eficiente, 
; utilizando as instruções básicas de movimentação e adição.
; ===============================================================================================