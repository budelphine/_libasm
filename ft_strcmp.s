section .text
	global _ft_strcmp

_ft_strcmp:
	mov			rdx, 0
	mov			rcx, 0
	jmp			_start_loop

_start_loop:
	mov			dl, byte [rdi + rcx]
	cmp			byte [rdi + rcx], 0
	je			_end
	cmp			byte [rsi + rcx], 0
	je			_end
	cmp			dl, byte [rsi + rcx]
	jne			_end
	inc			rcx
	jmp			_start_loop

_end:
	cmp			dl, byte [rsi + rcx]
	jg			_ret_more
	jb			_ret_less
	jmp			_ret_equal

_ret_less:
	mov rax, -1
	ret

_ret_more:
	mov rax, 1
	ret

_ret_equal:
	mov rax, 0
	ret
