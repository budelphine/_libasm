section	.text
	global	_ft_strlen

_ft_strlen:							; rdi = str
	mov		rsi, rdi				; rsi = rdi, save
	mov		rax, 0					; rax = 0
	jmp		_loop

_loop:
	cmp		byte[rsi + rax], 0		; rsi[i] ?= '\0'
	je		_return
	inc		rax						; rax++
	jmp		_loop

_return:
	ret
