SECTION_TEXT

GLOBAL_HIDDEN_FN blake2s_blocks_x86
pushl %esi
pushl %edi
pushl %ebx
pushl %ebp
subl $300, %esp
movl 328(%esp), %edx
cmpl $64, %edx
movl %edx, %esi
jbe blake2s_blocks_x86_L2
movl $64, %esi
blake2s_blocks_x86_L2:
movl 320(%esp), %ebp
movl %esi, 64(%esp)
movl 324(%esp), %edi
movl 4(%ebp), %esi
movl %esi, 84(%esp)
movl 8(%ebp), %esi
movl %esi, 104(%esp)
movl 12(%ebp), %esi
movl %esi, 100(%esp)
movl 16(%ebp), %esi
movl %esi, 96(%esp)
movl 20(%ebp), %esi
movl 40(%ebp), %eax
movl %eax, %ecx
movl %esi, 92(%esp)
xorl $528734635, %ecx
movl 24(%ebp), %esi
movl %ecx, 68(%esp)
movl 32(%ebp), %ecx
movl %esi, 80(%esp)
movl 28(%ebp), %esi
movl 44(%ebp), %ebx
xorl $1541459225, %ebx
movl %ebx, 72(%esp)
testl %eax, %eax
movl %ecx, 88(%esp)
movl 36(%ebp), %ecx
movl (%ebp), %ebx
movl %esi, 76(%esp)
je blake2s_blocks_x86_26
blake2s_blocks_x86_2:
cmpl $64, %edx
je blake2s_blocks_x86_26
blake2s_blocks_x86_3:
xorl %eax, %eax
lea (%esp), %esi
movl %eax, (%esp)
testb $32, %dl
movl %eax, 4(%esp)
movl %eax, 8(%esp)
movl %eax, 12(%esp)
movl %eax, 16(%esp)
movl %eax, 20(%esp)
movl %eax, 24(%esp)
movl %eax, 28(%esp)
movl %eax, 32(%esp)
movl %eax, 36(%esp)
movl %eax, 40(%esp)
movl %eax, 44(%esp)
movl %eax, 48(%esp)
movl %eax, 52(%esp)
movl %eax, 56(%esp)
movl %eax, 60(%esp)
je blake2s_blocks_x86_5
blake2s_blocks_x86_4:
movl (%edi), %eax
movl %eax, (%esp)
movl 4(%edi), %esi
movl %esi, 4(%esp)
movl 8(%edi), %eax
movl %eax, 8(%esp)
movl 12(%edi), %esi
movl %esi, 12(%esp)
movl 16(%edi), %eax
movl %eax, 16(%esp)
movl 20(%edi), %esi
movl %esi, 20(%esp)
movl 24(%edi), %eax
movl %eax, 24(%esp)
movl 28(%edi), %esi
addl $32, %edi
movl %esi, 28(%esp)
lea 32(%esp), %esi
blake2s_blocks_x86_5:
testb $16, %dl
je blake2s_blocks_x86_7
blake2s_blocks_x86_6:
movl (%edi), %eax
movl %eax, (%esi)
movl 4(%edi), %eax
movl %eax, 4(%esi)
movl 8(%edi), %eax
movl %eax, 8(%esi)
movl 12(%edi), %eax
addl $16, %edi
movl %eax, 12(%esi)
addl $16, %esi
blake2s_blocks_x86_7:
testb $8, %dl
je blake2s_blocks_x86_9
blake2s_blocks_x86_8:
movl 4(%edi), %ebp
movl (%edi), %eax
addl $8, %edi
movl %ebp, 4(%esi)
movl %eax, (%esi)
addl $8, %esi
movl 320(%esp), %ebp
blake2s_blocks_x86_9:
testb $4, %dl
je blake2s_blocks_x86_11
blake2s_blocks_x86_10:
movl (%edi), %eax
addl $4, %edi
movl %eax, (%esi)
addl $4, %esi
blake2s_blocks_x86_11:
testb $2, %dl
je blake2s_blocks_x86_13
blake2s_blocks_x86_12:
movzwl (%edi), %eax
addl $2, %edi
movw %ax, (%esi)
addl $2, %esi
blake2s_blocks_x86_13:
testb $1, %dl
je blake2s_blocks_x86_15
blake2s_blocks_x86_14:
movzbl (%edi), %eax
movb %al, (%esi)
blake2s_blocks_x86_15:
lea (%esp), %edi
blake2s_blocks_x86_26:
movl %edx, 116(%esp)
movl %ecx, 108(%esp)
movl %ebx, 124(%esp)
movl %edi, 164(%esp)
jmp blake2s_blocks_x86_19
blake2s_blocks_x86_20:
movl 164(%esp), %eax
addl 332(%esp), %eax
movl 116(%esp), %edx
addl $-64, %edx
movl %eax, 164(%esp)
movl %edx, 116(%esp)
blake2s_blocks_x86_19:
movl 124(%esp), %ecx
movl 96(%esp), %edx
movl 164(%esp), %eax
movl 64(%esp), %esi
movl 88(%esp), %ebp
addl %edx, %ecx
addl %esi, %ebp
cmpl %esi, %ebp
movl (%eax), %esi
movl %ebp, 88(%esp)
movl %esi, 176(%esp)
movl 84(%esp), %edi
movl 108(%esp), %ebx
adcl $0, %ebx
addl %esi, %ecx
xorl $1359893119, %ebp
xorl %ecx, %ebp
roll $16, %ebp
movl %ebx, 108(%esp)
xorl $-1694144372, %ebx
lea 1779033703(%ebp), %esi
xorl %edx, %esi
movl 8(%eax), %edx
movl %edx, 132(%esp)
roll $20, %esi
addl %edx, %edi
movl 92(%esp), %edx
addl %edx, %edi
xorl %edi, %ebx
roll $16, %ebx
movl %ebx, 236(%esp)
lea -1150833019(%ebx), %ebx
xorl %edx, %ebx
movl 4(%eax), %edx
addl %edx, %ecx
addl %esi, %ecx
movl %ecx, 240(%esp)
xorl %ebp, %ecx
roll $24, %ecx
roll $20, %ebx
movl %edx, 128(%esp)
movl %ecx, 220(%esp)
lea 1779033703(%ecx,%ebp), %ebp
movl %ebp, 244(%esp)
xorl %ebp, %esi
roll $25, %esi
movl %esi, 248(%esp)
movl 12(%eax), %esi
addl %esi, %edi
movl 236(%esp), %ebp
addl %ebx, %edi
movl %edi, 208(%esp)
xorl %ebp, %edi
roll $24, %edi
movl 16(%eax), %ecx
movl %edi, 252(%esp)
movl %esi, 136(%esp)
movl %ecx, 144(%esp)
lea -1150833019(%edi,%ebp), %edx
xorl %edx, %ebx
roll $25, %ebx
movl %ebx, 260(%esp)
movl 104(%esp), %ebx
movl 68(%esp), %edi
movl 100(%esp), %esi
movl %edx, 256(%esp)
lea (%ebx,%ecx), %ebp
movl 80(%esp), %ebx
addl %ebx, %ebp
xorl %ebp, %edi
roll $16, %edi
movl 24(%eax), %ecx
movl %ecx, 148(%esp)
addl %esi, %ecx
movl 76(%esp), %esi
addl %esi, %ecx
lea 1013904242(%edi), %edx
xorl %ebx, %edx
movl 72(%esp), %ebx
xorl %ecx, %ebx
roll $16, %ebx
movl %ebx, 264(%esp)
roll $20, %edx
lea -1521486534(%ebx), %ebx
xorl %esi, %ebx
movl 20(%eax), %esi
addl %esi, %ebp
addl %edx, %ebp
movl %ebp, 216(%esp)
xorl %edi, %ebp
roll $24, %ebp
movl %ebp, 224(%esp)
roll $20, %ebx
movl %esi, 140(%esp)
movl 264(%esp), %esi
lea 1013904242(%ebp,%edi), %ebp
movl 28(%eax), %edi
addl %edi, %ecx
addl %ebx, %ecx
xorl %ebp, %edx
movl %ecx, 212(%esp)
xorl %esi, %ecx
roll $24, %ecx
movl %edi, 160(%esp)
roll $25, %edx
lea -1521486534(%esi,%ecx), %edi
movl 240(%esp), %esi
xorl %edi, %ebx
roll $25, %ebx
movl %ebx, 232(%esp)
movl 32(%eax), %ebx
addl %ebx, %esi
movl %ebx, 152(%esp)
movl 260(%esp), %ebx
addl %ebx, %esi
xorl %esi, %ecx
roll $16, %ecx
addl %ecx, %ebp
movl %ecx, 196(%esp)
xorl %ebp, %ebx
movl %ebp, 204(%esp)
movl 40(%eax), %ebp
movl 208(%esp), %ecx
addl %ebp, %ecx
addl %edx, %ecx
movl %ebp, 192(%esp)
movl 220(%esp), %ebp
xorl %ecx, %ebp
roll $16, %ebp
addl %ebp, %edi
movl %edi, 200(%esp)
xorl %edi, %edx
movl 36(%eax), %edi
addl %edi, %esi
roll $20, %ebx
addl %ebx, %esi
movl %edi, 172(%esp)
movl 196(%esp), %edi
xorl %esi, %edi
roll $24, %edi
movl %esi, 240(%esp)
movl 204(%esp), %esi
addl %edi, %esi
xorl %esi, %ebx
roll $25, %ebx
movl %ebx, 260(%esp)
movl 44(%eax), %ebx
addl %ebx, %ecx
roll $20, %edx
addl %edx, %ecx
xorl %ecx, %ebp
roll $24, %ebp
movl %ecx, 208(%esp)
movl 200(%esp), %ecx
addl %ebp, %ecx
xorl %ecx, %edx
roll $25, %edx
movl %ebp, 220(%esp)
movl %edx, 228(%esp)
movl 48(%eax), %edx
movl 216(%esp), %ebp
addl %edx, %ebp
movl %edi, 196(%esp)
movl 232(%esp), %edi
addl %edi, %ebp
movl %ebx, 188(%esp)
movl 252(%esp), %ebx
xorl %ebp, %ebx
roll $16, %ebx
movl %esi, 204(%esp)
movl %ecx, 200(%esp)
movl %edx, 184(%esp)
movl 244(%esp), %esi
movl 212(%esp), %edx
addl %ebx, %esi
movl 56(%eax), %ecx
addl %ecx, %edx
movl %esi, 244(%esp)
xorl %esi, %edi
movl 248(%esp), %esi
addl %esi, %edx
movl %ecx, 180(%esp)
movl 224(%esp), %ecx
xorl %edx, %ecx
roll $16, %ecx
movl %edx, 212(%esp)
movl 256(%esp), %edx
addl %ecx, %edx
movl %edx, 256(%esp)
xorl %edx, %esi
movl 52(%eax), %edx
addl %edx, %ebp
roll $20, %edi
addl %edi, %ebp
xorl %ebp, %ebx
roll $24, %ebx
movl %ebp, 216(%esp)
movl 244(%esp), %ebp
addl %ebx, %ebp
xorl %ebp, %edi
roll $25, %edi
movl %edi, 232(%esp)
movl 60(%eax), %eax
movl 212(%esp), %edi
roll $20, %esi
addl %eax, %edi
addl %esi, %edi
xorl %edi, %ecx
roll $24, %ecx
movl %edx, 168(%esp)
movl 256(%esp), %edx
addl %ecx, %edx
xorl %edx, %esi
roll $25, %esi
movl %eax, 156(%esp)
movl 180(%esp), %eax
movl %edi, 212(%esp)
movl %ecx, 224(%esp)
movl 260(%esp), %ecx
lea (%eax,%esi), %edi
addl 240(%esp), %edi
movl 220(%esp), %eax
xorl %edi, %eax
roll $16, %eax
addl %eax, %ebp
movl %ebp, 244(%esp)
xorl %ebp, %esi
movl 208(%esp), %ebp
addl 144(%esp), %ebp
addl %ecx, %ebp
xorl %ebp, %ebx
roll $16, %ebx
addl 192(%esp), %edi
addl %ebx, %edx
roll $20, %esi
xorl %edx, %ecx
addl %esi, %edi
xorl %edi, %eax
addl 152(%esp), %ebp
roll $20, %ecx
roll $24, %eax
addl %ecx, %ebp
movl %edx, 256(%esp)
xorl %ebp, %ebx
movl 244(%esp), %edx
addl %eax, %edx
xorl %edx, %esi
movl %ebp, 208(%esp)
roll $24, %ebx
movl 216(%esp), %ebp
roll $25, %esi
movl %esi, 248(%esp)
movl 256(%esp), %esi
addl %ebx, %esi
addl 172(%esp), %ebp
xorl %esi, %ecx
movl %esi, 256(%esp)
movl 228(%esp), %esi
addl %esi, %ebp
movl %eax, 220(%esp)
movl %edx, 244(%esp)
movl 224(%esp), %eax
movl 212(%esp), %edx
xorl %ebp, %eax
addl 168(%esp), %edx
roll $16, %eax
movl %edi, 268(%esp)
movl %ebx, 252(%esp)
movl 204(%esp), %ebx
movl 232(%esp), %edi
addl %eax, %ebx
addl %edi, %edx
xorl %ebx, %esi
roll $25, %ecx
movl %ecx, 260(%esp)
movl 196(%esp), %ecx
xorl %edx, %ecx
addl 156(%esp), %ebp
roll $20, %esi
roll $16, %ecx
addl %esi, %ebp
movl %edx, 212(%esp)
xorl %ebp, %eax
movl 200(%esp), %edx
addl %ecx, %edx
movl %ebp, 216(%esp)
xorl %edx, %edi
movl 212(%esp), %ebp
addl 148(%esp), %ebp
roll $20, %edi
addl %edi, %ebp
xorl %ebp, %ecx
movl %edx, 200(%esp)
roll $24, %eax
roll $24, %ecx
addl %eax, %ebx
movl %eax, 224(%esp)
xorl %ebx, %esi
movl %edx, %eax
addl %ecx, %eax
xorl %eax, %edi
roll $25, %edi
movl %edi, 232(%esp)
movl 268(%esp), %edi
addl 128(%esp), %edi
movl %ebp, 212(%esp)
movl 260(%esp), %ebp
addl %ebp, %edi
xorl %edi, %ecx
roll $16, %ecx
addl %ecx, %ebx
movl %ebx, 204(%esp)
xorl %ebx, %ebp
movl 208(%esp), %ebx
addl 176(%esp), %ebx
roll $25, %esi
addl %esi, %ebx
movl 220(%esp), %edx
xorl %ebx, %edx
roll $16, %edx
addl %edx, %eax
xorl %eax, %esi
addl 132(%esp), %ebx
roll $20, %esi
addl %esi, %ebx
addl 184(%esp), %edi
xorl %ebx, %edx
roll $20, %ebp
addl %ebp, %edi
movl %eax, 200(%esp)
xorl %edi, %ecx
roll $24, %edx
movl %ebx, 208(%esp)
movl %eax, %ebx
addl %edx, %ebx
roll $24, %ecx
xorl %ebx, %esi
movl %ebx, 200(%esp)
movl %edi, 268(%esp)
movl 216(%esp), %ebx
movl 204(%esp), %edi
addl %ecx, %edi
addl 188(%esp), %ebx
xorl %edi, %ebp
movl %edi, 204(%esp)
movl 232(%esp), %edi
addl %edi, %ebx
roll $25, %ebp
movl %ebp, 260(%esp)
movl 252(%esp), %ebp
xorl %ebx, %ebp
roll $16, %ebp
roll $25, %esi
movl %esi, 228(%esp)
movl 244(%esp), %esi
addl %ebp, %esi
xorl %esi, %edi
addl 160(%esp), %ebx
roll $20, %edi
movl %ecx, 196(%esp)
addl %edi, %ebx
movl 212(%esp), %ecx
xorl %ebx, %ebp
addl 140(%esp), %ecx
movl %edx, 220(%esp)
movl 248(%esp), %edx
addl %edx, %ecx
roll $24, %ebp
movl 224(%esp), %eax
addl %ebp, %esi
xorl %ecx, %eax
xorl %esi, %edi
roll $16, %eax
movl %ecx, 212(%esp)
movl 256(%esp), %ecx
addl %eax, %ecx
roll $25, %edi
xorl %ecx, %edx
movl %edi, 232(%esp)
movl 212(%esp), %edi
addl 136(%esp), %edi
roll $20, %edx
addl %edx, %edi
xorl %edi, %eax
movl %ecx, 256(%esp)
roll $24, %eax
movl %ebx, 216(%esp)
movl %ecx, %ebx
addl %eax, %ebx
xorl %ebx, %edx
roll $25, %edx
movl %eax, 224(%esp)
movl 188(%esp), %eax
movl %edi, 212(%esp)
movl 220(%esp), %edi
movl 208(%esp), %ecx
addl %edx, %eax
addl 268(%esp), %eax
xorl %eax, %edi
roll $16, %edi
addl %edi, %esi
addl 184(%esp), %ecx
xorl %esi, %edx
movl %esi, 244(%esp)
movl 260(%esp), %esi
addl %esi, %ecx
xorl %ecx, %ebp
addl 152(%esp), %eax
roll $20, %edx
roll $16, %ebp
addl %edx, %eax
addl %ebp, %ebx
xorl %eax, %edi
xorl %ebx, %esi
addl 176(%esp), %ecx
roll $20, %esi
roll $24, %edi
addl %esi, %ecx
movl %eax, 272(%esp)
xorl %ecx, %ebp
movl 244(%esp), %eax
addl %edi, %eax
xorl %eax, %edx
roll $25, %edx
roll $24, %ebp
movl %edx, 248(%esp)
addl %ebp, %ebx
movl 216(%esp), %edx
xorl %ebx, %esi
addl 140(%esp), %edx
movl %ebp, 252(%esp)
movl 228(%esp), %ebp
addl %ebp, %edx
movl %eax, 244(%esp)
roll $25, %esi
movl %esi, 260(%esp)
movl 224(%esp), %eax
movl 212(%esp), %esi
xorl %edx, %eax
addl 156(%esp), %esi
roll $16, %eax
movl %ecx, 208(%esp)
movl %ebx, 256(%esp)
movl 204(%esp), %ebx
movl 232(%esp), %ecx
addl %eax, %ebx
addl %ecx, %esi
xorl %ebx, %ebp
movl %edi, 220(%esp)
movl 196(%esp), %edi
xorl %esi, %edi
addl 132(%esp), %edx
roll $20, %ebp
roll $16, %edi
addl %ebp, %edx
movl %esi, 212(%esp)
xorl %edx, %eax
movl 200(%esp), %esi
addl %edi, %esi
movl %edx, 216(%esp)
xorl %esi, %ecx
movl 212(%esp), %edx
addl 168(%esp), %edx
roll $20, %ecx
addl %ecx, %edx
xorl %edx, %edi
roll $24, %edi
roll $24, %eax
addl %edi, %esi
movl %eax, 224(%esp)
addl %eax, %ebx
movl 272(%esp), %eax
xorl %esi, %ecx
addl 192(%esp), %eax
xorl %ebx, %ebp
roll $25, %ecx
movl %ecx, 232(%esp)
movl 260(%esp), %ecx
addl %ecx, %eax
movl %edx, 212(%esp)
xorl %eax, %edi
movl 208(%esp), %edx
roll $16, %edi
addl 136(%esp), %edx
addl %edi, %ebx
roll $25, %ebp
xorl %ebx, %ecx
addl %ebp, %edx
movl %ebx, 204(%esp)
movl 220(%esp), %ebx
xorl %edx, %ebx
roll $16, %ebx
addl %ebx, %esi
xorl %esi, %ebp
addl 148(%esp), %edx
roll $20, %ebp
addl 180(%esp), %eax
addl %ebp, %edx
roll $20, %ecx
xorl %edx, %ebx
addl %ecx, %eax
xorl %eax, %edi
roll $24, %ebx
roll $24, %edi
addl %ebx, %esi
movl %eax, 272(%esp)
xorl %esi, %ebp
movl %edi, 196(%esp)
movl 204(%esp), %eax
addl %edi, %eax
movl 216(%esp), %edi
xorl %eax, %ecx
addl 160(%esp), %edi
roll $25, %ebp
movl %ebp, 228(%esp)
movl 232(%esp), %ebp
addl %ebp, %edi
movl %ebx, 220(%esp)
movl 252(%esp), %ebx
xorl %edi, %ebx
roll $16, %ebx
movl %edx, 208(%esp)
movl 244(%esp), %edx
addl %ebx, %edx
xorl %edx, %ebp
addl 128(%esp), %edi
roll $25, %ecx
roll $20, %ebp
movl %ecx, 260(%esp)
addl %ebp, %edi
movl 212(%esp), %ecx
xorl %edi, %ebx
addl 172(%esp), %ecx
movl %esi, 200(%esp)
movl 248(%esp), %esi
addl %esi, %ecx
movl %eax, 204(%esp)
roll $24, %ebx
movl 224(%esp), %eax
addl %ebx, %edx
xorl %ecx, %eax
xorl %edx, %ebp
roll $16, %eax
movl %ecx, 212(%esp)
movl 256(%esp), %ecx
addl %eax, %ecx
roll $25, %ebp
xorl %ecx, %esi
movl %ebp, 232(%esp)
movl 212(%esp), %ebp
addl 144(%esp), %ebp
roll $20, %esi
addl %esi, %ebp
xorl %ebp, %eax
movl %ecx, 256(%esp)
roll $24, %eax
movl %ebp, 212(%esp)
movl %ecx, %ebp
addl %eax, %ebp
xorl %ebp, %esi
roll $25, %esi
movl %edi, 216(%esp)
movl 160(%esp), %edi
movl 220(%esp), %ecx
movl %eax, 224(%esp)
movl 260(%esp), %eax
addl %esi, %edi
addl 272(%esp), %edi
xorl %edi, %ecx
roll $16, %ecx
addl %ecx, %edx
movl %edx, 244(%esp)
xorl %edx, %esi
movl 208(%esp), %edx
addl 136(%esp), %edx
addl %eax, %edx
xorl %edx, %ebx
roll $16, %ebx
addl %ebx, %ebp
xorl %ebp, %eax
addl 172(%esp), %edi
addl 128(%esp), %edx
roll $20, %esi
roll $20, %eax
addl %esi, %edi
addl %eax, %edx
xorl %edi, %ecx
xorl %edx, %ebx
movl %edx, 208(%esp)
roll $24, %ecx
roll $24, %ebx
movl 216(%esp), %edx
addl %ebx, %ebp
movl %edi, 120(%esp)
xorl %ebp, %eax
movl 244(%esp), %edi
addl 168(%esp), %edx
addl %ecx, %edi
addl 228(%esp), %edx
xorl %edi, %esi
movl %ecx, 220(%esp)
roll $25, %esi
roll $25, %eax
movl %edx, 216(%esp)
blake2s_blocks_x86_25:
movl %eax, 260(%esp)
movl %esi, 248(%esp)
movl %edx, %esi
movl 224(%esp), %eax
xorl %esi, %eax
roll $16, %eax
movl 204(%esp), %ecx
movl 212(%esp), %edx
addl %eax, %ecx
movl %ebp, 256(%esp)
movl 228(%esp), %ebp
addl 188(%esp), %edx
xorl %ecx, %ebp
movl %edi, 244(%esp)
movl 232(%esp), %edi
addl %edi, %edx
addl 184(%esp), %esi
roll $20, %ebp
movl %ebx, 252(%esp)
addl %ebp, %esi
movl 196(%esp), %ebx
xorl %esi, %eax
xorl %edx, %ebx
roll $16, %ebx
movl %edx, 212(%esp)
movl 200(%esp), %edx
roll $24, %eax
addl %ebx, %edx
movl %eax, 224(%esp)
xorl %edx, %edi
addl %eax, %ecx
movl 212(%esp), %eax
xorl %ecx, %ebp
addl 180(%esp), %eax
roll $20, %edi
addl %edi, %eax
xorl %eax, %ebx
movl %edx, 200(%esp)
roll $24, %ebx
movl %esi, 216(%esp)
movl %edx, %esi
addl %ebx, %esi
xorl %esi, %edi
roll $25, %edi
movl %edi, 232(%esp)
movl 120(%esp), %edi
addl 132(%esp), %edi
movl %eax, 212(%esp)
movl 260(%esp), %eax
addl %eax, %edi
xorl %edi, %ebx
movl 208(%esp), %edx
roll $16, %ebx
addl 140(%esp), %edx
addl %ebx, %ecx
roll $25, %ebp
xorl %ecx, %eax
addl %ebp, %edx
movl %ecx, 204(%esp)
movl 220(%esp), %ecx
xorl %edx, %ecx
roll $16, %ecx
addl 148(%esp), %edi
addl %ecx, %esi
roll $20, %eax
xorl %esi, %ebp
addl %eax, %edi
xorl %edi, %ebx
addl 192(%esp), %edx
roll $20, %ebp
roll $24, %ebx
addl %ebp, %edx
movl %esi, 200(%esp)
xorl %edx, %ecx
movl 204(%esp), %esi
addl %ebx, %esi
movl %edi, 120(%esp)
xorl %esi, %eax
movl 216(%esp), %edi
movl %edx, 208(%esp)
roll $24, %ecx
movl 212(%esp), %edx
addl 144(%esp), %edi
movl %ebx, 196(%esp)
roll $25, %eax
movl %eax, 260(%esp)
movl 200(%esp), %ebx
movl 232(%esp), %eax
addl %ecx, %ebx
addl 156(%esp), %edx
addl %eax, %edi
movl %esi, 204(%esp)
xorl %ebx, %ebp
movl %ebx, 200(%esp)
movl 248(%esp), %esi
addl %esi, %edx
movl 252(%esp), %ebx
xorl %edi, %ebx
movl %ecx, 220(%esp)
movl 224(%esp), %ecx
xorl %edx, %ecx
roll $16, %ebx
roll $25, %ebp
movl %ebp, 228(%esp)
movl 244(%esp), %ebp
roll $16, %ecx
addl %ebx, %ebp
movl %edx, 212(%esp)
xorl %ebp, %eax
movl 256(%esp), %edx
addl %ecx, %edx
movl %edx, 256(%esp)
xorl %edx, %esi
movl 176(%esp), %edx
addl %edx, %edi
roll $20, %eax
addl %eax, %edi
movl %edi, 216(%esp)
xorl %edi, %ebx
movl 212(%esp), %edi
addl 152(%esp), %edi
roll $20, %esi
addl %esi, %edi
xorl %edi, %ecx
roll $24, %ecx
movl %edi, 212(%esp)
movl 256(%esp), %edi
addl %ecx, %edi
xorl %edi, %esi
roll $25, %esi
roll $24, %ebx
movl %ecx, 224(%esp)
addl %ebx, %ebp
movl 172(%esp), %ecx
xorl %ebp, %eax
roll $25, %eax
movl %eax, 232(%esp)
lea (%ecx,%esi), %eax
movl 220(%esp), %ecx
addl 120(%esp), %eax
xorl %eax, %ecx
addl %edx, %eax
roll $16, %ecx
addl %ecx, %ebp
movl %ebp, 244(%esp)
xorl %ebp, %esi
movl 208(%esp), %ebp
addl 140(%esp), %ebp
movl %ecx, 220(%esp)
movl 260(%esp), %ecx
addl %ecx, %ebp
xorl %ebp, %ebx
roll $16, %ebx
addl %ebx, %edi
xorl %edi, %ecx
addl 160(%esp), %ebp
roll $20, %ecx
roll $20, %esi
addl %ecx, %ebp
addl %esi, %eax
xorl %ebp, %ebx
movl 220(%esp), %edx
xorl %eax, %edx
roll $24, %ebx
roll $24, %edx
addl %ebx, %edi
movl %ebp, 208(%esp)
xorl %edi, %ecx
movl 216(%esp), %ebp
movl %eax, 276(%esp)
movl 244(%esp), %eax
addl %edx, %eax
addl 132(%esp), %ebp
xorl %eax, %esi
movl %eax, 244(%esp)
movl 228(%esp), %eax
addl %eax, %ebp
movl %ebx, 252(%esp)
roll $25, %ecx
movl %ecx, 260(%esp)
movl 224(%esp), %ebx
movl 212(%esp), %ecx
xorl %ebp, %ebx
addl 192(%esp), %ecx
roll $16, %ebx
roll $25, %esi
movl %edx, 220(%esp)
movl %esi, 248(%esp)
movl 204(%esp), %edx
movl 232(%esp), %esi
addl %ebx, %edx
addl %esi, %ecx
xorl %edx, %eax
movl %edi, 256(%esp)
movl 196(%esp), %edi
xorl %ecx, %edi
addl 144(%esp), %ebp
roll $20, %eax
roll $16, %edi
addl %eax, %ebp
movl %ecx, 212(%esp)
xorl %ebp, %ebx
movl 200(%esp), %ecx
addl %edi, %ecx
movl %ebp, 216(%esp)
xorl %ecx, %esi
movl 212(%esp), %ebp
addl 156(%esp), %ebp
roll $20, %esi
addl %esi, %ebp
xorl %ebp, %edi
movl %ecx, 200(%esp)
roll $24, %edi
movl %ebp, 212(%esp)
movl %ecx, %ebp
addl %edi, %ebp
xorl %ebp, %esi
roll $25, %esi
movl %esi, 232(%esp)
movl 276(%esp), %esi
roll $24, %ebx
addl 180(%esp), %esi
addl %ebx, %edx
movl %ebx, 224(%esp)
xorl %edx, %eax
movl 260(%esp), %ebx
addl %ebx, %esi
xorl %esi, %edi
roll $16, %edi
addl %edi, %edx
movl %edx, 204(%esp)
xorl %edx, %ebx
movl 208(%esp), %edx
addl 188(%esp), %edx
roll $25, %eax
addl %eax, %edx
movl 220(%esp), %ecx
xorl %edx, %ecx
roll $16, %ecx
addl 128(%esp), %esi
addl %ecx, %ebp
roll $20, %ebx
xorl %ebp, %eax
addl %ebx, %esi
xorl %esi, %edi
addl 184(%esp), %edx
roll $20, %eax
roll $24, %edi
addl %eax, %edx
movl %esi, 276(%esp)
xorl %edx, %ecx
movl 204(%esp), %esi
addl %edi, %esi
xorl %esi, %ebx
movl %ebp, 200(%esp)
roll $24, %ecx
movl %esi, 204(%esp)
roll $25, %ebx
movl %ebx, 260(%esp)
movl 216(%esp), %esi
movl %ebp, %ebx
addl %ecx, %ebx
addl 148(%esp), %esi
xorl %ebx, %eax
movl %edi, 196(%esp)
movl 232(%esp), %edi
addl %edi, %esi
roll $25, %eax
movl %eax, 228(%esp)
movl 252(%esp), %eax
xorl %esi, %eax
roll $16, %eax
movl %ecx, 220(%esp)
movl 244(%esp), %ecx
addl %eax, %ecx
xorl %ecx, %edi
addl 152(%esp), %esi
roll $20, %edi
movl 212(%esp), %ebp
addl %edi, %esi
addl 136(%esp), %ebp
xorl %esi, %eax
movl %ebx, 200(%esp)
movl 248(%esp), %ebx
addl %ebx, %ebp
movl %edx, 208(%esp)
roll $24, %eax
movl 224(%esp), %edx
addl %eax, %ecx
xorl %ebp, %edx
xorl %ecx, %edi
roll $16, %edx
movl %ebp, 212(%esp)
movl 256(%esp), %ebp
addl %edx, %ebp
roll $25, %edi
xorl %ebp, %ebx
movl %edi, 232(%esp)
movl 212(%esp), %edi
addl 168(%esp), %edi
roll $20, %ebx
addl %ebx, %edi
xorl %edi, %edx
movl %ebp, 256(%esp)
roll $24, %edx
addl %edx, %ebp
xorl %ebp, %ebx
roll $25, %ebx
movl %edx, 224(%esp)
movl 132(%esp), %edx
movl %esi, 216(%esp)
movl %edi, 212(%esp)
movl 220(%esp), %edi
lea (%edx,%ebx), %esi
addl 276(%esp), %esi
xorl %esi, %edi
roll $16, %edi
addl %edi, %ecx
movl %ecx, 244(%esp)
xorl %ecx, %ebx
movl 208(%esp), %ecx
addl 148(%esp), %ecx
movl 260(%esp), %edx
addl %edx, %ecx
xorl %ecx, %eax
roll $16, %eax
addl 184(%esp), %esi
addl %eax, %ebp
roll $20, %ebx
xorl %ebp, %edx
addl %ebx, %esi
xorl %esi, %edi
addl 192(%esp), %ecx
roll $20, %edx
roll $24, %edi
addl %edx, %ecx
movl %esi, 280(%esp)
xorl %ecx, %eax
movl 244(%esp), %esi
addl %edi, %esi
movl %esi, 244(%esp)
xorl %esi, %ebx
movl 216(%esp), %esi
movl %ebp, 256(%esp)
roll $24, %eax
addl 176(%esp), %esi
movl %ecx, 208(%esp)
movl %eax, 252(%esp)
movl %ebp, %ecx
addl %eax, %ecx
movl 228(%esp), %eax
addl %eax, %esi
movl %ecx, 256(%esp)
xorl %ecx, %edx
movl 224(%esp), %ecx
movl 212(%esp), %ebp
xorl %esi, %ecx
addl 152(%esp), %ebp
roll $16, %ecx
roll $25, %ebx
roll $25, %edx
movl %ebx, 248(%esp)
movl %edx, 260(%esp)
movl 204(%esp), %edx
movl 232(%esp), %ebx
addl %ecx, %edx
addl %ebx, %ebp
xorl %edx, %eax
movl %edi, 220(%esp)
movl 196(%esp), %edi
xorl %ebp, %edi
addl 188(%esp), %esi
roll $20, %eax
roll $16, %edi
addl %eax, %esi
movl %ebp, 212(%esp)
xorl %esi, %ecx
movl 200(%esp), %ebp
addl %edi, %ebp
movl %esi, 216(%esp)
xorl %ebp, %ebx
movl 212(%esp), %esi
addl 136(%esp), %esi
roll $20, %ebx
addl %ebx, %esi
xorl %esi, %edi
roll $24, %edi
addl %edi, %ebp
movl %esi, 212(%esp)
xorl %ebp, %ebx
movl 280(%esp), %esi
addl 144(%esp), %esi
roll $25, %ebx
movl %ebx, 232(%esp)
movl 260(%esp), %ebx
addl %ebx, %esi
roll $24, %ecx
xorl %esi, %edi
roll $16, %edi
addl %ecx, %edx
xorl %edx, %eax
addl %edi, %edx
movl %edx, 204(%esp)
xorl %edx, %ebx
movl 208(%esp), %edx
addl 160(%esp), %edx
roll $25, %eax
addl %eax, %edx
movl %ecx, 224(%esp)
movl 220(%esp), %ecx
xorl %edx, %ecx
roll $16, %ecx
addl 168(%esp), %esi
addl %ecx, %ebp
roll $20, %ebx
xorl %ebp, %eax
addl %ebx, %esi
xorl %esi, %edi
addl 140(%esp), %edx
roll $20, %eax
roll $24, %edi
addl %eax, %edx
movl %ebp, 200(%esp)
xorl %edx, %ecx
movl 204(%esp), %ebp
addl %edi, %ebp
xorl %ebp, %ebx
roll $24, %ecx
roll $25, %ebx
movl %ebx, 260(%esp)
movl 200(%esp), %ebx
addl %ecx, %ebx
xorl %ebx, %eax
roll $25, %eax
movl %eax, 228(%esp)
movl 216(%esp), %eax
addl 156(%esp), %eax
movl %esi, 280(%esp)
movl 232(%esp), %esi
addl %esi, %eax
movl %ebx, 200(%esp)
movl %ebp, 204(%esp)
movl 252(%esp), %ebx
movl 212(%esp), %ebp
xorl %eax, %ebx
addl 128(%esp), %ebp
roll $16, %ebx
movl %edi, 196(%esp)
movl %ecx, 220(%esp)
movl 244(%esp), %ecx
movl 248(%esp), %edi
addl %ebx, %ecx
addl %edi, %ebp
xorl %ecx, %esi
movl %edx, 208(%esp)
movl 224(%esp), %edx
xorl %ebp, %edx
addl 180(%esp), %eax
roll $20, %esi
roll $16, %edx
addl %esi, %eax
movl %ebp, 212(%esp)
xorl %eax, %ebx
movl 256(%esp), %ebp
addl %edx, %ebp
movl %eax, 216(%esp)
xorl %ebp, %edi
movl 212(%esp), %eax
addl 172(%esp), %eax
roll $20, %edi
addl %edi, %eax
xorl %eax, %edx
movl %ebp, 256(%esp)
roll $24, %edx
movl %eax, 212(%esp)
movl %ebp, %eax
addl %edx, %eax
xorl %eax, %edi
roll $25, %edi
movl %edx, 224(%esp)
movl 184(%esp), %edx
roll $24, %ebx
addl %ebx, %ecx
xorl %ecx, %esi
lea (%edx,%edi), %ebp
addl 280(%esp), %ebp
roll $25, %esi
movl %esi, 232(%esp)
movl 220(%esp), %esi
xorl %ebp, %esi
roll $16, %esi
addl %esi, %ecx
movl %ecx, 244(%esp)
xorl %ecx, %edi
movl 208(%esp), %ecx
addl 128(%esp), %ecx
movl 260(%esp), %edx
addl %edx, %ecx
xorl %ecx, %ebx
roll $16, %ebx
addl 140(%esp), %ebp
addl %ebx, %eax
roll $20, %edi
xorl %eax, %edx
addl %edi, %ebp
xorl %ebp, %esi
addl 156(%esp), %ecx
roll $20, %edx
roll $24, %esi
addl %edx, %ecx
movl %ebp, 112(%esp)
xorl %ecx, %ebx
movl 244(%esp), %ebp
addl %esi, %ebp
movl %ebp, 244(%esp)
xorl %ebp, %edi
movl 216(%esp), %ebp
roll $24, %ebx
addl 180(%esp), %ebp
addl %ebx, %eax
movl %ebx, 252(%esp)
xorl %eax, %edx
movl 228(%esp), %ebx
addl %ebx, %ebp
movl %ecx, 208(%esp)
movl 224(%esp), %ecx
xorl %ebp, %ecx
roll $16, %ecx
roll $25, %edx
roll $25, %edi
movl %edx, 260(%esp)
movl %edi, 248(%esp)
movl 204(%esp), %edx
movl 212(%esp), %edi
addl %ecx, %edx
addl 144(%esp), %edi
xorl %edx, %ebx
movl %eax, 256(%esp)
movl 232(%esp), %eax
addl %eax, %edi
addl 168(%esp), %ebp
roll $20, %ebx
movl %esi, 220(%esp)
addl %ebx, %ebp
movl 196(%esp), %esi
xorl %ebp, %ecx
xorl %edi, %esi
roll $16, %esi
movl %edi, 212(%esp)
movl 200(%esp), %edi
roll $24, %ecx
addl %esi, %edi
movl %ecx, 224(%esp)
xorl %edi, %eax
addl %ecx, %edx
movl 212(%esp), %ecx
xorl %edx, %ebx
addl 192(%esp), %ecx
roll $20, %eax
addl %eax, %ecx
xorl %ecx, %esi
roll $24, %esi
addl %esi, %edi
movl %ebp, 216(%esp)
xorl %edi, %eax
movl 112(%esp), %ebp
addl 176(%esp), %ebp
roll $25, %eax
movl %eax, 232(%esp)
movl 260(%esp), %eax
addl %eax, %ebp
movl %ecx, 212(%esp)
xorl %ebp, %esi
movl 208(%esp), %ecx
roll $16, %esi
addl 148(%esp), %ecx
addl %esi, %edx
roll $25, %ebx
xorl %edx, %eax
addl %ebx, %ecx
movl %edx, 204(%esp)
movl 220(%esp), %edx
xorl %ecx, %edx
roll $16, %edx
addl %edx, %edi
xorl %edi, %ebx
addl 160(%esp), %ebp
roll $20, %eax
addl 136(%esp), %ecx
addl %eax, %ebp
roll $20, %ebx
xorl %ebp, %esi
addl %ebx, %ecx
xorl %ecx, %edx
roll $24, %esi
roll $24, %edx
movl %ebp, 112(%esp)
addl %edx, %edi
movl %esi, 196(%esp)
xorl %edi, %ebx
movl 204(%esp), %ebp
addl %esi, %ebp
movl 216(%esp), %esi
xorl %ebp, %eax
addl 172(%esp), %esi
movl %edx, 220(%esp)
movl 232(%esp), %edx
addl %edx, %esi
roll $25, %ebx
movl %ebx, 228(%esp)
movl 252(%esp), %ebx
xorl %esi, %ebx
movl %ecx, 208(%esp)
roll $16, %ebx
movl 212(%esp), %ecx
movl %edi, 200(%esp)
movl 244(%esp), %edi
addl %ebx, %edi
addl 152(%esp), %ecx
xorl %edi, %edx
movl %esi, 216(%esp)
movl 248(%esp), %esi
addl %esi, %ecx
movl %ebp, 204(%esp)
roll $20, %edx
roll $25, %eax
movl %edx, 232(%esp)
movl %ecx, 212(%esp)
xorl %ecx, 224(%esp)
movl 256(%esp), %ebp
blake2s_blocks_x86_24:
movl 216(%esp), %ecx
addl 132(%esp), %ecx
addl %edx, %ecx
xorl %ecx, %ebx
roll $24, %ebx
movl %eax, 260(%esp)
addl %ebx, %edi
movl 224(%esp), %eax
xorl %edi, %edx
roll $16, %eax
addl %eax, %ebp
xorl %ebp, %esi
roll $25, %edx
movl %ecx, 216(%esp)
movl %edx, 232(%esp)
movl 188(%esp), %edx
movl 212(%esp), %ecx
roll $20, %esi
addl %edx, %ecx
addl %esi, %ecx
xorl %ecx, %eax
roll $24, %eax
addl %eax, %ebp
xorl %ebp, %esi
roll $25, %esi
movl %eax, 224(%esp)
movl 168(%esp), %eax
movl %ecx, 212(%esp)
movl 220(%esp), %ecx
addl %esi, %eax
addl 112(%esp), %eax
xorl %eax, %ecx
addl %edx, %eax
roll $16, %ecx
addl %ecx, %edi
movl %edi, 244(%esp)
xorl %edi, %esi
movl 208(%esp), %edi
addl 160(%esp), %edi
movl %ecx, 220(%esp)
movl 260(%esp), %ecx
addl %ecx, %edi
xorl %edi, %ebx
roll $16, %ebx
addl %ebx, %ebp
xorl %ebp, %ecx
roll $20, %esi
addl 180(%esp), %edi
addl %esi, %eax
roll $20, %ecx
addl %ecx, %edi
movl 220(%esp), %edx
xorl %edi, %ebx
xorl %eax, %edx
roll $24, %edx
roll $24, %ebx
movl %edi, 208(%esp)
addl %ebx, %ebp
movl %eax, 284(%esp)
xorl %ebp, %ecx
movl 216(%esp), %edi
movl 244(%esp), %eax
addl %edx, %eax
addl 184(%esp), %edi
xorl %eax, %esi
movl %ebp, 256(%esp)
movl 228(%esp), %ebp
addl %ebp, %edi
roll $25, %esi
movl %esi, 248(%esp)
roll $25, %ecx
movl %ecx, 260(%esp)
movl 224(%esp), %esi
movl 212(%esp), %ecx
xorl %edi, %esi
addl 136(%esp), %ecx
roll $16, %esi
movl %edx, 220(%esp)
movl %ebx, 252(%esp)
movl 204(%esp), %ebx
movl 232(%esp), %edx
addl %esi, %ebx
addl %edx, %ecx
xorl %ebx, %ebp
movl %eax, 244(%esp)
movl 196(%esp), %eax
xorl %ecx, %eax
addl 128(%esp), %edi
roll $20, %ebp
roll $16, %eax
addl %ebp, %edi
movl %ecx, 212(%esp)
xorl %edi, %esi
movl 200(%esp), %ecx
addl %eax, %ecx
movl %edi, 216(%esp)
xorl %ecx, %edx
movl 212(%esp), %edi
addl 172(%esp), %edi
roll $20, %edx
addl %edx, %edi
xorl %edi, %eax
movl %ecx, 200(%esp)
roll $24, %eax
movl %edi, 212(%esp)
movl %ecx, %edi
addl %eax, %edi
xorl %edi, %edx
roll $25, %edx
movl %edx, 232(%esp)
movl 284(%esp), %edx
roll $24, %esi
addl 140(%esp), %edx
addl %esi, %ebx
movl %esi, 224(%esp)
xorl %ebx, %ebp
movl 260(%esp), %esi
addl %esi, %edx
xorl %edx, %eax
roll $16, %eax
addl %eax, %ebx
movl %ebx, 204(%esp)
xorl %ebx, %esi
movl 208(%esp), %ebx
addl 156(%esp), %ebx
roll $25, %ebp
addl %ebp, %ebx
movl 220(%esp), %ecx
xorl %ebx, %ecx
roll $16, %ecx
addl 176(%esp), %edx
addl %ecx, %edi
roll $20, %esi
xorl %edi, %ebp
addl %esi, %edx
xorl %edx, %eax
addl 144(%esp), %ebx
roll $20, %ebp
roll $24, %eax
addl %ebp, %ebx
movl %edx, 284(%esp)
xorl %ebx, %ecx
movl 204(%esp), %edx
addl %eax, %edx
xorl %edx, %esi
movl %edi, 200(%esp)
roll $24, %ecx
roll $25, %esi
movl %esi, 260(%esp)
movl %edi, %esi
addl %ecx, %esi
movl %ecx, 220(%esp)
xorl %esi, %ebp
movl %esi, 200(%esp)
movl 216(%esp), %esi
movl 212(%esp), %ecx
addl 152(%esp), %esi
addl 132(%esp), %ecx
roll $25, %ebp
movl %edx, 204(%esp)
movl %ebp, 228(%esp)
movl 232(%esp), %edx
addl %edx, %esi
movl 248(%esp), %ebp
addl %ebp, %ecx
movl %eax, 196(%esp)
movl %ebx, 208(%esp)
movl 252(%esp), %ebx
movl 224(%esp), %eax
xorl %esi, %ebx
xorl %ecx, %eax
roll $16, %ebx
roll $16, %eax
movl %ecx, 212(%esp)
movl 244(%esp), %edi
movl 256(%esp), %ecx
addl %ebx, %edi
addl %eax, %ecx
xorl %edi, %edx
movl %ecx, 256(%esp)
xorl %ecx, %ebp
movl 148(%esp), %ecx
roll $20, %edx
addl %ecx, %esi
addl %edx, %esi
xorl %esi, %ebx
roll $24, %ebx
addl %ebx, %edi
xorl %edi, %edx
roll $25, %edx
movl %edx, 232(%esp)
movl 212(%esp), %edx
addl 192(%esp), %edx
roll $20, %ebp
addl %ebp, %edx
xorl %edx, %eax
roll $24, %eax
movl %esi, 216(%esp)
movl 256(%esp), %esi
addl %eax, %esi
xorl %esi, %ebp
roll $25, %ebp
movl %edx, 212(%esp)
movl %eax, 224(%esp)
movl 208(%esp), %eax
addl 180(%esp), %eax
lea (%ecx,%ebp), %edx
addl 284(%esp), %edx
movl 220(%esp), %ecx
xorl %edx, %ecx
roll $16, %ecx
addl %ecx, %edi
movl %edi, 244(%esp)
xorl %edi, %ebp
movl 260(%esp), %edi
addl %edi, %eax
xorl %eax, %ebx
roll $16, %ebx
addl 156(%esp), %edx
addl %ebx, %esi
roll $20, %ebp
xorl %esi, %edi
addl %ebp, %edx
xorl %edx, %ecx
addl 172(%esp), %eax
roll $20, %edi
roll $24, %ecx
addl %edi, %eax
movl %esi, 256(%esp)
xorl %eax, %ebx
movl 244(%esp), %esi
addl %ecx, %esi
xorl %esi, %ebp
roll $24, %ebx
movl %eax, 208(%esp)
roll $25, %ebp
movl 216(%esp), %eax
movl %ebp, 248(%esp)
movl 256(%esp), %ebp
addl %ebx, %ebp
addl 188(%esp), %eax
xorl %ebp, %edi
movl %ebp, 256(%esp)
movl 228(%esp), %ebp
addl %ebp, %eax
movl %esi, 244(%esp)
roll $25, %edi
movl %edi, 260(%esp)
movl 224(%esp), %esi
movl 212(%esp), %edi
xorl %eax, %esi
addl 176(%esp), %edi
roll $16, %esi
movl %edx, 288(%esp)
movl %ebx, 252(%esp)
movl 204(%esp), %ebx
movl 232(%esp), %edx
addl %esi, %ebx
addl %edx, %edi
xorl %ebx, %ebp
movl %ecx, 220(%esp)
movl 196(%esp), %ecx
xorl %edi, %ecx
addl 136(%esp), %eax
roll $20, %ebp
roll $16, %ecx
addl %ebp, %eax
movl %edi, 212(%esp)
xorl %eax, %esi
movl 200(%esp), %edi
addl %ecx, %edi
movl %eax, 216(%esp)
xorl %edi, %edx
movl 212(%esp), %eax
addl 152(%esp), %eax
roll $20, %edx
addl %edx, %eax
xorl %eax, %ecx
movl %edi, 200(%esp)
roll $24, %ecx
movl %eax, 212(%esp)
movl %edi, %eax
addl %ecx, %eax
xorl %eax, %edx
roll $25, %edx
movl %edx, 232(%esp)
movl 288(%esp), %edx
roll $24, %esi
addl 184(%esp), %edx
addl %esi, %ebx
movl %esi, 224(%esp)
xorl %ebx, %ebp
movl 260(%esp), %esi
addl %esi, %edx
xorl %edx, %ecx
roll $16, %ecx
addl %ecx, %ebx
movl %ebx, 204(%esp)
xorl %ebx, %esi
movl 208(%esp), %ebx
addl 168(%esp), %ebx
roll $25, %ebp
addl %ebp, %ebx
addl 132(%esp), %edx
roll $20, %esi
movl 220(%esp), %edi
addl %esi, %edx
xorl %ebx, %edi
xorl %edx, %ecx
roll $16, %edi
addl %edi, %eax
roll $24, %ecx
xorl %eax, %ebp
movl %edx, 288(%esp)
movl 204(%esp), %edx
addl %ecx, %edx
addl 160(%esp), %ebx
xorl %edx, %esi
roll $20, %ebp
addl %ebp, %ebx
roll $25, %esi
xorl %ebx, %edi
movl %esi, 260(%esp)
movl 216(%esp), %esi
addl 128(%esp), %esi
movl %eax, 200(%esp)
roll $24, %edi
movl 232(%esp), %eax
addl %eax, %esi
movl %ebx, 208(%esp)
movl 200(%esp), %ebx
addl %edi, %ebx
movl %edi, 220(%esp)
xorl %ebx, %ebp
movl 252(%esp), %edi
xorl %esi, %edi
roll $16, %edi
roll $25, %ebp
movl %ebp, 228(%esp)
movl 244(%esp), %ebp
addl %edi, %ebp
xorl %ebp, %eax
addl 144(%esp), %esi
roll $20, %eax
movl %ebx, 200(%esp)
addl %eax, %esi
movl 212(%esp), %ebx
xorl %esi, %edi
addl 192(%esp), %ebx
movl %ecx, 196(%esp)
movl 248(%esp), %ecx
addl %ecx, %ebx
movl %edx, 204(%esp)
roll $24, %edi
movl 224(%esp), %edx
addl %edi, %ebp
xorl %ebx, %edx
xorl %ebp, %eax
roll $16, %edx
movl %ebx, 212(%esp)
movl 256(%esp), %ebx
addl %edx, %ebx
roll $25, %eax
xorl %ebx, %ecx
movl %eax, 232(%esp)
movl 212(%esp), %eax
addl 140(%esp), %eax
roll $20, %ecx
addl %ecx, %eax
xorl %eax, %edx
movl %ebx, 256(%esp)
roll $24, %edx
addl %edx, %ebx
xorl %ebx, %ecx
roll $25, %ecx
movl %eax, 212(%esp)
movl 192(%esp), %eax
addl %ecx, %eax
addl 288(%esp), %eax
movl %esi, 216(%esp)
movl 220(%esp), %esi
xorl %eax, %esi
roll $16, %esi
addl %esi, %ebp
movl %ebp, 244(%esp)
xorl %ebp, %ecx
movl 208(%esp), %ebp
addl 152(%esp), %ebp
movl %edx, 224(%esp)
movl 260(%esp), %edx
addl %edx, %ebp
xorl %ebp, %edi
addl 132(%esp), %eax
roll $20, %ecx
roll $16, %edi
addl %ecx, %eax
addl %edi, %ebx
xorl %eax, %esi
xorl %ebx, %edx
roll $24, %esi
addl 144(%esp), %ebp
roll $20, %edx
movl %eax, 192(%esp)
addl %edx, %ebp
movl 244(%esp), %eax
xorl %ebp, %edi
addl %esi, %eax
movl %eax, 244(%esp)
xorl %eax, %ecx
movl 216(%esp), %eax
addl 160(%esp), %eax
roll $25, %ecx
movl %ecx, 248(%esp)
roll $24, %edi
movl 228(%esp), %ecx
addl %ecx, %eax
movl %esi, 220(%esp)
addl %edi, %ebx
movl 224(%esp), %esi
xorl %ebx, %edx
xorl %eax, %esi
roll $16, %esi
movl %ebx, 256(%esp)
roll $25, %edx
movl %edx, 260(%esp)
movl 204(%esp), %ebx
movl 212(%esp), %edx
addl %esi, %ebx
addl 128(%esp), %edx
xorl %ebx, %ecx
movl %ebp, 208(%esp)
movl 232(%esp), %ebp
addl %ebp, %edx
addl 148(%esp), %eax
roll $20, %ecx
movl %edi, 252(%esp)
addl %ecx, %eax
movl 196(%esp), %edi
xorl %eax, %esi
xorl %edx, %edi
roll $16, %edi
movl %edx, 212(%esp)
movl 200(%esp), %edx
roll $24, %esi
addl %edi, %edx
movl %esi, 224(%esp)
xorl %edx, %ebp
addl %esi, %ebx
movl 212(%esp), %esi
xorl %ebx, %ecx
addl 140(%esp), %esi
roll $20, %ebp
addl %ebp, %esi
xorl %esi, %edi
roll $24, %edi
addl %edi, %edx
xorl %edx, %ebp
roll $25, %ebp
movl %ebp, 232(%esp)
movl 192(%esp), %ebp
addl 156(%esp), %ebp
movl %esi, 212(%esp)
movl 260(%esp), %esi
addl %esi, %ebp
movl %eax, 216(%esp)
xorl %ebp, %edi
movl 208(%esp), %eax
roll $16, %edi
addl 172(%esp), %eax
addl %edi, %ebx
roll $25, %ecx
xorl %ebx, %esi
addl %ecx, %eax
movl %ebx, 204(%esp)
movl 220(%esp), %ebx
xorl %eax, %ebx
roll $16, %ebx
addl %ebx, %edx
roll $20, %esi
xorl %edx, %ecx
movl %edx, 200(%esp)
movl 188(%esp), %edx
addl %esi, %edx
addl %ebp, %edx
xorl %edx, %edi
roll $24, %edi
roll $20, %ecx
movl 204(%esp), %ebp
movl %edi, 196(%esp)
addl %edi, %ebp
movl 180(%esp), %edi
xorl %ebp, %esi
addl %ecx, %edi
addl %eax, %edi
xorl %edi, %ebx
roll $24, %ebx
movl %edx, 188(%esp)
movl 216(%esp), %edx
movl 200(%esp), %eax
addl %ebx, %eax
addl 136(%esp), %edx
xorl %eax, %ecx
movl %esi, 260(%esp)
movl %ecx, 228(%esp)
movl 232(%esp), %esi
addl %esi, %edx
movl 212(%esp), %ecx
movl %eax, 200(%esp)
movl 252(%esp), %eax
addl 168(%esp), %ecx
xorl %edx, %eax
movl %edi, 180(%esp)
movl 248(%esp), %edi
addl %edi, %ecx
roll $16, %eax
movl %ebp, 204(%esp)
movl %ebx, 220(%esp)
movl 224(%esp), %ebp
movl 244(%esp), %ebx
xorl %ecx, %ebp
addl %eax, %ebx
roll $16, %ebp
xorl %ebx, %esi
movl %ecx, 212(%esp)
movl 256(%esp), %ecx
addl %ebp, %ecx
roll $20, %esi
xorl %ecx, %edi
movl %ecx, 256(%esp)
movl 184(%esp), %ecx
addl %esi, %ecx
addl %edx, %ecx
xorl %ecx, %eax
roll $24, %eax
addl %eax, %ebx
roll $20, %edi
xorl %ebx, %esi
movl %esi, 232(%esp)
movl 176(%esp), %esi
addl %edi, %esi
addl 212(%esp), %esi
xorl %esi, %ebp
roll $24, %ebp
movl 256(%esp), %edx
addl %ebp, %edx
xorl %edx, %edi
movl %ebp, 224(%esp)
roll $25, %edi
movl 188(%esp), %ebp
xorl %ebx, %ebp
movl 180(%esp), %ebx
xorl %edx, %ebx
movl 204(%esp), %edx
xorl %ecx, %edx
movl 200(%esp), %ecx
xorl 220(%esp), %edi
xorl %esi, %ecx
movl 260(%esp), %esi
roll $25, %esi
xorl %edi, 96(%esp)
xorl %eax, %esi
movl 228(%esp), %eax
movl 232(%esp), %edi
roll $25, %eax
roll $25, %edi
xorl 224(%esp), %eax
xorl 196(%esp), %edi
xorl %ebp, 124(%esp)
xorl %ebx, 84(%esp)
xorl %edx, 104(%esp)
xorl %ecx, 100(%esp)
xorl %esi, 92(%esp)
xorl %eax, 80(%esp)
xorl %edi, 76(%esp)
cmpl $64, 116(%esp)
ja blake2s_blocks_x86_20
blake2s_blocks_x86_21:
movl 124(%esp), %ebx
movl 320(%esp), %ebp
movl %ebx, (%ebp)
movl 84(%esp), %eax
movl 104(%esp), %edx
movl 100(%esp), %ebx
movl %eax, 4(%ebp)
movl %edx, 8(%ebp)
movl %ebx, 12(%ebp)
movl 108(%esp), %ecx
movl 96(%esp), %esi
movl 92(%esp), %edi
movl 80(%esp), %eax
movl 76(%esp), %edx
movl 88(%esp), %ebx
movl %esi, 16(%ebp)
movl %edi, 20(%ebp)
movl %eax, 24(%ebp)
movl %edx, 28(%ebp)
movl %ebx, 32(%ebp)
movl %ecx, 36(%ebp)
addl $300, %esp
popl %ebp
popl %ebx
popl %edi
popl %esi
ret
FN_END blake2s_blocks_x86
