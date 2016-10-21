	.data
input: .asciiz "Please type in an array size: "
value: .asciiz "Please type in a valye you want to store in array: "
space: .asciiz "\n"
end: .asciiz "The end\n"

array: .word 0:20	
	.text
main:
	li $s3,0
#---------------------------
begin:
	jal readNum
	add $t0, $v1,$0		# $t0 contains the arraysize

	add $s5,$t0,$0

	add $a1,$t0,$0
	jal verifySize
	add $t1, $v1, $0	# $t1 = 1 OK createArray, $t0= 0 go to begin again

	beq $t1,$s3,begin

	add $a1,$0,$t0		# $a1 is passed to createArray
	jal createArray

	li $v0,4
	la $a0,space
	syscall

	li $v0,1
	add $a0,$s5,$0
	syscall

	li $v0,4
	la $a0,space
	syscall

	add $v1,$0,$s5 		# pass the array size
	jal printArray

	add $a1,$0, $s5
	jal reverseArray

	li $v0,4
	la $a0,space
	syscall

	add $v1,$0,$s5 		# pass the array size
	jal printArray

	li $v0,4
	la $a0,space
	syscall

	li $v0,4
	la $a0,end
	syscall

	li $v0,10
	syscall
#---------------------------
readNum:
	li $v0,4
	la $a0,input
	syscall

	li $v0,5
	syscall
 	
 	add $v1,$0,$v0		#the user typed in is saved in $a1

	li $v0,4
	la $a0,space
	syscall

	jr $ra
#---------------------------
verifySize:
	li $t7,1			# $t7 contains 1
	li $t8,0			# $t8 contains 0
	li $t9,20			# $t9 contains 20

	add $t1, $a1,$0		# $t1 conatains the arraySize

	ble $t1, $t8, error	# $t1 <= 0 goto error
	bge $t1, $t9, error	# $t1 >= 20 go to error

	add $v1, $t7,$0		# $v1 contains 1 OK
	j done

error:
	add $v1, $t8,$0		#$v1 contans 0 ERROR
	j done

done:
	jr $ra
#---------------------------
createArray:
	add $t9,$a1,$0		# $t9 is arraySize
	li $t0,0			# $t0 is 0
	li $t1,0			# $t1 is the count
	la $t7,array 		# $t7 array address

	sub $sp,$sp,4
	sw $ra,0($sp)
	j making_array

making_array:
	beq $t1,$t9,exit
	li $t8,1

	li $v0,4
	la $a0, value
	syscall

	li $v0,5
	syscall

	add $t5,$0,$v0		#$t5 is the userinput value

	add $a1,$t5,$0
	jal checkNumPositive

	add $t3,$v1,$0 		# $t3=1 TRUE	$t3=0 FALSE

	bne $t3,$t8,making_array

	add $a1,$t5,$0
	jal divisibleByThree

	add $t3,$v1,$0 		# $t3=1 TRUE	$t3=0 FALSE

	bne $t3,$t8,making_array

	sw $t5,0($t7)

	addi $t7,$t7,4
	addi $t1,$t1,1
	j making_array

exit:
	lw $ra,0($sp)
	addi $sp,$sp,4
	jr $ra	 
#---------------------------
checkNumPositive:
	add $s1,$a1,$0		# $s1 value to verify
	li $s0,0

	sgt $s2,$s1,$s0		# $s1 > $s0
	add $v1,$s2,$0

	jr $ra
#---------------------------
divisibleByThree:
	add $s1, $a1,$0
	li $s0,3
	li $s4,0

	div $s1,$s0

	mfhi $s2

	seq $s1,$s2,$s4
	add $v1, $s1,$0

	jr $ra
#---------------------------

printArray:
	add $s6,$a1,$0	#arraySize

	li $v0,1
	add $a0,$s6,$0
	syscall

	li $v0,4
	la $a0,space
	syscall

	la $t7,array  	#pointer to pos in array
	la $s0,0		#counter

loop:
	bgt $s0,$s6,exitLoop
	lw $s1,0($t7)
	
	li $v0,1
	add $a0,$s1,$0
	syscall
	
	addi $s0,$s0,1
	addi $t7,$t7,4
	j loop
exitLoop:
	sub $sp,$sp,4
	sw $t7,0($sp)
	jr $ra	
#---------------------------
reverseArray:
	add $t1,$0,$a1		# $t1 arraySize
	li $t4,0			# $t4 count	
	li $t5,0			# $t5 temp value array
	li $t6,0			

	la $t2,array 		# $t2 firstIndexArray
	lw $t3,0($sp)		# $t3 lastIndexOfArray
	addi $sp,$sp,4


loop2:
	beq $t4,$t1,exitloop2
	lw $t5,0($t3)
	sw $t5,0($t2)

	addi $t4,$t4,1
	addi $t2,$t2,4
	sub $t3,$t3,4
	j loop2
exitloop2:
	jr $ra	























	