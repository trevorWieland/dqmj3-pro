def mutations():
    return [
        ('ideographic-space-retained','pattern_normalize.c','value == 0x20 || value == 0x3000','value == 0x20',
         {'units':[0x3000,0x61]}),
        ('fullwidth-offset-off-by-one','pattern_normalize.c','value + 0x120','value + 0x121',{'units':[0xff21]}),
        ('hiragana-offset-off-by-one','pattern_normalize.c','value + 0x60','value + 0x61',{'units':[0x3042]}),
        ('small-kana-not-enlarged','pattern_normalize.c','return mapped_character(pattern_small_kana, 12, value);',
         'return value;',{'units':[0x30a1]}),
        ('voiced-mark-not-consumed','pattern_normalize.c','input += 2;','input += 1;',{'units':[0xff76,0xff9e]}),
        ('semivoiced-mark-unsupported','pattern_normalize.c','else if (next == 0xff9f)','else if (next == 0xff9e)',
         {'units':[0xff8a,0xff9f]}),
        ('extra-unicode-composition-applied','pattern_normalize.c',
         'combined = mapped_character(pattern_halfwidth_voiced, 21, value);',
         'combined = value == 0xff66 ? 0x30fa : mapped_character(pattern_halfwidth_voiced, 21, value);',
         {'units':[0xff66,0xff9e]}),
        ('unwritten-tail-zeroed','pattern_normalize.c','if (value == 0)\n                return;',
         'if (value == 0) {\n                destination[output + 1] = 0;\n                return;\n            }',{'units':[]}),
        ('fullwidth-at-sign-missed','pattern_file_mark.c','value == 0x40 || value == 0xff20','value == 0x40',
         {'units':[0xff20],'operation':'mark'})]
