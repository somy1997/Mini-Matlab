	.file	"test.c"
	.section	.rodata
.LC1:
	.string	"%lf"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$32, %rsp
	movsd	.LC0(%rip), %xmm0
	movsd	%xmm0, -8(%rbp)
	movl	$.LC1, %edi
	movl	$1, %eax
	call	printf
	movl	$0, %eax
	leave
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC0:
	.long	1374389535
	.long	1074339512
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.5) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
