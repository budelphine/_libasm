section	.text
	global	_ft_read
	extern ___error
			
_ft_read:							; rdi = fd, rsi = src, rdx = nbyte
	mov			rax, 0x2000003		; BSD / MacOS calling convention unlike Linux
	syscall
	jc			_syserror				; is error?
	ret

_syserror:
	mov			r15, rax			; r15 = rax, save error code
	push		-1					; 0, init stack
	call		___error			; rax = errno, get errno to rax 
	mov			qword [rax], r15	; errno = r15, set errno to r15(p.rax) 
	pop			rax					; rax = 0
	ret