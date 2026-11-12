#include "005f7244_005f8104a.h"



void fn_005f7974(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x34,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005f79a4(iVar1,param_1);
  return;
}



int fn_005f777c(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float in_s0;
  
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0;
  uVar1 = fn_0016dd18(param_2,10);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  if (param_3 == 0) {
    uVar1 = fn_0016dcdc(param_2,uVar1,0x11,1,1,(&DAT_007ba860)[(int)in_s0]);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
  }
  else {
    uVar1 = fn_0016dcdc(param_2,uVar1,0x11,1,1,4);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
  }
  uVar1 = fn_00178f9c(param_2,uVar1);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = fn_0017dd54(uVar1,(char *)&DAT_0085c46c,1);
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  do {
    *(undefined4 *)(param_1 + uVar6 * 4) = 0;
    *(undefined1 *)(param_1 + uVar6 + 0x28) = 0;
    uVar7 = uVar6 & 0xff;
    piVar2 = *(int **)(*(int *)(param_1 + 0x14) + 0x10);
    piVar2 = (int *)(**(code **)(*piVar2 + 0x2c))(piVar2,(&DAT_007ba864)[uVar7],1);
    if (piVar2 != (int *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
      do {
        if (puVar3 == &DAT_0089a92c) goto LAB_005f78ac;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    piVar2 = (int *)0x0;
LAB_005f78ac:
    piVar4 = *(int **)(*(int *)(param_1 + 0x14) + 0x10);
    iVar5 = (**(code **)(*piVar4 + 0x2c))(piVar4,(&PTR_s_Null_corner_size_007ba878)[uVar7],1);
    *(byte *)(piVar2 + 0x11) = *(byte *)(piVar2 + 0x11) & 0xfe;
    *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe;
    puVar3 = (undefined4 *)fn_00145b00(8,&DAT_00812c8c);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
    }
    *puVar3 = piVar2;
    puVar3[1] = iVar5;
    uVar6 = uVar6 + 1;
    *(undefined4 **)(param_1 + uVar7 * 4) = puVar3;
    if (4 < uVar6) {
      if (param_3 == 0) {
        (**(code **)(**(int **)(param_1 + 0x20) + 0x5c))();
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x20) + 0x68))();
      }
      *(undefined4 *)(param_1 + 0x30) = param_2;
      return param_1;
    }
  } while( true );
}



void fn_005f7320(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  switch(param_2) {
  case 0:
  case 7:
    *(byte *)(**(int **)(param_1 + 4) + 0x44) = *(byte *)(**(int **)(param_1 + 4) + 0x44) & 0xfe | 1
    ;
    *(byte *)(**(int **)(param_1 + 0x10) + 0x44) =
         *(byte *)(**(int **)(param_1 + 0x10) + 0x44) & 0xfe | 1;
    *(undefined1 *)(param_1 + 0x29) = 1;
    goto LAB_005f745c;
  case 1:
  case 6:
    if ((param_4 & ~param_3) != 0) {
      *(byte *)(**(int **)(param_1 + 0xc) + 0x44) =
           *(byte *)(**(int **)(param_1 + 0xc) + 0x44) & 0xfe | 1;
      *(undefined1 *)(param_1 + 0x2b) = 1;
    }
    *(byte *)(**(int **)(param_1 + 8) + 0x44) = *(byte *)(**(int **)(param_1 + 8) + 0x44) & 0xfe | 1
    ;
    *(byte *)(**(int **)(param_1 + 0x10) + 0x44) =
         *(byte *)(**(int **)(param_1 + 0x10) + 0x44) & 0xfe | 1;
    *(undefined1 *)(param_1 + 0x2a) = 1;
    *(undefined1 *)(param_1 + 0x2c) = 1;
    break;
  case 2:
    *(byte *)(**(int **)(param_1 + 4) + 0x44) = *(byte *)(**(int **)(param_1 + 4) + 0x44) & 0xfe | 1
    ;
    *(byte *)(**(int **)(param_1 + 8) + 0x44) = *(byte *)(**(int **)(param_1 + 8) + 0x44) & 0xfe | 1
    ;
    *(byte *)(**(int **)(param_1 + 0x10) + 0x44) =
         *(byte *)(**(int **)(param_1 + 0x10) + 0x44) & 0xfe | 1;
    *(undefined1 *)(param_1 + 0x29) = 1;
    *(undefined1 *)(param_1 + 0x2a) = 1;
LAB_005f745c:
    *(undefined1 *)(param_1 + 0x2c) = 1;
    return;
  case 3:
    *(byte *)(**(int **)(param_1 + 4) + 0x44) = *(byte *)(**(int **)(param_1 + 4) + 0x44) & 0xfe | 1
    ;
    *(byte *)(**(int **)(param_1 + 0xc) + 0x44) =
         *(byte *)(**(int **)(param_1 + 0xc) + 0x44) & 0xfe | 1;
    *(undefined1 *)(param_1 + 0x29) = 1;
    *(undefined1 *)(param_1 + 0x2b) = 1;
    if ((param_3 & param_4) != 0) {
      *(byte *)(**(int **)(param_1 + 0x10) + 0x44) =
           *(byte *)(**(int **)(param_1 + 0x10) + 0x44) & 0xfe | 1;
      *(undefined1 *)(param_1 + 0x2c) = 1;
      return;
    }
    break;
  case 4:
    *(byte *)(**(int **)(param_1 + 8) + 0x44) = *(byte *)(**(int **)(param_1 + 8) + 0x44) & 0xfe | 1
    ;
    *(byte *)(**(int **)(param_1 + 0xc) + 0x44) =
         *(byte *)(**(int **)(param_1 + 0xc) + 0x44) & 0xfe | 1;
    *(undefined1 *)(param_1 + 0x2a) = 1;
    *(undefined1 *)(param_1 + 0x2b) = 1;
    return;
  case 5:
    if (param_4 == 0) {
      *(byte *)(**(int **)(param_1 + 4) + 0x44) =
           *(byte *)(**(int **)(param_1 + 4) + 0x44) & 0xfe | 1;
      *(undefined1 *)(param_1 + 0x29) = 1;
    }
    else {
      *(byte *)(**(int **)(param_1 + 0x10) + 0x44) =
           *(byte *)(**(int **)(param_1 + 0x10) + 0x44) & 0xfe | 1;
      *(undefined1 *)(param_1 + 0x2c) = 1;
    }
    if (param_3 == 0) {
      *(byte *)(**(int **)(param_1 + 0x10) + 0x44) =
           *(byte *)(**(int **)(param_1 + 0x10) + 0x44) & 0xfe | 1;
      *(undefined1 *)(param_1 + 0x2c) = 1;
    }
    else {
      *(byte *)(**(int **)(param_1 + 0xc) + 0x44) =
           *(byte *)(**(int **)(param_1 + 0xc) + 0x44) & 0xfe | 1;
      *(undefined1 *)(param_1 + 0x2b) = 1;
    }
    *(byte *)(**(int **)(param_1 + 8) + 0x44) = *(byte *)(**(int **)(param_1 + 8) + 0x44) & 0xfe | 1
    ;
    *(undefined1 *)(param_1 + 0x2a) = 1;
    return;
  case 8:
    if (param_4 != 0) {
      *(byte *)(**(int **)(param_1 + 0xc) + 0x44) =
           *(byte *)(**(int **)(param_1 + 0xc) + 0x44) & 0xfe | 1;
      *(undefined1 *)(param_1 + 0x2b) = 1;
    }
    *(byte *)(**(int **)(param_1 + 0x10) + 0x44) =
         *(byte *)(**(int **)(param_1 + 0x10) + 0x44) & 0xfe | 1;
    *(undefined1 *)(param_1 + 0x2c) = 1;
    return;
  case 9:
    if (param_4 != 0) {
      *(byte *)(**(int **)(param_1 + 0xc) + 0x44) =
           *(byte *)(**(int **)(param_1 + 0xc) + 0x44) & 0xfe | 1;
      *(undefined1 *)(param_1 + 0x2b) = 1;
    }
    *(byte *)(**(int **)(param_1 + 0x10) + 0x44) =
         *(byte *)(**(int **)(param_1 + 0x10) + 0x44) & 0xfe | 1;
    *(byte *)(**(int **)(param_1 + 8) + 0x44) = *(byte *)(**(int **)(param_1 + 8) + 0x44) & 0xfe | 1
    ;
    *(byte *)(**(int **)(param_1 + 4) + 0x44) = *(byte *)(**(int **)(param_1 + 4) + 0x44) & 0xfe | 1
    ;
    *(undefined1 *)(param_1 + 0x2c) = 1;
    *(undefined1 *)(param_1 + 0x2a) = 1;
    goto LAB_005f7770;
  case 10:
    if (param_4 != 0) {
      *(byte *)(**(int **)(param_1 + 0xc) + 0x44) =
           *(byte *)(**(int **)(param_1 + 0xc) + 0x44) & 0xfe | 1;
      *(undefined1 *)(param_1 + 0x2b) = 1;
    }
    *(byte *)(**(int **)(param_1 + 0x10) + 0x44) =
         *(byte *)(**(int **)(param_1 + 0x10) + 0x44) & 0xfe | 1;
    *(byte *)(**(int **)(param_1 + 8) + 0x44) = *(byte *)(**(int **)(param_1 + 8) + 0x44) & 0xfe | 1
    ;
    *(undefined1 *)(param_1 + 0x2c) = 1;
    *(undefined1 *)(param_1 + 0x2a) = 1;
    return;
  case 0xb:
    if (param_4 != 0) {
      *(byte *)(**(int **)(param_1 + 0xc) + 0x44) =
           *(byte *)(**(int **)(param_1 + 0xc) + 0x44) & 0xfe | 1;
      *(undefined1 *)(param_1 + 0x2b) = 1;
    }
    *(byte *)(**(int **)(param_1 + 0x10) + 0x44) =
         *(byte *)(**(int **)(param_1 + 0x10) + 0x44) & 0xfe | 1;
    *(byte *)(**(int **)(param_1 + 4) + 0x44) = *(byte *)(**(int **)(param_1 + 4) + 0x44) & 0xfe | 1
    ;
    *(undefined1 *)(param_1 + 0x2c) = 1;
LAB_005f7770:
    *(undefined1 *)(param_1 + 0x29) = 1;
    return;
  }
  return;
}



void fn_005f729c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar3 = *(int *)(*(int *)*param_1 + 0xc);
  fn_001781f0(&local_40,iVar3 + 0x48);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(undefined4 *)(iVar3 + 0x48) = local_40;
  *(undefined4 *)(iVar3 + 0x4c) = uStack_3c;
  *(undefined4 *)(iVar3 + 0x50) = uStack_38;
  *(undefined4 *)(iVar3 + 0x54) = uVar1;
  *(undefined4 *)(iVar3 + 0x58) = uStack_30;
  *(undefined4 *)(iVar3 + 0x5c) = uStack_2c;
  *(undefined4 *)(iVar3 + 0x60) = uStack_28;
  *(undefined4 *)(iVar3 + 100) = uVar2;
  *(undefined4 *)(iVar3 + 0x68) = local_20;
  *(undefined4 *)(iVar3 + 0x6c) = uStack_1c;
  *(undefined4 *)(iVar3 + 0x70) = uStack_18;
  *(undefined4 *)(iVar3 + 0x74) = uStack_14;
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xbf | 0x40;
  *(byte *)(*(int *)*param_1 + 0x44) = *(byte *)(*(int *)*param_1 + 0x44) & 0xfe | 1;
  return;
}



void fn_005f7244(int param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = 0;
  do {
    if (*(char *)(param_1 + uVar1 + 0x28) != '\0') {
      piVar3 = *(int **)(param_1 + uVar1 * 4);
      iVar2 = *piVar3;
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | param_2;
      iVar2 = piVar3[1];
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | param_2;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 5);
  return;
}


