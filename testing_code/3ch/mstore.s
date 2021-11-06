	.file	"mstore.c"				// . before lines are for Linker
	.text
	.globl	multstore
	.type	multstore, @function
multstore:						//LABEL, memory placeholder for linker to provide
.LFB0:
	.cfi_startproc
	pushq	%rbx				//assembly code
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	movq	%rdx, %rbx
	call	mult2
	movq	%rax, (%rbx)
	popq	%rbx
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE0:
	.size	multstore, .-multstore
	.ident	"GCC: (GNU) 8.4.1 20200928 (Red Hat 8.4.1-1.0.3)"
	.section	.note.GNU-stack,"",@progbits
