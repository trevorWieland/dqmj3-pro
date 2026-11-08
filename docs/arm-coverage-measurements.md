# ARM coverage measurement terminology

An address observed by `UC_HOOK_CODE` is a visited instruction address. For predicated ARM instructions, that event alone does not prove that the instruction's condition was satisfied or that its architectural effects occurred. A separate CPSR/condition evaluation is required. Condition 15 contains instruction-specific unconditional extensions and must not be treated as a generic false predicate. Thumb coverage requires its own rules.

The isolated `qualify_arm_hook_coverage.py` probe compiles a small ordinary C expression using the pinned compiler and executes it with two inputs. Both results match the C expression. One hook event observes an instruction whose EQ/NE predicate is false at that point. The report preserves the instruction word, CPSR and input, together with compiler and runtime identities. It uses no original game code, data or state and adds no source credit.

```text
tools/python/Scripts/python.exe toolscripts/qualify_arm_hook_coverage.py --output work/arm-hook-coverage-fresh
```

Historical frozen receipts that derive `executed` counts solely from hook sets must be read as visited-address counts. Those receipts remain unchanged as historical evidence. In particular, the dispatcher and constructor summaries' address counts do not establish predicate-satisfied statement coverage. Their separately listed unvisited addresses, original-byte witnesses, raw behavior comparisons, source-copy checks and supported-domain limits remain distinct evidence.

This clarification does not increase admitted source bytes or establish universal equivalence, overall source coverage or a native game build. New ARM receipts should retain visited and condition-satisfied sets separately. Exact linked-byte comparisons do not depend on whether a particular fixture executes every instruction.
