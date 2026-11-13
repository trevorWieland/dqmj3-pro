#include "00147274_00147274.h"



void fn_00147274(int *param_1,int param_2,int *param_3)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *unaff_r8;
  char *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  bool bVar13;
  
  iVar6 = *param_3;
  if (iVar6 == *(int *)(param_2 + 0x10)) {
    *param_1 = *(int *)(param_2 + 0x10);
    return;
  }
  iVar7 = *(int *)(iVar6 + 0xc);
  if (*(int *)(iVar6 + 0xc) == 0) {
    iVar7 = *(int *)(iVar6 + 4);
    while (iVar12 = iVar7, iVar6 == *(int *)(iVar12 + 0xc)) {
      iVar6 = iVar12;
      iVar7 = *(int *)(iVar12 + 4);
    }
    if (*(int *)(iVar6 + 0xc) != iVar12) {
      iVar6 = iVar12;
    }
  }
  else {
    do {
      iVar6 = iVar7;
      iVar7 = *(int *)(iVar6 + 8);
    } while (*(int *)(iVar6 + 8) != 0);
  }
  pbVar11 = (byte *)*param_3;
  pbVar3 = *(byte **)(pbVar11 + 8);
  pbVar5 = pbVar11;
  if (pbVar3 == (byte *)0x0) {
    pbVar4 = *(byte **)(pbVar11 + 0xc);
    if (pbVar4 != (byte *)0x0) goto LAB_00147314;
    pbVar4 = *(byte **)(pbVar11 + 4);
    if (*(byte **)(param_2 + 0x10) == pbVar4) {
      *(byte **)(*(byte **)(param_2 + 0x10) + 0xc) = pbVar4;
      *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar4;
      *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
    }
    else if (*(byte **)(pbVar4 + 8) == pbVar11) {
      pbVar4[8] = 0;
      pbVar4[9] = 0;
      pbVar4[10] = 0;
      pbVar4[0xb] = 0;
      unaff_r8 = *(byte **)(*(int *)(param_2 + 0x10) + 8);
      if (unaff_r8 == pbVar11) {
        *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar4;
      }
    }
    else {
      pbVar4[0xc] = 0;
      pbVar4[0xd] = 0;
      pbVar4[0xe] = 0;
      pbVar4[0xf] = 0;
      unaff_r8 = *(byte **)(*(int *)(param_2 + 0x10) + 0xc);
      if (unaff_r8 == pbVar11) {
        *(byte **)(*(int *)(param_2 + 0x10) + 0xc) = pbVar4;
      }
    }
  }
  else {
    pbVar4 = pbVar3;
    pbVar10 = *(byte **)(pbVar11 + 0xc);
    if (*(byte **)(pbVar11 + 0xc) != (byte *)0x0) {
      do {
        pbVar5 = pbVar10;
        pbVar10 = *(byte **)(pbVar5 + 8);
      } while (*(byte **)(pbVar5 + 8) != (byte *)0x0);
      pbVar4 = *(byte **)(pbVar5 + 0xc);
    }
LAB_00147314:
    if (pbVar5 == pbVar11) {
      *(undefined4 *)(pbVar4 + 4) = *(undefined4 *)(pbVar5 + 4);
      if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar11) {
        *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar4;
      }
      else {
        iVar7 = *(int *)(pbVar11 + 4);
        if (*(byte **)(iVar7 + 8) == pbVar11) {
          *(byte **)(iVar7 + 8) = pbVar4;
        }
        else {
          *(byte **)(iVar7 + 0xc) = pbVar4;
        }
      }
      iVar7 = *(int *)(param_2 + 0x10);
      if (*(byte **)(iVar7 + 8) == pbVar11) {
        pbVar3 = pbVar4;
        if (*(int *)(pbVar11 + 0xc) == 0) {
          *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(pbVar11 + 4);
        }
        else {
          do {
            pbVar10 = pbVar3;
            pbVar3 = *(byte **)(pbVar10 + 8);
          } while (pbVar3 != (byte *)0x0);
          *(byte **)(iVar7 + 8) = pbVar10;
        }
      }
      unaff_r8 = *(byte **)(param_2 + 0x10);
      if (*(byte **)(unaff_r8 + 0xc) == pbVar11) {
        pbVar3 = pbVar4;
        if (*(int *)(pbVar11 + 8) == 0) {
          *(undefined4 *)(unaff_r8 + 0xc) = *(undefined4 *)(pbVar11 + 4);
        }
        else {
          do {
            pbVar11 = pbVar3;
            pbVar3 = *(byte **)(pbVar11 + 0xc);
          } while (pbVar3 != (byte *)0x0);
          *(byte **)(unaff_r8 + 0xc) = pbVar11;
        }
      }
    }
    else {
      *(byte **)(pbVar3 + 4) = pbVar5;
      *(undefined4 *)(pbVar5 + 8) = *(undefined4 *)(pbVar11 + 8);
      if (*(byte **)(pbVar11 + 0xc) == pbVar5) {
        if (pbVar4 != (byte *)0x0) {
          *(byte **)(pbVar4 + 4) = pbVar5;
        }
      }
      else {
        if (pbVar4 != (byte *)0x0) {
          *(undefined4 *)(pbVar4 + 4) = *(undefined4 *)(pbVar5 + 4);
        }
        *(byte **)(*(int *)(pbVar5 + 4) + 8) = pbVar4;
        *(undefined4 *)(pbVar5 + 0xc) = *(undefined4 *)(pbVar11 + 0xc);
        *(byte **)(*(int *)(pbVar11 + 0xc) + 4) = pbVar5;
      }
      if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar11) {
        *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar5;
      }
      else {
        iVar7 = *(int *)(pbVar11 + 4);
        if (*(byte **)(iVar7 + 8) == pbVar11) {
          *(byte **)(iVar7 + 8) = pbVar5;
        }
        else {
          *(byte **)(iVar7 + 0xc) = pbVar5;
        }
      }
      if (pbVar4 == (byte *)0x0) {
        pbVar4 = pbVar5;
      }
      *(undefined4 *)(pbVar5 + 4) = *(undefined4 *)(pbVar11 + 4);
      unaff_r8 = (byte *)(uint)*pbVar11;
      bVar1 = *pbVar5;
      *pbVar5 = *pbVar11;
      *pbVar11 = bVar1;
      pbVar5 = pbVar11;
    }
  }
  pbVar3 = *(byte **)(param_2 + 0x10);
  bVar13 = pbVar3 != pbVar4;
  if (bVar13) {
    pbVar3 = (byte *)(uint)*pbVar5;
  }
  if (bVar13 && pbVar3 != (byte *)0x0) {
    do {
      while( true ) {
        if ((*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar4) || (*pbVar4 != 1))
        goto LAB_001476e8;
        pbVar3 = *(byte **)(pbVar4 + 4);
        pbVar11 = *(byte **)(pbVar3 + 8);
        if (pbVar11 == pbVar4) break;
        if (pbVar11 == (byte *)0x0) goto LAB_001476c4;
        if (*pbVar11 == 0) {
          *pbVar11 = 1;
          **(undefined1 **)(pbVar4 + 4) = 0;
          iVar12 = *(int *)(pbVar4 + 4);
          iVar7 = *(int *)(iVar12 + 8);
          *(undefined4 *)(iVar12 + 8) = *(undefined4 *)(iVar7 + 0xc);
          if (*(int *)(iVar7 + 0xc) != 0) {
            *(int *)(*(int *)(iVar7 + 0xc) + 4) = iVar12;
          }
          *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar12 + 4);
          unaff_r8 = *(byte **)(param_2 + 0x10);
          if (*(int *)(unaff_r8 + 4) == iVar12) {
            *(int *)(unaff_r8 + 4) = iVar7;
          }
          else {
            unaff_r8 = *(byte **)(iVar12 + 4);
            if (*(int *)(unaff_r8 + 0xc) == iVar12) {
              *(int *)(unaff_r8 + 0xc) = iVar7;
            }
            else {
              *(int *)(unaff_r8 + 8) = iVar7;
            }
          }
          *(int *)(iVar7 + 0xc) = iVar12;
          *(int *)(iVar12 + 4) = iVar7;
          pbVar11 = *(byte **)(*(int *)(pbVar4 + 4) + 8);
          if (pbVar11 == (byte *)0x0) goto LAB_001477ac;
        }
        pbVar3 = *(byte **)(pbVar11 + 0xc);
        if (pbVar3 != (byte *)0x0) {
          unaff_r8 = (byte *)(uint)*pbVar3;
        }
        if (pbVar3 != (byte *)0x0 && unaff_r8 != &DAT_00000001) {
LAB_00147794:
          pcVar9 = *(char **)(pbVar11 + 8);
          cVar2 = '\0';
          if (pcVar9 != (char *)0x0) {
            cVar2 = *pcVar9;
          }
          if (pcVar9 == (char *)0x0 || cVar2 == '\x01') {
            if (pbVar3 != (byte *)0x0) {
              *pbVar3 = 1;
            }
            *pbVar11 = 0;
            iVar7 = *(int *)(pbVar11 + 0xc);
            *(undefined4 *)(pbVar11 + 0xc) = *(undefined4 *)(iVar7 + 8);
            if (*(int *)(iVar7 + 8) != 0) {
              *(byte **)(*(int *)(iVar7 + 8) + 4) = pbVar11;
            }
            *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(pbVar11 + 4);
            if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar11) {
              *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar7;
            }
            else {
              iVar12 = *(int *)(pbVar11 + 4);
              if (*(byte **)(iVar12 + 8) == pbVar11) {
                *(int *)(iVar12 + 8) = iVar7;
              }
              else {
                *(int *)(iVar12 + 0xc) = iVar7;
              }
            }
            *(byte **)(iVar7 + 8) = pbVar11;
            *(int *)(pbVar11 + 4) = iVar7;
            pbVar11 = *(byte **)(*(int *)(pbVar4 + 4) + 8);
            if (pbVar11 == (byte *)0x0) goto LAB_001476e8;
          }
          *pbVar11 = **(byte **)(pbVar4 + 4);
          **(undefined1 **)(pbVar4 + 4) = 1;
          if (*(undefined1 **)(pbVar11 + 8) != (undefined1 *)0x0) {
            **(undefined1 **)(pbVar11 + 8) = 1;
          }
          iVar12 = *(int *)(pbVar4 + 4);
          iVar7 = *(int *)(iVar12 + 8);
          *(undefined4 *)(iVar12 + 8) = *(undefined4 *)(iVar7 + 0xc);
          if (*(int *)(iVar7 + 0xc) != 0) {
            *(int *)(*(int *)(iVar7 + 0xc) + 4) = iVar12;
          }
          *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar12 + 4);
          if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar12) {
            *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar7;
          }
          else {
            iVar8 = *(int *)(iVar12 + 4);
            if (*(int *)(iVar8 + 0xc) == iVar12) {
              *(int *)(iVar8 + 0xc) = iVar7;
            }
            else {
              *(int *)(iVar8 + 8) = iVar7;
            }
          }
          *(int *)(iVar7 + 0xc) = iVar12;
          goto LAB_001478ac;
        }
        pbVar10 = *(byte **)(pbVar11 + 8);
        unaff_r8 = (byte *)0x0;
        if (pbVar10 != (byte *)0x0) {
          unaff_r8 = (byte *)(uint)*pbVar10;
        }
        if (pbVar10 != (byte *)0x0 && unaff_r8 != &DAT_00000001) goto LAB_00147794;
LAB_001477c8:
        *pbVar11 = 0;
LAB_001475c4:
        pbVar4 = *(byte **)(pbVar4 + 4);
      }
      pbVar11 = *(byte **)(pbVar3 + 0xc);
      if (pbVar11 != (byte *)0x0) goto code_r0x00147504;
LAB_001476c4:
      *pbVar4 = 0;
      pbVar4 = pbVar3;
    } while( true );
  }
LAB_001476ec:
  *(undefined4 *)(pbVar5 + 0xc) = *(undefined4 *)(param_2 + 4);
  *(byte **)(param_2 + 4) = pbVar5;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
  *param_1 = iVar6;
  return;
code_r0x00147504:
  if (*pbVar11 == 0) {
    *pbVar11 = 1;
    **(undefined1 **)(pbVar4 + 4) = 0;
    iVar12 = *(int *)(pbVar4 + 4);
    iVar7 = *(int *)(iVar12 + 0xc);
    *(undefined4 *)(iVar12 + 0xc) = *(undefined4 *)(iVar7 + 8);
    if (*(int *)(iVar7 + 8) != 0) {
      *(int *)(*(int *)(iVar7 + 8) + 4) = iVar12;
    }
    *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar12 + 4);
    unaff_r8 = *(byte **)(param_2 + 0x10);
    if (*(int *)(unaff_r8 + 4) == iVar12) {
      *(int *)(unaff_r8 + 4) = iVar7;
    }
    else {
      unaff_r8 = *(byte **)(iVar12 + 4);
      if (*(int *)(unaff_r8 + 8) == iVar12) {
        *(int *)(unaff_r8 + 8) = iVar7;
      }
      else {
        *(int *)(unaff_r8 + 0xc) = iVar7;
      }
    }
    *(int *)(iVar7 + 8) = iVar12;
    *(int *)(iVar12 + 4) = iVar7;
    pbVar11 = *(byte **)(*(int *)(pbVar4 + 4) + 0xc);
    if (pbVar11 != (byte *)0x0) goto LAB_00147580;
LAB_001477ac:
    *pbVar4 = 0;
    goto LAB_001475c4;
  }
LAB_00147580:
  pbVar3 = *(byte **)(pbVar11 + 8);
  if (pbVar3 != (byte *)0x0) {
    unaff_r8 = (byte *)(uint)*pbVar3;
  }
  if (pbVar3 == (byte *)0x0 || unaff_r8 == &DAT_00000001) {
    pbVar10 = *(byte **)(pbVar11 + 0xc);
    unaff_r8 = (byte *)0x0;
    if (pbVar10 != (byte *)0x0) {
      unaff_r8 = (byte *)(uint)*pbVar10;
    }
    if (pbVar10 == (byte *)0x0 || unaff_r8 == &DAT_00000001) goto LAB_001477c8;
  }
  pcVar9 = *(char **)(pbVar11 + 0xc);
  cVar2 = '\0';
  if (pcVar9 != (char *)0x0) {
    cVar2 = *pcVar9;
  }
  if (pcVar9 == (char *)0x0 || cVar2 == '\x01') {
    if (pbVar3 != (byte *)0x0) {
      *pbVar3 = 1;
    }
    *pbVar11 = 0;
    iVar7 = *(int *)(pbVar11 + 8);
    *(undefined4 *)(pbVar11 + 8) = *(undefined4 *)(iVar7 + 0xc);
    if (*(int *)(iVar7 + 0xc) != 0) {
      *(byte **)(*(int *)(iVar7 + 0xc) + 4) = pbVar11;
    }
    *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(pbVar11 + 4);
    if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar11) {
      *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar7;
    }
    else {
      iVar12 = *(int *)(pbVar11 + 4);
      if (*(byte **)(iVar12 + 0xc) == pbVar11) {
        *(int *)(iVar12 + 0xc) = iVar7;
      }
      else {
        *(int *)(iVar12 + 8) = iVar7;
      }
    }
    *(byte **)(iVar7 + 0xc) = pbVar11;
    *(int *)(pbVar11 + 4) = iVar7;
    pbVar11 = *(byte **)(*(int *)(pbVar4 + 4) + 0xc);
    if (pbVar11 == (byte *)0x0) goto LAB_001476e8;
  }
  *pbVar11 = **(byte **)(pbVar4 + 4);
  **(undefined1 **)(pbVar4 + 4) = 1;
  if (*(undefined1 **)(pbVar11 + 0xc) != (undefined1 *)0x0) {
    **(undefined1 **)(pbVar11 + 0xc) = 1;
  }
  iVar12 = *(int *)(pbVar4 + 4);
  iVar7 = *(int *)(iVar12 + 0xc);
  *(undefined4 *)(iVar12 + 0xc) = *(undefined4 *)(iVar7 + 8);
  if (*(int *)(iVar7 + 8) != 0) {
    *(int *)(*(int *)(iVar7 + 8) + 4) = iVar12;
  }
  *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar12 + 4);
  if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar12) {
    *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar7;
  }
  else {
    iVar8 = *(int *)(iVar12 + 4);
    if (*(int *)(iVar8 + 8) == iVar12) {
      *(int *)(iVar8 + 8) = iVar7;
    }
    else {
      *(int *)(iVar8 + 0xc) = iVar7;
    }
  }
  *(int *)(iVar7 + 8) = iVar12;
LAB_001478ac:
  *(int *)(iVar12 + 4) = iVar7;
LAB_001476e8:
  *pbVar4 = 1;
  goto LAB_001476ec;
}


