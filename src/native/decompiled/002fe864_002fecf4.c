#include "002fe864_002fecf4.h"



undefined4 fn_002fecf4(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(param_1 + 0xc);
  uVar4 = 0;
  if ((int)(*(int *)(param_1 + 0x10) - uVar3) >> 2 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0xc) + uVar4 * 4);
      if (piVar1 != (int *)0x0) {
        uVar3 = (uint)*(byte *)(piVar1 + 0x16);
      }
      if ((piVar1 != (int *)0x0 && uVar3 != 0) &&
         (iVar2 = (**(code **)(*piVar1 + 0xbc))(piVar1,param_2), iVar2 != 0)) {
        return 1;
      }
      uVar3 = *(uint *)(param_1 + 0x10);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)((int)(uVar3 - *(int *)(param_1 + 0xc)) >> 2));
  }
  return 0;
}



void fn_002fecdc(undefined1 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_2;
  *puVar1 = param_1;
  *param_2 = puVar1 + 1;
  return;
}



int fn_002febd8(char *param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  
  pcVar5 = param_1;
  while (((uint)pcVar5 & 3) != 0) {
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
    if (cVar1 == '\0') {
      return (int)pcVar6 - (int)(param_1 + 1);
    }
  }
  do {
    pcVar6 = pcVar5 + 4;
    uVar8 = *(undefined4 *)pcVar5;
    cVar1 = UnsignedSaturate('\x01' - (char)uVar8,0x10);
    uVar2 = UnsignedSaturate('\x01' - (char)((uint)uVar8 >> 8),0x10);
    uVar3 = UnsignedSaturate('\x01' - (char)((uint)uVar8 >> 0x10),0x10);
    uVar4 = UnsignedSaturate('\x01' - (char)((uint)uVar8 >> 0x18),0x10);
    pcVar5 = pcVar6;
  } while ((((uVar4 & 0xff) == 0 && uVar3 == 0) && uVar2 == 0) && cVar1 == '\0');
  iVar7 = (int)pcVar6 - (int)(param_1 + 1);
  if (cVar1 != '\0') {
    return iVar7 + -3;
  }
  if ((uVar2 & 0xff) != 0) {
    return iVar7 + -2;
  }
  if ((uVar3 & 0xff) != 0 || uVar2 != 0) {
    iVar7 = iVar7 + -1;
  }
  return iVar7;
}



int fn_002febd0(int param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  
  pcVar5 = (char *)(param_1 + 4);
  while (((uint)pcVar5 & 3) != 0) {
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
    if (cVar1 == '\0') {
      return (int)pcVar6 - (param_1 + 5);
    }
  }
  do {
    pcVar6 = pcVar5 + 4;
    uVar8 = *(undefined4 *)pcVar5;
    cVar1 = UnsignedSaturate('\x01' - (char)uVar8,0x10);
    uVar2 = UnsignedSaturate('\x01' - (char)((uint)uVar8 >> 8),0x10);
    uVar3 = UnsignedSaturate('\x01' - (char)((uint)uVar8 >> 0x10),0x10);
    uVar4 = UnsignedSaturate('\x01' - (char)((uint)uVar8 >> 0x18),0x10);
    pcVar5 = pcVar6;
  } while ((((uVar4 & 0xff) == 0 && uVar3 == 0) && uVar2 == 0) && cVar1 == '\0');
  iVar7 = (int)pcVar6 - (param_1 + 5);
  if (cVar1 != '\0') {
    return iVar7 + -3;
  }
  if ((uVar2 & 0xff) != 0) {
    return iVar7 + -2;
  }
  if ((uVar3 & 0xff) != 0 || uVar2 != 0) {
    iVar7 = iVar7 + -1;
  }
  return iVar7;
}



undefined1 * fn_002feb78(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0x40;
  }
  else {
    iVar2 = param_2;
  }
  if (param_1 != (undefined1 *)0x0) goto LAB_002feb98;
  while( true ) {
    param_1 = (undefined1 *)fn_002fec38(iVar2);
LAB_002feb98:
    iVar1 = fn_00100b6c(param_1,iVar2,param_3,param_4);
    if (iVar1 < 0) {
      *param_1 = 0;
      return param_1;
    }
    if (iVar2 < iVar1) {
      iVar2 = iVar1 + 1;
    }
    else {
      if (iVar2 != iVar1) {
        return param_1;
      }
      iVar2 = iVar2 << 1;
    }
    if (param_2 != 0) break;
    fn_002feca8(param_1);
  }
  return (undefined1 *)0x0;
}



void fn_002feca8(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 == 0) {
    return;
  }
  if (DAT_0089a508 == '\0') {
    return;
  }
  iVar1 = fn_00124ffc();
  fn_0014e774(*(undefined4 *)(iVar1 + 4),param_1);
  piVar2 = (int *)fn_00124ffc();
                    /* WARNING: Could not recover jumptable at 0x00143b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 4))(piVar2,param_1);
  return;
}



void fn_002feac8(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  
  puVar6 = (uint *)(param_1 + 0x24);
  iVar1 = (int)(*(int *)(param_1 + 0x28) - *puVar6) >> 2;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*puVar6 + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xa4))();
      piVar7 = (int *)(*puVar6 + iVar1 * 4);
      piVar2 = (int *)*piVar7;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
      *piVar7 = 0;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x28);
  uVar5 = *puVar6;
  if (uVar5 != uVar4) {
    uVar3 = uVar5;
    if (uVar4 <= uVar5) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != uVar4);
    }
    *(uint *)(param_1 + 0x28) = uVar4 - (uVar4 - uVar5 & 0xfffffffc);
  }
  return;
}



undefined4 fn_002fea88(undefined2 *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)fn_002fea64();
  iVar3 = *piVar1;
  if (*(char *)(iVar3 + 0x101) == '\x01') {
    uVar2 = (*(code *)(iVar3 + *(int *)(iVar3 + 0x103) + 0x103))(param_1,param_2,param_3);
    return uVar2;
  }
  if (*(char *)(iVar3 + param_2) == '\0') {
    return 0xffffffff;
  }
  *param_1 = (short)param_2;
  return 1;
}



int fn_002fea7a(undefined4 param_1,int param_2)

{
  return param_2 * 8 + 0x8f9ca0;
}



int fn_002fea64(void)

{
  int iVar1;
  
  iVar1 = fn_00300190();
  return iVar1 + 4;
}



void fn_002fe864(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(char *)(DAT_008977e0 + 0x170) != '\0') {
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 4) + 0xac))();
    }
    if (*(int **)(param_1 + 8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 8) + 0xac))();
    }
    uVar2 = *(uint *)(param_1 + 0xc);
    uVar3 = 0;
    if ((int)(*(int *)(param_1 + 0x10) - uVar2) >> 2 != 0) {
      do {
        piVar1 = *(int **)(uVar2 + uVar3 * 4);
        if (piVar1 != (int *)0x0) {
          uVar2 = (uint)*(byte *)(piVar1 + 0x16);
        }
        if (piVar1 != (int *)0x0 && uVar2 != 0) {
          (**(code **)(*piVar1 + 0xac))();
        }
        uVar2 = *(uint *)(param_1 + 0xc);
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)((int)(*(int *)(param_1 + 0x10) - uVar2) >> 2));
    }
    piVar1 = (int *)fn_006f7508(DAT_008977e0);
    (**(code **)(*piVar1 + 0x3c))();
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar3 = 0;
    if ((int)(*(int *)(param_1 + 0x1c) - uVar2) >> 2 != 0) {
      do {
        piVar1 = *(int **)(uVar2 + uVar3 * 4);
        if (piVar1 != (int *)0x0) {
          uVar2 = (uint)*(byte *)(piVar1 + 0x16);
        }
        if (piVar1 != (int *)0x0 && uVar2 != 0) {
          (**(code **)(*piVar1 + 0xac))();
        }
        uVar2 = *(uint *)(param_1 + 0x18);
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)((int)(*(int *)(param_1 + 0x1c) - uVar2) >> 2));
    }
    fn_00423e58(*(undefined4 *)(param_1 + 0x60));
    uVar2 = *(uint *)(param_1 + 0x24);
    uVar3 = 0;
    if ((int)(*(int *)(param_1 + 0x28) - uVar2) >> 2 != 0) {
      do {
        piVar1 = *(int **)(uVar2 + uVar3 * 4);
        if (piVar1 != (int *)0x0) {
          uVar2 = (uint)*(byte *)(piVar1 + 0x16);
        }
        if (piVar1 != (int *)0x0 && uVar2 != 0) {
          (**(code **)(*piVar1 + 0xac))();
        }
        uVar2 = *(uint *)(param_1 + 0x24);
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)((int)(*(int *)(param_1 + 0x28) - uVar2) >> 2));
    }
    uVar2 = *(uint *)(param_1 + 0x30);
    uVar3 = 0;
    if ((int)(*(int *)(param_1 + 0x34) - uVar2) >> 2 != 0) {
      do {
        piVar1 = *(int **)(uVar2 + uVar3 * 4);
        if (piVar1 != (int *)0x0) {
          uVar2 = (uint)*(byte *)(piVar1 + 0x16);
        }
        if (piVar1 != (int *)0x0 && uVar2 != 0) {
          (**(code **)(*piVar1 + 0xac))();
        }
        uVar2 = *(uint *)(param_1 + 0x30);
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)((int)(*(int *)(param_1 + 0x34) - uVar2) >> 2));
    }
    uVar2 = *(uint *)(param_1 + 0x3c);
    uVar3 = 0;
    if ((int)(*(int *)(param_1 + 0x40) - uVar2) >> 2 != 0) {
      do {
        piVar1 = *(int **)(uVar2 + uVar3 * 4);
        if (piVar1 != (int *)0x0) {
          uVar2 = (uint)*(byte *)(piVar1 + 0x16);
        }
        if (piVar1 != (int *)0x0 && uVar2 != 0) {
          (**(code **)(*piVar1 + 0xac))();
        }
        uVar2 = *(uint *)(param_1 + 0x3c);
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)((int)(*(int *)(param_1 + 0x40) - uVar2) >> 2));
    }
  }
  return;
}


