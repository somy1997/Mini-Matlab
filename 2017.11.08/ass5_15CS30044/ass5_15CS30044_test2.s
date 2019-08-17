	.file	"output.s"

.STR0:	.string "This Program implements merge sort\n"
.STR1:	.string "Enter the number of Elements\n"
.STR2:	.string "Enter the elements of the array one by one i.e. use a new line for every element: \n"
.STR3:	.string "The sorted elements are:\n"
.STR4:	.string "\n"
	.text
	.globl	merge
	.type	merge, @function
merge:
.LFB0:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$717, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	%edx, -12(%rbp)
	movq	%rcx, -20(%rbp)
# 0:res = top_1 arg1 = min 
	movl	-12(%rbp), %eax
	movl	%eax, -24(%rbp)
# 1:res = t000 
	movl	$1, -32(%rbp)
# 2:res = t001 arg1 = mid arg2 = t000 
	movl	-8(%rbp), %eax
	movl	-32(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -36(%rbp)
# 3:res = top_2 arg1 = t001 
	movl	-36(%rbp), %eax
	movl	%eax, -28(%rbp)
# 4:res = top arg1 = min 
	movl	-12(%rbp), %eax
	movl	%eax, -40(%rbp)
# 5:res = t002 
	movl	$100, -448(%rbp)
# 6:res = t003 
.L7:
	movl	$1, -452(%rbp)
# 7:res = t004 arg1 = mid arg2 = t003 
	movl	-8(%rbp), %eax
	movl	-452(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -456(%rbp)
# 8:arg1 = top_1 arg2 = t004 
	movl	-24(%rbp), %eax
	movl	-456(%rbp), %edx
	cmpl	%edx, %eax
	je .L1
# 9:
	jmp .L2
# 10:res = t005 
.L2:
	movl	$1, -460(%rbp)
# 11:res = t006 arg1 = max arg2 = t005 
	movl	-4(%rbp), %eax
	movl	-460(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -464(%rbp)
# 12:arg1 = top_2 arg2 = t006 
	movl	-28(%rbp), %eax
	movl	-464(%rbp), %edx
	cmpl	%edx, %eax
	je .L1
# 13:
	jmp .L3
# 14:
	jmp .L1
# 15:res = t008 
.L3:
	movl	$0, -469(%rbp)
# 16:res = t010 arg1 = top_1 
	movl	-24(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -477(%rbp)
# 17:res = t009 arg1 = t008 arg2 = t010 
	movl	-469(%rbp), %eax
	movl	-477(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -473(%rbp)
# 18:res = t011 arg1 = a arg2 = t009 
	movq	-20(%rbp), %rdx
	movslq	-473(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -481(%rbp)
# 19:res = t012 
	movl	$0, -485(%rbp)
# 20:res = t014 arg1 = top_2 
	movl	-28(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -493(%rbp)
# 21:res = t013 arg1 = t012 arg2 = t014 
	movl	-485(%rbp), %eax
	movl	-493(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -489(%rbp)
# 22:res = t015 arg1 = a arg2 = t013 
	movq	-20(%rbp), %rdx
	movslq	-489(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -497(%rbp)
# 23:arg1 = t011 arg2 = t015 
	movl	-481(%rbp), %eax
	movl	-497(%rbp), %edx
	cmpl	%edx, %eax
	jge .L4
# 24:
	jmp .L5
# 25:
	jmp .L6
# 26:res = t016 
.L4:
	movl	$0, -501(%rbp)
# 27:res = t017 arg1 = top 
	movl	-40(%rbp), %eax
	movl	%eax, -505(%rbp)
# 28:res = top arg1 = top 
	movl	-40(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -40(%rbp)
# 29:res = t019 arg1 = t017 
	movl	-505(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -513(%rbp)
# 30:res = t018 arg1 = t016 arg2 = t019 
	movl	-501(%rbp), %eax
	movl	-513(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -509(%rbp)
# 31:res = t020 
	movl	$0, -517(%rbp)
# 32:res = t021 arg1 = top_2 
	movl	-28(%rbp), %eax
	movl	%eax, -521(%rbp)
# 33:res = top_2 arg1 = top_2 
	movl	-28(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -28(%rbp)
# 34:res = t023 arg1 = t021 
	movl	-521(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -529(%rbp)
# 35:res = t022 arg1 = t020 arg2 = t023 
	movl	-517(%rbp), %eax
	movl	-529(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -525(%rbp)
# 36:res = t024 arg1 = a arg2 = t022 
	movq	-20(%rbp), %rdx
	movslq	-525(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -533(%rbp)
# 37:res = c arg1 = t018 arg2 = t024 
	leaq	-444(%rbp), %rdx
	movslq	-509(%rbp), %rax
	addq	%rax, %rdx
	movl	-533(%rbp), %eax
	movl	%eax, (%rdx)
# 38:res = t025 arg1 = t024 
	movl	-533(%rbp), %eax
	movl	%eax, -537(%rbp)
# 39:
	jmp .L7
# 40:res = t026 
.L5:
	movl	$0, -541(%rbp)
# 41:res = t027 arg1 = top 
	movl	-40(%rbp), %eax
	movl	%eax, -545(%rbp)
# 42:res = top arg1 = top 
	movl	-40(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -40(%rbp)
# 43:res = t029 arg1 = t027 
	movl	-545(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -553(%rbp)
# 44:res = t028 arg1 = t026 arg2 = t029 
	movl	-541(%rbp), %eax
	movl	-553(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -549(%rbp)
# 45:res = t030 
	movl	$0, -557(%rbp)
# 46:res = t031 arg1 = top_1 
	movl	-24(%rbp), %eax
	movl	%eax, -561(%rbp)
# 47:res = top_1 arg1 = top_1 
	movl	-24(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -24(%rbp)
# 48:res = t033 arg1 = t031 
	movl	-561(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -569(%rbp)
# 49:res = t032 arg1 = t030 arg2 = t033 
	movl	-557(%rbp), %eax
	movl	-569(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -565(%rbp)
# 50:res = t034 arg1 = a arg2 = t032 
	movq	-20(%rbp), %rdx
	movslq	-565(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -573(%rbp)
# 51:res = c arg1 = t028 arg2 = t034 
	leaq	-444(%rbp), %rdx
	movslq	-549(%rbp), %rax
	addq	%rax, %rdx
	movl	-573(%rbp), %eax
	movl	%eax, (%rdx)
# 52:res = t035 arg1 = t034 
	movl	-573(%rbp), %eax
	movl	%eax, -577(%rbp)
# 53:
	jmp .L7
# 54:
.L6:
	jmp .L7
# 55:res = t036 
.L1:
	movl	$1, -581(%rbp)
# 56:res = t037 arg1 = mid arg2 = t036 
	movl	-8(%rbp), %eax
	movl	-581(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -585(%rbp)
# 57:arg1 = top_1 arg2 = t037 
	movl	-24(%rbp), %eax
	movl	-585(%rbp), %edx
	cmpl	%edx, %eax
	je .L8
# 58:
	jmp .L9
# 59:
	jmp .L10
# 60:res = i arg1 = top_2 
.L8:
	movl	-28(%rbp), %eax
	movl	%eax, -44(%rbp)
# 61:res = t038 arg1 = top_2 
	movl	-28(%rbp), %eax
	movl	%eax, -589(%rbp)
# 62:arg1 = i arg2 = max 
.L13:
	movl	-44(%rbp), %eax
	movl	-4(%rbp), %edx
	cmpl	%edx, %eax
	jle .L11
# 63:
	jmp .L10
# 64:
	jmp .L12
# 65:res = t039 arg1 = i 
.L14:
	movl	-44(%rbp), %eax
	movl	%eax, -593(%rbp)
# 66:res = i arg1 = i 
	movl	-44(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -44(%rbp)
# 67:
	jmp .L13
# 68:res = t040 
.L11:
	movl	$0, -597(%rbp)
# 69:res = t041 arg1 = top 
	movl	-40(%rbp), %eax
	movl	%eax, -601(%rbp)
# 70:res = top arg1 = top 
	movl	-40(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -40(%rbp)
# 71:res = t043 arg1 = t041 
	movl	-601(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -609(%rbp)
# 72:res = t042 arg1 = t040 arg2 = t043 
	movl	-597(%rbp), %eax
	movl	-609(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -605(%rbp)
# 73:res = t044 
	movl	$0, -613(%rbp)
# 74:res = t046 arg1 = i 
	movl	-44(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -621(%rbp)
# 75:res = t045 arg1 = t044 arg2 = t046 
	movl	-613(%rbp), %eax
	movl	-621(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -617(%rbp)
# 76:res = t047 arg1 = a arg2 = t045 
	movq	-20(%rbp), %rdx
	movslq	-617(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -625(%rbp)
# 77:res = c arg1 = t042 arg2 = t047 
	leaq	-444(%rbp), %rdx
	movslq	-605(%rbp), %rax
	addq	%rax, %rdx
	movl	-625(%rbp), %eax
	movl	%eax, (%rdx)
# 78:res = t048 arg1 = t047 
	movl	-625(%rbp), %eax
	movl	%eax, -629(%rbp)
# 79:
	jmp .L14
# 80:
.L12:
	jmp .L10
# 81:res = i arg1 = top_1 
.L9:
	movl	-24(%rbp), %eax
	movl	%eax, -44(%rbp)
# 82:res = t049 arg1 = top_1 
	movl	-24(%rbp), %eax
	movl	%eax, -633(%rbp)
# 83:arg1 = i arg2 = mid 
.L17:
	movl	-44(%rbp), %eax
	movl	-8(%rbp), %edx
	cmpl	%edx, %eax
	jle .L15
# 84:
	jmp .L10
# 85:
	jmp .L16
# 86:res = t050 arg1 = i 
.L18:
	movl	-44(%rbp), %eax
	movl	%eax, -637(%rbp)
# 87:res = i arg1 = i 
	movl	-44(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -44(%rbp)
# 88:
	jmp .L17
# 89:res = t051 
.L15:
	movl	$0, -641(%rbp)
# 90:res = t052 arg1 = top 
	movl	-40(%rbp), %eax
	movl	%eax, -645(%rbp)
# 91:res = top arg1 = top 
	movl	-40(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -40(%rbp)
# 92:res = t054 arg1 = t052 
	movl	-645(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -653(%rbp)
# 93:res = t053 arg1 = t051 arg2 = t054 
	movl	-641(%rbp), %eax
	movl	-653(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -649(%rbp)
# 94:res = t055 
	movl	$0, -657(%rbp)
# 95:res = t057 arg1 = i 
	movl	-44(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -665(%rbp)
# 96:res = t056 arg1 = t055 arg2 = t057 
	movl	-657(%rbp), %eax
	movl	-665(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -661(%rbp)
# 97:res = t058 arg1 = a arg2 = t056 
	movq	-20(%rbp), %rdx
	movslq	-661(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -669(%rbp)
# 98:res = c arg1 = t053 arg2 = t058 
	leaq	-444(%rbp), %rdx
	movslq	-649(%rbp), %rax
	addq	%rax, %rdx
	movl	-669(%rbp), %eax
	movl	%eax, (%rdx)
# 99:res = t059 arg1 = t058 
	movl	-669(%rbp), %eax
	movl	%eax, -673(%rbp)
# 100:
	jmp .L18
# 101:
.L16:
	jmp .L10
# 102:res = i arg1 = min 
.L10:
	movl	-12(%rbp), %eax
	movl	%eax, -44(%rbp)
# 103:res = t060 arg1 = min 
	movl	-12(%rbp), %eax
	movl	%eax, -677(%rbp)
# 104:arg1 = i arg2 = max 
.L21:
	movl	-44(%rbp), %eax
	movl	-4(%rbp), %edx
	cmpl	%edx, %eax
	jle .L19
# 105:
	jmp .L20
# 106:
	jmp .L20
# 107:res = t061 arg1 = i 
.L22:
	movl	-44(%rbp), %eax
	movl	%eax, -681(%rbp)
# 108:res = i arg1 = i 
	movl	-44(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -44(%rbp)
# 109:
	jmp .L21
# 110:res = t062 
.L19:
	movl	$0, -685(%rbp)
# 111:res = t064 arg1 = i 
	movl	-44(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -693(%rbp)
# 112:res = t063 arg1 = t062 arg2 = t064 
	movl	-685(%rbp), %eax
	movl	-693(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -689(%rbp)
# 113:res = t065 
	movl	$0, -697(%rbp)
# 114:res = t067 arg1 = i 
	movl	-44(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -705(%rbp)
# 115:res = t066 arg1 = t065 arg2 = t067 
	movl	-697(%rbp), %eax
	movl	-705(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -701(%rbp)
# 116:res = t068 arg1 = c arg2 = t066 
	leaq	-444(%rbp), %rdx
	movslq	-701(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -709(%rbp)
# 117:res = a arg1 = t063 arg2 = t068 
	movq	-20(%rbp), %rdx
	movslq	-689(%rbp), %rax
	addq	%rax, %rdx
	movl	-709(%rbp), %eax
	movl	%eax, (%rdx)
# 118:res = t069 arg1 = t068 
	movl	-709(%rbp), %eax
	movl	%eax, -713(%rbp)
# 119:
	jmp .L22
# 120:res = t070 
.L20:
	movl	$0, -717(%rbp)
# 121:res = t070 
	movl	-717(%rbp), %eax
	jmp	.LRT0
.LRT0:
	addq	$-717, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE0:
	.size	merge, .-merge
	.globl	merge_sort
	.type	merge_sort, @function
merge_sort:
.LFB1:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$72, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movq	%rdx, -16(%rbp)
# 122:arg1 = min arg2 = max 
	movl	-8(%rbp), %eax
	movl	-4(%rbp), %edx
	cmpl	%edx, %eax
	jl .L23
# 123:
	jmp .L24
# 124:
	jmp .L24
# 125:res = t071 arg1 = min arg2 = max 
.L23:
	movl	-8(%rbp), %eax
	movl	-4(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -24(%rbp)
# 126:res = t072 
	movl	$2, -28(%rbp)
# 127:res = t073 arg1 = t071 arg2 = t072 
	movl	-24(%rbp), %eax
	cltd
	idivl	-28(%rbp), %eax
	movl	%eax, -32(%rbp)
# 128:res = mid arg1 = t073 
	movl	-32(%rbp), %eax
	movl	%eax, -20(%rbp)
# 129:res = t074 arg1 = t073 
	movl	-32(%rbp), %eax
	movl	%eax, -36(%rbp)
# 130:res = t075 
	movl	$0, -40(%rbp)
# 131:res = a 
# 132:res = min 
# 133:res = mid 
# 134:res = t076 
	pushq %rbp
	movl	-20(%rbp) , %edi
	movl	-8(%rbp) , %esi
	movq	-16(%rbp), %rdx
	call	merge_sort
	movl	%eax, -44(%rbp)
	addq $0 , %rsp
# 135:res = t077 
	movl	$0, -48(%rbp)
# 136:res = t078 
	movl	$1, -52(%rbp)
# 137:res = t079 arg1 = mid arg2 = t078 
	movl	-20(%rbp), %eax
	movl	-52(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -56(%rbp)
# 138:res = a 
# 139:res = t079 
# 140:res = max 
# 141:res = t080 
	pushq %rbp
	movl	-4(%rbp) , %edi
	movl	-56(%rbp) , %esi
	movq	-16(%rbp), %rdx
	call	merge_sort
	movl	%eax, -60(%rbp)
	addq $0 , %rsp
# 142:res = t081 
	movl	$0, -64(%rbp)
# 143:res = a 
# 144:res = min 
# 145:res = mid 
# 146:res = max 
# 147:res = t082 
	pushq %rbp
	movl	-4(%rbp) , %edi
	movl	-20(%rbp) , %esi
	movl	-8(%rbp) , %edx
	movq	-16(%rbp), %rcx
	call	merge
	movl	%eax, -68(%rbp)
	addq $0 , %rsp
# 148:
	jmp .L24
# 149:res = t083 
.L24:
	movl	$0, -72(%rbp)
# 150:res = t083 
	movl	-72(%rbp), %eax
	jmp	.LRT1
.LRT1:
	addq	$-72, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE1:
	.size	merge_sort, .-merge_sort
	.globl	main
	.type	main, @function
main:
.LFB2:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$552, %rsp
# 151:res = t084 
	movl	$100, -404(%rbp)
# 152:res = t085 
	movl	$1, -420(%rbp)
# 153:res = err arg1 = t085 
	movl	-420(%rbp), %eax
	movl	%eax, -416(%rbp)
# 154:
	movq	$.STR0,	%rdi
# 155:res = t086 
	pushq %rbp
	call	prints
	movl	%eax, -424(%rbp)
	addq $8 , %rsp
# 156:
	movq	$.STR1,	%rdi
# 157:res = t087 
	pushq %rbp
	call	prints
	movl	%eax, -428(%rbp)
	addq $8 , %rsp
# 158:res = t088 arg1 = err 
	leaq	-416(%rbp), %rax
	movq	%rax, -436(%rbp)
# 159:res = t088 
# 160:res = t089 
	pushq %rbp
	movq	-436(%rbp), %rdi
	call	readi
	movl	%eax, -440(%rbp)
	addq $0 , %rsp
# 161:res = n arg1 = t089 
	movl	-440(%rbp), %eax
	movl	%eax, -412(%rbp)
# 162:res = t090 arg1 = t089 
	movl	-440(%rbp), %eax
	movl	%eax, -444(%rbp)
# 163:
	movq	$.STR2,	%rdi
# 164:res = t091 
	pushq %rbp
	call	prints
	movl	%eax, -448(%rbp)
	addq $8 , %rsp
# 165:res = t092 
	movl	$0, -452(%rbp)
# 166:res = i arg1 = t092 
	movl	-452(%rbp), %eax
	movl	%eax, -408(%rbp)
# 167:res = t093 arg1 = t092 
	movl	-452(%rbp), %eax
	movl	%eax, -456(%rbp)
# 168:arg1 = i arg2 = n 
.L27:
	movl	-408(%rbp), %eax
	movl	-412(%rbp), %edx
	cmpl	%edx, %eax
	jl .L25
# 169:
	jmp .L26
# 170:
	jmp .L26
# 171:res = t094 arg1 = i 
.L28:
	movl	-408(%rbp), %eax
	movl	%eax, -460(%rbp)
# 172:res = i arg1 = i 
	movl	-408(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -408(%rbp)
# 173:
	jmp .L27
# 174:res = t095 
.L25:
	movl	$0, -464(%rbp)
# 175:res = t097 arg1 = i 
	movl	-408(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -472(%rbp)
# 176:res = t096 arg1 = t095 arg2 = t097 
	movl	-464(%rbp), %eax
	movl	-472(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -468(%rbp)
# 177:res = t098 arg1 = err 
	leaq	-416(%rbp), %rax
	movq	%rax, -480(%rbp)
# 178:res = t098 
# 179:res = t099 
	pushq %rbp
	movq	-480(%rbp), %rdi
	call	readi
	movl	%eax, -484(%rbp)
	addq $0 , %rsp
# 180:res = a arg1 = t096 arg2 = t099 
	leaq	-400(%rbp), %rdx
	movslq	-468(%rbp), %rax
	addq	%rax, %rdx
	movl	-484(%rbp), %eax
	movl	%eax, (%rdx)
# 181:res = t100 arg1 = t099 
	movl	-484(%rbp), %eax
	movl	%eax, -488(%rbp)
# 182:
	jmp .L28
# 183:res = t101 
.L26:
	movl	$0, -492(%rbp)
# 184:res = t102 
	movl	$0, -496(%rbp)
# 185:res = t103 
	movl	$1, -500(%rbp)
# 186:res = t104 arg1 = n arg2 = t103 
	movl	-412(%rbp), %eax
	movl	-500(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -504(%rbp)
# 187:res = a 
# 188:res = t102 
# 189:res = t104 
# 190:res = t105 
	pushq %rbp
	movl	-504(%rbp) , %edi
	movl	-496(%rbp) , %esi
	leaq	-400(%rbp), %rdx
	call	merge_sort
	movl	%eax, -508(%rbp)
	addq $0 , %rsp
# 191:
	movq	$.STR3,	%rdi
# 192:res = t106 
	pushq %rbp
	call	prints
	movl	%eax, -512(%rbp)
	addq $8 , %rsp
# 193:res = t107 
	movl	$0, -516(%rbp)
# 194:res = i arg1 = t107 
	movl	-516(%rbp), %eax
	movl	%eax, -408(%rbp)
# 195:res = t108 arg1 = t107 
	movl	-516(%rbp), %eax
	movl	%eax, -520(%rbp)
# 196:arg1 = i arg2 = n 
.L31:
	movl	-408(%rbp), %eax
	movl	-412(%rbp), %edx
	cmpl	%edx, %eax
	jl .L29
# 197:
	jmp .L30
# 198:
	jmp .L30
# 199:res = t109 arg1 = i 
.L32:
	movl	-408(%rbp), %eax
	movl	%eax, -524(%rbp)
# 200:res = i arg1 = i 
	movl	-408(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -408(%rbp)
# 201:
	jmp .L31
# 202:res = t110 
.L29:
	movl	$0, -528(%rbp)
# 203:res = t112 arg1 = i 
	movl	-408(%rbp), %eax
	movl	$4, %ecx
	imull	%ecx, %eax
	movl	%eax, -536(%rbp)
# 204:res = t111 arg1 = t110 arg2 = t112 
	movl	-528(%rbp), %eax
	movl	-536(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -532(%rbp)
# 205:res = t113 arg1 = a arg2 = t111 
	leaq	-400(%rbp), %rdx
	movslq	-532(%rbp), %rax
	addq	%rax, %rdx
	movl	(%rdx), %eax
	movl	%eax, -540(%rbp)
# 206:res = t113 
# 207:res = t114 
	pushq %rbp
	movl	-540(%rbp) , %edi
	call	printi
	movl	%eax, -544(%rbp)
	addq $0 , %rsp
# 208:
	movq	$.STR4,	%rdi
# 209:res = t115 
	pushq %rbp
	call	prints
	movl	%eax, -548(%rbp)
	addq $8 , %rsp
# 210:
	jmp .L32
# 211:res = t116 
.L30:
	movl	$0, -552(%rbp)
# 212:res = t116 
	movl	-552(%rbp), %eax
	jmp	.LRT2
.LRT2:
	addq	$-552, %rsp
	movq	%rbp, %rsp
	popq	%rbp
	ret
.LFE2:
	.size	main, .-main
