section	.text
	global	_ft_strcpy

_ft_strcpy:									; rdi = dst, rsi = src
			mov		rcx, 0					; rcx = 0, counter
			mov		rdx, 0					; tmp_byte = 0, to use dl
			cmp		rsi, 0					; src ?= NULL
			je		_return
			jmp		_copy

_copy:
			mov		dl, byte[rsi + rcx]		; tmp_byte (dl/rdx) = rsi[1]
			mov		byte[rdi + rcx], dl		; rdi[1] = tmp_byte (dl/rdx)
			inc		rcx						; rcx++ = counter++
			cmp		dl, 0					; rsi[i] ?= '\0'
			je		_return					; break
			jmp		_copy					; continue

_return:
			mov		rax, rdi				; return rax = dst_ptr(rdi)
			ret
