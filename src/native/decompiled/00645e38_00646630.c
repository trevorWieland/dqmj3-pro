#include "00645e38_00646630.h"



int fn_00646630(int param_1,short *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  if (iVar1 < iVar2) {
    do {
      iVar2 = fn_006f14a4(param_1,iVar1);
      if ((iVar2 != 0) &&
         (iVar2 = fn_006f1710(param_1,(int)*param_2,*(undefined4 *)(param_1 + 0xc)), iVar2 == 0)) {
        return (int)*(char *)(param_3 + 2);
      }
      iVar1 = (int)(char)((char)iVar1 + '\x01');
      iVar2 = fn_006f0a30(param_1);
    } while (iVar1 < iVar2);
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_00646588(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  if (iVar1 < iVar2) {
    do {
      iVar2 = fn_006f14a4(param_1,iVar1);
      if ((iVar2 != 0) &&
         (iVar3 = fn_006f1be0(param_1,1,(int)*(char *)(param_1 + 4),iVar1,1,0),
         *(short *)(iVar2 + 0x1c) - iVar3 < 1)) {
        return (int)*(char *)(param_3 + 2);
      }
      iVar1 = (int)(char)((char)iVar1 + '\x01');
      iVar2 = fn_006f0a30(param_1);
    } while (iVar1 < iVar2);
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_006464cc(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar4 = 0;
  iVar5 = 0;
  iVar2 = fn_006f0ae4();
  iVar3 = fn_006f0a30(param_1);
  if (iVar2 < iVar3) {
    do {
      iVar3 = fn_006f14a4(param_1,iVar2);
      if ((iVar3 != 0) && (bVar6 = iVar4 != 0, iVar4 = iVar2, iVar5 = iVar3, bVar6))
      goto LAB_0064657c;
      iVar2 = (int)(char)((char)iVar2 + '\x01');
      iVar3 = fn_006f0a30(param_1);
    } while (iVar2 < iVar3);
    if ((iVar4 != 0) &&
       (iVar4 = fn_006f1be0(param_1,1,(int)*(char *)(param_1 + 4),iVar4,1,0),
       *(short *)(iVar5 + 0x1c) - iVar4 < 1)) {
      cVar1 = *(char *)(param_3 + 2);
      goto LAB_00646580;
    }
  }
LAB_0064657c:
  cVar1 = *(char *)(param_3 + 3);
LAB_00646580:
  return (int)cVar1;
}



int fn_00646438(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_1c [8];
  
  iVar1 = fn_00145ad0();
  if (iVar1 != 0) {
    iVar1 = fn_006f0ae4(param_1);
    iVar2 = fn_006f0a30(param_1);
    for (; iVar1 < iVar2; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
      iVar3 = fn_006f14a4(param_1,iVar1);
      if ((iVar3 != 0) && (iVar3 = fn_006f3218(auStack_1c,iVar3,iVar1), iVar3 != 0)) {
        return (int)*(char *)(param_3 + 2);
      }
    }
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_006463cc(int param_1,short *param_2)

{
  int iVar1;
  int local_14 [2];
  
  iVar1 = fn_006f2718();
  local_14[0] = 0;
  if (iVar1 != 0) {
    local_14[0] = 0;
    fn_006f20b8(param_1,(int)*param_2,(int)*(char *)(param_1 + 4),1,local_14);
    iVar1 = fn_006f4114(*(undefined4 *)(param_1 + 0xc),(int)*param_2);
    local_14[0] = ((200 - iVar1) / 2) * local_14[0];
    if (local_14[0] < 0) {
      local_14[0] = 0;
    }
  }
  return local_14[0];
}



int fn_00646310(int param_1,short *param_2,int param_3)

{
  int iVar1;
  int local_c;
  
  fn_006f20b8(param_1,(int)*param_2,(int)*(char *)(param_1 + 4),1,&local_c);
  if (local_c < 1) {
    iVar1 = (int)*(char *)(param_3 + 3);
  }
  else {
    iVar1 = *(int *)(&DAT_0080f0f8 + local_c * 4) + (int)*(char *)(param_3 + 2);
  }
  return iVar1;
}



int fn_00645e38(int param_1,short *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  byte *pbVar9;
  int iVar10;
  char *pcVar11;
  int *local_98;
  undefined4 *local_94;
  char *local_90;
  char *local_8c;
  char *local_88;
  char *local_84;
  undefined4 local_80;
  char local_7c;
  undefined1 local_7b;
  char *local_78 [3];
  undefined1 auStack_6c [4];
  char *local_68 [2];
  char *local_60 [2];
  int local_58;
  undefined2 local_54;
  char *local_4c;
  char *local_48;
  undefined1 local_44;
  char *local_3c [3];
  int iStack_30;
  short *psStack_2c;
  int local_28;
  
  local_7c = '\0';
  local_7b = (undefined1)param_1;
  local_94 = (undefined4 *)0x0;
  local_84 = (char *)0x0;
  local_80 = 0;
  local_88 = (char *)0x0;
  local_8c = (char *)0x0;
  local_90 = (char *)0x0;
  iStack_30 = param_1;
  psStack_2c = param_2;
  local_28 = param_3;
  puVar4 = (undefined4 *)fn_00100fc6(0xc,0);
  uVar5 = fn_00100fc6(0x300,0);
  puVar4[2] = uVar5;
  *puVar4 = local_94;
  puVar4[1] = 0x20;
  iVar10 = 0;
  local_84 = (char *)puVar4[2];
  local_88 = local_84 + 0x300;
  local_8c = local_84 + 0x18;
  local_84[8] = '\0';
  local_84[9] = '\0';
  local_84[10] = '\0';
  local_84[0xb] = '\0';
  local_84[0xc] = '\0';
  local_84[0xd] = '\0';
  local_84[0xe] = '\0';
  local_84[0xf] = '\0';
  *local_84 = '\0';
  local_84[4] = '\0';
  local_84[5] = '\0';
  local_84[6] = '\0';
  local_84[7] = '\0';
  *(char **)(local_84 + 8) = local_84;
  *(char **)(local_84 + 0xc) = local_84;
  pbVar9 = (byte *)(*(int *)(param_1 + 0xc) + 0x120);
  local_94 = puVar4;
  if (*pbVar9 != 0) {
    do {
      if (pbVar9[iVar10 + 0xe0] != 2) {
        local_98 = (int *)0x0;
        iVar6 = fn_006f20b8(param_1,(int)*(short *)(pbVar9 + iVar10 * 2 + 4),
                             (int)*(char *)(param_1 + 4),1);
        if (0 < iVar6) {
          local_54 = *(undefined2 *)(pbVar9 + iVar10 * 2 + 4);
          local_98 = &local_58;
          bVar1 = true;
          pcVar7 = *(char **)(local_84 + 4);
          pcVar8 = local_84;
          while (pcVar7 != (char *)0x0) {
            bVar1 = iVar6 < *(int *)(pcVar7 + 0x10);
            pcVar8 = pcVar7;
            if (bVar1) {
              pcVar7 = *(char **)(pcVar7 + 8);
            }
            else {
              pcVar7 = *(char **)(pcVar7 + 0xc);
            }
          }
          local_58 = iVar6;
          if (local_7c == '\0') {
            if (bVar1) {
              if (pcVar8 == *(char **)(local_84 + 8)) {
                fn_00775aec(local_60);
                local_48 = local_60[0];
                local_44 = 1;
                goto LAB_00646060;
              }
              if ((*pcVar8 == '\0') && (*(char **)(*(int *)(pcVar8 + 4) + 4) == pcVar8)) {
                pcVar8 = *(char **)(pcVar8 + 0xc);
              }
              else {
                pcVar7 = *(char **)(pcVar8 + 8);
                if (*(char **)(pcVar8 + 8) == (char *)0x0) {
                  pcVar7 = *(char **)(pcVar8 + 4);
                  pcVar11 = pcVar8;
                  while (pcVar8 = pcVar7, pcVar11 == *(char **)(pcVar8 + 8)) {
                    pcVar7 = *(char **)(pcVar8 + 4);
                    pcVar11 = pcVar8;
                  }
                }
                else {
                  do {
                    pcVar8 = pcVar7;
                    pcVar7 = *(char **)(pcVar8 + 0xc);
                  } while (*(char **)(pcVar8 + 0xc) != (char *)0x0);
                }
              }
            }
            if (*(int *)(pcVar8 + 0x10) < iVar6) {
              fn_00775aec(local_3c);
              local_48 = local_3c[0];
              local_44 = 1;
            }
            else {
              local_44 = 0;
              local_48 = pcVar8;
            }
          }
          else {
            fn_00775aec(local_68);
            local_48 = local_68[0];
            local_44 = 1;
          }
        }
      }
LAB_00646060:
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)(uint)*pbVar9);
  }
  local_4c = local_84;
  iVar10 = 0;
  if (local_84 != *(char **)(local_84 + 8)) {
    do {
      if ((*local_4c == '\0') && (*(char **)(*(int *)(local_4c + 4) + 4) == local_4c)) {
        pcVar8 = *(char **)(local_4c + 0xc);
      }
      else {
        pcVar7 = *(char **)(local_4c + 8);
        if (*(char **)(local_4c + 8) == (char *)0x0) {
          pcVar7 = local_4c;
          pcVar8 = *(char **)(local_4c + 4);
          while (pcVar7 == *(char **)(pcVar8 + 8)) {
            pcVar7 = pcVar8;
            pcVar8 = *(char **)(pcVar8 + 4);
          }
        }
        else {
          do {
            pcVar8 = pcVar7;
            pcVar7 = *(char **)(pcVar8 + 0xc);
          } while (*(char **)(pcVar8 + 0xc) != (char *)0x0);
        }
      }
      if (*(short *)(pcVar8 + 0x14) == *param_2) {
        iVar10 = (int)*(char *)(local_28 + 2) + (&DAT_0080f0e8)[iVar10];
        if (local_84 == (char *)0x0) {
          return iVar10;
        }
        local_78[0] = local_84;
        local_98 = *(int **)(local_84 + 8);
        fn_00775384(auStack_6c,&local_94,&local_98,local_78);
        *(char **)(local_84 + 0xc) = local_90;
        local_90 = local_84;
        piVar3 = local_94;
        while (piVar3 != (int *)0x0) {
          local_94 = (undefined4 *)*piVar3;
          fn_001008c4(piVar3[2],piVar3[1],0);
          fn_001008c4(piVar3,1,0);
          piVar3 = local_94;
        }
        return iVar10;
      }
      iVar10 = iVar10 + 1;
      if ((*local_4c == '\0') && (*(char **)(*(int *)(local_4c + 4) + 4) == local_4c)) {
        local_4c = *(char **)(local_4c + 0xc);
      }
      else {
        pcVar7 = *(char **)(local_4c + 8);
        if (*(char **)(local_4c + 8) == (char *)0x0) {
          while (pcVar8 = *(char **)(local_4c + 4), local_4c == *(char **)(pcVar8 + 8)) {
            local_4c = pcVar8;
          }
        }
        else {
          do {
            pcVar8 = pcVar7;
            pcVar7 = *(char **)(pcVar8 + 0xc);
          } while (*(char **)(pcVar8 + 0xc) != (char *)0x0);
        }
        local_4c = pcVar8;
      }
    } while ((local_4c != *(char **)(local_84 + 8)) && (iVar10 < 5));
  }
  cVar2 = *(char *)(local_28 + 3);
  if (local_84 != (char *)0x0) {
    local_78[0] = local_84;
    local_98 = *(int **)(local_84 + 8);
    fn_00775384(auStack_6c,&local_94,&local_98,local_78);
    *(char **)(local_84 + 0xc) = local_90;
    local_90 = local_84;
    piVar3 = local_94;
    while (piVar3 != (int *)0x0) {
      local_94 = (undefined4 *)*piVar3;
      fn_001008c4(piVar3[2],piVar3[1],0);
      fn_001008c4(piVar3,1,0);
      piVar3 = local_94;
    }
  }
  return (int)cVar2;
}


