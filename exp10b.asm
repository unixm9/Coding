PRINT MACRO MES
MOV AH,09H
LEA DX,MES
INT 21H
ENDM
.model small
.DATA
MSG1 DB 10,13,"ENTER FIRST STR:$"
MSG2 DB 10,13,"ENTER SECOND STR:$"
MSG3 DB 10,13,"EQUAL STRING$"
MSG4 DB 10,13,"UNEQUAL STRING$"
STR1 DB 25 DUP('$')
STR2 DB 25 DUP('$')
.CODE
START: MOV AX, @DATA
MOV DS, AX
MOV ES, AX
PRINT MSG1
MOV AH, 0AH ; GET FIRST STRING
LEA DX, STR1
INT 21H
LEA SI, STR1 ; SI POINT TO STR1
PRINT MSG2
MOV AH, 0AH ; GET SECOND STRING
LEA DX, STR2
INT 21H
LEA DI, STR2 ; DI POINT TO STR2
MOV CL, STR1+1 ; LENGTH OF STR1
MOV CH, STR2+1 ; LENGTH OF STR2
CMP CH, CL ; CMPARE LENGTH
JNZ UNEQUAL
MOV CH, 00H ; MAKE CX=STRLEN BY MAKING CH=0
CLD
REPE CMPSB

JNZ UNEQUAL
PRINT MSG3 ; EUAL STRING
JMP QUIT
UNEQUAL: PRINT MSG4 ; STRING UNEUAL
QUIT: MOV AH,4CH
INT 21H
END START
