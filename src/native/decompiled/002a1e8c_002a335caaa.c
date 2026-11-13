#include "002a1e8c_002a335caaa.h"



undefined4 fn_002a1e8c(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 local_18;
  undefined4 local_14 [2];
  
  iVar1 = fn_00174834(DAT_008977e4);
  fn_0025bd60(*(undefined4 *)(DAT_00897804 + 8),*(undefined4 *)(iVar1 + 0x180468));
  fn_001c3550();
  iVar2 = fn_001c34d4(1);
  if ((iVar2 == 0) && (iVar2 = fn_001c34d4(0), iVar2 == 0)) {
    fn_001c249c(0);
  }
  else {
    fn_001c249c(1);
    fn_001c374c();
    if (*(char *)(iVar1 + 0x180384) != '\x01' && *(char *)(iVar1 + 0x180384) != '\x04') {
      fn_001c3d90();
    }
  }
  switch(*(undefined1 *)(iVar1 + 0x180384)) {
  case 0:
  case 1:
    iVar1 = fn_00145b00(0x34,&DAT_00812c8c);
    piVar3 = (int *)0x0;
    if (iVar1 != 0) {
      piVar3 = (int *)fn_00255934();
    }
    piVar4 = *(int **)(param_1 + 8);
    if (piVar4 == piVar3) goto switchD_002a1f1c_default;
    break;
  case 2:
    iVar1 = fn_00145b00(0x10,&DAT_00812c8c);
    piVar3 = (int *)0x0;
    if (iVar1 != 0) {
      piVar3 = (int *)fn_0026c534();
    }
    piVar4 = *(int **)(param_1 + 8);
    if (piVar4 == piVar3) goto switchD_002a1f1c_default;
    break;
  case 3:
    iVar1 = fn_00145b00(8,&DAT_00812c8c);
    piVar3 = (int *)0x0;
    if (iVar1 != 0) {
      piVar3 = (int *)fn_002a2e68();
    }
    piVar4 = *(int **)(param_1 + 8);
    if (piVar4 == piVar3) goto switchD_002a1f1c_default;
    break;
  case 4:
    iVar1 = fn_00145b00(0x18,&DAT_00812c8c);
    piVar3 = (int *)0x0;
    if (iVar1 != 0) {
      piVar3 = (int *)fn_0026bf84();
    }
    piVar4 = *(int **)(param_1 + 8);
    if (piVar4 == piVar3) goto switchD_002a1f1c_default;
    break;
  case 5:
    iVar1 = fn_00145b00(0x18,&DAT_00812c8c);
    piVar3 = (int *)0x0;
    if (iVar1 != 0) {
      piVar3 = (int *)fn_002a316c();
    }
    piVar4 = *(int **)(param_1 + 8);
    if (piVar4 == piVar3) goto switchD_002a1f1c_default;
    break;
  case 6:
  case 7:
    iVar1 = fn_00145b00(0x10,&DAT_00812c8c);
    piVar3 = (int *)0x0;
    if (iVar1 != 0) {
      piVar3 = (int *)fn_002d6328();
    }
    piVar4 = *(int **)(param_1 + 8);
    if (piVar4 == piVar3) goto switchD_002a1f1c_default;
    break;
  default:
    goto switchD_002a1f1c_default;
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  *(int **)(param_1 + 8) = piVar3;
switchD_002a1f1c_default:
  if (*(char *)(param_1 + 0xc) != '\0') {
    local_14[0] = 0;
    local_18 = 0xff000000;
    fn_0068869c(DAT_00897808,&local_18,local_14,0xf);
  }
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 8))();
    fn_001c3330();
    fn_001c3d0c();
  }
  return 1;
}


