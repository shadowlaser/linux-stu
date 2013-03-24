	.file	"hell.c"
	.text
.Ltext0:
	.section	.rodata
.LC0:
	.string	"hello %d"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.file 1 "hell.c"
	.loc 1 4 0
	.cfi_startproc
	pushl	%ebp
.LCFI0:
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
.LCFI1:
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	.loc 1 5 0
	movl	$1, 20(%esp)
	movl	$0, 24(%esp)
	.loc 1 6 0
	movl	20(%esp), %eax
	movl	%eax, %edx
	sarl	$31, %edx
	idivl	24(%esp)
	movl	%eax, 28(%esp)
	.loc 1 9 0
	movl	$.LC0, %eax
	movl	28(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	.loc 1 10 0
	leave
	.cfi_restore 5
.LCFI2:
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
.Letext0:
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.long	0xa8
	.value	0x2
	.long	.Ldebug_abbrev0
	.byte	0x4
	.uleb128 0x1
	.long	.LASF10
	.byte	0x1
	.long	.LASF11
	.long	.LASF12
	.long	.Ltext0
	.long	.Letext0
	.long	.Ldebug_line0
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.long	.LASF0
	.uleb128 0x2
	.byte	0x1
	.byte	0x8
	.long	.LASF1
	.uleb128 0x2
	.byte	0x2
	.byte	0x7
	.long	.LASF2
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.long	.LASF3
	.uleb128 0x2
	.byte	0x1
	.byte	0x6
	.long	.LASF4
	.uleb128 0x2
	.byte	0x2
	.byte	0x5
	.long	.LASF5
	.uleb128 0x3
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x2
	.byte	0x8
	.byte	0x5
	.long	.LASF6
	.uleb128 0x2
	.byte	0x8
	.byte	0x7
	.long	.LASF7
	.uleb128 0x2
	.byte	0x4
	.byte	0x5
	.long	.LASF8
	.uleb128 0x2
	.byte	0x1
	.byte	0x6
	.long	.LASF9
	.uleb128 0x4
	.byte	0x1
	.long	.LASF13
	.byte	0x1
	.byte	0x3
	.long	.LFB0
	.long	.LFE0
	.long	.LLST0
	.uleb128 0x5
	.string	"a"
	.byte	0x1
	.byte	0x5
	.long	0x4f
	.byte	0x2
	.byte	0x74
	.sleb128 20
	.uleb128 0x5
	.string	"b"
	.byte	0x1
	.byte	0x5
	.long	0x4f
	.byte	0x2
	.byte	0x74
	.sleb128 24
	.uleb128 0x5
	.string	"c"
	.byte	0x1
	.byte	0x5
	.long	0x4f
	.byte	0x2
	.byte	0x74
	.sleb128 28
	.byte	0
	.byte	0
	.section	.debug_abbrev,"",@progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1b
	.uleb128 0xe
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x1
	.uleb128 0x10
	.uleb128 0x6
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0xc
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x1
	.uleb128 0x40
	.uleb128 0x6
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0xa
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_loc,"",@progbits
.Ldebug_loc0:
.LLST0:
	.long	.LFB0-.Ltext0
	.long	.LCFI0-.Ltext0
	.value	0x2
	.byte	0x74
	.sleb128 4
	.long	.LCFI0-.Ltext0
	.long	.LCFI1-.Ltext0
	.value	0x2
	.byte	0x74
	.sleb128 8
	.long	.LCFI1-.Ltext0
	.long	.LCFI2-.Ltext0
	.value	0x2
	.byte	0x75
	.sleb128 8
	.long	.LCFI2-.Ltext0
	.long	.LFE0-.Ltext0
	.value	0x2
	.byte	0x74
	.sleb128 4
	.long	0
	.long	0
	.section	.debug_aranges,"",@progbits
	.long	0x1c
	.value	0x2
	.long	.Ldebug_info0
	.byte	0x4
	.byte	0
	.value	0
	.value	0
	.long	.Ltext0
	.long	.Letext0-.Ltext0
	.long	0
	.long	0
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF6:
	.string	"long long int"
.LASF2:
	.string	"short unsigned int"
.LASF0:
	.string	"unsigned int"
.LASF11:
	.string	"hell.c"
.LASF3:
	.string	"long unsigned int"
.LASF7:
	.string	"long long unsigned int"
.LASF12:
	.string	"/home/rooted/bin"
.LASF1:
	.string	"unsigned char"
.LASF13:
	.string	"main"
.LASF8:
	.string	"long int"
.LASF10:
	.string	"GNU C 4.6.3"
.LASF4:
	.string	"signed char"
.LASF5:
	.string	"short int"
.LASF9:
	.string	"char"
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
