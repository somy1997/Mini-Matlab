	.file	"output.s"

.STR0:	.string "This Program implements Binary search\n"
.STR1:	.string "Enter the size of an array: \n"
.STR2:	.string "Enter the elements of the array in sorted order one by one i.e. single element in a line: \n"
.STR3:	.string "Enter the number to be search: \n"
.STR4:	.string "Number is not found.\n"
.STR5:	.string "Number is found at index(1-based)-:\n"
.STR6:	.string "\n"
	.text
	.globl	binary
	.type	binary, @function
binary:
.LFB0:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$112, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	%edx, -12(%rbp)
	movl	%ecx, -16(%rbp)
	movq	%r8, -24(%rbp)
# 0:res = t000 
	movl	$0, -36(%rbp)
# 1:res = c arg1 = t000 
	movl	-36(%rbp), %eax
	movl	%eax, -32(%rbp)
# 2:arg1 = l arg2 = u 
	movl	-8(%rbp), %eax
	movl	-4(%rbp), %edx
	cmpl	%edx, %eax
	jg .L1
# 3:
	jmp .L2
# 4:
	jmp .L2
# 5:res = t001 
.L1:
	movl	$1, -40(%rbp)
# 6:res = t002 arg1 = t001 
	movl	-40(%rbp), %eax
	negl	%eax
	movl	%eax, -44(%rbp)
# 7:res = t002 
	movl	-44(%rbp), %eax
	jmp	.LRT0
# 8:
	jmp .L2
# 9:res = t003 arg1 = l arg2 = u 
.L2:
	movl	-8(%rbp), %eax
	movl	-4(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -48(%rbp)
# 10:res = t004 
	movl	$2, -52(%rbp)
# 11:res = t005 arg1 = t003 arg2 = t004 
	movl	-48(%rbp), %eax
	cltd
	idivl	-52(%rbp), %eax
	movl	%eax, -56(%rbp)
# 12:res = mid arg1 = t005 
	movl	-56(%rbp), %eax
	movl	%eax, -28(%rbp)
# 13:res = t006 arg1 = t005 
	movl	-56(%rbp), %eax
	movl	%eax, -60(%rbp)
# 14:res = t007 
	movl	$0, -68(%rbp)
# 15:res = t009 arg1 = mid 
	movl	-28(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -76(%rbp)
# 16:res = t008 arg1 = t007 arg2 = t009 
	movl	-68(%rbp), %eax
	movl	-76(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -72(%rbp)
# 17:res = t010 arg1 = a arg2 = t008 
	movq	-24(%rbp), %rdx
	movslq	-72(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -80(%rbp)
# 18:res = t arg1 = t010 
	movl	-80(%rbp), %eax
	movl	%eax, -64(%rbp)
# 19:arg1 = m arg2 = t 
	movl	-12(%rbp), %eax
	movl	-64(%rbp), %edx
	cmpl	%edx, %eax
	jl .L3
# 20:
	jmp .L4
# 21:
	jmp	.LRT0
# 22:res = t011 
.L3:
	movl	$0, -84(%rbp)
# 23:res = t012 
	movl	$1, -88(%rbp)
# 24:res = t013 arg1 = mid arg2 = t012 
	movl	-28(%rbp), %eax
	movl	-88(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -92(%rbp)
# 25:res = a 
# 26:res = n 
# 27:res = m 
# 28:res = l 
# 29:res = t013 
# 30:res = t014 
	pushq %rbp
	movl	-92(%rbp) , %edi
	movl	-8(%rbp) , %esi
	movl	-12(%rbp) , %edx
	movl	-16(%rbp) , %ecx
	movq	-24(%rbp), %r8
	call	binary
	movl	%eax, -96(%rbp)
	addq $0 , %rsp
# 31:res = t014 
	movl	-96(%rbp), %eax
	jmp	.LRT0
# 32:
	jmp	.LRT0
# 33:arg1 = m arg2 = t 
.L4:
	movl	-12(%rbp), %eax
	movl	-64(%rbp), %edx
	cmpl	%edx, %eax
	jg .L6
# 34:
	jmp .L7
# 35:
	jmp .L8
# 36:res = t015 
.L6:
	movl	$0, -100(%rbp)
# 37:res = t016 
	movl	$1, -104(%rbp)
# 38:res = t017 arg1 = mid arg2 = t016 
	movl	-28(%rbp), %eax
	movl	-104(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -108(%rbp)
# 39:res = a 
# 40:res = n 
# 41:res = m 
# 42:res = t017 
# 43:res = u 
# 44:res = t018 
	pushq %rbp
	movl	-4(%rbp) , %edi
	movl	-108(%rbp) , %esi
	movl	-12(%rbp) , %edx
	movl	-16(%rbp) , %ecx
	movq	-24(%rbp), %r8
	call	binary
	movl	%eax, -112(%rbp)
	addq $0 , %rsp
# 45:res = t018 
	movl	-112(%rbp), %eax
	jmp	.LRT0
# 46:
	jmp	.LRT0
# 47:res = mid 
.L7:
	movl	-28(%rbp), %eax
	jmp	.LRT0
# 48:
	jmp	.LRT0
# 49:
.L8:
	jmp	.LRT0
.LRT0:
	addq	$-112, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE0:
	.size	binary, .-binary
	.globl	main
	.type	main, @function
main:
.LFB1:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$244, %rsp
# 50:res = t019 
.L5:
	movl	$10, -44(%rbp)
# 51:res = t020 
	movl	$1, -76(%rbp)
# 52:res = err arg1 = t020 
	movl	-76(%rbp), %eax
	movl	%eax, -72(%rbp)
# 53:
	movq	$.STR0,	%rdi
# 54:res = t021 
	pushq %rbp
	call	prints
	movl	%eax, -80(%rbp)
	addq $8 , %rsp
# 55:
	movq	$.STR1,	%rdi
# 56:res = t022 
	pushq %rbp
	call	prints
	movl	%eax, -84(%rbp)
	addq $8 , %rsp
# 57:res = t023 arg1 = err 
	leaq	-72(%rbp), %rax
	movq	%rax, -92(%rbp)
# 58:res = t023 
# 59:res = t024 
	pushq %rbp
	movq	-92(%rbp), %rdi
	call	readi
	movl	%eax, -96(%rbp)
	addq $0 , %rsp
# 60:res = n arg1 = t024 
	movl	-96(%rbp), %eax
	movl	%eax, -52(%rbp)
# 61:res = t025 arg1 = t024 
	movl	-96(%rbp), %eax
	movl	%eax, -100(%rbp)
# 62:
	movq	$.STR2,	%rdi
# 63:res = t026 
	pushq %rbp
	call	prints
	movl	%eax, -104(%rbp)
	addq $8 , %rsp
# 64:res = t027 
	movl	$0, -108(%rbp)
# 65:res = i arg1 = t027 
	movl	-108(%rbp), %eax
	movl	%eax, -48(%rbp)
# 66:res = t028 arg1 = t027 
	movl	-108(%rbp), %eax
	movl	%eax, -112(%rbp)
# 67:arg1 = i arg2 = n 
.L11:
	movl	-48(%rbp), %eax
	movl	-52(%rbp), %edx
	cmpl	%edx, %eax
	jl .L9
# 68:
	jmp .L10
# 69:
	jmp .L10
# 70:res = t029 arg1 = i 
.L12:
	movl	-48(%rbp), %eax
	movl	%eax, -116(%rbp)
# 71:res = i arg1 = i 
	movl	-48(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -48(%rbp)
# 72:
	jmp .L11
# 73:res = t030 
.L9:
	movl	$0, -120(%rbp)
# 74:res = t032 arg1 = i 
	movl	-48(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -128(%rbp)
# 75:res = t031 arg1 = t030 arg2 = t032 
	movl	-120(%rbp), %eax
	movl	-128(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -124(%rbp)
# 76:res = t033 arg1 = err 
	leaq	-72(%rbp), %rax
	movq	%rax, -136(%rbp)
# 77:res = t033 
# 78:res = t034 
	pushq %rbp
	movq	-136(%rbp), %rdi
	call	readi
	movl	%eax, -140(%rbp)
	addq $0 , %rsp
# 79:res = a arg1 = t031 arg2 = t034 
	leaq	-40(%rbp), %rdx
	movslq	-124(%rbp), %rax
	addq	%rax, %rdx
	movl	-140(%rbp), %eax
	movl	%eax, (%rdx)
# 80:res = t035 arg1 = t034 
	movl	-140(%rbp), %eax
	movl	%eax, -144(%rbp)
# 81:
	jmp .L12
# 82:
.L10:
	movq	$.STR3,	%rdi
# 83:res = t036 
	pushq %rbp
	call	prints
	movl	%eax, -148(%rbp)
	addq $8 , %rsp
# 84:res = t037 arg1 = err 
	leaq	-72(%rbp), %rax
	movq	%rax, -156(%rbp)
# 85:res = t037 
# 86:res = t038 
	pushq %rbp
	movq	-156(%rbp), %rdi
	call	readi
	movl	%eax, -160(%rbp)
	addq $0 , %rsp
# 87:res = m arg1 = t038 
	movl	-160(%rbp), %eax
	movl	%eax, -56(%rbp)
# 88:res = t039 arg1 = t038 
	movl	-160(%rbp), %eax
	movl	%eax, -164(%rbp)
# 89:res = t040 
	movl	$0, -168(%rbp)
# 90:res = l arg1 = t040 
	movl	-168(%rbp), %eax
	movl	%eax, -64(%rbp)
# 91:res = t041 arg1 = t040 
	movl	-168(%rbp), %eax
	movl	%eax, -172(%rbp)
# 92:res = t042 
	movl	$1, -176(%rbp)
# 93:res = t043 arg1 = n arg2 = t042 
	movl	-52(%rbp), %eax
	movl	-176(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -180(%rbp)
# 94:res = u arg1 = t043 
	movl	-180(%rbp), %eax
	movl	%eax, -68(%rbp)
# 95:res = t044 arg1 = t043 
	movl	-180(%rbp), %eax
	movl	%eax, -184(%rbp)
# 96:res = t045 
	movl	$0, -188(%rbp)
# 97:res = c arg1 = t045 
	movl	-188(%rbp), %eax
	movl	%eax, -60(%rbp)
# 98:res = t046 arg1 = t045 
	movl	-188(%rbp), %eax
	movl	%eax, -192(%rbp)
# 99:res = t047 
	movl	$0, -196(%rbp)
# 100:res = a 
# 101:res = n 
# 102:res = m 
# 103:res = l 
# 104:res = u 
# 105:res = t048 
	pushq %rbp
	movl	-68(%rbp) , %edi
	movl	-64(%rbp) , %esi
	movl	-56(%rbp) , %edx
	movl	-52(%rbp) , %ecx
	leaq	-40(%rbp), %r8
	call	binary
	movl	%eax, -200(%rbp)
	addq $0 , %rsp
# 106:res = c arg1 = t048 
	movl	-200(%rbp), %eax
	movl	%eax, -60(%rbp)
# 107:res = t049 arg1 = t048 
	movl	-200(%rbp), %eax
	movl	%eax, -204(%rbp)
# 108:res = t050 
	movl	$1, -208(%rbp)
# 109:res = t051 arg1 = t050 
	movl	-208(%rbp), %eax
	negl	%eax
	movl	%eax, -212(%rbp)
# 110:arg1 = c arg2 = t051 
	movl	-60(%rbp), %eax
	movl	-212(%rbp), %edx
	cmpl	%edx, %eax
	je .L13
# 111:
	jmp .L14
# 112:
	jmp .L15
# 113:
.L13:
	movq	$.STR4,	%rdi
# 114:res = t052 
	pushq %rbp
	call	prints
	movl	%eax, -216(%rbp)
	addq $8 , %rsp
# 115:
	jmp .L15
# 116:
.L14:
	movq	$.STR5,	%rdi
# 117:res = t053 
	pushq %rbp
	call	prints
	movl	%eax, -220(%rbp)
	addq $8 , %rsp
# 118:res = t054 
	movl	$1, -224(%rbp)
# 119:res = t055 arg1 = c arg2 = t054 
	movl	-60(%rbp), %eax
	movl	-224(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -228(%rbp)
# 120:res = c arg1 = t055 
	movl	-228(%rbp), %eax
	movl	%eax, -60(%rbp)
# 121:res = t056 arg1 = t055 
	movl	-228(%rbp), %eax
	movl	%eax, -232(%rbp)
# 122:res = c 
# 123:res = t057 
	pushq %rbp
	movl	-60(%rbp) , %edi
	call	printi
	movl	%eax, -236(%rbp)
	addq $0 , %rsp
# 124:
	movq	$.STR6,	%rdi
# 125:res = t058 
	pushq %rbp
	call	prints
	movl	%eax, -240(%rbp)
	addq $8 , %rsp
# 126:
	jmp .L15
# 127:res = t059 
.L15:
	movl	$0, -244(%rbp)
# 128:res = t059 
	movl	-244(%rbp), %eax
	jmp	.LRT1
.LRT1:
	addq	$-244, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE1:
	.size	main, .-main
