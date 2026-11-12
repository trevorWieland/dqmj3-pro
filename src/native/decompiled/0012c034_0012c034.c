#include "0012c034_0012c034.h"



void fn_0012c034(undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  byte *pbVar12;
  int iVar13;
  bool bVar14;
  
  *param_1 = *(undefined4 *)(param_2 + 0x10);
  iVar6 = *(int *)(param_2 + 0x10);
  iVar3 = *(int *)(iVar6 + 8);
  bVar14 = *param_3 == iVar3;
  if (bVar14) {
    iVar3 = *param_4;
  }
  if ((bVar14 && iVar3 == iVar6) && (*(int *)(param_2 + 0x14) != 0)) {
    iVar3 = *(int *)(iVar6 + 4);
    while (iVar3 != 0) {
      fn_001478f0(param_2,*(undefined4 *)(iVar3 + 0xc));
      iVar6 = *(int *)(iVar3 + 8);
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_2 + 4);
      fn_00147c4c(iVar3 + 0x14);
      *(int *)(param_2 + 4) = iVar3;
      iVar3 = iVar6;
    }
    *(int *)(*(int *)(param_2 + 0x10) + 8) = *(int *)(param_2 + 0x10);
    *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
    *(int *)(*(int *)(param_2 + 0x10) + 0xc) = *(int *)(param_2 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *param_1 = *(undefined4 *)(param_2 + 0x10);
    return;
  }
LAB_0012c0e4:
  pbVar7 = (byte *)*param_3;
  if (pbVar7 == (byte *)*param_4) {
    return;
  }
  iVar3 = *(int *)(pbVar7 + 0xc);
  if (iVar3 == 0) {
    for (iVar3 = *(int *)(pbVar7 + 4); *param_3 == *(int *)(iVar3 + 0xc);
        iVar3 = *(int *)(iVar3 + 4)) {
      *param_3 = iVar3;
    }
    if (*(int *)(*param_3 + 0xc) != iVar3) {
      *param_3 = iVar3;
    }
  }
  else {
    *param_3 = iVar3;
    while (iVar3 = *(int *)(iVar3 + 8), iVar3 != 0) {
      *param_3 = iVar3;
    }
  }
  pbVar4 = *(byte **)(param_2 + 0x10);
  if (pbVar7 != pbVar4) {
    pbVar8 = *(byte **)(pbVar7 + 0xc);
    if (*(byte **)(pbVar7 + 0xc) == (byte *)0x0) {
      pbVar8 = *(byte **)(pbVar7 + 4);
      pbVar4 = pbVar7;
      while (pbVar9 = pbVar8, pbVar4 == *(byte **)(pbVar9 + 0xc)) {
        pbVar4 = pbVar9;
        pbVar8 = *(byte **)(pbVar9 + 4);
      }
      if (*(byte **)(pbVar4 + 0xc) != pbVar9) {
        pbVar4 = pbVar9;
      }
    }
    else {
      do {
        pbVar4 = pbVar8;
        pbVar8 = *(byte **)(pbVar4 + 8);
      } while (*(byte **)(pbVar4 + 8) != (byte *)0x0);
    }
    pbVar9 = *(byte **)(pbVar7 + 8);
    pbVar8 = pbVar7;
    if (pbVar9 == (byte *)0x0) {
      pbVar5 = *(byte **)(pbVar7 + 0xc);
      if (pbVar5 != (byte *)0x0) goto LAB_0012c1d8;
      pbVar5 = *(byte **)(pbVar7 + 4);
      if (*(byte **)(param_2 + 0x10) == pbVar5) {
        *(byte **)(*(byte **)(param_2 + 0x10) + 0xc) = pbVar5;
        *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar5;
        *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
      }
      else if (*(byte **)(pbVar5 + 8) == pbVar7) {
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        if (*(byte **)(*(int *)(param_2 + 0x10) + 8) == pbVar7) {
          *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar5;
        }
      }
      else {
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
        if (*(byte **)(*(int *)(param_2 + 0x10) + 0xc) == pbVar7) {
          *(byte **)(*(int *)(param_2 + 0x10) + 0xc) = pbVar5;
        }
      }
    }
    else {
      pbVar5 = pbVar9;
      pbVar10 = *(byte **)(pbVar7 + 0xc);
      if (*(byte **)(pbVar7 + 0xc) != (byte *)0x0) {
        do {
          pbVar8 = pbVar10;
          pbVar10 = *(byte **)(pbVar8 + 8);
        } while (*(byte **)(pbVar8 + 8) != (byte *)0x0);
        pbVar5 = *(byte **)(pbVar8 + 0xc);
      }
LAB_0012c1d8:
      if (pbVar8 == pbVar7) {
        *(undefined4 *)(pbVar5 + 4) = *(undefined4 *)(pbVar8 + 4);
        if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar7) {
          *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar5;
        }
        else {
          iVar3 = *(int *)(pbVar7 + 4);
          if (*(byte **)(iVar3 + 8) == pbVar7) {
            *(byte **)(iVar3 + 8) = pbVar5;
          }
          else {
            *(byte **)(iVar3 + 0xc) = pbVar5;
          }
        }
        iVar3 = *(int *)(param_2 + 0x10);
        if (*(byte **)(iVar3 + 8) == pbVar7) {
          pbVar9 = pbVar5;
          if (*(int *)(pbVar7 + 0xc) == 0) {
            *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(pbVar7 + 4);
          }
          else {
            do {
              pbVar10 = pbVar9;
              pbVar9 = *(byte **)(pbVar10 + 8);
            } while (pbVar9 != (byte *)0x0);
            *(byte **)(iVar3 + 8) = pbVar10;
          }
        }
        iVar3 = *(int *)(param_2 + 0x10);
        if (*(byte **)(iVar3 + 0xc) == pbVar7) {
          pbVar9 = pbVar5;
          if (*(int *)(pbVar7 + 8) == 0) {
            *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(pbVar7 + 4);
          }
          else {
            do {
              pbVar7 = pbVar9;
              pbVar9 = *(byte **)(pbVar7 + 0xc);
            } while (pbVar9 != (byte *)0x0);
            *(byte **)(iVar3 + 0xc) = pbVar7;
            pbVar7 = (byte *)0x0;
          }
        }
      }
      else {
        *(byte **)(pbVar9 + 4) = pbVar8;
        *(undefined4 *)(pbVar8 + 8) = *(undefined4 *)(pbVar7 + 8);
        if (*(byte **)(pbVar7 + 0xc) == pbVar8) {
          if (pbVar5 != (byte *)0x0) {
            *(byte **)(pbVar5 + 4) = pbVar8;
          }
        }
        else {
          if (pbVar5 != (byte *)0x0) {
            *(undefined4 *)(pbVar5 + 4) = *(undefined4 *)(pbVar8 + 4);
          }
          *(byte **)(*(int *)(pbVar8 + 4) + 8) = pbVar5;
          *(undefined4 *)(pbVar8 + 0xc) = *(undefined4 *)(pbVar7 + 0xc);
          *(byte **)(*(int *)(pbVar7 + 0xc) + 4) = pbVar8;
        }
        if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar7) {
          *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar8;
        }
        else {
          iVar3 = *(int *)(pbVar7 + 4);
          if (*(byte **)(iVar3 + 8) == pbVar7) {
            *(byte **)(iVar3 + 8) = pbVar8;
          }
          else {
            *(byte **)(iVar3 + 0xc) = pbVar8;
          }
        }
        if (pbVar5 == (byte *)0x0) {
          pbVar5 = pbVar8;
        }
        *(undefined4 *)(pbVar8 + 4) = *(undefined4 *)(pbVar7 + 4);
        bVar1 = *pbVar8;
        *pbVar8 = *pbVar7;
        *pbVar7 = bVar1;
        pbVar8 = pbVar7;
      }
    }
    pbVar9 = *(byte **)(param_2 + 0x10);
    bVar14 = pbVar9 != pbVar5;
    if (bVar14) {
      pbVar9 = (byte *)(uint)*pbVar8;
    }
    if (bVar14 && pbVar9 != (byte *)0x0) {
      do {
        while( true ) {
          if ((*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar5) || (*pbVar5 != 1))
          goto LAB_0012c3c8;
          pbVar10 = *(byte **)(pbVar5 + 4);
          pbVar9 = *(byte **)(pbVar10 + 8);
          if (pbVar9 != pbVar5) break;
          pbVar9 = *(byte **)(pbVar10 + 0xc);
          if (pbVar9 == (byte *)0x0) goto LAB_0012c5dc;
          if (*pbVar9 == 0) {
            *pbVar9 = 1;
            **(undefined1 **)(pbVar5 + 4) = 0;
            iVar3 = *(int *)(pbVar5 + 4);
            iVar6 = *(int *)(iVar3 + 0xc);
            *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar6 + 8);
            if (*(int *)(iVar6 + 8) != 0) {
              *(int *)(*(int *)(iVar6 + 8) + 4) = iVar3;
            }
            *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar3 + 4);
            pbVar7 = *(byte **)(param_2 + 0x10);
            if (*(int *)(pbVar7 + 4) == iVar3) {
              *(int *)(pbVar7 + 4) = iVar6;
            }
            else {
              pbVar7 = *(byte **)(iVar3 + 4);
              if (*(int *)(pbVar7 + 8) == iVar3) {
                *(int *)(pbVar7 + 8) = iVar6;
              }
              else {
                *(int *)(pbVar7 + 0xc) = iVar6;
              }
            }
            *(int *)(iVar6 + 8) = iVar3;
            *(int *)(iVar3 + 4) = iVar6;
            pbVar9 = *(byte **)(*(int *)(pbVar5 + 4) + 0xc);
            if (pbVar9 == (byte *)0x0) goto LAB_0012c684;
          }
          pbVar10 = *(byte **)(pbVar9 + 8);
          if (pbVar10 != (byte *)0x0) {
            pbVar7 = (byte *)(uint)*pbVar10;
          }
          if (pbVar10 != (byte *)0x0 && pbVar7 != &DAT_00000001) {
LAB_0012c4ac:
            pcVar11 = *(char **)(pbVar9 + 0xc);
            cVar2 = '\0';
            if (pcVar11 != (char *)0x0) {
              cVar2 = *pcVar11;
            }
            if (pcVar11 == (char *)0x0 || cVar2 == '\x01') {
              if (pbVar10 != (byte *)0x0) {
                *pbVar10 = 1;
              }
              *pbVar9 = 0;
              iVar3 = *(int *)(pbVar9 + 8);
              *(undefined4 *)(pbVar9 + 8) = *(undefined4 *)(iVar3 + 0xc);
              if (*(int *)(iVar3 + 0xc) != 0) {
                *(byte **)(*(int *)(iVar3 + 0xc) + 4) = pbVar9;
              }
              *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(pbVar9 + 4);
              if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar9) {
                *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar3;
              }
              else {
                iVar6 = *(int *)(pbVar9 + 4);
                if (*(byte **)(iVar6 + 0xc) == pbVar9) {
                  *(int *)(iVar6 + 0xc) = iVar3;
                }
                else {
                  *(int *)(iVar6 + 8) = iVar3;
                }
              }
              *(byte **)(iVar3 + 0xc) = pbVar9;
              *(int *)(pbVar9 + 4) = iVar3;
              pbVar9 = *(byte **)(*(int *)(pbVar5 + 4) + 0xc);
              if (pbVar9 == (byte *)0x0) goto LAB_0012c3c8;
            }
            *pbVar9 = **(byte **)(pbVar5 + 4);
            **(undefined1 **)(pbVar5 + 4) = 1;
            if (*(undefined1 **)(pbVar9 + 0xc) != (undefined1 *)0x0) {
              **(undefined1 **)(pbVar9 + 0xc) = 1;
            }
            iVar3 = *(int *)(pbVar5 + 4);
            iVar6 = *(int *)(iVar3 + 0xc);
            *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar6 + 8);
            if (*(int *)(iVar6 + 8) != 0) {
              *(int *)(*(int *)(iVar6 + 8) + 4) = iVar3;
            }
            *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar3 + 4);
            if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar3) {
              *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar6;
            }
            else {
              iVar13 = *(int *)(iVar3 + 4);
              if (*(int *)(iVar13 + 8) == iVar3) {
                *(int *)(iVar13 + 8) = iVar6;
              }
              else {
                *(int *)(iVar13 + 0xc) = iVar6;
              }
            }
            *(int *)(iVar6 + 8) = iVar3;
            goto LAB_0012c784;
          }
          pbVar12 = *(byte **)(pbVar9 + 0xc);
          pbVar7 = (byte *)0x0;
          if (pbVar12 != (byte *)0x0) {
            pbVar7 = (byte *)(uint)*pbVar12;
          }
          if (pbVar12 != (byte *)0x0 && pbVar7 != &DAT_00000001) goto LAB_0012c4ac;
LAB_0012c6a0:
          *pbVar9 = 0;
LAB_0012c4dc:
          pbVar5 = *(byte **)(pbVar5 + 4);
        }
        if (pbVar9 != (byte *)0x0) goto code_r0x0012c5cc;
LAB_0012c5dc:
        *pbVar5 = 0;
        pbVar5 = pbVar10;
      } while( true );
    }
    goto LAB_0012c3cc;
  }
  goto LAB_0012c3f8;
code_r0x0012c5cc:
  if (*pbVar9 == 0) {
    *pbVar9 = 1;
    **(undefined1 **)(pbVar5 + 4) = 0;
    iVar3 = *(int *)(pbVar5 + 4);
    iVar6 = *(int *)(iVar3 + 8);
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar6 + 0xc);
    if (*(int *)(iVar6 + 0xc) != 0) {
      *(int *)(*(int *)(iVar6 + 0xc) + 4) = iVar3;
    }
    *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar3 + 4);
    pbVar7 = *(byte **)(param_2 + 0x10);
    if (*(int *)(pbVar7 + 4) == iVar3) {
      *(int *)(pbVar7 + 4) = iVar6;
    }
    else {
      pbVar7 = *(byte **)(iVar3 + 4);
      if (*(int *)(pbVar7 + 0xc) == iVar3) {
        *(int *)(pbVar7 + 0xc) = iVar6;
      }
      else {
        *(int *)(pbVar7 + 8) = iVar6;
      }
    }
    *(int *)(iVar6 + 0xc) = iVar3;
    *(int *)(iVar3 + 4) = iVar6;
    pbVar9 = *(byte **)(*(int *)(pbVar5 + 4) + 8);
    if (pbVar9 != (byte *)0x0) goto LAB_0012c658;
LAB_0012c684:
    *pbVar5 = 0;
    goto LAB_0012c4dc;
  }
LAB_0012c658:
  pbVar10 = *(byte **)(pbVar9 + 0xc);
  if (pbVar10 != (byte *)0x0) {
    pbVar7 = (byte *)(uint)*pbVar10;
  }
  if (pbVar10 == (byte *)0x0 || pbVar7 == &DAT_00000001) {
    pbVar12 = *(byte **)(pbVar9 + 8);
    pbVar7 = (byte *)0x0;
    if (pbVar12 != (byte *)0x0) {
      pbVar7 = (byte *)(uint)*pbVar12;
    }
    if (pbVar12 == (byte *)0x0 || pbVar7 == &DAT_00000001) goto LAB_0012c6a0;
  }
  pcVar11 = *(char **)(pbVar9 + 8);
  cVar2 = '\0';
  if (pcVar11 != (char *)0x0) {
    cVar2 = *pcVar11;
  }
  if (pcVar11 == (char *)0x0 || cVar2 == '\x01') {
    if (pbVar10 != (byte *)0x0) {
      *pbVar10 = 1;
    }
    *pbVar9 = 0;
    iVar3 = *(int *)(pbVar9 + 0xc);
    *(undefined4 *)(pbVar9 + 0xc) = *(undefined4 *)(iVar3 + 8);
    if (*(int *)(iVar3 + 8) != 0) {
      *(byte **)(*(int *)(iVar3 + 8) + 4) = pbVar9;
    }
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(pbVar9 + 4);
    if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar9) {
      *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar3;
    }
    else {
      iVar6 = *(int *)(pbVar9 + 4);
      if (*(byte **)(iVar6 + 8) == pbVar9) {
        *(int *)(iVar6 + 8) = iVar3;
      }
      else {
        *(int *)(iVar6 + 0xc) = iVar3;
      }
    }
    *(byte **)(iVar3 + 8) = pbVar9;
    *(int *)(pbVar9 + 4) = iVar3;
    pbVar9 = *(byte **)(*(int *)(pbVar5 + 4) + 8);
    if (pbVar9 == (byte *)0x0) goto LAB_0012c3c8;
  }
  *pbVar9 = **(byte **)(pbVar5 + 4);
  **(undefined1 **)(pbVar5 + 4) = 1;
  if (*(undefined1 **)(pbVar9 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(pbVar9 + 8) = 1;
  }
  iVar3 = *(int *)(pbVar5 + 4);
  iVar6 = *(int *)(iVar3 + 8);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar6 + 0xc);
  if (*(int *)(iVar6 + 0xc) != 0) {
    *(int *)(*(int *)(iVar6 + 0xc) + 4) = iVar3;
  }
  *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar3 + 4);
  if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar3) {
    *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar6;
  }
  else {
    iVar13 = *(int *)(iVar3 + 4);
    if (*(int *)(iVar13 + 0xc) == iVar3) {
      *(int *)(iVar13 + 0xc) = iVar6;
    }
    else {
      *(int *)(iVar13 + 8) = iVar6;
    }
  }
  *(int *)(iVar6 + 0xc) = iVar3;
LAB_0012c784:
  *(int *)(iVar3 + 4) = iVar6;
LAB_0012c3c8:
  *pbVar5 = 1;
LAB_0012c3cc:
  *(undefined4 *)(pbVar8 + 0xc) = *(undefined4 *)(param_2 + 4);
  fn_00147c4c(pbVar8 + 0x14);
  *(byte **)(param_2 + 4) = pbVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
LAB_0012c3f8:
  *param_1 = pbVar4;
  goto LAB_0012c0e4;
}


