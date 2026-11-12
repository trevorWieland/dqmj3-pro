"""Compiler profile resolution for the object comparison."""

import json
import os
from pathlib import Path

PROFILE_CONFIG = "config/compiler-profiles.json"
ROOT = Path(__file__).resolve().parents[1]


def profiles(root):
    """The declared compiler profiles, keyed by id, plus the default id."""
    config = read_json(Path(root) / PROFILE_CONFIG)
    if config.get('schemaVersion') != 1:
        raise ValueError('Unsupported compiler profile schema')
    table = {}
    for profile in config['profiles']:
        if profile['id'] in table:
            raise ValueError('Duplicate compiler profile: ' + profile['id'])
        table[profile['id']] = profile
    if config['defaultProfile'] not in table:
        raise ValueError('Default compiler profile is not declared')
    return {'default': config['defaultProfile'], 'profiles': table}


def profile_id(root, unit, forced=None):
    """The profile a unit names, a forced override, or the configured default."""
    return forced or unit.get('compilerProfile') or profiles(root)['default']


def profile_for(root, unit, forced=None):
    table = profiles(root)
    wanted = profile_id(root, unit, forced)
    if wanted not in table['profiles']:
        raise ValueError('Unknown compiler profile for %s: %s' % (unit['source'], wanted))
    return table['profiles'][wanted]


