section .text
	global _ft_strdup
	extern _ft_strlen
	extern _ft_strcpy
	extern _malloc
	extern ___error

_ft_strdup:						; rdi = src
	push	rbx					; if u use it u need push/pop
	call	_ft_strlen			; rdi = src, rax = nbyte
	inc		rax					; rax++ = nbyte++
	mov		rbx, rdi			; rbx = src
	mov		rdi, rax			; rdi = nbyte + 1
	call	_malloc				; malloc(rdi), rax = dst
	cmp		rax, 0
	je		_error				; is error?
	mov		rdi, rax			; rdi = dst
	mov		rsi, rbx			; rsi = src
	call	_ft_strcpy			; copy src to dst, copy rsi to rdi
	pop		rbx
	ret

_error:
	pop		rbx
	mov		r15, rax			; r15 = rax, save error code
	push	0					; 0, init stack
	call	___error			; rax = errno, get errno to rax 
	mov		qword [rax], r15	; errno = r15, set errno to r15(p.rax) 
	pop		rax					; rax = 0
	ret

