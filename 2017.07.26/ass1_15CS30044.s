	.file	"test.c"
	.text
	.globl	func
	.type	func, @function
func:
.LFB0:
	.cfi_startproc             	#beginning of function func
	pushq	%rbp               	#push rbp, base pointer into the stack
	.cfi_def_cfa_offset 16     	#absolute offset set to 16 to calculate cfa, canonical frame address
	.cfi_offset 6, -16         	#save the value of register 6 at an offset of -16 ie. -32
	movq	%rsp, %rbp         	#copy rsp containing the stack pointer to the function func to rbp
	.cfi_def_cfa_register 6    	#setting a rule to use register 6 from now on
	pushq	%rbx               	#push rbx, callee saved into the stack
	subq	$56, %rsp          	#making rsp point to CFA-(8+56)=CFA-64, it is now aligned
	.cfi_offset 3, -24         	#save the value of register 6 at an offset of -24 ie. -40
	movl	%edi, -52(%rbp)    	#copy the 32 bits of 1st argument edi to mem[reg[rbp]-52], mem[reg[rbp]-52] = 9
	movq	%fs:40, %rax       	#copy the value in the far segment at an offset of 40 to rax    
	movq	%rax, -24(%rbp)    	#copy rax to mem[reg[rbp]-24]
	xorl	%eax, %eax         	#assign 0 to eax ie. lower significant 32bits of rax, eax = 0 
	movq	%rsp, %rax         	#copy rsp to rax, rax = rsp
	movq	%rax, %rsi         	#copy rax to 2nd argument rsi, here rsi is being used as a general purpose register because no second argument is passed, rsi = rax
	movl	-52(%rbp), %eax    	#copy mem[reg[rbp]-52] to eax, eax = mem[reg[rbp]-52] = 9
	addl	$1, %eax           	#add 1 to eax, eax ++, eax = 10
	movslq	%eax, %rdx         	#copy and sign extend 32 bit eax to 64 bit rdx, rdx = 10
	subq	$1, %rdx           	#subtract 1 from rdx, rdx--, rdx = 9
	movq	%rdx, -40(%rbp)    	#copy rdx to mem[reg[rbp]-40], mem[reg[rbp]-40] = rdx = 9
	movslq	%eax, %rdx         	#copy and sign extend 32 bit eax to 64 bit rdx, rdx = eax = 10
	movq	%rdx, %r8          	#copy rdx to r8, r8 = rdx = 10
	movl	$0, %r9d           	#copy 0 to r9d, r9d = 0
	movslq	%eax, %rdx         	#copy and sign extend 32 bit eax to 64 bit rdx, rdx = eax = 10
	movq	%rdx, %rcx         	#copy rdx to rcx, rcx = rdx = 10
	movl	$0, %ebx           	#ebx = 0
	cltq                       	#sign extend eax to rax, short for movslq %eax,%rax
	salq	$2, %rax           	#rax = rax << 2, rax = 2*2*10 = 40
	leaq	3(%rax), %rdx      	#rdx = & mem[reg[rax]+3], address of location pointed by rax + 3, rdx = 43
	movl	$16, %eax          	#eax = 16
	subq	$1, %rax	   	#rax--, rax = 15
	addq	%rdx, %rax         	#rax = rax + rdx, rax = 15 + 43 = 58
	movl	$16, %edi          	#edi = 16
	movl	$0, %edx           	#edx = 0
	divq	%rdi               	#Unsigned divide, R[%rdx] ← R[%rdx]:R[%rax] mod rdi; R[%rax] ← R[%rdx]:R[%rax] ÷ rdi
	imulq	$16, %rax, %rax    	#rax = rax * 16 = 928, 
	subq	%rax, %rsp         	#rsp = rsp - rax, 928 bytes reserved
	movq	%rsp, %rax         	#rax = rsp, stack pointer stored in rax
	addq	$3, %rax           	#rax = rax + 3, rax = 931
	shrq	$2, %rax           	#rax = rax >> 2 (logical), since its positive so 2 bits would be lost, rax = rax/4 = 232
	salq	$2, %rax           	#rax = rax << 2, rax = 928
	movq	%rax, -32(%rbp)    	#mem[reg[rbp]-32] = rax
	movq	-32(%rbp), %rax    	#rax = mem[reg[rbp]-32], mem[reg[rbp]-32] stores the pointer to the beginning of the array of integers of length 10 defined inside function func
	movl	$0, (%rax)         	#*rax = 0, 0 stored at the memory location pointed by rax which was mem[reg[rbp]-32], initial value 0, arr[0] = 0
	movq	-32(%rbp), %rax    	#rax = mem[reg[rbp]-32]
	movl	$1, 4(%rax)        	#mem[reg[rax]+4] = 1, 2nd initial value 1 stored at next 4 bytes of rax, arr[1] = 1
	movl	$2, -44(%rbp)      	#mem[reg[rbp]-44] = 2, index i = 2 for the loop
	jmp	.L2                	#unconditional jump to L2
.L3:
	movl	-44(%rbp), %eax    	#eax = mem[reg[rbp]-44]
	leal	-1(%rax), %edx     	#edx = mem[reg[rax]-1], edx stores the address of 1 byte below value pointed by rax = i, basically edx stores the address i-1
	movq	-32(%rbp), %rax    	#rax = mem[reg[rbp]-32], reassigning value
	movslq	%edx, %rdx         	#rdx = edx, sign extended 32 to 64 bit
	movl	(%rax,%rdx,4), %ecx	#ecx = Mem[Reg[rax]+4*Reg[rdx]], indirect addressing, 4 is the scale as int needs 4 bytes, i-1th number is stored here, ecx = arr[i-1]
	movl	-44(%rbp), %eax		#eax = mem[reg[rbp]-44]
	leal	-2(%rax), %edx         	#edx = mem[reg[rax]-2], edx stores the address of 2 byte below *rax, edx stores the address i-2
	movq	-32(%rbp), %rax		#rax = mem[reg[rbp]-32], reassigning value
	movslq	%edx, %rdx		#rdx = edx, sign extended 32 to 64 bit
	movl	(%rax,%rdx,4), %eax	#eax = Mem[Reg[rax]+4*Reg[rdx]], eax stores the i-2th number, eax = arr[i-2]
	addl	%eax, %ecx		#ecx = ecx + eax, ecx stores the sum of i-1th and i-2th number ie. the ith number to be copied in the memory, ecx = arr[1-1] + arr[i-2]
	movq	-32(%rbp), %rax 	#rax = mem[reg[rbp]-32]
	movl	-44(%rbp), %edx		#edx = mem[reg[rbp]-44]
	movslq	%edx, %rdx		#rdx = edx, sign extended
	movl	%ecx, (%rax,%rdx,4)	#Mem[Reg[rax]+4*Reg[rdx]] = ecx, ith number is copied to ith index in the memory, arr[i] = ecx = arr[1-1] + arr[i-2]
	addl	$1, -44(%rbp)		#mem[reg[rbp]-44] = mem[reg[rbp]-44] + 1, mem[reg[rbp]-44] which stores the current index to be evaluated is incremented by 1, i++
.L2:
	movl	-44(%rbp), %eax    	#eax = mem[reg[rbp]-44], eax = 2(when entering first time)
	cmpl	-52(%rbp), %eax    	#compare mem[reg[rbp]-52] = 9 with eax
	jle	.L3                	#jump to L3 if eax is less than or equal to 9
	movq	-32(%rbp), %rax    	#rax = mem[reg[rbp]-32], if eax is greater than 9 then control comes here that is eax is 10 now and value corresponding to i = 9 is already stored in the memory
	movl	-52(%rbp), %edx    	#edx = mem[reg[rbp]-52]
	movslq	%edx, %rdx         	#rdx = edx
	movl	(%rax,%rdx,4), %eax	#eax = Mem[Reg[rax]+4*Reg[rdx]], the value corresponding to i = 9 is copied to eax
	movq	%rsi, %rsp		#rsp = rsi, 
	movq	-24(%rbp), %rbx		#rbx = mem[reg[rbp]-24]
	xorq	%fs:40, %rbx		#rbx = fs:40
	je	.L5                     #jump if zero flag is set that is fs:40 == rbx
	call	__stack_chk_fail@PLT    #call to __stack_chk_fail@PLT
.L5:
	movq	-8(%rbp), %rbx        	#mem[reg[rbp]-8] = rbx
	leave				#copy ebp to esp and restore old ebp from stack
	.cfi_def_cfa 7, 8		#defines a rule for computing cfa as take the value from register 7 and add offset 8 to it
	ret				#return
	.cfi_endproc        		#end of function func
.LFE0:
	.size	func, .-func
	.section	.rodata
.LC0:
	.string	"%d"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc			#beginning of function main
	pushq	%rbp			#push rbp, base pointer into the stack
	.cfi_def_cfa_offset 16		#absolute offset set to 16 to calculate cfa, canonical frame address
	.cfi_offset 6, -16		#save the value of register 6 at an offset of -16 ie. -32
	movq	%rsp, %rbp		#copy rsp containing the stack pointer to the function main to rbp
	.cfi_def_cfa_register 6		#setting a rule to use register 6 from now on
	subq	$16, %rsp		#rsp = rsp - 16, 16 bytes put in reserved space
	movl	$9, -4(%rbp)		#mem[reg[rbp]-4] = 9, value 9 stored at this location 4 bytes below rbp
	movl	-4(%rbp), %eax		#eax = mem[reg[rbp]-4], eax = 9
	movl	%eax, %edi		#edi = eax, edi = 9
	call	func			#function call to func
	movl	%eax, %esi		#esi = eax, return value stored in 2nd argment for printf
	leaq	.LC0(%rip), %rdi	#format copied to 1st argument
	movl	$0, %eax		#eax = 0
	call	printf@PLT		#call to printf
	call	getchar@PLT		#call to getchar, waiting for a character to be input at the console
	movl	$0, %eax		#eax = 0
	leave				#copy ebp to esp and restore old ebp from stack
	.cfi_def_cfa 7, 8		#defines a rule for computing cfa as take the value from register 7 and add offset 8 to it
	ret				#return
	.cfi_endproc			#end of function main
.LFE1:
	.size	main, .-main
	.ident	"GCC: (GNU) 7.1.1 20170630"
	.section	.note.GNU-stack,"",@progbits
	
#Overall : This programme calculates 10th number (i = 9) in the fibonacci series starting with initial values 0 (i = 0) and 1 (i = 1). The programme utilises an array of size 10 to do this. The main calls the function func with single parameter n ie. index of the fibonacci number to be calculated. For this the function uses an array of integers of size 10 whose first two elements arr[0] and arr[1] are initialised to 0 aand 1 respectively. After that, func runs a loop to calculate and store the next fibonacci numbers in the series in their respective indices unless the index becomes greater than n ie. 9. The formula used is arr[i] = arr[i-1] + arr[i-2]
