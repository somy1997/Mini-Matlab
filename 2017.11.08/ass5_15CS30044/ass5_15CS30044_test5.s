	.file	"output.s"

.STR0:	.string "\n"
.STR1:	.string "\n"
	.globl	doctor
	.data
	.align 4
	.type	doctor, @object
	.size	doctor ,4
doctor:
	.long 5
	.globl	nurse
	.data
	.align 4
	.type	nurse, @object
	.size	nurse ,4
nurse:
	.long 6
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$48, %rsp
# 4:res = t002 
	movl	$2, -8(%rbp)
# 5:res = t003 arg2 = t002 
	movl	nurse(%rip), %eax
	movl	-8(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -12(%rbp)
# 6:res = i arg1 = t003 
	movl	-12(%rbp), %eax
	movl	%eax, -4(%rbp)
# 7:res = t004 arg1 = t003 
	movl	-12(%rbp), %eax
	movl	%eax, -16(%rbp)
# 8:res = i 
# 9:res = t005 
	pushq %rbp
	movl	-4(%rbp) , %edi
	call	printi
	movl	%eax, -20(%rbp)
	addq $0 , %rsp
# 10:
	movq	$.STR0,	%rdi
# 11:res = t006 
	pushq %rbp
	call	prints
	movl	%eax, -24(%rbp)
	addq $8 , %rsp
# 12:res = t007 
	movl	$5, -28(%rbp)
# 13:arg1 = t007 
	movl	%eax, nurse(%rip)
# 14:res = t008 arg1 = t007 
	movl	-28(%rbp), %eax
	movl	%eax, -32(%rbp)
# 15:res = i 
	movl	nurse(%rip), %eax
	movq	-28(%rbp), %rax
	movq	%rax, -4(%rbp)
# 16:res = t009 
	movl	nurse(%rip), %eax
	movq	-28(%rbp), %rax
	movq	%rax, -36(%rbp)
# 17:res = i 
# 18:res = t010 
	pushq %rbp
	movl	-4(%rbp) , %edi
	call	printi
	movl	%eax, -40(%rbp)
	addq $0 , %rsp
# 19:
	movq	$.STR1,	%rdi
# 20:res = t011 
	pushq %rbp
	call	prints
	movl	%eax, -44(%rbp)
	addq $8 , %rsp
# 21:res = t012 
	movl	$0, -48(%rbp)
# 22:res = t012 
	movl	-48(%rbp), %eax
	jmp	.LRT0
.LRT0:
	addq	$-48, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE0:
	.size	main, .-main
