	.file	"P477HelloWorld.c"
	.globl	msg
	.data
msg:
	.ascii "Hello, World!\12"
	.def	__main;	.scl	2;	.type	32;	.endef
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	call	__main
	movl	$14, %r8d
	leaq	msg(%rip), %rdx
	movl	$1, %ecx
	call	write
	movl	$0, %ecx
	call	_exit
	nop
	.seh_endproc
	.ident	"GCC: (GNU) 4.9.3"
	.def	write;	.scl	2;	.type	32;	.endef
	.def	_exit;	.scl	2;	.type	32;	.endef
