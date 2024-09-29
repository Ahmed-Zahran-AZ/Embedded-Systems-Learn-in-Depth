.section .vectors

.word 0x20001000 /*Stack top*/
.word _reset
.word Vector_handler            /*2-NMI FAULT HANDLER*/
.word Vector_handler            /*3-HARD FAULT HANDLER*/
.word Vector_handler            /*......*/
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler
.word Vector_handler


.section .text

_reset:
  bl main
  b .         /*Indefinite loop*/

.thumb_func
Vector_handler:
  b _reset
