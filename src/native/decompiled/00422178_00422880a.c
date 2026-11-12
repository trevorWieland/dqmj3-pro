#include "00422178_00422880a.h"



void fn_004224ac(int param_1)

{
  uint uVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  fn_0038d4c4(*(undefined4 *)(param_1 + 4),0,(int)*(char *)(param_1 + 0x22));
  iVar2 = *(int *)(param_1 + 4);
  uVar1 = (uint)*(char *)(param_1 + 0x14);
  if ((uint)(*(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18) >> 2) <= uVar1) {
    fn_002ff628(9,&DAT_008c765f,&DAT_008c765f,uVar1);
  }
  fn_0025e7cc(*(undefined4 *)(param_1 + 0x34),**(int **)(*(int *)(iVar2 + 0x18) + uVar1 * 4) + 0x1c
              );
  return;
}



void fn_004223f4(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = fn_00174828(DAT_008977e4);
  cVar1 = *(char *)(iVar2 + *param_2 * 0x418 + -0x4026);
  *(char *)(param_1 + 0x16) = cVar1;
  *(char *)(param_1 + 0x15) = cVar1;
  *(char *)(param_1 + 0x14) = cVar1;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  fn_0038d4c4(*(undefined4 *)(param_1 + 4),(int)cVar1,(int)*(char *)(param_1 + 0x22));
  iVar2 = *(int *)(param_1 + 4);
  uVar3 = (uint)*(char *)(param_1 + 0x14);
  if ((uint)(*(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18) >> 2) <= uVar3) {
    fn_002ff628(9,&DAT_008c765f,&DAT_008c765f,uVar3);
  }
  fn_0025e7cc(*(undefined4 *)(param_1 + 0x34),**(int **)(*(int *)(iVar2 + 0x18) + uVar3 * 4) + 0x1c
              );
  return;
}



void fn_0042238c(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x60) != -1) {
    fn_0016a43c(param_2);
    *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  }
  return;
}



void fn_0042223c(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  cVar1 = *(char *)(param_1 + 0x7a);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      uVar2 = (uint)*(char *)(param_1 + 0x78);
      if ((uVar2 == 0xffffffff) || (*(float *)(*(int *)(param_1 + uVar2 * 4 + 0x68) + 0x24) == 0.0))
      {
        if (uVar2 < 4) {
          fn_00190cdc(*(undefined4 *)(param_1 + uVar2 * 4 + 0x68),0);
        }
        *(undefined1 *)(param_1 + 0x78) = 0xff;
        fn_00190e00(*(undefined4 *)(param_1 + 0x6c));
        *(undefined1 *)(param_1 + 0x78) = 1;
        *(undefined1 *)(param_1 + 0x7a) = 2;
      }
      cVar1 = *(char *)(param_1 + 0x78);
    }
    else {
      if (cVar1 == '\x02') {
        uVar2 = (uint)*(char *)(param_1 + 0x78);
        if ((uVar2 == 0xffffffff) ||
           (*(float *)(*(int *)(param_1 + uVar2 * 4 + 0x68) + 0x24) == 0.0)) {
          if (uVar2 < 4) {
            fn_00190cdc(*(undefined4 *)(param_1 + uVar2 * 4 + 0x68),0);
          }
          *(undefined1 *)(param_1 + 0x78) = 0xff;
          fn_00190e00(*(undefined4 *)(param_1 + 0x70));
          *(undefined1 *)(param_1 + 0x78) = 2;
          *(undefined1 *)(param_1 + 0x7a) = 3;
        }
        iVar3 = (int)*(char *)(param_1 + 0x78);
        if (iVar3 == -1) {
          return;
        }
        goto LAB_00422284;
      }
      if (cVar1 != '\x03') {
        return;
      }
      cVar1 = *(char *)(param_1 + 0x78);
    }
    iVar3 = (int)cVar1;
    if (iVar3 != -1) {
LAB_00422284:
                    /* WARNING: Could not recover jumptable at 0x004222a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + iVar3 * 4 + 0x68) + 0xc))();
      return;
    }
  }
  return;
}



void fn_00422214(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  iVar1 = *(int *)(*(int *)(param_1 + 100) + 0x10);
  *(undefined4 *)(iVar1 + 0x1c) = *param_2;
  *(undefined4 *)(iVar1 + 0x20) = uVar2;
  *(undefined4 *)(iVar1 + 0x24) = uVar3;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  return;
}



void fn_004221b0(int param_1)

{
  int iVar1;
  
  if ((uint)(int)*(char *)(param_1 + 0x78) < 4) {
    fn_00190cdc(*(undefined4 *)(param_1 + *(char *)(param_1 + 0x78) * 4 + 0x68),0);
  }
  *(undefined1 *)(param_1 + 0x78) = 0xff;
  iVar1 = *(int *)(param_1 + (uint)*(byte *)(param_1 + 0x7b) * 0x20 + 0x18);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  iVar1 = *(int *)(*(int *)(param_1 + 100) + 0x10);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  return;
}



void fn_00422178(int param_1)

{
  if (*(char *)(param_1 + 0x79) != '\0') {
    fn_00190e00(*(undefined4 *)(param_1 + 0x68));
    *(undefined1 *)(param_1 + 0x78) = 0;
    *(undefined1 *)(param_1 + 0x7a) = 1;
  }
  return;
}


