#include "0043c398_0043c598.h"



void fn_0043c598(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  puVar1[0x3a] = 0;
  *puVar1 = &DAT_0083cca0;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  puVar1[0x46] = 0;
  puVar1[0x47] = 0;
  *(undefined1 *)(puVar1 + 0x48) = 0;
  puVar1[0x3d] = 0;
  puVar1[0x3e] = 0;
  puVar1[0x3f] = 0;
  puVar1[0x40] = 0;
  puVar1[0x41] = 0;
  puVar1[0x42] = 0;
  puVar1[0x43] = 0;
  puVar1[0x44] = 0;
  puVar1[0x45] = 0;
  return;
}



void fn_0043c4f4(int param_1)

{
  char cVar1;
  
  fn_003979f0();
  cVar1 = *(char *)(param_1 + 0x120);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      *(undefined1 *)(*(int *)(param_1 + 0xe4) + 0xc) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x14) = *(undefined4 *)(param_1 + 0x11c);
      *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x1c) =
           *(undefined4 *)(param_1 + *(int *)(param_1 + 0x11c) * 4 + 0xf4);
      if (*(int *)(*(int *)(param_1 + 0xe4) + 0x10) == 0) {
        fn_006899f4(param_1,0xa1,0);
        return;
      }
      fn_006899f4(param_1,0xa2,0);
      return;
    }
    if (cVar1 == '\x02') {
      fn_006899f4(param_1,0x9f,0);
      return;
    }
  }
  return;
}



void fn_0043c398(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short local_50 [16];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  if (*(int *)(*(int *)(param_1 + 0xe4) + 0x10) == 0) {
LAB_0043c42c:
    *(int *)(param_1 + 0x11c) = param_2;
    fn_00689824(param_1,0);
    *(undefined1 *)(param_1 + 0x120) = 1;
    fn_0068ab44(param_1,0x100094b);
    return;
  }
  fn_0020bbc4(auStack_30,*(undefined4 *)(param_1 + param_2 * 4 + 0xf4));
  iVar2 = fn_006c02d4(auStack_2c,local_50,7);
  iVar6 = 0;
  if (0 < iVar2) {
    do {
      sVar1 = local_50[iVar6 * 2];
      iVar3 = fn_0068f708((int)sVar1,local_50[iVar6 * 2 + 1]);
      iVar5 = 0;
      if (0 < iVar3) {
        do {
          iVar4 = fn_0068f7c4((int)sVar1,iVar5 + 1U & 0xff);
          if (iVar4 != 0) goto LAB_0043c42c;
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar3);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  fn_0068ab44(param_1,0x100094d);
  return;
}


