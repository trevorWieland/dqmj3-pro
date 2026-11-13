#include "00779a60_00779a60.h"



void fn_00779a60(int *param_1,int param_2,int *param_3)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  byte *unaff_r8;
  char *pcVar11;
  byte *pbVar12;
  int iVar13;
  bool bVar14;
  
  iVar13 = *param_3;
  if (iVar13 == *(int *)(param_2 + 0x10)) {
    *param_1 = *(int *)(param_2 + 0x10);
    return;
  }
  iVar5 = *(int *)(iVar13 + 0xc);
  if (*(int *)(iVar13 + 0xc) == 0) {
    iVar5 = *(int *)(iVar13 + 4);
    if (iVar13 == *(int *)(iVar5 + 0xc)) {
      do {
        iVar13 = iVar5;
        iVar5 = *(int *)(iVar13 + 4);
      } while (iVar13 == *(int *)(iVar5 + 0xc));
    }
    if (*(int *)(iVar13 + 0xc) != iVar5) {
      iVar13 = iVar5;
    }
  }
  else {
    do {
      iVar13 = iVar5;
      iVar5 = *(int *)(iVar13 + 8);
    } while (*(int *)(iVar13 + 8) != 0);
  }
  pbVar7 = (byte *)*param_3;
  pbVar8 = *(byte **)(pbVar7 + 8);
  pbVar4 = *(byte **)(pbVar7 + 0xc);
  pbVar6 = pbVar7;
  if (pbVar8 == (byte *)0x0) {
    if (pbVar4 != (byte *)0x0) goto LAB_00779b14;
    pbVar4 = *(byte **)(pbVar7 + 4);
    if (*(byte **)(param_2 + 0x10) == pbVar4) {
      *(byte **)(*(byte **)(param_2 + 0x10) + 0xc) = pbVar4;
      *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar4;
      *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
    }
    else if (*(byte **)(pbVar4 + 8) == pbVar7) {
      pbVar4[8] = 0;
      pbVar4[9] = 0;
      pbVar4[10] = 0;
      pbVar4[0xb] = 0;
      if (*(byte **)(*(int *)(param_2 + 0x10) + 8) == pbVar7) {
        *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar4;
      }
    }
    else {
      pbVar4[0xc] = 0;
      pbVar4[0xd] = 0;
      pbVar4[0xe] = 0;
      pbVar4[0xf] = 0;
      if (*(byte **)(*(int *)(param_2 + 0x10) + 0xc) == pbVar7) {
        *(byte **)(*(int *)(param_2 + 0x10) + 0xc) = pbVar4;
      }
    }
  }
  else {
    if (pbVar4 == (byte *)0x0) {
      pbVar4 = pbVar8;
    }
    else {
      iVar5 = *(int *)(pbVar4 + 8);
      pbVar6 = pbVar4;
      while (iVar5 != 0) {
        pbVar6 = *(byte **)(pbVar6 + 8);
        iVar5 = *(int *)(pbVar6 + 8);
      }
      pbVar4 = *(byte **)(pbVar6 + 0xc);
    }
LAB_00779b14:
    if (pbVar6 == pbVar7) {
      *(undefined4 *)(pbVar4 + 4) = *(undefined4 *)(pbVar6 + 4);
      if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar7) {
        *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar4;
      }
      else {
        iVar5 = *(int *)(pbVar7 + 4);
        if (*(byte **)(iVar5 + 8) == pbVar7) {
          *(byte **)(iVar5 + 8) = pbVar4;
        }
        else {
          *(byte **)(iVar5 + 0xc) = pbVar4;
        }
      }
      iVar5 = *(int *)(param_2 + 0x10);
      if (*(byte **)(iVar5 + 8) == pbVar7) {
        if (*(int *)(pbVar7 + 0xc) == 0) {
          *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(pbVar7 + 4);
        }
        else {
          pbVar12 = *(byte **)(pbVar4 + 8);
          pbVar8 = pbVar4;
          while (pbVar3 = pbVar12, pbVar3 != (byte *)0x0) {
            pbVar8 = pbVar3;
            pbVar12 = *(byte **)(pbVar3 + 8);
          }
          *(byte **)(iVar5 + 8) = pbVar8;
          unaff_r8 = (byte *)0x0;
        }
      }
      iVar5 = *(int *)(param_2 + 0x10);
      if (*(byte **)(iVar5 + 0xc) == pbVar7) {
        if (*(int *)(pbVar7 + 8) == 0) {
          *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(pbVar7 + 4);
        }
        else {
          pbVar8 = *(byte **)(pbVar4 + 0xc);
          pbVar7 = pbVar4;
          while (pbVar12 = pbVar8, pbVar12 != (byte *)0x0) {
            pbVar7 = pbVar12;
            pbVar8 = *(byte **)(pbVar12 + 0xc);
          }
          *(byte **)(iVar5 + 0xc) = pbVar7;
        }
      }
    }
    else {
      *(byte **)(pbVar8 + 4) = pbVar6;
      *(undefined4 *)(pbVar6 + 8) = *(undefined4 *)(pbVar7 + 8);
      if (*(byte **)(pbVar7 + 0xc) == pbVar6) {
        if (pbVar4 != (byte *)0x0) {
          *(byte **)(pbVar4 + 4) = pbVar6;
        }
      }
      else {
        if (pbVar4 != (byte *)0x0) {
          *(undefined4 *)(pbVar4 + 4) = *(undefined4 *)(pbVar6 + 4);
        }
        *(byte **)(*(int *)(pbVar6 + 4) + 8) = pbVar4;
        *(undefined4 *)(pbVar6 + 0xc) = *(undefined4 *)(pbVar7 + 0xc);
        *(byte **)(*(int *)(pbVar7 + 0xc) + 4) = pbVar6;
      }
      if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar7) {
        *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar6;
      }
      else {
        iVar5 = *(int *)(pbVar7 + 4);
        if (*(byte **)(iVar5 + 8) == pbVar7) {
          *(byte **)(iVar5 + 8) = pbVar6;
        }
        else {
          *(byte **)(iVar5 + 0xc) = pbVar6;
        }
      }
      if (pbVar4 == (byte *)0x0) {
        pbVar4 = pbVar6;
      }
      *(undefined4 *)(pbVar6 + 4) = *(undefined4 *)(pbVar7 + 4);
      bVar1 = *pbVar6;
      *pbVar6 = *pbVar7;
      *pbVar7 = bVar1;
      pbVar6 = pbVar7;
    }
  }
  pbVar7 = *(byte **)(param_2 + 0x10);
  bVar14 = pbVar7 != pbVar4;
  if (bVar14) {
    pbVar7 = (byte *)(uint)*pbVar6;
  }
  if (!bVar14 || pbVar7 == (byte *)0x0) goto LAB_00779e78;
  while( true ) {
    if ((*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar4) || (*pbVar4 != 1)) goto LAB_00779e74;
    pbVar7 = *(byte **)(pbVar4 + 4);
    pbVar8 = *(byte **)(pbVar7 + 8);
    if (pbVar8 != pbVar4) break;
    pbVar8 = *(byte **)(pbVar7 + 0xc);
    if (pbVar8 == (byte *)0x0) {
LAB_00779e30:
      *pbVar4 = 0;
      pbVar4 = pbVar7;
    }
    else {
      if (*pbVar8 == 0) {
        *pbVar8 = 1;
        **(undefined1 **)(pbVar4 + 4) = 0;
        iVar5 = *(int *)(pbVar4 + 4);
        iVar9 = *(int *)(iVar5 + 0xc);
        *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar9 + 8);
        if (*(int *)(iVar9 + 8) != 0) {
          *(int *)(*(int *)(iVar9 + 8) + 4) = iVar5;
        }
        *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar5 + 4);
        unaff_r8 = *(byte **)(param_2 + 0x10);
        if (*(int *)(unaff_r8 + 4) == iVar5) {
          *(int *)(unaff_r8 + 4) = iVar9;
        }
        else {
          unaff_r8 = *(byte **)(iVar5 + 4);
          if (*(int *)(unaff_r8 + 8) == iVar5) {
            *(int *)(unaff_r8 + 8) = iVar9;
          }
          else {
            *(int *)(unaff_r8 + 0xc) = iVar9;
          }
        }
        *(int *)(iVar9 + 8) = iVar5;
        *(int *)(iVar5 + 4) = iVar9;
        pbVar7 = *(byte **)(pbVar4 + 4);
        pbVar8 = *(byte **)(pbVar7 + 0xc);
        if (pbVar8 == (byte *)0x0) goto LAB_00779e30;
      }
      pbVar7 = *(byte **)(pbVar8 + 8);
      if (pbVar7 != (byte *)0x0) {
        unaff_r8 = (byte *)(uint)*pbVar7;
      }
      if (pbVar7 != (byte *)0x0 && unaff_r8 != &DAT_00000001) {
LAB_00779d38:
        pcVar11 = *(char **)(pbVar8 + 0xc);
        cVar2 = '\0';
        if (pcVar11 != (char *)0x0) {
          cVar2 = *pcVar11;
        }
        if (pcVar11 == (char *)0x0 || cVar2 == '\x01') {
          if (pbVar7 != (byte *)0x0) {
            *pbVar7 = 1;
          }
          *pbVar8 = 0;
          iVar5 = *(int *)(pbVar8 + 8);
          *(undefined4 *)(pbVar8 + 8) = *(undefined4 *)(iVar5 + 0xc);
          if (*(int *)(iVar5 + 0xc) != 0) {
            *(byte **)(*(int *)(iVar5 + 0xc) + 4) = pbVar8;
          }
          *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(pbVar8 + 4);
          if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar8) {
            *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar5;
          }
          else {
            iVar9 = *(int *)(pbVar8 + 4);
            if (*(byte **)(iVar9 + 0xc) == pbVar8) {
              *(int *)(iVar9 + 0xc) = iVar5;
            }
            else {
              *(int *)(iVar9 + 8) = iVar5;
            }
          }
          *(byte **)(iVar5 + 0xc) = pbVar8;
          *(int *)(pbVar8 + 4) = iVar5;
          pbVar8 = *(byte **)(*(int *)(pbVar4 + 4) + 0xc);
          if (pbVar8 == (byte *)0x0) goto LAB_00779e74;
        }
        *pbVar8 = **(byte **)(pbVar4 + 4);
        **(undefined1 **)(pbVar4 + 4) = 1;
        if (*(undefined1 **)(pbVar8 + 0xc) != (undefined1 *)0x0) {
          **(undefined1 **)(pbVar8 + 0xc) = 1;
        }
        iVar5 = *(int *)(pbVar4 + 4);
        iVar9 = *(int *)(iVar5 + 0xc);
        *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar9 + 8);
        if (*(int *)(iVar9 + 8) != 0) {
          *(int *)(*(int *)(iVar9 + 8) + 4) = iVar5;
        }
        *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar5 + 4);
        if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar5) {
          *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar9;
        }
        else {
          iVar10 = *(int *)(iVar5 + 4);
          if (*(int *)(iVar10 + 8) == iVar5) {
            *(int *)(iVar10 + 8) = iVar9;
          }
          else {
            *(int *)(iVar10 + 0xc) = iVar9;
          }
        }
        *(int *)(iVar9 + 8) = iVar5;
        goto LAB_00779fb8;
      }
      pbVar12 = *(byte **)(pbVar8 + 0xc);
      unaff_r8 = (byte *)0x0;
      if (pbVar12 != (byte *)0x0) {
        unaff_r8 = (byte *)(uint)*pbVar12;
      }
      if (pbVar12 != (byte *)0x0 && unaff_r8 != &DAT_00000001) goto LAB_00779d38;
LAB_00779e50:
      *pbVar8 = 0;
      pbVar4 = *(byte **)(pbVar4 + 4);
    }
  }
  if (pbVar8 == (byte *)0x0) goto LAB_00779e30;
  pbVar7 = (byte *)(uint)*pbVar8;
  if (pbVar7 == (byte *)0x0) {
    *pbVar8 = 1;
    **(undefined1 **)(pbVar4 + 4) = 0;
    iVar5 = *(int *)(pbVar4 + 4);
    iVar9 = *(int *)(iVar5 + 8);
    *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar9 + 0xc);
    if (*(int *)(iVar9 + 0xc) != 0) {
      *(int *)(*(int *)(iVar9 + 0xc) + 4) = iVar5;
    }
    *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar5 + 4);
    unaff_r8 = *(byte **)(param_2 + 0x10);
    if (*(int *)(unaff_r8 + 4) == iVar5) {
      *(int *)(unaff_r8 + 4) = iVar9;
    }
    else {
      unaff_r8 = *(byte **)(iVar5 + 4);
      if (*(int *)(unaff_r8 + 0xc) == iVar5) {
        *(int *)(unaff_r8 + 0xc) = iVar9;
      }
      else {
        *(int *)(unaff_r8 + 8) = iVar9;
      }
    }
    *(int *)(iVar9 + 0xc) = iVar5;
    *(int *)(iVar5 + 4) = iVar9;
    pbVar7 = *(byte **)(pbVar4 + 4);
    pbVar8 = *(byte **)(pbVar7 + 8);
    if (pbVar8 == (byte *)0x0) goto LAB_00779e30;
  }
  unaff_r8 = *(byte **)(pbVar8 + 0xc);
  if (unaff_r8 != (byte *)0x0) {
    pbVar7 = (byte *)(uint)*unaff_r8;
  }
  if (unaff_r8 == (byte *)0x0 || pbVar7 == &DAT_00000001) {
    pcVar11 = *(char **)(pbVar8 + 8);
    cVar2 = '\0';
    if (pcVar11 != (char *)0x0) {
      cVar2 = *pcVar11;
    }
    if (pcVar11 == (char *)0x0 || cVar2 == '\x01') goto LAB_00779e50;
  }
  pcVar11 = *(char **)(pbVar8 + 8);
  cVar2 = '\0';
  if (pcVar11 != (char *)0x0) {
    cVar2 = *pcVar11;
  }
  if (pcVar11 == (char *)0x0 || cVar2 == '\x01') {
    if (unaff_r8 != (byte *)0x0) {
      *unaff_r8 = 1;
    }
    *pbVar8 = 0;
    iVar5 = *(int *)(pbVar8 + 0xc);
    *(undefined4 *)(pbVar8 + 0xc) = *(undefined4 *)(iVar5 + 8);
    if (*(int *)(iVar5 + 8) != 0) {
      *(byte **)(*(int *)(iVar5 + 8) + 4) = pbVar8;
    }
    *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(pbVar8 + 4);
    if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar8) {
      *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar5;
    }
    else {
      iVar9 = *(int *)(pbVar8 + 4);
      if (*(byte **)(iVar9 + 8) == pbVar8) {
        *(int *)(iVar9 + 8) = iVar5;
      }
      else {
        *(int *)(iVar9 + 0xc) = iVar5;
      }
    }
    *(byte **)(iVar5 + 8) = pbVar8;
    *(int *)(pbVar8 + 4) = iVar5;
    pbVar8 = *(byte **)(*(int *)(pbVar4 + 4) + 8);
    if (pbVar8 != (byte *)0x0) goto LAB_00779f48;
  }
  else {
LAB_00779f48:
    *pbVar8 = **(byte **)(pbVar4 + 4);
    **(undefined1 **)(pbVar4 + 4) = 1;
    if (*(undefined1 **)(pbVar8 + 8) != (undefined1 *)0x0) {
      **(undefined1 **)(pbVar8 + 8) = 1;
    }
    iVar5 = *(int *)(pbVar4 + 4);
    iVar9 = *(int *)(iVar5 + 8);
    *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar9 + 0xc);
    if (*(int *)(iVar9 + 0xc) != 0) {
      *(int *)(*(int *)(iVar9 + 0xc) + 4) = iVar5;
    }
    *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar5 + 4);
    if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar5) {
      *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar9;
    }
    else {
      iVar10 = *(int *)(iVar5 + 4);
      if (*(int *)(iVar10 + 0xc) == iVar5) {
        *(int *)(iVar10 + 0xc) = iVar9;
      }
      else {
        *(int *)(iVar10 + 8) = iVar9;
      }
    }
    *(int *)(iVar9 + 0xc) = iVar5;
LAB_00779fb8:
    *(int *)(iVar5 + 4) = iVar9;
  }
LAB_00779e74:
  *pbVar4 = 1;
LAB_00779e78:
  *(undefined4 *)(pbVar6 + 0xc) = *(undefined4 *)(param_2 + 4);
  *(byte **)(param_2 + 4) = pbVar6;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
  *param_1 = iVar13;
  return;
}


