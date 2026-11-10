# objdiff object construction

`toolscripts/objdiff_objects.py` builds the objdiff project from three inputs only: `config/symbols.txt`, the source tree, and the user's code image plus ExHeader under `generated/update-content0/`.

## Source units

Every configured `src/native/**/*.c` file is compiled with the pinned profile (`-O2`, `-mpcore`, `-ffunction-sections`, no unwind tables), plus the unit's declared layout profile (`-fpack-struct=4`), public header profile (`-DZ_SOLO`) and include directories from `config/build-units.json`. A file that defines at least one `fn_<address>` function listed in the split becomes one unit.

Each unit gets two objects:

- **target**: one `.text.original_<address>` section per function, assembled from `.incbin` slices of the code image. After assembling, every section is read back and compared with the image, so an assembler that changed a byte fails the build.
- **base**: the compiled object reduced by `ld.lld -r` to the measured function sections. The selection script discards every other section by exact name. A function whose relocations point at discarded material comes back with an `R_ARM_NONE` relocation, which is not a comparison of instruction bytes; such a function is left out of the base object and reported as unmatched instead of being scored against an unresolved object.

## The retained unit

`src/native` holds everything source does not implement: one section per maximal run of original text bytes outside the measured functions, one function symbol per retained function, and the original rodata, data and BSS sections. Its base is a genuinely compiled empty translation unit.

## Denominators

The sum of all target code sections equals the ExHeader's initialized text size exactly; the build refuses to continue otherwise. That equality is what makes `total_code` a measurement of the image rather than of whatever symbols happened to be emitted.

## Linking

`toolscripts/image_link.py` writes a linker script that places every placeable function at its original address and defines an absolute symbol for every other function in the split. A function is placeable when its compiled size equals its split extent and every symbol it references has an address in the split. `ld.lld` links the base objects into the complete image; the linked bytes are overlaid on the original image per function, and the result is compared with the original byte for byte. Zero retained bytes plus a byte-identical image is the only definition of complete this project uses.
