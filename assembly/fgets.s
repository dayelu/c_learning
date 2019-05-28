	.file	"fgets.c"
	.section	.rodata
.LC0:
	.string	"%p\n"
.LC1:
	.string	"\350\257\267\350\276\223\345\205\245\344\270\200\344\270\262\345\255\227\347\254\246\357\274\232"
	.text
	.globl	gets_in
	.type	gets_in, @function
gets_in:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	$.LC1, %edi
	call	puts
	movq	stdin(%rip), %rdx
	movq	-8(%rbp), %rax
	movl	$5, %esi
	movq	%rax, %rdi
	call	fgets
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	puts
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	gets_in, .-gets_in
	.section	.rodata
.LC2:
	.string	"r"
	.text
	.globl	read_line
	.type	read_line, @function
read_line:
.LFB3:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movl	$.LC2, %esi
	movq	%rax, %rdi
	call	fopen
	movq	%rax, -16(%rbp)
	movq	$0, -8(%rbp)
	movl	$50, %edi
	call	malloc
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	je	.L4
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movl	$99, %esi
	movq	%rax, %rdi
	call	fgets
	movq	-8(%rbp), %rax
	jmp	.L5
.L4:
	movl	$0, %eax
.L5:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	read_line, .-read_line
	.section	.rodata
.LC3:
	.string	"test.txt"
.LC4:
	.string	"nihao"
	.text
	.globl	main
	.type	main, @function
main:
.LFB4:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movl	%edi, -36(%rbp)
	movq	%rsi, -48(%rbp)
	movq	$.LC3, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	read_line
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	puts
	movq	$.LC4, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	gets_in
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.11) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
