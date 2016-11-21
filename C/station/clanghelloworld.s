	.text
	.def	 main;
	.scl	2;
	.type	32;
	.endef
	.globl	main
	.align	16, 0x90
main:                                   # @main
.Ltmp0:
.seh_proc main
# BB#0:
	pushq	%rbp
.Ltmp1:
	.seh_pushreg 5
	movq	%rsp, %rbp
	subq	$48, %rsp
.Ltmp2:
	.seh_setframe 5, 0
.Ltmp3:
	.seh_endprologue
	callq	__main
	movl	$0, -4(%rbp)
	movabsq	$msg, %rdx
	movl	$14, %eax
	movl	%eax, %r8d
	movl	$1, %ecx
	callq	write
	xorl	%ecx, %ecx
	movq	%rax, -16(%rbp)         # 8-byte Spill
	callq	_exit
	ud2
.Leh_func_end0:
.Ltmp4:
	.seh_endproc

	.data
	.globl	msg                     # @msg
msg:
	.ascii	"Hello, World!\n"


