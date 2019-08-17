	.file	"output.s"

.STR0:	.string "Program to print the length of longest common subsequence\n"
.STR1:	.string "Enter the number of elements in first array\n"
.STR2:	.string "Enter the elements of the first array one by one\n"
.STR3:	.string "Enter the number of elements in second array\n"
.STR4:	.string "Enter the elements of the second array one by one\n"
.STR5:	.string "Length of longest common subsequence is: "
.STR6:	.string "\n"
	.text
	.globl	max
	.type	max, @function
max:
.LFB0:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$8, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
# 0:arg1 = a arg2 = b 
	movl	-8(%rbp), %eax
	movl	-4(%rbp), %edx
	cmpl	%edx, %eax
	jg .L1
# 1:
	jmp .L2
# 2:
	jmp	.LRT0
# 3:res = a 
.L1:
	movl	-8(%rbp), %eax
	jmp	.LRT0
# 4:
	jmp	.LRT0
# 5:res = b 
.L2:
	movl	-4(%rbp), %eax
	jmp	.LRT0
# 6:
	jmp	.LRT0
.LRT0:
	addq	$-8, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE0:
	.size	max, .-max
	.globl	lcs
	.type	lcs, @function
lcs:
.LFB1:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$164, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movq	%rdx, -16(%rbp)
	movq	%rcx, -24(%rbp)
# 7:res = t000 
.L3:
	movl	$0, -28(%rbp)
# 8:arg1 = m arg2 = t000 
	movl	-8(%rbp), %eax
	movl	-28(%rbp), %edx
	cmpl	%edx, %eax
	je .L4
# 9:
	jmp .L5
# 10:res = t001 
.L5:
	movl	$0, -32(%rbp)
# 11:arg1 = n arg2 = t001 
	movl	-4(%rbp), %eax
	movl	-32(%rbp), %edx
	cmpl	%edx, %eax
	je .L4
# 12:
	jmp .L6
# 13:
	jmp .L6
# 14:res = t002 
.L4:
	movl	$0, -36(%rbp)
# 15:res = t002 
	movl	-36(%rbp), %eax
	jmp	.LRT1
# 16:
	jmp .L6
# 17:res = t003 
.L6:
	movl	$0, -40(%rbp)
# 18:res = t004 
	movl	$1, -44(%rbp)
# 19:res = t005 arg1 = m arg2 = t004 
	movl	-8(%rbp), %eax
	movl	-44(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -48(%rbp)
# 20:res = t007 arg1 = t005 
	movl	-48(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -56(%rbp)
# 21:res = t006 arg1 = t003 arg2 = t007 
	movl	-40(%rbp), %eax
	movl	-56(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -52(%rbp)
# 22:res = t008 arg1 = X arg2 = t006 
	movq	-24(%rbp), %rdx
	movslq	-52(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -60(%rbp)
# 23:res = t009 
	movl	$0, -64(%rbp)
# 24:res = t010 
	movl	$1, -68(%rbp)
# 25:res = t011 arg1 = n arg2 = t010 
	movl	-4(%rbp), %eax
	movl	-68(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -72(%rbp)
# 26:res = t013 arg1 = t011 
	movl	-72(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -80(%rbp)
# 27:res = t012 arg1 = t009 arg2 = t013 
	movl	-64(%rbp), %eax
	movl	-80(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -76(%rbp)
# 28:res = t014 arg1 = Y arg2 = t012 
	movq	-16(%rbp), %rdx
	movslq	-76(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -84(%rbp)
# 29:arg1 = t008 arg2 = t014 
	movl	-60(%rbp), %eax
	movl	-84(%rbp), %edx
	cmpl	%edx, %eax
	je .L7
# 30:
	jmp .L8
# 31:
	jmp	.LRT1
# 32:res = t015 
.L7:
	movl	$1, -88(%rbp)
# 33:res = t016 
	movl	$0, -92(%rbp)
# 34:res = t017 
	movl	$0, -96(%rbp)
# 35:res = t018 
	movl	$1, -100(%rbp)
# 36:res = t019 arg1 = m arg2 = t018 
	movl	-8(%rbp), %eax
	movl	-100(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -104(%rbp)
# 37:res = t020 
	movl	$1, -108(%rbp)
# 38:res = t021 arg1 = n arg2 = t020 
	movl	-4(%rbp), %eax
	movl	-108(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -112(%rbp)
# 39:res = X 
# 40:res = Y 
# 41:res = t019 
# 42:res = t021 
# 43:res = t022 
	pushq %rbp
	movl	-112(%rbp) , %edi
	movl	-104(%rbp) , %esi
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rcx
	call	lcs
	movl	%eax, -116(%rbp)
	addq $0 , %rsp
# 44:res = t023 arg1 = t015 arg2 = t022 
	movl	-88(%rbp), %eax
	movl	-116(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -120(%rbp)
# 45:res = t023 
	movl	-120(%rbp), %eax
	jmp	.LRT1
# 46:
	jmp	.LRT1
# 47:res = t024 
.L8:
	movl	$0, -124(%rbp)
# 48:res = t025 
	movl	$0, -128(%rbp)
# 49:res = t026 
	movl	$1, -132(%rbp)
# 50:res = t027 arg1 = n arg2 = t026 
	movl	-4(%rbp), %eax
	movl	-132(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -136(%rbp)
# 51:res = X 
# 52:res = Y 
# 53:res = m 
# 54:res = t027 
# 55:res = t028 
	pushq %rbp
	movl	-136(%rbp) , %edi
	movl	-8(%rbp) , %esi
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rcx
	call	lcs
	movl	%eax, -140(%rbp)
	addq $0 , %rsp
# 56:res = t029 
	movl	$0, -144(%rbp)
# 57:res = t030 
	movl	$0, -148(%rbp)
# 58:res = t031 
	movl	$1, -152(%rbp)
# 59:res = t032 arg1 = m arg2 = t031 
	movl	-8(%rbp), %eax
	movl	-152(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -156(%rbp)
# 60:res = X 
# 61:res = Y 
# 62:res = t032 
# 63:res = n 
# 64:res = t033 
	pushq %rbp
	movl	-4(%rbp) , %edi
	movl	-156(%rbp) , %esi
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rcx
	call	lcs
	movl	%eax, -160(%rbp)
	addq $0 , %rsp
# 65:res = t028 
# 66:res = t033 
# 67:res = t034 
	pushq %rbp
	movl	-160(%rbp) , %edi
	movl	-140(%rbp) , %esi
	call	max
	movl	%eax, -164(%rbp)
	addq $0 , %rsp
# 68:res = t034 
	movl	-164(%rbp), %eax
	jmp	.LRT1
# 69:
	jmp	.LRT1
.LRT1:
	addq	$-164, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE1:
	.size	lcs, .-lcs
	.globl	main
	.type	main, @function
main:
.LFB2:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$996, %rsp
# 70:res = t035 
.L9:
	movl	$100, -404(%rbp)
# 71:res = t036 
	movl	$100, -808(%rbp)
# 72:res = t037 
	movl	$1, -828(%rbp)
# 73:res = err arg1 = t037 
	movl	-828(%rbp), %eax
	movl	%eax, -824(%rbp)
# 74:
	movq	$.STR0,	%rdi
# 75:res = t038 
	pushq %rbp
	call	prints
	movl	%eax, -832(%rbp)
	addq $8 , %rsp
# 76:
	movq	$.STR1,	%rdi
# 77:res = t039 
	pushq %rbp
	call	prints
	movl	%eax, -836(%rbp)
	addq $8 , %rsp
# 78:res = t040 arg1 = err 
	leaq	-824(%rbp), %rax
	movq	%rax, -844(%rbp)
# 79:res = t040 
# 80:res = t041 
	pushq %rbp
	movq	-844(%rbp), %rdi
	call	readi
	movl	%eax, -848(%rbp)
	addq $0 , %rsp
# 81:res = n arg1 = t041 
	movl	-848(%rbp), %eax
	movl	%eax, -812(%rbp)
# 82:res = t042 arg1 = t041 
	movl	-848(%rbp), %eax
	movl	%eax, -852(%rbp)
# 83:
	movq	$.STR2,	%rdi
# 84:res = t043 
	pushq %rbp
	call	prints
	movl	%eax, -856(%rbp)
	addq $8 , %rsp
# 85:res = t044 
	movl	$0, -860(%rbp)
# 86:res = i arg1 = t044 
	movl	-860(%rbp), %eax
	movl	%eax, -820(%rbp)
# 87:res = t045 arg1 = t044 
	movl	-860(%rbp), %eax
	movl	%eax, -864(%rbp)
# 88:arg1 = i arg2 = n 
.L12:
	movl	-820(%rbp), %eax
	movl	-812(%rbp), %edx
	cmpl	%edx, %eax
	jl .L10
# 89:
	jmp .L11
# 90:
	jmp .L11
# 91:res = t046 arg1 = i 
.L13:
	movl	-820(%rbp), %eax
	movl	%eax, -868(%rbp)
# 92:res = i arg1 = i 
	movl	-820(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -820(%rbp)
# 93:
	jmp .L12
# 94:res = t047 
.L10:
	movl	$0, -872(%rbp)
# 95:res = t049 arg1 = i 
	movl	-820(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -880(%rbp)
# 96:res = t048 arg1 = t047 arg2 = t049 
	movl	-872(%rbp), %eax
	movl	-880(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -876(%rbp)
# 97:res = t050 arg1 = err 
	leaq	-824(%rbp), %rax
	movq	%rax, -888(%rbp)
# 98:res = t050 
# 99:res = t051 
	pushq %rbp
	movq	-888(%rbp), %rdi
	call	readi
	movl	%eax, -892(%rbp)
	addq $0 , %rsp
# 100:res = x arg1 = t048 arg2 = t051 
	leaq	-400(%rbp), %rdx
	movslq	-876(%rbp), %rax
	addq	%rax, %rdx
	movl	-892(%rbp), %eax
	movl	%eax, (%rdx)
# 101:res = t052 arg1 = t051 
	movl	-892(%rbp), %eax
	movl	%eax, -896(%rbp)
# 102:
	jmp .L13
# 103:
.L11:
	movq	$.STR3,	%rdi
# 104:res = t053 
	pushq %rbp
	call	prints
	movl	%eax, -900(%rbp)
	addq $8 , %rsp
# 105:res = t054 arg1 = err 
	leaq	-824(%rbp), %rax
	movq	%rax, -908(%rbp)
# 106:res = t054 
# 107:res = t055 
	pushq %rbp
	movq	-908(%rbp), %rdi
	call	readi
	movl	%eax, -912(%rbp)
	addq $0 , %rsp
# 108:res = m arg1 = t055 
	movl	-912(%rbp), %eax
	movl	%eax, -816(%rbp)
# 109:res = t056 arg1 = t055 
	movl	-912(%rbp), %eax
	movl	%eax, -916(%rbp)
# 110:
	movq	$.STR4,	%rdi
# 111:res = t057 
	pushq %rbp
	call	prints
	movl	%eax, -920(%rbp)
	addq $8 , %rsp
# 112:res = t058 
	movl	$0, -924(%rbp)
# 113:res = i arg1 = t058 
	movl	-924(%rbp), %eax
	movl	%eax, -820(%rbp)
# 114:res = t059 arg1 = t058 
	movl	-924(%rbp), %eax
	movl	%eax, -928(%rbp)
# 115:arg1 = i arg2 = m 
.L16:
	movl	-820(%rbp), %eax
	movl	-816(%rbp), %edx
	cmpl	%edx, %eax
	jl .L14
# 116:
	jmp .L15
# 117:
	jmp .L15
# 118:res = t060 arg1 = i 
.L17:
	movl	-820(%rbp), %eax
	movl	%eax, -932(%rbp)
# 119:res = i arg1 = i 
	movl	-820(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -820(%rbp)
# 120:
	jmp .L16
# 121:res = t061 
.L14:
	movl	$0, -936(%rbp)
# 122:res = t063 arg1 = i 
	movl	-820(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -944(%rbp)
# 123:res = t062 arg1 = t061 arg2 = t063 
	movl	-936(%rbp), %eax
	movl	-944(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -940(%rbp)
# 124:res = t064 arg1 = err 
	leaq	-824(%rbp), %rax
	movq	%rax, -952(%rbp)
# 125:res = t064 
# 126:res = t065 
	pushq %rbp
	movq	-952(%rbp), %rdi
	call	readi
	movl	%eax, -956(%rbp)
	addq $0 , %rsp
# 127:res = y arg1 = t062 arg2 = t065 
	leaq	-804(%rbp), %rdx
	movslq	-940(%rbp), %rax
	addq	%rax, %rdx
	movl	-956(%rbp), %eax
	movl	%eax, (%rdx)
# 128:res = t066 arg1 = t065 
	movl	-956(%rbp), %eax
	movl	%eax, -960(%rbp)
# 129:
	jmp .L17
# 130:res = t067 
.L15:
	movl	$0, -968(%rbp)
# 131:res = t068 
	movl	$0, -972(%rbp)
# 132:res = x 
# 133:res = y 
# 134:res = n 
# 135:res = m 
# 136:res = t069 
	pushq %rbp
	movl	-816(%rbp) , %edi
	movl	-812(%rbp) , %esi
	leaq	-804(%rbp), %rdx
	leaq	-400(%rbp), %rcx
	call	lcs
	movl	%eax, -976(%rbp)
	addq $0 , %rsp
# 137:res = len arg1 = t069 
	movl	-976(%rbp), %eax
	movl	%eax, -964(%rbp)
# 138:res = t070 arg1 = t069 
	movl	-976(%rbp), %eax
	movl	%eax, -980(%rbp)
# 139:
	movq	$.STR5,	%rdi
# 140:res = t071 
	pushq %rbp
	call	prints
	movl	%eax, -984(%rbp)
	addq $8 , %rsp
# 141:res = len 
# 142:res = t072 
	pushq %rbp
	movl	-964(%rbp) , %edi
	call	printi
	movl	%eax, -988(%rbp)
	addq $0 , %rsp
# 143:
	movq	$.STR6,	%rdi
# 144:res = t073 
	pushq %rbp
	call	prints
	movl	%eax, -992(%rbp)
	addq $8 , %rsp
# 145:res = t074 
	movl	$0, -996(%rbp)
# 146:res = t074 
	movl	-996(%rbp), %eax
	jmp	.LRT2
.LRT2:
	addq	$-996, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE2:
	.size	main, .-main
