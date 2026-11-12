#include "0022e488_0022eb34.h"



int fn_0022eb34(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = fn_00101160(param_1,&DAT_0022eb74); iVar1 != 0;
      iVar1 = fn_00101160(iVar1 + 2,&DAT_0022eb74)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2 + 1;
}



void fn_0022eb14(undefined4 *param_1,int param_2)

{
  fn_0076410c(*param_1,param_1[1],*(undefined4 *)(&DAT_007c7ddc + param_2 * 4));
  return;
}



void fn_0022e8c4(undefined4 param_1,uint *param_2,int param_3)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  uint uVar8;
  undefined4 unaff_r4;
  int iVar9;
  uint uVar10;
  short *psVar11;
  undefined4 in_lr;
  
  iVar9 = 1;
  iVar2 = fn_0068f7e4();
  if (1 < iVar2) {
    do {
      sVar1 = (short)iVar9;
      iVar2 = fn_0068f6a8();
      if (iVar2 != 0) {
        uVar3 = fn_0068f654((int)sVar1);
        uVar10 = 1;
        if (uVar3 != 0) {
          do {
            iVar2 = fn_0068f7c4((int)sVar1,uVar10);
            if (iVar2 == param_3) {
              psVar11 = (short *)param_2[1];
              if (psVar11 == (short *)param_2[2]) {
                uVar3 = (int)((int)psVar11 - *param_2) >> 1;
                if (uVar3 < (uint)((int)((int)param_2[2] - *param_2) >> 1)) {
                  param_2[1] = (uint)(psVar11 + 1);
                  if (psVar11 != (short *)0x0) {
                    *psVar11 = psVar11[-1];
                  }
                  psVar6 = psVar11 + -1;
                  psVar7 = psVar11;
                  if (psVar11 < psVar6) {
                    iVar2 = (int)psVar6 - (int)psVar11;
                    if (0 < iVar2) {
                      if (iVar2 * 0x40000000 < 0) {
                        psVar6 = psVar11 + -2;
                        psVar7 = psVar11 + -1;
                        *psVar7 = *psVar6;
                      }
                      for (iVar2 = iVar2 >> 2; iVar2 != 0; iVar2 = iVar2 + -1) {
                        psVar7[-1] = psVar6[-1];
                        psVar6 = psVar6 + -2;
                        psVar7 = psVar7 + -2;
                        *psVar7 = *psVar6;
                      }
                    }
                  }
                  else {
                    while (psVar11 != psVar6) {
                      psVar6 = psVar6 + -1;
                      psVar7[-1] = *psVar6;
                      psVar7 = psVar7 + -1;
                    }
                  }
                  *psVar11 = sVar1;
                }
                else {
                  uVar10 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
                  if (uVar10 < uVar3 + 0x20) {
                    uVar10 = uVar3 + 0x20;
                  }
                  psVar4 = (short *)fn_00100fc6(uVar10 << 1,0);
                  psVar7 = psVar4;
                  for (psVar6 = (short *)*param_2; psVar6 != psVar11; psVar6 = psVar6 + 1) {
                    if (psVar7 != (short *)0x0) {
                      *psVar7 = *psVar6;
                    }
                    psVar7 = psVar7 + 1;
                  }
                  psVar6 = (short *)(((int)psVar11 - *param_2 & 0xfffffffe) + (int)psVar4);
                  if (psVar6 != (short *)0x0) {
                    *psVar6 = sVar1;
                  }
                  psVar7 = (short *)param_2[1];
                  psVar6 = (short *)(((int)psVar11 - *param_2 & 0xfffffffe) + (int)psVar4);
                  for (; psVar11 != psVar7; psVar11 = psVar11 + 1) {
                    psVar6 = psVar6 + 1;
                    if (psVar6 != (short *)0x0) {
                      *psVar6 = *psVar11;
                    }
                  }
                  uVar5 = *param_2;
                  uVar8 = param_2[1];
                  uVar3 = uVar5;
                  if (uVar8 < uVar5) {
                    do {
                      uVar3 = uVar3 + 2;
                    } while (uVar3 != uVar8);
                  }
                  fn_001008c4(uVar5,(int)(param_2[2] - uVar5) >> 1,0);
                  param_2[2] = (uint)(psVar4 + uVar10);
                  param_2[1] = (uint)(psVar4 + ((int)(uVar8 - uVar5) >> 1) + 1);
                  *param_2 = (uint)psVar4;
                }
              }
              else {
                param_2[1] = (uint)(psVar11 + 1);
                if (psVar11 != (short *)0x0) {
                  *psVar11 = sVar1;
                }
              }
              break;
            }
            uVar10 = uVar10 + 1 & 0xff;
          } while (uVar10 <= uVar3);
        }
      }
      iVar9 = (int)(short)(sVar1 + 1);
      iVar2 = fn_0068f7e4();
    } while (iVar9 < iVar2);
  }
  fn_0076410c(*param_2,param_2[1],fn_00600538,&DAT_007c7ddc,unaff_r4,in_lr);
  return;
}



void fn_0022e7e8(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar7 = (undefined4 *)*param_1;
  puVar8 = (undefined4 *)param_1[1];
  pcVar9 = (code *)(&PTR_FUN_007c7e1c)[param_2];
  if (puVar7 != puVar8) {
    fn_007a7d24(puVar7,puVar8,(int)puVar8 - (int)puVar7 >> 4,pcVar9);
    if ((int)puVar8 - (int)puVar7 < 0x101) {
      fn_007a29d0(puVar7,puVar8,pcVar9);
      return;
    }
    fn_007a29d0(puVar7,puVar7 + 0x40,pcVar9);
    for (puVar7 = puVar7 + 0x40; puVar7 != puVar8; puVar7 = puVar7 + 4) {
      local_30 = *puVar7;
      uStack_2c = puVar7[1];
      uStack_28 = puVar7[2];
      uStack_24 = puVar7[3];
      iVar4 = (*pcVar9)(&local_30);
      puVar3 = puVar7 + -4;
      puVar2 = puVar7;
      while (puVar1 = puVar3, iVar4 != 0) {
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar10 = puVar1[3];
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar10;
        iVar4 = (*pcVar9)(&local_30,puVar1 + -4);
        puVar3 = puVar1 + -4;
        puVar2 = puVar1;
      }
      *puVar2 = local_30;
      puVar2[1] = uStack_2c;
      puVar2[2] = uStack_28;
      puVar2[3] = uStack_24;
    }
  }
  return;
}



void fn_0022e4e4(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  code *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_30;
  undefined4 local_2c;
  
  puVar7 = (undefined4 *)*param_1;
  puVar8 = (undefined4 *)param_1[1];
  pcVar6 = *(code **)(&DAT_007c7da0 + param_2 * 4);
  if (puVar7 != puVar8) {
    fn_007a9718(puVar7,puVar8,(int)puVar8 - (int)puVar7 >> 2,pcVar6);
    if ((int)puVar8 - (int)puVar7 < 0x41) {
      puVar2 = puVar7 + 1;
      if (puVar2 != puVar8) {
        do {
          local_30 = *puVar2;
          iVar1 = (*pcVar6)(&local_30,puVar7);
          if (iVar1 == 0) {
            local_2c = local_30;
            iVar1 = (*pcVar6)(&local_2c);
            puVar3 = puVar2;
            while (iVar1 != 0) {
              *(undefined2 *)puVar3 = *(undefined2 *)(puVar3 + -1);
              *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)puVar3 + -2);
              iVar1 = (*pcVar6)(&local_2c);
              puVar3 = puVar3 + -1;
            }
            *(undefined2 *)puVar3 = (undefined2)local_2c;
            local_2c = (local_2c & ~((unsigned int)0xff << 16)) | (((unsigned int)((undefined1)((uint)local_2c >> 0x10)) & 0xff) << 16);
            *(undefined1 *)((int)puVar3 + 2) = ((unsigned int)(local_2c) >> 16) & 0xff;
          }
          else {
            puVar3 = puVar2 + 1;
            puVar5 = puVar2;
            if (puVar7 < puVar2) {
              iVar4 = 1;
              iVar1 = (int)puVar2 - (int)puVar7 >> 2;
              if (1 < iVar1 + 1) {
                do {
                  iVar4 = iVar4 + 1;
                  *(undefined2 *)(puVar3 + -1) = *(undefined2 *)(puVar5 + -1);
                  *(undefined1 *)((int)puVar3 + -2) = *(undefined1 *)((int)puVar5 + -2);
                  puVar3 = puVar3 + -1;
                  puVar5 = puVar5 + -1;
                } while (iVar4 < iVar1 + 1);
              }
            }
            else {
              while (puVar7 != puVar5) {
                *(undefined2 *)(puVar3 + -1) = *(undefined2 *)(puVar5 + -1);
                *(undefined1 *)((int)puVar3 + -2) = *(undefined1 *)((int)puVar5 + -2);
                puVar3 = puVar3 + -1;
                puVar5 = puVar5 + -1;
              }
            }
            *(undefined2 *)puVar7 = (undefined2)local_30;
            *(undefined1 *)((int)puVar7 + 2) = ((unsigned int)(local_30) >> 16) & 0xff;
          }
          puVar2 = puVar2 + 1;
        } while (puVar2 != puVar8);
        return;
      }
    }
    else {
      puVar2 = puVar7;
      while (puVar3 = puVar2 + 1, puVar3 != puVar7 + 0x10) {
        local_30 = *puVar3;
        iVar1 = (*pcVar6)(&local_30,puVar7);
        if (iVar1 == 0) {
          local_2c = local_30;
          iVar1 = (*pcVar6)(&local_2c);
          puVar2 = puVar3;
          while (iVar1 != 0) {
            *(undefined2 *)puVar2 = *(undefined2 *)(puVar2 + -1);
            *(undefined1 *)((int)puVar2 + 2) = *(undefined1 *)((int)puVar2 + -2);
            iVar1 = (*pcVar6)(&local_2c);
            puVar2 = puVar2 + -1;
          }
          *(undefined2 *)puVar2 = (undefined2)local_2c;
          local_2c = (local_2c & ~((unsigned int)0xff << 16)) | (((unsigned int)((undefined1)((uint)local_2c >> 0x10)) & 0xff) << 16);
          *(undefined1 *)((int)puVar2 + 2) = ((unsigned int)(local_2c) >> 16) & 0xff;
          puVar2 = puVar3;
        }
        else {
          puVar2 = puVar2 + 2;
          puVar5 = puVar3;
          if (puVar7 < puVar3) {
            iVar4 = 1;
            iVar1 = (int)puVar3 - (int)puVar7 >> 2;
            if (1 < iVar1 + 1) {
              do {
                iVar4 = iVar4 + 1;
                *(undefined2 *)(puVar2 + -1) = *(undefined2 *)(puVar5 + -1);
                *(undefined1 *)((int)puVar2 + -2) = *(undefined1 *)((int)puVar5 + -2);
                puVar2 = puVar2 + -1;
                puVar5 = puVar5 + -1;
              } while (iVar4 < iVar1 + 1);
            }
          }
          else {
            while (puVar7 != puVar5) {
              *(undefined2 *)(puVar2 + -1) = *(undefined2 *)(puVar5 + -1);
              *(undefined1 *)((int)puVar2 + -2) = *(undefined1 *)((int)puVar5 + -2);
              puVar2 = puVar2 + -1;
              puVar5 = puVar5 + -1;
            }
          }
          *(undefined2 *)puVar7 = (undefined2)local_30;
          *(undefined1 *)((int)puVar7 + 2) = ((unsigned int)(local_30) >> 16) & 0xff;
          puVar2 = puVar3;
        }
      }
      for (puVar7 = puVar7 + 0x10; puVar7 != puVar8; puVar7 = puVar7 + 1) {
        local_30 = *puVar7;
        iVar1 = (*pcVar6)(&local_30,puVar7 + -1);
        puVar3 = puVar7 + -1;
        puVar2 = puVar7;
        while (puVar5 = puVar3, iVar1 != 0) {
          *(undefined2 *)puVar2 = *(undefined2 *)puVar5;
          *(undefined1 *)((int)puVar2 + 2) = *(undefined1 *)((int)puVar5 + 2);
          iVar1 = (*pcVar6)(&local_30,puVar5 + -1);
          puVar3 = puVar5 + -1;
          puVar2 = puVar5;
        }
        *(undefined2 *)puVar2 = (undefined2)local_30;
        local_30 = (local_30 & ~((unsigned int)0xff << 16)) | (((unsigned int)((undefined1)((uint)local_30 >> 0x10)) & 0xff) << 16);
        *(undefined1 *)((int)puVar2 + 2) = ((unsigned int)(local_30) >> 16) & 0xff;
      }
    }
  }
  return;
}



void fn_0022e4c4(undefined4 *param_1,int param_2)

{
  fn_0076410c(*param_1,param_1[1],*(undefined4 *)(&DAT_007c7e04 + param_2 * 4));
  return;
}



void fn_0022e4a8(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = 1;
  }
  else if (param_2 == 1) {
    param_2 = 2;
  }
  fn_0076410c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
               *(undefined4 *)(&DAT_007c7e04 + param_2 * 4));
  return;
}



void fn_0022e488(undefined4 *param_1,int param_2)

{
  fn_0076410c(*param_1,param_1[1],(&PTR_FUN_007c7df4)[param_2]);
  return;
}


