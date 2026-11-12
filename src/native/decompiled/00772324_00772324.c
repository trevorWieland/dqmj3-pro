#include "00772324_00772324.h"



void fn_00772324(undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  byte *pbVar13;
  bool bVar14;
  
  *param_1 = *(undefined4 *)(param_2 + 0x10);
  iVar3 = *(int *)(param_2 + 0x10);
  iVar7 = *(int *)(iVar3 + 8);
  bVar14 = *param_3 == iVar7;
  if (bVar14) {
    iVar7 = *param_4;
  }
  if ((bVar14 && iVar7 == iVar3) && (*(int *)(param_2 + 0x14) != 0)) {
    iVar7 = *(int *)(iVar3 + 4);
    while (iVar7 != 0) {
      fn_00772c98(param_2,*(undefined4 *)(iVar7 + 0xc));
      iVar3 = *(int *)(iVar7 + 8);
      *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(param_2 + 4);
      *(int *)(param_2 + 4) = iVar7;
      iVar7 = iVar3;
    }
    *(int *)(*(int *)(param_2 + 0x10) + 8) = *(int *)(param_2 + 0x10);
    *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
    *(int *)(*(int *)(param_2 + 0x10) + 0xc) = *(int *)(param_2 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *param_1 = *(undefined4 *)(param_2 + 0x10);
    return;
  }
LAB_007723c0:
  pbVar10 = (byte *)*param_3;
  if (pbVar10 == (byte *)*param_4) {
    return;
  }
  iVar7 = *(int *)(pbVar10 + 0xc);
  if (iVar7 == 0) {
    for (iVar7 = *(int *)(pbVar10 + 4); *param_3 == *(int *)(iVar7 + 0xc);
        iVar7 = *(int *)(iVar7 + 4)) {
      *param_3 = iVar7;
    }
    if (*(int *)(*param_3 + 0xc) != iVar7) {
      *param_3 = iVar7;
    }
  }
  else {
    *param_3 = iVar7;
    while (iVar7 = *(int *)(iVar7 + 8), iVar7 != 0) {
      *param_3 = iVar7;
    }
  }
  pbVar4 = *(byte **)(param_2 + 0x10);
  if (pbVar10 != pbVar4) {
    pbVar11 = *(byte **)(pbVar10 + 0xc);
    if (*(byte **)(pbVar10 + 0xc) == (byte *)0x0) {
      pbVar11 = *(byte **)(pbVar10 + 4);
      pbVar4 = pbVar10;
      while (pbVar5 = pbVar11, pbVar4 == *(byte **)(pbVar5 + 0xc)) {
        pbVar4 = pbVar5;
        pbVar11 = *(byte **)(pbVar5 + 4);
      }
      if (*(byte **)(pbVar4 + 0xc) != pbVar5) {
        pbVar4 = pbVar5;
      }
    }
    else {
      do {
        pbVar4 = pbVar11;
        pbVar11 = *(byte **)(pbVar4 + 8);
      } while (*(byte **)(pbVar4 + 8) != (byte *)0x0);
    }
    pbVar8 = *(byte **)(pbVar10 + 8);
    pbVar5 = *(byte **)(pbVar10 + 0xc);
    pbVar11 = pbVar10;
    pbVar13 = pbVar10;
    if (pbVar8 == (byte *)0x0) {
      pbVar6 = pbVar5;
      if (pbVar5 != (byte *)0x0) goto LAB_007724b4;
      pbVar6 = *(byte **)(pbVar10 + 4);
      if (*(byte **)(param_2 + 0x10) == pbVar6) {
        *(byte **)(*(byte **)(param_2 + 0x10) + 0xc) = pbVar6;
        *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar6;
        *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
      }
      else if (*(byte **)(pbVar6 + 8) == pbVar10) {
        pbVar6[8] = 0;
        pbVar6[9] = 0;
        pbVar6[10] = 0;
        pbVar6[0xb] = 0;
        pbVar11 = *(byte **)(param_2 + 0x10);
        if (*(byte **)(pbVar11 + 8) == pbVar10) {
          *(byte **)(pbVar11 + 8) = pbVar6;
        }
      }
      else {
        pbVar6[0xc] = 0;
        pbVar6[0xd] = 0;
        pbVar6[0xe] = 0;
        pbVar6[0xf] = 0;
        pbVar11 = *(byte **)(param_2 + 0x10);
        if (*(byte **)(pbVar11 + 0xc) == pbVar10) {
          *(byte **)(pbVar11 + 0xc) = pbVar6;
        }
      }
    }
    else {
      pbVar6 = pbVar8;
      if (pbVar5 != (byte *)0x0) {
        do {
          pbVar13 = pbVar5;
          pbVar5 = *(byte **)(pbVar13 + 8);
        } while (*(byte **)(pbVar13 + 8) != (byte *)0x0);
        pbVar6 = *(byte **)(pbVar13 + 0xc);
      }
LAB_007724b4:
      if (pbVar13 == pbVar10) {
        *(undefined4 *)(pbVar6 + 4) = *(undefined4 *)(pbVar13 + 4);
        if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar10) {
          *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar6;
        }
        else {
          iVar7 = *(int *)(pbVar10 + 4);
          if (*(byte **)(iVar7 + 8) == pbVar10) {
            *(byte **)(iVar7 + 8) = pbVar6;
          }
          else {
            *(byte **)(iVar7 + 0xc) = pbVar6;
          }
        }
        iVar7 = *(int *)(param_2 + 0x10);
        if (*(byte **)(iVar7 + 8) == pbVar10) {
          pbVar5 = pbVar6;
          if (*(int *)(pbVar10 + 0xc) == 0) {
            *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(pbVar10 + 4);
          }
          else {
            do {
              pbVar8 = pbVar5;
              pbVar5 = *(byte **)(pbVar8 + 8);
            } while (pbVar5 != (byte *)0x0);
            *(byte **)(iVar7 + 8) = pbVar8;
          }
        }
        iVar7 = *(int *)(param_2 + 0x10);
        if (*(byte **)(iVar7 + 0xc) == pbVar10) {
          pbVar5 = pbVar6;
          if (*(int *)(pbVar10 + 8) == 0) {
            *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(pbVar10 + 4);
          }
          else {
            do {
              pbVar10 = pbVar5;
              pbVar5 = *(byte **)(pbVar10 + 0xc);
            } while (pbVar5 != (byte *)0x0);
            *(byte **)(iVar7 + 0xc) = pbVar10;
          }
        }
      }
      else {
        *(byte **)(pbVar8 + 4) = pbVar13;
        *(undefined4 *)(pbVar13 + 8) = *(undefined4 *)(pbVar10 + 8);
        if (*(byte **)(pbVar10 + 0xc) == pbVar13) {
          if (pbVar6 != (byte *)0x0) {
            *(byte **)(pbVar6 + 4) = pbVar13;
          }
        }
        else {
          if (pbVar6 != (byte *)0x0) {
            *(undefined4 *)(pbVar6 + 4) = *(undefined4 *)(pbVar13 + 4);
          }
          *(byte **)(*(int *)(pbVar13 + 4) + 8) = pbVar6;
          *(undefined4 *)(pbVar13 + 0xc) = *(undefined4 *)(pbVar10 + 0xc);
          *(byte **)(*(int *)(pbVar10 + 0xc) + 4) = pbVar13;
        }
        if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar10) {
          *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar13;
        }
        else {
          iVar7 = *(int *)(pbVar10 + 4);
          if (*(byte **)(iVar7 + 8) == pbVar10) {
            *(byte **)(iVar7 + 8) = pbVar13;
          }
          else {
            *(byte **)(iVar7 + 0xc) = pbVar13;
          }
        }
        if (pbVar6 == (byte *)0x0) {
          pbVar6 = pbVar13;
        }
        *(undefined4 *)(pbVar13 + 4) = *(undefined4 *)(pbVar10 + 4);
        bVar1 = *pbVar13;
        *pbVar13 = *pbVar10;
        *pbVar10 = bVar1;
        pbVar13 = pbVar10;
      }
    }
    pbVar10 = *(byte **)(param_2 + 0x10);
    bVar14 = pbVar10 != pbVar6;
    if (bVar14) {
      pbVar10 = (byte *)(uint)*pbVar13;
    }
    if (bVar14 && pbVar10 != (byte *)0x0) {
      do {
        while( true ) {
          if ((*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar6) || (*pbVar6 != 1))
          goto LAB_00772884;
          pbVar5 = *(byte **)(pbVar6 + 4);
          pbVar10 = *(byte **)(pbVar5 + 8);
          if (pbVar10 != pbVar6) break;
          pbVar10 = *(byte **)(pbVar5 + 0xc);
          if (pbVar10 == (byte *)0x0) goto LAB_00772860;
          if (*pbVar10 == 0) {
            *pbVar10 = 1;
            **(undefined1 **)(pbVar6 + 4) = 0;
            iVar7 = *(int *)(pbVar6 + 4);
            iVar3 = *(int *)(iVar7 + 0xc);
            *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar3 + 8);
            if (*(int *)(iVar3 + 8) != 0) {
              *(int *)(*(int *)(iVar3 + 8) + 4) = iVar7;
            }
            *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar7 + 4);
            pbVar11 = *(byte **)(param_2 + 0x10);
            if (*(int *)(pbVar11 + 4) == iVar7) {
              *(int *)(pbVar11 + 4) = iVar3;
            }
            else {
              pbVar11 = *(byte **)(iVar7 + 4);
              if (*(int *)(pbVar11 + 8) == iVar7) {
                *(int *)(pbVar11 + 8) = iVar3;
              }
              else {
                *(int *)(pbVar11 + 0xc) = iVar3;
              }
            }
            *(int *)(iVar3 + 8) = iVar7;
            *(int *)(iVar7 + 4) = iVar3;
            pbVar10 = *(byte **)(*(int *)(pbVar6 + 4) + 0xc);
            if (pbVar10 == (byte *)0x0) goto LAB_00772948;
          }
          pbVar5 = *(byte **)(pbVar10 + 8);
          if (pbVar5 != (byte *)0x0) {
            pbVar11 = (byte *)(uint)*pbVar5;
          }
          if (pbVar5 != (byte *)0x0 && pbVar11 != &DAT_00000001) {
LAB_00772730:
            pcVar12 = *(char **)(pbVar10 + 0xc);
            cVar2 = '\0';
            if (pcVar12 != (char *)0x0) {
              cVar2 = *pcVar12;
            }
            if (pcVar12 == (char *)0x0 || cVar2 == '\x01') {
              if (pbVar5 != (byte *)0x0) {
                *pbVar5 = 1;
              }
              *pbVar10 = 0;
              iVar7 = *(int *)(pbVar10 + 8);
              *(undefined4 *)(pbVar10 + 8) = *(undefined4 *)(iVar7 + 0xc);
              if (*(int *)(iVar7 + 0xc) != 0) {
                *(byte **)(*(int *)(iVar7 + 0xc) + 4) = pbVar10;
              }
              *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(pbVar10 + 4);
              if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar10) {
                *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar7;
              }
              else {
                iVar3 = *(int *)(pbVar10 + 4);
                if (*(byte **)(iVar3 + 0xc) == pbVar10) {
                  *(int *)(iVar3 + 0xc) = iVar7;
                }
                else {
                  *(int *)(iVar3 + 8) = iVar7;
                }
              }
              *(byte **)(iVar7 + 0xc) = pbVar10;
              *(int *)(pbVar10 + 4) = iVar7;
              pbVar10 = *(byte **)(*(int *)(pbVar6 + 4) + 0xc);
              if (pbVar10 == (byte *)0x0) goto LAB_00772884;
            }
            *pbVar10 = **(byte **)(pbVar6 + 4);
            **(undefined1 **)(pbVar6 + 4) = 1;
            if (*(undefined1 **)(pbVar10 + 0xc) != (undefined1 *)0x0) {
              **(undefined1 **)(pbVar10 + 0xc) = 1;
            }
            iVar7 = *(int *)(pbVar6 + 4);
            iVar3 = *(int *)(iVar7 + 0xc);
            *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar3 + 8);
            if (*(int *)(iVar3 + 8) != 0) {
              *(int *)(*(int *)(iVar3 + 8) + 4) = iVar7;
            }
            *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar7 + 4);
            if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar7) {
              *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar3;
            }
            else {
              iVar9 = *(int *)(iVar7 + 4);
              if (*(int *)(iVar9 + 8) == iVar7) {
                *(int *)(iVar9 + 8) = iVar3;
              }
              else {
                *(int *)(iVar9 + 0xc) = iVar3;
              }
            }
            *(int *)(iVar3 + 8) = iVar7;
            goto LAB_00772a48;
          }
          pbVar8 = *(byte **)(pbVar10 + 0xc);
          pbVar11 = (byte *)0x0;
          if (pbVar8 != (byte *)0x0) {
            pbVar11 = (byte *)(uint)*pbVar8;
          }
          if (pbVar8 != (byte *)0x0 && pbVar11 != &DAT_00000001) goto LAB_00772730;
LAB_00772964:
          *pbVar10 = 0;
LAB_00772760:
          pbVar6 = *(byte **)(pbVar6 + 4);
        }
        if (pbVar10 != (byte *)0x0) goto code_r0x00772850;
LAB_00772860:
        *pbVar6 = 0;
        pbVar6 = pbVar5;
      } while( true );
    }
    goto LAB_00772888;
  }
  goto LAB_007728a4;
code_r0x00772850:
  if (*pbVar10 == 0) {
    *pbVar10 = 1;
    **(undefined1 **)(pbVar6 + 4) = 0;
    iVar3 = *(int *)(pbVar6 + 4);
    iVar7 = *(int *)(iVar3 + 8);
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar7 + 0xc);
    if (*(int *)(iVar7 + 0xc) != 0) {
      *(int *)(*(int *)(iVar7 + 0xc) + 4) = iVar3;
    }
    *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar3 + 4);
    pbVar11 = *(byte **)(param_2 + 0x10);
    if (*(int *)(pbVar11 + 4) == iVar3) {
      *(int *)(pbVar11 + 4) = iVar7;
    }
    else {
      pbVar11 = *(byte **)(iVar3 + 4);
      if (*(int *)(pbVar11 + 0xc) == iVar3) {
        *(int *)(pbVar11 + 0xc) = iVar7;
      }
      else {
        *(int *)(pbVar11 + 8) = iVar7;
      }
    }
    *(int *)(iVar7 + 0xc) = iVar3;
    *(int *)(iVar3 + 4) = iVar7;
    pbVar10 = *(byte **)(*(int *)(pbVar6 + 4) + 8);
    if (pbVar10 != (byte *)0x0) goto LAB_0077291c;
LAB_00772948:
    *pbVar6 = 0;
    goto LAB_00772760;
  }
LAB_0077291c:
  pbVar5 = *(byte **)(pbVar10 + 0xc);
  if (pbVar5 != (byte *)0x0) {
    pbVar11 = (byte *)(uint)*pbVar5;
  }
  if (pbVar5 == (byte *)0x0 || pbVar11 == &DAT_00000001) {
    pbVar8 = *(byte **)(pbVar10 + 8);
    pbVar11 = (byte *)0x0;
    if (pbVar8 != (byte *)0x0) {
      pbVar11 = (byte *)(uint)*pbVar8;
    }
    if (pbVar8 == (byte *)0x0 || pbVar11 == &DAT_00000001) goto LAB_00772964;
  }
  pcVar12 = *(char **)(pbVar10 + 8);
  cVar2 = '\0';
  if (pcVar12 != (char *)0x0) {
    cVar2 = *pcVar12;
  }
  if (pcVar12 == (char *)0x0 || cVar2 == '\x01') {
    if (pbVar5 != (byte *)0x0) {
      *pbVar5 = 1;
    }
    *pbVar10 = 0;
    iVar7 = *(int *)(pbVar10 + 0xc);
    *(undefined4 *)(pbVar10 + 0xc) = *(undefined4 *)(iVar7 + 8);
    if (*(int *)(iVar7 + 8) != 0) {
      *(byte **)(*(int *)(iVar7 + 8) + 4) = pbVar10;
    }
    *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(pbVar10 + 4);
    if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar10) {
      *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar7;
    }
    else {
      iVar3 = *(int *)(pbVar10 + 4);
      if (*(byte **)(iVar3 + 8) == pbVar10) {
        *(int *)(iVar3 + 8) = iVar7;
      }
      else {
        *(int *)(iVar3 + 0xc) = iVar7;
      }
    }
    *(byte **)(iVar7 + 8) = pbVar10;
    *(int *)(pbVar10 + 4) = iVar7;
    pbVar10 = *(byte **)(*(int *)(pbVar6 + 4) + 8);
    if (pbVar10 == (byte *)0x0) goto LAB_00772884;
  }
  *pbVar10 = **(byte **)(pbVar6 + 4);
  **(undefined1 **)(pbVar6 + 4) = 1;
  if (*(undefined1 **)(pbVar10 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(pbVar10 + 8) = 1;
  }
  iVar7 = *(int *)(pbVar6 + 4);
  iVar3 = *(int *)(iVar7 + 8);
  *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar3 + 0xc);
  if (*(int *)(iVar3 + 0xc) != 0) {
    *(int *)(*(int *)(iVar3 + 0xc) + 4) = iVar7;
  }
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar7 + 4);
  if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar7) {
    *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar3;
  }
  else {
    iVar9 = *(int *)(iVar7 + 4);
    if (*(int *)(iVar9 + 0xc) == iVar7) {
      *(int *)(iVar9 + 0xc) = iVar3;
    }
    else {
      *(int *)(iVar9 + 8) = iVar3;
    }
  }
  *(int *)(iVar3 + 0xc) = iVar7;
LAB_00772a48:
  *(int *)(iVar7 + 4) = iVar3;
LAB_00772884:
  *pbVar6 = 1;
LAB_00772888:
  *(undefined4 *)(pbVar13 + 0xc) = *(undefined4 *)(param_2 + 4);
  *(byte **)(param_2 + 4) = pbVar13;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
LAB_007728a4:
  *param_1 = pbVar4;
  goto LAB_007723c0;
}


