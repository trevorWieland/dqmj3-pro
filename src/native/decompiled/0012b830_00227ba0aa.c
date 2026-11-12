#include "0012b830_00227ba0aa.h"



void fn_0012b830(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (DAT_008e3078 != '\0') {
    fn_001464f4();
    fn_00146050();
    fn_00145c5c();
    fn_001463c0();
    fn_00145b08();
    fn_00146034();
    DAT_008e3078 = '\0';
    fn_001502b0();
    iVar3 = 0;
    do {
      puVar2 = (undefined4 *)(&DAT_008e3084)[iVar3];
joined_r0x0012b880:
      puVar1 = puVar2;
      if (puVar1 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)puVar1[0x10];
        if (puVar1[1] != 0) goto code_r0x0012b894;
        goto LAB_0012b8b0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x20);
    iVar3 = 0;
    do {
      puVar2 = (undefined4 *)(&DAT_008e310c)[iVar3];
joined_r0x0012b8f4:
      puVar1 = puVar2;
      if (puVar1 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)puVar1[6];
        if (puVar1[1] != 0) goto code_r0x0012b908;
        goto LAB_0012b924;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x20);
    if (DAT_0089a524 != (code *)0x0) {
      (*DAT_0089a524)(0x10000,0x100,0,DAT_0089a530);
    }
    DAT_0089a530 = 0;
    DAT_0089a520 = 0;
    DAT_0089a524 = (code *)0x0;
  }
  return;
code_r0x0012b894:
  if (DAT_0089a524 != (code *)0x0) {
    (*DAT_0089a524)(0x10000,0x105,*puVar1);
LAB_0012b8b0:
    if (DAT_0089a524 != (code *)0x0) {
      (*DAT_0089a524)(0x10000,0x100,0,puVar1);
    }
  }
  goto joined_r0x0012b880;
code_r0x0012b908:
  if (DAT_0089a524 != (code *)0x0) {
    (*DAT_0089a524)(puVar1[5],0x104,*puVar1);
LAB_0012b924:
    if (DAT_0089a524 != (code *)0x0) {
      (*DAT_0089a524)(0x10000,0x100,0,puVar1);
    }
  }
  goto joined_r0x0012b8f4;
}


