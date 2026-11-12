"""What a build unit declares about scopes the split cannot express by itself.

A unit is one source file, and most units need to declare nothing beyond their
source, headers and role. Three declarations are capabilities rather than
facts about the source, so they live here instead of in ``objdiff_objects``:

* ``dataProfile: original-address`` -- the unit's non-text sections are source
  too, and the placement must carry them to the addresses the original image
  proves. Without it, unit data is discarded and a function that loads it is
  reported unplaceable.
* ``extentProfile: owned`` -- a compiled function's extent may run over the
  extra ranges the split attributes to that same function (a tail-called helper
  the census folded into its caller). Without it a function's room stops at
  every owned range, its own included.
* the placement plan itself: reading the unit object, proving the data addresses
  and returning the records the object map and the link share.

The declarations are explicit and validated here, so a misspelt profile fails
the build instead of silently falling back to the historical behaviour.
"""

import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import elf_objects
import translation_data


def data_profile(unit):
    """The unit's translation-unit data declaration, if any."""
    value = unit.get('dataProfile')
    if value not in (None, 'original-address'):
        raise ValueError('Unknown unit data profile for %s: %s' % (unit.get('source'), value))
    return value


def extent_profile(unit):
    """The unit's declaration about extra ranges the split owns, if any."""
    value = unit.get('extentProfile')
    if value not in (None, 'owned'):
        raise ValueError('Unknown unit extent profile for %s: %s' % (unit.get('source'), value))
    return value


def room_for(unit, room, owned_room):
    """The room table this unit's placement decisions use."""
    return owned_room if extent_profile(unit) == 'owned' else room


def plan_for(unit, raw_object, names, functions, layout, image, label):
    """The unit's translation-data plan, or None when it declares none."""
    if data_profile(unit) != 'original-address':
        return None
    return translation_data.plan(elf_objects.read(raw_object), names, functions,
                                 layout, image, label)


def data_argument(plan):
    """The ``(input section, output name)`` pairs the screen must keep."""
    if not plan:
        return ()
    return tuple((name, plan['sections'][name]['name']) for name in plan['keep'])


def data_records(plan, placed=None):
    """The records the object map carries for the image link.

    ``placed`` are the functions that survived the screen. A data section is
    placed only when a function that is actually placed reaches it: the plan is
    computed for every measured function before the screen, so a section that
    only a dropped function needed would otherwise be linked at an address the
    screen never justified.
    """
    if not plan:
        return []
    names = list(plan['keep'])
    if placed is not None:
        needed = set()
        for name in placed:
            needed.update(plan['needed'].get(name, []))
        names = [name for name in names if name in needed]
    return [plan['sections'][name] for name in names]
